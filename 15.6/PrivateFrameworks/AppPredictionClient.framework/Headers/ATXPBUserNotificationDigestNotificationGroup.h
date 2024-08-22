// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXPBUSERNOTIFICATIONDIGESTNOTIFICATIONGROUP_H
#define ATXPBUSERNOTIFICATIONDIGESTNOTIFICATIONGROUP_H

@class PBCodable, NSString, NSMutableArray;
@protocol ATXJSONSerializableProtocol, NSCopying;


#import "ATXPBSharedDigestEngagementTrackingMetrics.h"

@interface ATXPBUserNotificationDigestNotificationGroup : PBCodable <ATXJSONSerializableProtocol, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *groupDescription; // ivar: _groupDescription
@property (retain, nonatomic) NSString *groupId; // ivar: _groupId
@property (readonly, nonatomic) BOOL hasGroupDescription;
@property (readonly, nonatomic) BOOL hasGroupId;
@property (nonatomic) BOOL hasPriority;
@property (readonly, nonatomic) BOOL hasRepresentativeNotificationUUID;
@property (readonly, nonatomic) BOOL hasSharedEngagementTracker;
@property (readonly, nonatomic) BOOL hasTitle;
@property (nonatomic) CGFloat priority; // ivar: _priority
@property (retain, nonatomic) NSMutableArray *rankedNotifications; // ivar: _rankedNotifications
@property (retain, nonatomic) NSString *representativeNotificationUUID; // ivar: _representativeNotificationUUID
@property (retain, nonatomic) ATXPBSharedDigestEngagementTrackingMetrics *sharedEngagementTracker; // ivar: _sharedEngagementTracker
@property (retain, nonatomic) NSString *title; // ivar: _title


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initFromJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)rankedNotificationsAtIndex:(NSUInteger)arg0 ;
-(void)addRankedNotifications:(id)arg0 ;
-(void)clearRankedNotifications;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif