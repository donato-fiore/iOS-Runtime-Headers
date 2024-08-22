// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERAACCESSMODEBULLETINNOTIFICATIONREGISTRATIONREMOTE_H
#define HMDCAMERAACCESSMODEBULLETINNOTIFICATIONREGISTRATIONREMOTE_H

@class HMFObject;
@protocol NSCopying, NSSecureCoding;


#import "HMDCameraAccessModeBulletinNotificationRegistration.h"
#import "HMDBulletinNotificationRegistrationSource.h"

@interface HMDCameraAccessModeBulletinNotificationRegistrationRemote : HMFObject <NSCopying, NSSecureCoding>



@property (readonly, copy) HMDCameraAccessModeBulletinNotificationRegistration *registration; // ivar: _registration
@property (readonly, copy) HMDBulletinNotificationRegistrationSource *source; // ivar: _source


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCameraAccessModeBulletinNotificationRegistration:(id)arg0 source:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif