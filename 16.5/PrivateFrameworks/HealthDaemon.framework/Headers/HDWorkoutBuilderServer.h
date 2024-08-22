// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDWORKOUTBUILDERSERVER_H
#define HDWORKOUTBUILDERSERVER_H

@class NSError, HKObserverSet, NSSet, NSMutableDictionary, NSMutableSet, HKDataFlowLink, HKStateMachine, HKWorkoutBuilderConfiguration, NSArray, NSDate, NSDateInterval, NSString, NSUUID;
@protocol HDWorkoutDataAccumulator, HKDataFlowLinkProcessor, HKStateMachineDelegate, HKWorkoutBuilderServerInterface, HDWorkoutDataDestination, HDTaskServerObserver, OS_dispatch_queue;


#import "HDStandardTaskServer.h"
#import "HDWorkoutBuilderEntity.h"
#import "HDWorkoutBuilderStatisticsCalculators.h"

@interface HDWorkoutBuilderServer : HDStandardTaskServer <HDWorkoutDataAccumulator, HKDataFlowLinkProcessor, HKStateMachineDelegate, HKWorkoutBuilderServerInterface, HDWorkoutDataDestination, HDTaskServerObserver>

 {
    os_unfair_lock_s _lock;
    uint8_t _invalidated;
    HDWorkoutBuilderEntity *_persistentEntity;
    NSError *_error;
    HKObserverSet *_dataAccumulatorObservers;
    HKObserverSet *_sampleObservers;
    NSSet *_quantityTypesIncludedWhilePaused;
    HDWorkoutBuilderStatisticsCalculators *_statisticsCalculators;
    NSMutableDictionary *_sourceOrderProvidersByType;
    NSMutableDictionary *_statisticsDataSourcesByType;
    NSMutableSet *_quantityTypesRequiringCalculatorInvalidation;
    HKDataFlowLink *_workoutDataFlowLink;
    NSSet *_expectedDataSourceUUIDs;
    HKStateMachine *_stateMachine;
    NSInteger _targetConstructionState;
    NSObject<OS_dispatch_queue> *_upstreamQueue;
    HKWorkoutBuilderConfiguration *_configuration;
    NSMutableDictionary *_metadata;
    NSArray *_workoutEvents;
    NSMutableDictionary *_workoutActivitiesByUUID;
    NSDate *_workoutStartDate;
    NSDate *_workoutEndDate;
    NSDateInterval *_dataInterval;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL invalidated;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<HDWorkoutDataAccumulator> *workoutDataAccumulator;
@property (readonly) NSUInteger workoutDataDestinationState;
@property (readonly) HKDataFlowLink *workoutDataFlowLink;
@property (readonly, copy) NSUUID *workoutDataProcessorUUID;


+(BOOL)finishAllDetachedWorkoutBuildersExcludingSessions:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(BOOL)finishAllWorkoutBuildersForClient:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(BOOL)validateConfiguration:(id)arg0 client:(id)arg1 error:(*id)arg2 ;
+(Class)configurationClass;
+(id)recoveredWorkoutBuilderConfigurationForClient:(id)arg0 sessionIdentifier:(id)arg1 builderIdentifierOut:(*id)arg2 profile:(id)arg3 error:(*id)arg4 ;
+(id)requiredEntitlements;
+(id)taskIdentifier;
+(void)finishDetachedBuilderForEntity:(id)arg0 sessionEndDate:(id)arg1 profile:(id)arg2 ;
-(BOOL)enumerateQuantitiesOfType:(id)arg0 error:(*id)arg1 handler:(id)arg2 ;
-(BOOL)enumerateSamplesOfType:(id)arg0 error:(*id)arg1 handler:(id)arg2 ;
-(id)currentEvents;
-(id)currentMetadata;
-(id)exportedInterface;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(id)remoteInterface;
-(id)startDate;
-(void)addDataAccumulationObserver:(id)arg0 ;
-(void)addMetadata:(id)arg0 dataSource:(id)arg1 ;
-(void)addOtherSamples:(id)arg0 dataSource:(id)arg1 ;
-(void)addQuantities:(id)arg0 dataSource:(id)arg1 ;
-(void)addSampleObserver:(id)arg0 ;
-(void)addWorkoutEvents:(id)arg0 dataSource:(id)arg1 ;
-(void)connectionConfigured;
-(void)connectionInvalidated;
-(void)didBeginActivity:(id)arg0 dataSource:(id)arg1 ;
-(void)didCreateTaskServer:(id)arg0 ;
-(void)didEndActivity:(id)arg0 dataSource:(id)arg1 ;
-(void)didInvalidateTaskServer:(id)arg0 ;
-(void)didSuggestActivity:(id)arg0 dataSource:(id)arg1 ;
-(void)remote_addDataSourcesWithIdentifiers:(id)arg0 ;
-(void)remote_addMetadata:(id)arg0 completion:(id)arg1 ;
-(void)remote_addSamples:(id)arg0 completion:(id)arg1 ;
-(void)remote_addWorkoutActivity:(id)arg0 completion:(id)arg1 ;
-(void)remote_addWorkoutEvents:(id)arg0 completion:(id)arg1 ;
-(void)remote_recoverWithCompletion:(id)arg0 ;
-(void)remote_removeDataSourcesWithIdentifiers:(id)arg0 ;
-(void)remote_removeMetadata:(id)arg0 completion:(id)arg1 ;
-(void)remote_setShouldCollectEvents:(BOOL)arg0 ;
-(void)remote_setStatisticsComputationMethod:(NSInteger)arg0 forType:(id)arg1 ;
-(void)remote_setStatisticsMergeStrategy:(NSUInteger)arg0 forType:(id)arg1 ;
-(void)remote_setTargetConstructionState:(NSInteger)arg0 startDate:(id)arg1 endDate:(id)arg2 completion:(id)arg3 ;
-(void)remote_updateActivityWithUUID:(id)arg0 addMetadata:(id)arg1 completion:(id)arg2 ;
-(void)remote_updateActivityWithUUID:(id)arg0 endDate:(id)arg1 completion:(id)arg2 ;
-(void)remote_updateDevice:(id)arg0 ;
-(void)removeDataAccumulationObserver:(id)arg0 ;
-(void)removeSampleObserver:(id)arg0 ;
-(void)stateMachine:(id)arg0 didEnterState:(id)arg1 date:(id)arg2 error:(id)arg3 ;
-(void)stateMachine:(id)arg0 didTransition:(id)arg1 fromState:(id)arg2 toState:(id)arg3 date:(id)arg4 error:(id)arg5 ;
-(void)updateWorkoutConfiguration:(id)arg0 dataSource:(id)arg1 ;


@end


#endif