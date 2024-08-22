// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACHWORKOUTPROGRESSEVALUATIONENVIRONMENT_H
#define ACHWORKOUTPROGRESSEVALUATIONENVIRONMENT_H


#import <Foundation/Foundation.h>


@interface ACHWorkoutProgressEvaluationEnvironment : NSObject

@property (readonly, nonatomic) NSUInteger numberOfFirstPartyWorkoutsOver15MinutesDuringCurrentFitnessWeek; // ivar: _numberOfFirstPartyWorkoutsOver15MinutesDuringCurrentFitnessWeek
@property (readonly, nonatomic) NSUInteger numberOfFirstPartyWorkoutsOver5MinutesDuringCurrentFitnessWeek; // ivar: _numberOfFirstPartyWorkoutsOver5MinutesDuringCurrentFitnessWeek


-(id)initWithNumberOfFirstPartyWorkoutsOver5MinutesDuringCurrentFitnessWeek:(NSUInteger)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;


@end


#endif