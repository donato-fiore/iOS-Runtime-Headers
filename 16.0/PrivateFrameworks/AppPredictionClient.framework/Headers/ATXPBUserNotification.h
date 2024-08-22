// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXPBUSERNOTIFICATION_H
#define ATXPBUSERNOTIFICATION_H

@class PBCodable, NSString, NSMutableArray, NSData;
@protocol ATXJSONSerializableProtocol, NSCopying;


#import "ATXPBUserNotificationDerivedData.h"
#import "ATXPBSharedDigestEngagementTrackingMetrics.h"

@interface ATXPBUserNotification : PBCodable <ATXJSONSerializableProtocol, NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat appSpecifiedScore; // ivar: _appSpecifiedScore
@property (nonatomic) int attachmentType; // ivar: _attachmentType
@property (nonatomic) NSUInteger badge; // ivar: _badge
@property (retain, nonatomic) NSString *body; // ivar: _body
@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (retain, nonatomic) NSString *categoryID; // ivar: _categoryID
@property (retain, nonatomic) NSMutableArray *contactIDs; // ivar: _contactIDs
@property (retain, nonatomic) ATXPBUserNotificationDerivedData *derivedData; // ivar: _derivedData
@property (nonatomic) BOOL hasAppSpecifiedScore;
@property (nonatomic) BOOL hasAttachmentType;
@property (nonatomic) BOOL hasBadge;
@property (readonly, nonatomic) BOOL hasBody;
@property (readonly, nonatomic) BOOL hasBundleID;
@property (readonly, nonatomic) BOOL hasCategoryID;
@property (readonly, nonatomic) BOOL hasDerivedData;
@property (nonatomic) BOOL hasIsGroupMessage;
@property (nonatomic) BOOL hasIsMessage;
@property (readonly, nonatomic) BOOL hasSectionID;
@property (readonly, nonatomic) BOOL hasSharedEngagementTracker;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (readonly, nonatomic) BOOL hasThreadID;
@property (nonatomic) BOOL hasTimestamp;
@property (readonly, nonatomic) BOOL hasTitle;
@property (nonatomic) BOOL hasUrgency;
@property (readonly, nonatomic) BOOL hasUserInfo;
@property (readonly, nonatomic) BOOL hasUuid;
@property (nonatomic) BOOL isGroupMessage; // ivar: _isGroupMessage
@property (nonatomic) BOOL isMessage; // ivar: _isMessage
@property (retain, nonatomic) NSMutableArray *rawIdentifiers; // ivar: _rawIdentifiers
@property (retain, nonatomic) NSString *sectionID; // ivar: _sectionID
@property (retain, nonatomic) ATXPBSharedDigestEngagementTrackingMetrics *sharedEngagementTracker; // ivar: _sharedEngagementTracker
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) NSString *threadID; // ivar: _threadID
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) int urgency; // ivar: _urgency
@property (retain, nonatomic) NSData *userInfo; // ivar: _userInfo
@property (retain, nonatomic) NSString *uuid; // ivar: _uuid


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)attachmentTypeAsString:(int)arg0 ;
-(id)contactIDsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initFromJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)rawIdentifiersAtIndex:(NSUInteger)arg0 ;
-(id)urgencyAsString:(int)arg0 ;
-(int)StringAsAttachmentType:(id)arg0 ;
-(int)StringAsUrgency:(id)arg0 ;
-(void)addContactIDs:(id)arg0 ;
-(void)addRawIdentifiers:(id)arg0 ;
-(void)clearContactIDs;
-(void)clearRawIdentifiers;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif