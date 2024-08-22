// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKHEARTRATERECOVERYQUERYUTILITY_H
#define _HKHEARTRATERECOVERYQUERYUTILITY_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "HKHealthStore.h"
#import "HKWorkout.h"
#import "HKQuantitySeriesSampleQuery.h"
#import "_HKSampleQueryUtility.h"

@interface _HKHeartRateRecoveryQueryUtility : NSObject {
    HKHealthStore *_healthStore;
    HKWorkout *_workout;
    HKQuantitySeriesSampleQuery *_heartRateQuery;
    _HKSampleQueryUtility *_workoutQueryUtility;
    id *_handler;
    NSArray *_heartRateReadings;
}




+(id)_recoveryEndDateWithStartDate:(id)arg0 ;
+(id)perMinuteWorkoutRecoveryHeartRateFromReadings:(id)arg0 workoutEndDate:(id)arg1 ;
+(id)predicateForWorkoutRecoveryTimeWithWorkout:(id)arg0 ;
+(id)recoveryDateIntervalWithWorkout:(id)arg0 ;
+(id)workoutRecoveryDateIntervalForWorkout:(id)arg0 overlappingWorkouts:(id)arg1 ;
+(id)workoutRecoveryHeartRatesForWorkout:(id)arg0 recoveryDateInterval:(id)arg1 readings:(id)arg2 ;
-(id)initWithHealthStore:(id)arg0 workout:(id)arg1 handler:(id)arg2 ;
-(void)_heartRatesPostWorkout:(id)arg0 workoutRecoveryTimePredicate:(id)arg1 completionHandler:(id)arg2 ;
-(void)_setupQueries;
-(void)dealloc;
-(void)execute;
-(void)stop;


@end


#endif