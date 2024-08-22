// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASDEMODATA_H
#define ASDEMODATA_H


#import <Foundation/Foundation.h>


@interface ASDemoData : NSObject



+(id)_achievementsForFriendTwoWithFriendUUID:(id)arg0 ;
+(id)_achievementsForFriendWithIndex:(NSInteger)arg0 friendUUID:(id)arg1 ;
+(id)_activitySnapshotForFitnessJrFriendWithFriendUUID:(id)arg0 sourceUUID:(id)arg1 ;
+(id)_activitySnapshotForFriendOneWithFriendUUID:(id)arg0 sourceUUID:(id)arg1 ;
+(id)_activitySnapshotForFriendThreeWithFriendUUID:(id)arg0 sourceUUID:(id)arg1 ;
+(id)_activitySnapshotForFriendTwoWithFriendUUID:(id)arg0 sourceUUID:(id)arg1 ;
+(id)_activitySnapshotForFriendWithIndex:(NSInteger)arg0 friendUUID:(id)arg1 sourceUUID:(id)arg2 ;
+(id)_appleWatchSourceRevision;
+(id)_fakeAchievementDuringDayStartingAtDate:(id)arg0 personUUID:(id)arg1 ;
+(id)_fakeFriendListWithDemoFileName:(id)arg0 ;
+(id)_fakeWorkoutDuringDayStartingAtDate:(id)arg0 personUUID:(id)arg1 ;
+(id)_fakeWorkoutsForIndex:(NSInteger)arg0 personUUID:(id)arg1 ;
+(id)_fakeWorkoutsForLastWeekWithPersonUUID:(id)arg0 dailySnapshotProbability:(CGFloat)arg1 ;
+(id)_workoutsForFitnessJrFriendTwoWithFriendUUID:(id)arg0 ;
+(id)_workoutsForFriendOneWithFriendUUID:(id)arg0 ;
+(id)_workoutsForFriendTwoWithFriendUUID:(id)arg0 ;
+(id)_workoutsForFriendWithIndex:(NSInteger)arg0 friendUUID:(id)arg1 ;
+(id)createMeWithModel:(id)arg0 ;
+(id)fakeAppFriendListForMarketing;
+(id)fakeFirstGlanceFriendListForMarketing;


@end


#endif