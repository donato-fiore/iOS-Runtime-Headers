// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDIDSACTIVITYREGISTRATIONMODEL_H
#define HMDIDSACTIVITYREGISTRATIONMODEL_H

@class HMBModel, NSArray, NSUUID;



@interface HMDIDSActivityRegistrationModel : HMBModel

@property (retain, nonatomic) NSArray *subActivities;
@property (retain, nonatomic) NSUUID *subjectDeviceIdentifier;


+(id)hmbProperties;
+(id)hmbQueries;
+(id)registeredDevicesQuery;


@end


#endif