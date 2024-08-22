// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDACCESSORYFIRMWAREUPDATEAGGREGATEPOLICY_H
#define HMDACCESSORYFIRMWAREUPDATEAGGREGATEPOLICY_H

@class NSArray;


#import "HMDAccessoryFirmwareUpdatePolicy.h"

@interface HMDAccessoryFirmwareUpdateAggregatePolicy : HMDAccessoryFirmwareUpdatePolicy

@property (readonly, nonatomic) NSArray *policies; // ivar: _policies


+(id)logCategory;
-(BOOL)evaluate;
-(id)initWithPolicies:(id)arg0 accessory:(id)arg1 workQueue:(id)arg2 ;
-(void)_registerForNotifications;
-(void)configure;
-(void)handlePolicyStatusChange:(id)arg0 ;


@end


#endif