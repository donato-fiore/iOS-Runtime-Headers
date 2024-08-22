// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC15SEYMOURSERVICES40ACHIEVEMENTAWARDINGEVALUATIONENVIRONMENT_H
#define _TTC15SEYMOURSERVICES40ACHIEVEMENTAWARDINGEVALUATIONENVIRONMENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _TtC15SeymourServices40AchievementAwardingEvaluationEnvironment : NSObject {
    ? session;
    ? energyBurnedAwardingCache;
    ? achievementDataStore;
    ? modalityReference;
    ? modalityIdentifier;
}


@property (nonatomic) CGFloat bestEnergyBurnedOfWorkoutModality; // ivar: bestEnergyBurnedOfWorkoutModality
@property (nonatomic) NSInteger currentWeeklyStreak; // ivar: currentWeeklyStreak
@property (nonatomic) BOOL isSessionCompletingProgram; // ivar: isSessionCompletingProgram
@property (nonatomic) BOOL isSessionGuided; // ivar: isSessionGuided
@property (nonatomic) NSInteger longestWeeklyStreak; // ivar: longestWeeklyStreak
@property (nonatomic, copy) NSString *modalityIdentifier;
@property (nonatomic) NSInteger numberOfGuidedWorkoutsOver5MinutesForModality; // ivar: numberOfGuidedWorkoutsOver5MinutesForModality
@property (nonatomic) NSInteger numberOfWorkoutsOver5Minutes; // ivar: numberOfWorkoutsOver5Minutes
@property (nonatomic) NSInteger numberOfWorkoutsOver5MinutesForModality; // ivar: numberOfWorkoutsOver5MinutesForModality
@property (nonatomic, readonly) CGFloat sessionDuration; // ivar: sessionDuration
@property (nonatomic) CGFloat sessionEnergyBurned; // ivar: sessionEnergyBurned


-(id)init;
-(id)valueForUndefinedKey:(id)arg0 ;


@end


#endif