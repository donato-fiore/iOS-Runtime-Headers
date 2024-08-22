// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REACTIVEWORKOUTPREDICTOR_H
#define REACTIVEWORKOUTPREDICTOR_H

@class HKQuery, NSDate;
@protocol REActiveWorkoutPredictorProperties;


#import "REPredictor.h"
#import "REUpNextTimer.h"

@interface REActiveWorkoutPredictor : REPredictor <REActiveWorkoutPredictorProperties>

 {
    int _workoutStateNotifyToken;
    float _dailyAverageWorkouts;
    NSUInteger _numberOfWorkoutsPerformedToday;
    HKQuery *_workoutObservationQuery;
    REUpNextTimer *_workoutQueryCoalesceTimer;
}


@property (readonly, nonatomic, getter=isActiveWorkout) BOOL activeWorkout;
@property (readonly, nonatomic) BOOL currentlyHasActiveWorkout;
@property (readonly, nonatomic) float dailyAverageWorkouts;
@property BOOL hasActiveWorkout; // ivar: _hasActiveWorkout
@property (retain) NSDate *lastCompletedWorkoutDate; // ivar: _lastCompletedWorkoutDate
@property (readonly, nonatomic) NSDate *lastWorkoutDate;
@property (readonly, nonatomic) NSUInteger numberOfWorkoutsPerformedToday;


+(CGFloat)updateInterval;
+(id)supportedFeatures;
-(id)_init;
-(id)featureValueForFeature:(id)arg0 element:(id)arg1 engine:(id)arg2 trainingContext:(id)arg3 ;
-(void)_cancelMonitoringWorkoutIfNeeded;
-(void)_processWorkoutHistoryData:(id)arg0 completion:(id)arg1 ;
-(void)_queue_fetchWorkoutHistory;
-(void)_scheduleFetchWorkoutTimer;
-(void)_updateWorkoutState;
-(void)dealloc;
-(void)pause;
-(void)resume;
-(void)update;


@end


#endif