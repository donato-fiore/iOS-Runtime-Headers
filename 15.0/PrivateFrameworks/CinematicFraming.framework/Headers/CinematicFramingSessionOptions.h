// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CINEMATICFRAMINGSESSIONOPTIONS_H
#define CINEMATICFRAMINGSESSIONOPTIONS_H


#import <Foundation/Foundation.h>

#import "CinematicFramingSessionFramingParameters.h"

@interface CinematicFramingSessionOptions : NSObject

@property (nonatomic) float considerStationaryAfterThresholdSeconds; // ivar: considerStationaryAfterThresholdSeconds
@property (nonatomic) float deadbandRecenteringDurationSec; // ivar: deadbandRecenteringDurationSec
@property (nonatomic) float deadbandRecenteringIdleDurationSec; // ivar: deadbandRecenteringIdleDurationSec
@property (nonatomic) float deadbandRecenteringInitialDelaySec; // ivar: deadbandRecenteringInitialDelaySec
@property (nonatomic) NSInteger framingStyle; // ivar: framingStyle
@property (nonatomic) float horizontalAccelerationMultiplier; // ivar: horizontalAccelerationMultiplier
@property (nonatomic) float horizontalSpeedMultiplier; // ivar: horizontalSpeedMultiplier
@property (nonatomic) float minCropFovRad; // ivar: minCropFovRad
@property (nonatomic) float movementThresholdMetersPerSecond; // ivar: movementThresholdMetersPerSecond
@property (retain, nonatomic) CinematicFramingSessionFramingParameters *multiPersonFramingParameters; // ivar: multiPersonFramingParameters
@property (nonatomic) float noPeopleDelayBeforeReturningHomeSec; // ivar: noPeopleDelayBeforeReturningHomeSec
@property (nonatomic) float noPeopleReturningHomeDurationSec; // ivar: noPeopleReturningHomeDurationSec
@property (nonatomic) BOOL shouldDisableTransitions; // ivar: shouldDisableTransitions
@property (nonatomic) BOOL shouldVisualizeCrop; // ivar: shouldVisualizeCrop
@property (nonatomic) BOOL shouldVisualizeDeadband; // ivar: shouldVisualizeDeadband
@property (nonatomic) BOOL shouldVisualizeDetections; // ivar: shouldVisualizeDetections
@property (retain, nonatomic) CinematicFramingSessionFramingParameters *singlePersonFramingParameters; // ivar: singlePersonFramingParameters
@property (nonatomic) float tinyHeadMaxValue; // ivar: tinyHeadMaxValue
@property (nonatomic) float tinyHeadMinValue; // ivar: tinyHeadMinValue
@property (nonatomic) float verticalAccelerationMultiplier; // ivar: verticalAccelerationMultiplier
@property (nonatomic) float verticalSpeedMultiplier; // ivar: verticalSpeedMultiplier
@property (nonatomic) float xEaseInCurveA; // ivar: xEaseInCurveA
@property (nonatomic) float xEaseInCurveB; // ivar: xEaseInCurveB
@property (nonatomic) float yEaseInCurveA; // ivar: yEaseInCurveA
@property (nonatomic) float yEaseInCurveB; // ivar: yEaseInCurveB
@property (nonatomic) float zoomAccelerationMultiplier; // ivar: zoomAccelerationMultiplier
@property (nonatomic) float zoomEaseInCurveA; // ivar: zoomEaseInCurveA
@property (nonatomic) float zoomEaseInCurveB; // ivar: zoomEaseInCurveB
@property (nonatomic) float zoomInSpeedMultiplier; // ivar: zoomInSpeedMultiplier
@property (nonatomic) float zoomOutSpeedMultiplier; // ivar: zoomOutSpeedMultiplier


-(id)asPlist;
-(id)initWithPlist:(id)arg0 ;


@end


#endif