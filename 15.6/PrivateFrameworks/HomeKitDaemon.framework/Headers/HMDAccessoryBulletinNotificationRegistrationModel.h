// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDACCESSORYBULLETINNOTIFICATIONREGISTRATIONMODEL_H
#define HMDACCESSORYBULLETINNOTIFICATIONREGISTRATIONMODEL_H

@class NSUUID, NSNumber;


#import "HMDBulletinNotificationRegistrationModel.h"

@interface HMDAccessoryBulletinNotificationRegistrationModel : HMDBulletinNotificationRegistrationModel

@property (retain, nonatomic) NSUUID *accessoryUUID;
@property (retain, nonatomic) NSNumber *characteristicInstanceID;


+(id)hmbProperties;
+(id)uuidForRemoteDeviceIdentifier:(id)arg0 accessoryUUID:(id)arg1 characteristicInstanceID:(id)arg2 ;
-(id)createRegistration;
-(id)initWithAccessoryBulletinNotificationRegistration:(id)arg0 ;


@end


#endif