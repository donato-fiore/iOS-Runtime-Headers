// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDDEMODATAWORKOUTPROTOTYPE_H
#define HDDEMODATAWORKOUTPROTOTYPE_H

@class HKQuantity;

#import <Foundation/Foundation.h>


@interface HDDemoDataWorkoutPrototype : NSObject

@property (nonatomic) CGFloat duration; // ivar: _duration
@property (retain, nonatomic) HKQuantity *goal; // ivar: _goal
@property (nonatomic) NSUInteger goalType; // ivar: _goalType
@property (nonatomic) NSInteger numLapsPerSegment; // ivar: _numLapsPerSegment
@property (nonatomic) CGFloat restTimePerSegment; // ivar: _restTimePerSegment
@property (nonatomic) CGFloat startTimeOffsetInDay; // ivar: _startTimeOffsetInDay
@property (nonatomic) CGFloat swimTimePerSegment; // ivar: _swimTimePerSegment
@property (nonatomic) CGFloat swimmingSegmentDistanceInYards; // ivar: _swimmingSegmentDistanceInYards
@property (nonatomic) NSInteger swimmingStrokeStyle; // ivar: _swimmingStrokeStyle
@property (nonatomic) CGFloat totalDistanceCyclingInMiles; // ivar: _totalDistanceCyclingInMiles
@property (nonatomic) CGFloat totalDistanceSwimmingInYards; // ivar: _totalDistanceSwimmingInYards
@property (nonatomic) CGFloat totalDistanceWalkingInMiles; // ivar: _totalDistanceWalkingInMiles
@property (nonatomic) CGFloat totalEnergyBurnedInKcal; // ivar: _totalEnergyBurnedInKcal
@property (nonatomic) NSInteger totalSwimmingSegments; // ivar: _totalSwimmingSegments
@property (nonatomic) NSUInteger workoutActivityType; // ivar: _workoutActivityType


+(id)HIITPrototype;
+(id)coolDownPrototype;
+(id)coreTrainingPrototype;
+(id)dancePrototype;
+(id)ellipticalPrototype;
+(id)functionalStrengthTrainingPrototype;
+(id)hikingPrototype;
+(id)pickRandomWorkoutFrom:(id)arg0 ;
+(id)runningPrototype;
+(id)swimmingPrototype;
+(id)thirdPartyWorkoutPrototype;
+(id)walkingPrototype;
+(id)workoutPrototypeWithActivityType:(NSUInteger)arg0 goalType:(NSUInteger)arg1 goal:(id)arg2 startTime:(CGFloat)arg3 duration:(CGFloat)arg4 energyBurned:(CGFloat)arg5 distanceWalking:(CGFloat)arg6 distanceCycling:(CGFloat)arg7 ;
+(id)workoutPrototypeWithActivityType:(NSUInteger)arg0 goalType:(NSUInteger)arg1 goal:(id)arg2 startTime:(CGFloat)arg3 duration:(CGFloat)arg4 energyBurned:(CGFloat)arg5 distanceWalking:(CGFloat)arg6 distanceCycling:(CGFloat)arg7 distanceSwimming:(CGFloat)arg8 distanceSwimmingSegment:(CGFloat)arg9 totalSwimmingSegments:(NSInteger)arg10 numLapsPerSegment:(NSInteger)arg11 swimTimePerSegment:(CGFloat)arg12 restTimePerSegment:(CGFloat)arg13 swimmingStrokeStyle:(NSInteger)arg14 ;
+(id)yogaAndRunningPrototypes;
+(id)yogaPrototype;


@end


#endif