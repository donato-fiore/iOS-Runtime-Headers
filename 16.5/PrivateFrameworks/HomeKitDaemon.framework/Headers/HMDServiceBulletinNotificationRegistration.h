// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDSERVICEBULLETINNOTIFICATIONREGISTRATION_H
#define HMDSERVICEBULLETINNOTIFICATIONREGISTRATION_H

@class NSUUID, NSNumber;
@protocol NSCopying, NSSecureCoding;


#import "HMDBulletinNotificationRegistration.h"

@interface HMDServiceBulletinNotificationRegistration : HMDBulletinNotificationRegistration <NSCopying, NSSecureCoding>



@property (readonly, copy) NSUUID *accessoryUUID; // ivar: _accessoryUUID
@property (readonly, copy) NSNumber *serviceInstanceID; // ivar: _serviceInstanceID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAccessoryUUID:(id)arg0 serviceInstanceID:(id)arg1 conditions:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif