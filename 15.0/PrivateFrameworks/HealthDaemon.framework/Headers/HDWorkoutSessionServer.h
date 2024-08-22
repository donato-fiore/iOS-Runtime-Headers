// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDWORKOUTSESSIONSERVER_H
#define HDWORKOUTSESSIONSERVER_H

@class HKDataFlowLink, HKObserverSet, _HKExpiringCompletionTimer, BKSProcessAssertion, HKStateMachine, _HKCurrentWorkoutSnapshot, NSString, HKSource, NSUUID, NSDate, HKWorkoutConfiguration;
@protocol HKDataFlowLinkProcessor, HKStateMachineDelegate, HDWorkoutSessionStateController, HDWorkoutDataSource, OS_dispatch_queue, HDWorkoutSessionController, OS_dispatch_source, HDWorkoutDataAccumulator;

#import <Foundation/Foundation.h>

#import "HDProfile.h"
#import "HDWorkoutManager.h"
#import "HDWorkoutSessionEntity.h"
#import "HDHealthStoreClient.h"
#import "HDWorkoutSessionTaskServer.h"

@interface HDWorkoutSessionServer : NSObject <HKDataFlowLinkProcessor, HKStateMachineDelegate, HDWorkoutSessionStateController, HDWorkoutDataSource>

 {
    HDProfile *_profile;
    HDWorkoutManager *_workoutManager;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_persistenceQueue;
    HKDataFlowLink *_workoutDataFlowLink;
    HKObserverSet *_observers;
    id<HDWorkoutSessionController> *_sessionController;
    _HKExpiringCompletionTimer *_invalidationTimer;
    BKSProcessAssertion *_invalidationAssertion;
    HDWorkoutSessionEntity *_persistentEntity;
    CGFloat _stopEventGenerationWaitInterval;
    HKStateMachine *_stateMachine;
    HKStateMachine *_targetStateMachine;
    BOOL _hasFailed;
    _HKCurrentWorkoutSnapshot *_currentWorkoutSnapshot;
    NSObject<OS_dispatch_source> *_latestActivityUpdateTimer;
}


@property (readonly, copy, nonatomic) NSString *applicationIdentifier; // ivar: _applicationIdentifier
@property (readonly, nonatomic) BOOL canBePaused;
@property (retain, nonatomic) HDHealthStoreClient *client; // ivar: _client
@property (readonly, copy, nonatomic) NSString *clientProcessBundleIdentifier; // ivar: _clientProcessBundleIdentifier
@property (readonly, copy, nonatomic) HKSource *clientSource; // ivar: _clientSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) BOOL isFirstParty;
@property (readonly, nonatomic) BOOL shouldStopPreviousSession;
@property (readonly, copy, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, nonatomic) NSInteger state;
@property (readonly, copy, nonatomic) NSDate *stopDate; // ivar: _stopDate
@property (readonly) Class superclass;
@property (weak, nonatomic) HDWorkoutSessionTaskServer *taskServer; // ivar: _taskServer
@property (readonly, copy, nonatomic) HKWorkoutConfiguration *workoutConfiguration; // ivar: _workoutConfiguration
@property (readonly, nonatomic) NSObject<HDWorkoutDataAccumulator> *workoutDataAccumulator;
@property (readonly) HKDataFlowLink *workoutDataFlowLink;
@property (readonly, copy) NSUUID *workoutDataProcessorUUID;


+(BOOL)finishAllWorkoutSessionsForClient:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(BOOL)finishAllWorkoutsExcludingSessions:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;
+(id)recoveredSessionServerWithProfile:(id)arg0 sessionUUID:(id)arg1 workoutManager:(id)arg2 error:(*id)arg3 ;
+(id)sessionIdentifierForRecoveryInProfile:(id)arg0 error:(*id)arg1 ;
+(void)unitTest_setDefaultStopEventGenerationWaitInterval:(CGFloat)arg0 ;
-(BOOL)endWithError:(*id)arg0 ;
-(BOOL)pauseWithError:(*id)arg0 ;
-(BOOL)prepareWithError:(*id)arg0 ;
-(BOOL)resumeWithError:(*id)arg0 ;
-(BOOL)setTargetState:(NSInteger)arg0 date:(id)arg1 error:(*id)arg2 ;
-(BOOL)startActivityWithDate:(id)arg0 error:(*id)arg1 ;
-(BOOL)stopActivityWithDate:(id)arg0 error:(*id)arg1 ;
-(BOOL)storeSessionControllerState:(id)arg0 forRecoveryIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)unitTest_updateLatestActivityDate:(id)arg0 ;
-(id)currentWorkoutSnapshot;
-(id)initWithProfile:(id)arg0 configuration:(id)arg1 sessionUUID:(id)arg2 workoutManager:(id)arg3 ;
-(id)taskServerConfigurationForRecoveryWithError:(*id)arg0 ;
-(void)addObserver:(id)arg0 queue:(id)arg1 ;
-(void)autoPauseWithDate:(id)arg0 ;
-(void)autoResumeWithDate:(id)arg0 ;
-(void)dealloc;
-(void)didBecomeCurrent;
-(void)didResignCurrentWithError:(id)arg0 ;
-(void)endHeartRateRecovery;
-(void)finish;
-(void)finishAggregationWithDate:(id)arg0 ;
-(void)generateConfigurationUpdate:(id)arg0 ;
-(void)generateError:(id)arg0 ;
-(void)generateEvent:(id)arg0 ;
-(void)generateMetadata:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)setAssociatedWorkoutBuilderEntity:(id)arg0 ;
-(void)stateMachine:(id)arg0 didEnterState:(id)arg1 date:(id)arg2 error:(id)arg3 ;
-(void)stateMachine:(id)arg0 didTransition:(id)arg1 fromState:(id)arg2 toState:(id)arg3 date:(id)arg4 error:(id)arg5 ;
-(void)stateMachine:(id)arg0 persistTransition:(id)arg1 ;
-(void)stateMachine:(id)arg0 willEnterState:(id)arg1 date:(id)arg2 error:(id)arg3 ;
-(void)unitTest_generateStopEvent;
-(void)unitTest_generateWorkoutConfigurationUpdate:(id)arg0 ;
-(void)unitTest_setCMWorkoutManager:(id)arg0 ;
-(void)unitTest_setSessionController:(id)arg0 ;
-(void)unitTest_setStopEventGenerationWaitInterval:(CGFloat)arg0 ;
-(void)workoutDataDestination:(id)arg0 didChangeFromState:(NSUInteger)arg1 toState:(NSUInteger)arg2 ;
-(void)workoutDataDestination:(id)arg0 didUpdateConfiguration:(id)arg1 ;
-(void)workoutDataDestination:(id)arg0 requestsDataFrom:(id)arg1 to:(id)arg2 ;
-(void)workoutDataDestination:(id)arg0 requestsFinalDataFrom:(id)arg1 to:(id)arg2 completion:(id)arg3 ;


@end


#endif