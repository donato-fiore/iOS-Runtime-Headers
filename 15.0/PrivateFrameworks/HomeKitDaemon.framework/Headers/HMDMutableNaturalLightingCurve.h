// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDMUTABLENATURALLIGHTINGCURVE_H
#define HMDMUTABLENATURALLIGHTINGCURVE_H



#import "HMDNaturalLightingCurve.h"

@interface HMDMutableNaturalLightingCurve : HMDNaturalLightingCurve

@property NSUInteger colorTemperatureNotifyIntervalThresholdInMilliseconds;
@property NSUInteger colorTemperatureNotifyValueChangeThreshold;
@property NSUInteger colorTemperatureUpdateIntervalInMilliseconds;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif