// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GCDEVICECONFIGURATIONEVALUATOR_H
#define _GCDEVICECONFIGURATIONEVALUATOR_H

@class NSSet, NSDictionary;

#import <Foundation/Foundation.h>


@interface _GCDeviceConfigurationEvaluator : NSObject

@property (copy, nonatomic) NSSet *configurationsIN; // ivar: _configurationsIN
@property (copy, nonatomic) NSDictionary *deviceManagersIN; // ivar: _deviceManagersIN
@property (readonly, nonatomic) NSDictionary *deviceOwnersOUT; // ivar: _deviceOwnersOUT
@property (copy, nonatomic) NSDictionary *physicalDevicesIN; // ivar: _physicalDevicesIN
@property (readonly, nonatomic) NSSet *viableConfigurationsOUT; // ivar: _viableConfigurationsOUT


-(NSUInteger)viableConfigurations:(*id)arg0 deviceOwners:(*id)arg1 ;
-(void)evaluate;


@end


#endif