// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTPBDEVICEPUSHTOKENUPDATEREQUEST_H
#define NTPBDEVICEPUSHTOKENUPDATEREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;


#import "NTPBDeviceInfo.h"

@interface NTPBDevicePushTokenUpdateRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NTPBDeviceInfo *deviceInfoToAdd; // ivar: _deviceInfoToAdd
@property (retain, nonatomic) NTPBDeviceInfo *deviceInfoToRemove; // ivar: _deviceInfoToRemove
@property (readonly, nonatomic) BOOL hasDeviceInfoToAdd;
@property (readonly, nonatomic) BOOL hasDeviceInfoToRemove;
@property (readonly, nonatomic) BOOL hasNotificationUserId;
@property (readonly, nonatomic) BOOL hasUserStorefrontId;
@property (retain, nonatomic) NSString *notificationUserId; // ivar: _notificationUserId
@property (retain, nonatomic) NSString *userStorefrontId; // ivar: _userStorefrontId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif