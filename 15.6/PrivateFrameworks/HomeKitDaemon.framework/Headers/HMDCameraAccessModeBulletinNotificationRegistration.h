// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERAACCESSMODEBULLETINNOTIFICATIONREGISTRATION_H
#define HMDCAMERAACCESSMODEBULLETINNOTIFICATIONREGISTRATION_H

@class NSUUID;
@protocol NSCopying, NSSecureCoding, HMDBulletinNotificationRegistrationRemoteCoding;


#import "HMDBulletinNotificationRegistration.h"

@interface HMDCameraAccessModeBulletinNotificationRegistration : HMDBulletinNotificationRegistration <NSCopying, NSSecureCoding, HMDBulletinNotificationRegistrationRemoteCoding>



@property (readonly, copy) NSUUID *accessoryUUID; // ivar: _accessoryUUID


+(BOOL)supportsSecureCoding;
+(id)type;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAccessoryUUID:(id)arg0 remoteDeviceIdentifier:(id)arg1 conditions:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)serializedRegistrationForRemoteMessage;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif