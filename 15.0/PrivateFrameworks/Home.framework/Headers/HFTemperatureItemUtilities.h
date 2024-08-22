// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFTEMPERATUREITEMUTILITIES_H
#define HFTEMPERATUREITEMUTILITIES_H


#import <Foundation/Foundation.h>


@interface HFTemperatureItemUtilities : NSObject



+(NSInteger)_heatingCoolingValueForCurrentHeaterCoolerState:(NSInteger)arg0 isActive:(BOOL)arg1 ;
+(NSInteger)_heatingCoolingValueForTargetHeaterCoolerState:(NSInteger)arg0 isActive:(BOOL)arg1 ;
+(id)currentHeatingCoolingModeValueInResponse:(id)arg0 ;
+(id)integerTemperatureRangeWithinNumberRange:(id)arg0 representsCelsius:(BOOL)arg1 ;
+(id)targetHeatingCoolingModeValueInResponse:(id)arg0 ;
+(id)targetTemperatureValueInResponse:(id)arg0 ;


@end


#endif