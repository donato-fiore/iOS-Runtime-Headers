// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOCOMPOSEDWALKINGUNCERTAINARRIVALROUTESTEP_H
#define GEOCOMPOSEDWALKINGUNCERTAINARRIVALROUTESTEP_H

@class NSArray;


#import "GEOComposedWalkingRouteStep.h"

@interface GEOComposedWalkingUncertainArrivalRouteStep : GEOComposedWalkingRouteStep {
    NSArray *_aggregatedGEOSteps;
    CGFloat _aggregatedStepsDistance;
    unsigned int _aggregatedStepsDuration;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isUncertainArrival;
-(CGFloat)_calculateAggregatedStepsDistance;
-(CGFloat)distance;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithComposedRoute:(id)arg0 aggregatedGEOSteps:(id)arg1 stepIndex:(NSUInteger)arg2 pointRange:(struct _NSRange )arg3 maneuverPointRange:(struct _NSRange )arg4 ;
-(unsigned int)_calculateAggregatedStepsDuration;
-(unsigned int)duration;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif