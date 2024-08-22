// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PVLIVEPLAYERTHERMALTHROTTLINGPOLICY_H
#define PVLIVEPLAYERTHERMALTHROTTLINGPOLICY_H


#import <Foundation/Foundation.h>


@interface PVLivePlayerThermalThrottlingPolicy : NSObject {
    *HGSynchronizable _lock;
    map<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *, std::less<PVSPI_OSThermalPressureLevel>, std::allocator<std::pair<const PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *>>> _policy;
}




-(id)controlParametersForThermalLevel:(int)arg0 ;
-(id)description;
-(id)init;
-(id)populatedControlParametersForCurrentThermalLevel;
-(id)populatedControlParametersForThermalLevel:(int)arg0 ;
-(void)dealloc;
-(void)setThermalLevel:(int)arg0 controlParameters:(id)arg1 ;


@end


#endif