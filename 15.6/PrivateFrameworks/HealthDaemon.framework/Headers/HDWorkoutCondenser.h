// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDWORKOUTCONDENSER_H
#define HDWORKOUTCONDENSER_H

@class HDAssertion, NSString;
@protocol HDPeriodicActivityDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDPeriodicActivity.h"
#import "HDProfile.h"
#import "_HDWorkoutCondenserAnalyticsAccumulator.h"

@interface HDWorkoutCondenser : NSObject <HDPeriodicActivityDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    HDPeriodicActivity *_periodicActivity;
    HDAssertion *_preparedDatabaseAccessibilityAssertion;
    NSInteger _minimumSeriesSize;
    NSInteger _maximumSeriesSize;
    NSInteger _deletedSamplesThreshold;
    HDProfile *_profile;
    _HDWorkoutCondenserAnalyticsAccumulator *_analyticsAccumulator;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)condensableQuantityTypes;
+(id)seriesSyncIdentifierForEntity:(id)arg0 workout:(id)arg1 transaction:(id)arg2 error:(*id)arg3 ;
+(id)workoutEntitiesRequiringCondensationWithProfile:(id)arg0 limit:(NSInteger)arg1 allowRecondensation:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)condenseWorkout:(id)arg0 error:(*id)arg1 ;
-(id)condensableWorkoutsWithError:(*id)arg0 ;
-(id)condensedWorkoutsWithError:(*id)arg0 ;
-(id)initWithProfile:(id)arg0 ;
-(void)condenseWorkoutsForReason:(NSInteger)arg0 workoutBatchLimit:(NSInteger)arg1 completion:(id)arg2 ;
-(void)dealloc;
-(void)performPeriodicActivity:(id)arg0 completion:(id)arg1 ;
-(void)periodicActivity:(id)arg0 configureXPCActivityCriteria:(id)arg1 ;
-(void)setDeletedSamplesThreshold:(NSInteger)arg0 ;
-(void)setMaximumSeriesSize:(NSInteger)arg0 ;
-(void)setMinimumSeriesSize:(NSInteger)arg0 ;


@end


#endif