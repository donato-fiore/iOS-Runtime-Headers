// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIUIWORKOUTDEFAULTMETRICSPROVIDER_H
#define FIUIWORKOUTDEFAULTMETRICSPROVIDER_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "FIUIWorkoutActivityType.h"

@interface FIUIWorkoutDefaultMetricsProvider : NSObject {
    FIUIWorkoutActivityType *_activityType;
    NSInteger _activityMoveMode;
    BOOL _supportsElevationMetrics;
    BOOL _supportsGroundElevationMetrics;
}


@property (readonly, copy, nonatomic) NSArray *defaultEnabledMetrics; // ivar: _defaultEnabledMetrics
@property (readonly, nonatomic) NSInteger metricsVersion; // ivar: _metricsVersion
@property (readonly, copy, nonatomic) NSArray *supportedMetrics; // ivar: _supportedMetrics


-(BOOL)isMetricTypeSupported:(NSUInteger)arg0 isMachineWorkout:(BOOL)arg1 activityType:(id)arg2 ;
-(id)_defaultEnabledMetricsForActivityType:(id)arg0 metricsVersion:(NSInteger)arg1 ;
-(id)_defaultEnabledMetricsForSwimmingWithLocationType:(NSInteger)arg0 metricsVersion:(NSInteger)arg1 ;
-(id)_defaultGloryIndoorEnabledMetricsForActivityType:(NSUInteger)arg0 ;
-(id)_defaultGloryOutdoorEnabledMetricsForActivityType:(NSUInteger)arg0 supportsElevationMetrics:(BOOL)arg1 ;
-(id)_defaultOutdoorEnabledMetricsForActivityType:(NSUInteger)arg0 metricsVersion:(NSInteger)arg1 supportsElevationMetrics:(BOOL)arg2 ;
-(id)_defaultPreGloryIndoorEnabledMetricsForActivityType:(NSUInteger)arg0 ;
-(id)_defaultPreGloryOutdoorEnabledMetricsForActivityType:(NSUInteger)arg0 ;
-(id)_indoorDefaultEnabledMetricsForActivityType:(NSUInteger)arg0 metricsVersion:(NSInteger)arg1 ;
-(id)_machineProvidedMetricsForActivityType:(id)arg0 ;
-(id)_supportedMetricsForActivityType:(id)arg0 metricsVersion:(NSInteger)arg1 ;
-(id)appendMachineMetricsToMetrics:(id)arg0 maxNumMetrics:(NSInteger)arg1 activityType:(id)arg2 ;
-(id)initWithMetricsVersion:(NSInteger)arg0 activityType:(id)arg1 activityMoveMode:(NSInteger)arg2 deviceSupportsElevationMetrics:(BOOL)arg3 deviceSupportsGroundElevationMetrics:(BOOL)arg4 ;
-(id)supportedMetricsWithIsMachineWorkout:(BOOL)arg0 activityType:(id)arg1 ;


@end


#endif