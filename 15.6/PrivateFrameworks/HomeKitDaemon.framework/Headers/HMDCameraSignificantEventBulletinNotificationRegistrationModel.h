// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERASIGNIFICANTEVENTBULLETINNOTIFICATIONREGISTRATIONMODEL_H
#define HMDCAMERASIGNIFICANTEVENTBULLETINNOTIFICATIONREGISTRATIONMODEL_H

@class NSUUID, NSNumber;


#import "HMDBulletinNotificationRegistrationModel.h"

@interface HMDCameraSignificantEventBulletinNotificationRegistrationModel : HMDBulletinNotificationRegistrationModel

@property (retain, nonatomic) NSUUID *cameraIdentifier;
@property (retain, nonatomic) NSNumber *notificationModes;
@property (retain, nonatomic) NSNumber *personFamiliarityOptions;
@property (retain, nonatomic) NSNumber *significantEventTypes;


+(id)hmbProperties;
+(id)uuidForRemoteDeviceIdentifier:(id)arg0 cameraIdentifier:(id)arg1 ;
-(id)createRegistration;
-(id)initWithSignificantEventBulletinNotificationRegistration:(id)arg0 ;


@end


#endif