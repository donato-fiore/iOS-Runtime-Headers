// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDBULLETINNOTIFICATIONREGISTRATIONSOURCE_H
#define HMDBULLETINNOTIFICATIONREGISTRATIONSOURCE_H

@class HMFObject, NSUUID;
@protocol NSCopying, NSSecureCoding, HMDBulletinNotificationRegistrationRemoteCoding;


#import "HMDDevice.h"
#import "HMDDeviceAddress.h"

@interface HMDBulletinNotificationRegistrationSource : HMFObject <NSCopying, NSSecureCoding, HMDBulletinNotificationRegistrationRemoteCoding>



@property (readonly, copy) HMDDevice *device;
@property (readonly, copy) HMDDeviceAddress *deviceAddress; // ivar: _deviceAddress
@property (readonly, copy) NSUUID *userUUID; // ivar: _userUUID


+(BOOL)doesTypeMatch:(id)arg0 against:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)type;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithUserUUID:(id)arg0 deviceAddress:(id)arg1 ;
-(id)serializedRegistrationForRemoteMessage;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif