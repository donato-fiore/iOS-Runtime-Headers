// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACHWORKOUTEVALUATIONENVIRONMENT_H
#define ACHWORKOUTEVALUATIONENVIRONMENT_H


#import <Foundation/Foundation.h>

#import "ACHWorkoutEvaluationWorkoutProperties.h"

@interface ACHWorkoutEvaluationEnvironment : NSObject

@property (readonly, nonatomic) CGFloat bestKilocaloriesForType; // ivar: _bestKilocaloriesForType
@property (readonly, nonatomic) NSUInteger experienceType; // ivar: _experienceType
@property (readonly, nonatomic) NSUInteger numberOfFirstPartyWorkoutsOver15MinutesDuringCurrentFitnessWeek; // ivar: _numberOfFirstPartyWorkoutsOver15MinutesDuringCurrentFitnessWeek
@property (readonly, nonatomic) NSUInteger numberOfFirstPartyWorkoutsOver15MinutesWithType; // ivar: _numberOfFirstPartyWorkoutsOver15MinutesWithType
@property (readonly, nonatomic) NSUInteger numberOfFirstPartyWorkoutsOver5MinutesDuringCurrentFitnessWeek; // ivar: _numberOfFirstPartyWorkoutsOver5MinutesDuringCurrentFitnessWeek
@property (readonly, nonatomic) NSUInteger numberOfFirstPartyWorkoutsOver5MinutesWithType; // ivar: _numberOfFirstPartyWorkoutsOver5MinutesWithType
@property (readonly, nonatomic) ACHWorkoutEvaluationWorkoutProperties *workout; // ivar: _workout


-(id)initWithWorkout:(id)arg0 numberOfFirstPartyWorkoutsOver5MinutesWithType:(NSUInteger)arg1 numberOfFirstPartyWorkoutsOver5MinutesDuringCurrentFitnessWeek:(NSUInteger)arg2 bestKilocaloriesForType:(CGFloat)arg3 experienceType:(NSUInteger)arg4 ;
-(id)valueForUndefinedKey:(id)arg0 ;


@end


#endif