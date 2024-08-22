// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACHEARNEDINSTANCECLEANUPUTILITY_H
#define ACHEARNEDINSTANCECLEANUPUTILITY_H

@class HDProfile;

#import <Foundation/Foundation.h>

#import "ACHEarnedInstanceStore.h"

@interface ACHEarnedInstanceCleanupUtility : NSObject

@property (retain, nonatomic) ACHEarnedInstanceStore *earnedInstanceStore; // ivar: _earnedInstanceStore
@property (retain, nonatomic) HDProfile *profile; // ivar: _profile


-(NSInteger)_historicalEvaluationAdjustment;
-(id)_cleanupBestWorkoutAchievements;
-(id)_cleanupFirstWorkoutAchievements;
-(id)_cleanupLifetimeMoveGoalAchievements;
-(id)_cleanupLongestMoveStreakAchievements;
-(id)_cleanupNewExerciseRecordAchievements;
-(id)initWithEarnedInstanceStore:(id)arg0 profile:(id)arg1 ;
-(void)performCleanup;


@end


#endif