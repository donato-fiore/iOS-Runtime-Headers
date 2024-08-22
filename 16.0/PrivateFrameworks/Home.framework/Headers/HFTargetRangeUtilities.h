// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFTARGETRANGEUTILITIES_H
#define HFTARGETRANGEUTILITIES_H


#import <Foundation/Foundation.h>


@interface HFTargetRangeUtilities : NSObject



+(NSUInteger)rangeModeForCurrentHeaterCoolerState:(NSInteger)arg0 ;
+(NSUInteger)rangeModeForCurrentHumidifierDehumidifierState:(NSInteger)arg0 ;
+(NSUInteger)rangeModeForHeatingCoolingMode:(NSInteger)arg0 ;
+(NSUInteger)rangeModeForTargetHeaterCoolerState:(NSInteger)arg0 ;
+(NSUInteger)rangeModeForTargetHumidifierDehumidifierState:(NSInteger)arg0 ;
+(id)targetRelativePercentValueWithTargetMode:(NSUInteger)arg0 currentMode:(NSUInteger)arg1 rawTargetRelativePercentValue:(id)arg2 minimumThresholdRelativePercentValue:(id)arg3 maximumThresholdRelativePercentValue:(id)arg4 ;
+(id)targetRelativePercentValueWithTargetMode:(NSUInteger)arg0 currentMode:(NSUInteger)arg1 rawTargetResponse:(id)arg2 minimumThresholdResponse:(id)arg3 maximumThresholdResponse:(id)arg4 ;
+(id)targetValueForService:(id)arg0 valueProvider:(id)arg1 ;
+(id)targetValueWithTargetMode:(NSUInteger)arg0 currentMode:(NSUInteger)arg1 rawTargetResponse:(id)arg2 minimumThresholdResponse:(id)arg3 maximumThresholdResponse:(id)arg4 ;


@end


#endif