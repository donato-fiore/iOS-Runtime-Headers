// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDBULLETINNOTIFICATIONREGISTRATIONMODEL_H
#define HMDBULLETINNOTIFICATIONREGISTRATIONMODEL_H

@class HMBModel, NSData, NSSet, NSUUID;



@interface HMDBulletinNotificationRegistrationModel : HMBModel

@property (retain) NSData *conditionData;
@property (retain, nonatomic) NSSet *conditions;
@property (retain, nonatomic) NSUUID *remoteDeviceIdentifier;


+(id)hmbProperties;


@end


#endif