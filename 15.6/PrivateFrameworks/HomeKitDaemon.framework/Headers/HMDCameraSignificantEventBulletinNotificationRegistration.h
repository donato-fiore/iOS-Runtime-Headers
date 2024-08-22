// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERASIGNIFICANTEVENTBULLETINNOTIFICATIONREGISTRATION_H
#define HMDCAMERASIGNIFICANTEVENTBULLETINNOTIFICATIONREGISTRATION_H

@class NSUUID;
@protocol NSCopying, NSSecureCoding, HMDBulletinNotificationRegistrationRemoteCoding;


#import "HMDBulletinNotificationRegistration.h"

@interface HMDCameraSignificantEventBulletinNotificationRegistration : HMDBulletinNotificationRegistration <NSCopying, NSSecureCoding, HMDBulletinNotificationRegistrationRemoteCoding>



@property (readonly, copy) NSUUID *cameraIdentifier; // ivar: _cameraIdentifier
@property (readonly) NSUInteger notificationModes; // ivar: _notificationModes
@property (readonly) NSUInteger personFamiliarityOptions; // ivar: _personFamiliarityOptions
@property (readonly) NSUInteger significantEventTypes; // ivar: _significantEventTypes


+(BOOL)supportsSecureCoding;
+(id)type;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCameraIdentifier:(id)arg0 remoteDeviceIdentifier:(id)arg1 conditions:(id)arg2 notificationModes:(NSUInteger)arg3 significantEventTypes:(NSUInteger)arg4 personFamiliarityOptions:(NSUInteger)arg5 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)predicate;
-(id)serializedRegistrationForRemoteMessage;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif