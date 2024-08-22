// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKWORKOUTBUILDER_H
#define HKWORKOUTBUILDER_H

@class NSDate, NSDictionary, NSArray, NSMutableDictionary, NSString, NSUUID;
@protocol _HKXPCExportable, HKWorkoutBuilderClientInterface, HKStateMachineDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HKWorkoutActivity.h"
#import "HKWorkoutBuilderConfiguration.h"
#import "HKStateMachine.h"
#import "HKRetryableOperation.h"
#import "HKDevice.h"
#import "HKHealthStore.h"
#import "HKTaskServerProxyProvider.h"
#import "HKWorkoutConfiguration.h"

@interface HKWorkoutBuilder : NSObject <_HKXPCExportable, HKWorkoutBuilderClientInterface, HKStateMachineDelegate>

 {
    HKWorkoutActivity *_currentActivity;
    HKWorkoutBuilderConfiguration *_builderConfiguration;
    NSDate *_workoutStartDate;
    NSDate *_workoutEndDate;
    NSDictionary *_metadata;
    NSArray *_workoutEvents;
    NSMutableDictionary *_activitiesPerUUID;
    CGFloat _accumulatedElapsedTime;
    CGFloat _lastResumeTimestamp;
    BOOL _currentlyRunning;
    NSInteger _serverConstructionState;
    HKStateMachine *_constructionStateMachine;
    HKRetryableOperation *_retryableOperation;
    id *_beginCollectionCompletionHandler;
    id *_endCollectionCompletionHandler;
    id *_finishWorkoutCompletionHandler;
    id *_unitTest_serverStateChangedHandler;
    id *_unitTest_recoveryFinishedHandler;
    id *_unitTest_failureHandler;
}


@property (readonly, copy) NSDictionary *allStatistics;
@property (copy, nonatomic) HKWorkoutBuilderConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) HKDevice *device;
@property (readonly, copy) NSDate *endDate;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (readonly, copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly) BOOL isCurrentlyRunning;
@property (readonly, copy) NSDictionary *metadata;
@property (readonly, nonatomic) HKTaskServerProxyProvider *proxyProvider; // ivar: _proxyProvider
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *resourceQueue; // ivar: _resourceQueue
@property (retain, nonatomic) NSMutableDictionary *seriesBuilders; // ivar: _seriesBuilders
@property (readonly, copy) NSDate *startDate;
@property (retain, nonatomic) NSMutableDictionary *statisticsByType; // ivar: _statisticsByType
@property (readonly) Class superclass;
@property (readonly, copy) NSArray *workoutActivities;
@property (readonly, copy) HKWorkoutConfiguration *workoutConfiguration; // ivar: _workoutConfiguration
@property (readonly, copy) NSArray *workoutEvents;


+(CGFloat)_elapsedTimeAtDate:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 sortedEvents:(id)arg3 ;
+(NSInteger)_collectionStateAtDate:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 sortedEvents:(id)arg3 ;
+(id)_constructionStateMachineForBuilderConfiguration:(id)arg0 builderIdentifier:(id)arg1 ;
+(id)clientInterface;
+(id)serverInterface;
-(BOOL)_validateObjects:(id)arg0 forClass:(Class)arg1 error:(*id)arg2 ;
-(CGFloat)_currentElapsedTime;
-(CGFloat)elapsedTimeAtDate:(id)arg0 ;
-(NSUInteger)goalType;
-(id)_currentSnapshot;
-(id)_resourceQueue_endDateForSnapshotWithStartDate:(id)arg0 ;
-(id)_resourceQueue_eventsBetweenStartDate:(id)arg0 endDate:(id)arg1 ;
-(id)_resourceQueue_seriesBuilderWithIdentifier:(id)arg0 type:(id)arg1 ;
-(id)exportedInterface;
-(id)goal;
-(id)init;
-(id)initWithHealthStore:(id)arg0 builderConfiguration:(id)arg1 builderIdentifier:(id)arg2 ;
-(id)initWithHealthStore:(id)arg0 configuration:(id)arg1 device:(id)arg2 ;
-(id)initWithHealthStore:(id)arg0 configuration:(id)arg1 goalType:(NSUInteger)arg2 goal:(id)arg3 device:(id)arg4 ;
-(id)remoteInterface;
-(id)seriesBuilderForType:(id)arg0 ;
-(id)statisticsForType:(id)arg0 ;
-(void)_pushCurrentTargetState;
-(void)_recoverWithCompletion:(id)arg0 ;
-(void)_removeMetadata:(id)arg0 completion:(id)arg1 ;
-(void)_resourceQueue_addMetadata:(id)arg0 completion:(id)arg1 ;
-(void)_resourceQueue_addSamples:(id)arg0 completion:(id)arg1 ;
-(void)_resourceQueue_addWorkoutActivity:(id)arg0 completion:(id)arg1 ;
-(void)_resourceQueue_addWorkoutEvents:(id)arg0 completion:(id)arg1 ;
-(void)_resourceQueue_beginCollectionWithStartDate:(id)arg0 completion:(id)arg1 ;
-(void)_resourceQueue_endCollectionWithEndDate:(id)arg0 completion:(id)arg1 ;
-(void)_resourceQueue_finishWorkoutWithCompletion:(id)arg0 ;
-(void)_resourceQueue_removeMetadata:(id)arg0 completion:(id)arg1 ;
-(void)_resourceQueue_setStatisticsComputationMethod:(NSInteger)arg0 forType:(id)arg1 ;
-(void)_resourceQueue_setStatisticsMergeStrategy:(NSUInteger)arg0 forType:(id)arg1 ;
-(void)_resourceQueue_updateActivityWithUUID:(id)arg0 addMetadata:(id)arg1 completion:(id)arg2 ;
-(void)_resourceQueue_updateActivityWithUUID:(id)arg0 endDate:(id)arg1 completion:(id)arg2 ;
-(void)_resourceQueue_updateDevice:(id)arg0 ;
-(void)_resourceQueue_updateEvents:(id)arg0 ;
-(void)_restoreRecoveredSeriesBuildersWithCompletion:(id)arg0 ;
-(void)_setStatisticsComputationMethod:(NSInteger)arg0 forType:(id)arg1 ;
-(void)_setStatisticsMergeStrategy:(NSUInteger)arg0 forType:(id)arg1 ;
-(void)addMetadata:(id)arg0 completion:(id)arg1 ;
-(void)addSamples:(id)arg0 completion:(id)arg1 ;
-(void)addWorkoutActivity:(id)arg0 completion:(id)arg1 ;
-(void)addWorkoutEvents:(id)arg0 completion:(id)arg1 ;
-(void)beginCollectionWithStartDate:(id)arg0 completion:(id)arg1 ;
-(void)clientRemote_didBeginActivity:(id)arg0 ;
-(void)clientRemote_didChangeElapsedTimeBasisWithStartDate:(id)arg0 endDate:(id)arg1 ;
-(void)clientRemote_didEndActivity:(id)arg0 ;
-(void)clientRemote_didFailWithError:(id)arg0 ;
-(void)clientRemote_didFinishRecovery;
-(void)clientRemote_didRecoverSeriesBuilders:(id)arg0 ;
-(void)clientRemote_didUpdateActivities:(id)arg0 ;
-(void)clientRemote_didUpdateEvents:(id)arg0 ;
-(void)clientRemote_didUpdateMetadata:(id)arg0 ;
-(void)clientRemote_didUpdateStatistics:(id)arg0 ;
-(void)clientRemote_finishedWorkout:(id)arg0 ;
-(void)clientRemote_stateDidChange:(NSInteger)arg0 startDate:(id)arg1 endDate:(id)arg2 ;
-(void)clientRemote_synchronizeWithCompletion:(id)arg0 ;
-(void)connectionInterrupted;
-(void)connectionInvalidated;
-(void)discardWorkout;
-(void)endCollectionWithEndDate:(id)arg0 completion:(id)arg1 ;
-(void)finishWorkoutWithCompletion:(id)arg0 ;
-(void)stateMachine:(id)arg0 didEnterState:(id)arg1 date:(id)arg2 error:(id)arg3 ;
-(void)stateMachine:(id)arg0 didTransition:(id)arg1 fromState:(id)arg2 toState:(id)arg3 date:(id)arg4 error:(id)arg5 ;
-(void)unitTest_setFailureHandler:(id)arg0 ;
-(void)unitTest_setRecoveryFinishedHandler:(id)arg0 ;
-(void)unitTest_setServerStateChangeHandler:(id)arg0 ;
-(void)updateActivityWithUUID:(id)arg0 addMedatata:(id)arg1 completion:(id)arg2 ;
-(void)updateActivityWithUUID:(id)arg0 endDate:(id)arg1 completion:(id)arg2 ;


@end


#endif