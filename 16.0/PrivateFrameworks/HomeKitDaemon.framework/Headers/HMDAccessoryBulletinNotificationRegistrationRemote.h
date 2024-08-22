// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDACCESSORYBULLETINNOTIFICATIONREGISTRATIONREMOTE_H
#define HMDACCESSORYBULLETINNOTIFICATIONREGISTRATIONREMOTE_H

@class HMFObject;
@protocol NSCopying, NSSecureCoding;


#import "HMDAccessoryBulletinNotificationRegistration.h"
#import "HMDBulletinNotificationRegistrationSource.h"

@interface HMDAccessoryBulletinNotificationRegistrationRemote : HMFObject <NSCopying, NSSecureCoding>



@property (readonly, copy) HMDAccessoryBulletinNotificationRegistration *registration; // ivar: _registration
@property (readonly, copy) HMDBulletinNotificationRegistrationSource *source; // ivar: _source


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAccessoryBulletinNotificationRegistration:(id)arg0 source:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif