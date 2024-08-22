// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACHEARNEDINSTANCECLEANUPUTILITY_H
#define ACHEARNEDINSTANCECLEANUPUTILITY_H

@class HKHealthStore, ACHAwardsKeyValueClient, HDProfile;

#import <Foundation/Foundation.h>

#import "ACHEarnedInstanceStore.h"

@interface ACHEarnedInstanceCleanupUtility : NSObject

@property (retain, nonatomic) ACHEarnedInstanceStore *earnedInstanceStore; // ivar: _earnedInstanceStore
@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (retain, nonatomic) ACHAwardsKeyValueClient *keyValueClient; // ivar: _keyValueClient
@property (retain, nonatomic) HDProfile *profile; // ivar: _profile


-(NSInteger)_client_historicalEvaluationAdjustment;
-(NSInteger)_daemon_historicalEvaluationAdjustment;
-(NSInteger)_historicalEvaluationAdjustment;
-(id)_cleanupBestWorkoutAchievements;
-(id)_cleanupFirstWorkoutAchievements;
-(id)_cleanupLifetimeMoveGoalAchievements;
-(id)_cleanupLongestMoveStreakAchievements;
-(id)_cleanupNewExerciseRecordAchievements;
-(id)initWithEarnedInstanceStore:(id)arg0 profile:(id)arg1 ;
-(id)initWithHealthStore:(id)arg0 keyValueClient:(id)arg1 earnedInstanceStore:(id)arg2 ;
-(void)performCleanup;


@end


#endif