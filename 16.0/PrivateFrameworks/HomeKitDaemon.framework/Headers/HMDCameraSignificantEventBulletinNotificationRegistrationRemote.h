// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCAMERASIGNIFICANTEVENTBULLETINNOTIFICATIONREGISTRATIONREMOTE_H
#define HMDCAMERASIGNIFICANTEVENTBULLETINNOTIFICATIONREGISTRATIONREMOTE_H

@class HMFObject;
@protocol NSCopying, NSSecureCoding;


#import "HMDCameraSignificantEventBulletinNotificationRegistration.h"
#import "HMDBulletinNotificationRegistrationSource.h"

@interface HMDCameraSignificantEventBulletinNotificationRegistrationRemote : HMFObject <NSCopying, NSSecureCoding>



@property (readonly, copy) HMDCameraSignificantEventBulletinNotificationRegistration *registration; // ivar: _registration
@property (readonly, copy) HMDBulletinNotificationRegistrationSource *source; // ivar: _source


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCameraCameraSignificantEventBulletinNotificationRegistration:(id)arg0 source:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif