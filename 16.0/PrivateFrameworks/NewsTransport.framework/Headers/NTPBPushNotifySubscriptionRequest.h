// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTPBPUSHNOTIFYSUBSCRIPTIONREQUEST_H
#define NTPBPUSHNOTIFYSUBSCRIPTIONREQUEST_H

@class PBRequest, NSMutableArray, NSString;
@protocol NSCopying;


#import "NTPBDeviceInfo.h"

@interface NTPBPushNotifySubscriptionRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NTPBDeviceInfo *deviceInfo; // ivar: _deviceInfo
@property (readonly, nonatomic) BOOL hasDeviceInfo;
@property (readonly, nonatomic) BOOL hasNotificationUserId;
@property (readonly, nonatomic) BOOL hasUserStorefrontId;
@property (retain, nonatomic) NSMutableArray *notificationEntitys; // ivar: _notificationEntitys
@property (retain, nonatomic) NSString *notificationUserId; // ivar: _notificationUserId
@property (retain, nonatomic) NSString *userStorefrontId; // ivar: _userStorefrontId


+(Class)notificationEntityType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)notificationEntityAtIndex:(NSUInteger)arg0 ;
-(void)addNotificationEntity:(id)arg0 ;
-(void)clearNotificationEntitys;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif