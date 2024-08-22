// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACHWORKOUTEVALUATIONENVIRONMENT_H
#define ACHWORKOUTEVALUATIONENVIRONMENT_H


#import <Foundation/Foundation.h>

#import "ACHWorkoutEvaluationWorkoutProperties.h"

@interface ACHWorkoutEvaluationEnvironment : NSObject

@property (readonly, nonatomic) CGFloat best10KDuration; // ivar: _best10KDuration
@property (readonly, nonatomic) CGFloat best5KDuration; // ivar: _best5KDuration
@property (readonly, nonatomic) CGFloat bestElevationGainedForType; // ivar: _bestElevationGainedForType
@property (readonly, nonatomic) CGFloat bestHalfMarathonDuration; // ivar: _bestHalfMarathonDuration
@property (readonly, nonatomic) CGFloat bestKilocaloriesForType; // ivar: _bestKilocaloriesForType
@property (readonly, nonatomic) CGFloat bestKilometersForType; // ivar: _bestKilometersForType
@property (readonly, nonatomic) CGFloat bestMarathonDuration; // ivar: _bestMarathonDuration
@property (readonly, nonatomic) CGFloat bestWheelchair10KDuration; // ivar: _bestWheelchair10KDuration
@property (readonly, nonatomic) CGFloat bestWheelchair5KDuration; // ivar: _bestWheelchair5KDuration
@property (readonly, nonatomic) CGFloat bestWheelchairHalfMarathonDuration; // ivar: _bestWheelchairHalfMarathonDuration
@property (readonly, nonatomic) CGFloat bestWheelchairMarathonDuration; // ivar: _bestWheelchairMarathonDuration
@property (readonly, nonatomic) NSUInteger experienceType; // ivar: _experienceType
@property (readonly, nonatomic) BOOL isMetricLocale; // ivar: _isMetricLocale
@property (readonly, nonatomic) NSUInteger numberOfFirstPartyWorkoutsOver15MinutesDuringCurrentFitnessWeek; // ivar: _numberOfFirstPartyWorkoutsOver15MinutesDuringCurrentFitnessWeek
@property (readonly, nonatomic) NSUInteger numberOfFirstPartyWorkoutsOver15MinutesWithType; // ivar: _numberOfFirstPartyWorkoutsOver15MinutesWithType
@property (readonly, nonatomic) NSUInteger numberOfFirstPartyWorkoutsOver5MinutesDuringCurrentFitnessWeek; // ivar: _numberOfFirstPartyWorkoutsOver5MinutesDuringCurrentFitnessWeek
@property (readonly, nonatomic) NSUInteger numberOfFirstPartyWorkoutsOver5MinutesWithType; // ivar: _numberOfFirstPartyWorkoutsOver5MinutesWithType
@property (readonly, nonatomic) ACHWorkoutEvaluationWorkoutProperties *workout; // ivar: _workout


-(id)initWithWorkout:(id)arg0 numberOfFirstPartyWorkoutsOver5MinutesWithType:(NSUInteger)arg1 numberOfFirstPartyWorkoutsOver5MinutesDuringCurrentFitnessWeek:(NSUInteger)arg2 bestKilocaloriesForType:(CGFloat)arg3 bestKilometersForType:(CGFloat)arg4 bestElevationGainedForType:(CGFloat)arg5 best5KDuration:(CGFloat)arg6 best10KDuration:(CGFloat)arg7 bestWheelchair5KDuration:(CGFloat)arg8 bestWheelchair10KDuration:(CGFloat)arg9 bestHalfMarathonDuration:(CGFloat)arg10 bestMarathonDuration:(CGFloat)arg11 bestWheelchairHalfMarathonDuration:(CGFloat)arg12 bestWheelchairMarathonDuration:(CGFloat)arg13 experienceType:(NSUInteger)arg14 isMetricLocale:(BOOL)arg15 ;
-(id)valueForUndefinedKey:(id)arg0 ;


@end


#endif