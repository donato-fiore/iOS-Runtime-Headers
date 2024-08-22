// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMPBNOTIFICATIONEVENT_H
#define BMPBNOTIFICATIONEVENT_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface BMPBNotificationEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat absoluteTimestamp; // ivar: _absoluteTimestamp
@property (nonatomic) NSUInteger badge; // ivar: _badge
@property (retain, nonatomic) NSString *body; // ivar: _body
@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (retain, nonatomic) NSString *categoryID; // ivar: _categoryID
@property (retain, nonatomic) NSMutableArray *contactIDs; // ivar: _contactIDs
@property (retain, nonatomic) NSString *deviceID; // ivar: _deviceID
@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (nonatomic) BOOL hasBadge;
@property (readonly, nonatomic) BOOL hasBody;
@property (readonly, nonatomic) BOOL hasBundleID;
@property (readonly, nonatomic) BOOL hasCategoryID;
@property (readonly, nonatomic) BOOL hasDeviceID;
@property (nonatomic) BOOL hasIsGroupMessage;
@property (readonly, nonatomic) BOOL hasNotificationID;
@property (readonly, nonatomic) BOOL hasSectionID;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (readonly, nonatomic) BOOL hasThreadID;
@property (readonly, nonatomic) BOOL hasTitle;
@property (readonly, nonatomic) BOOL hasUniqueID;
@property (nonatomic) BOOL hasUsageType;
@property (nonatomic) BOOL isGroupMessage; // ivar: _isGroupMessage
@property (retain, nonatomic) NSString *notificationID; // ivar: _notificationID
@property (retain, nonatomic) NSString *sectionID; // ivar: _sectionID
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) NSString *threadID; // ivar: _threadID
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSString *uniqueID; // ivar: _uniqueID
@property (nonatomic) int usageType; // ivar: _usageType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)contactIDsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)usageTypeAsString:(int)arg0 ;
-(int)StringAsUsageType:(id)arg0 ;
-(void)addContactIDs:(id)arg0 ;
-(void)clearContactIDs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif