// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDWORKOUTMANAGER_H
#define HDWORKOUTMANAGER_H

@class HDAssertion, NSMutableDictionary, NSHashTable, HKObserverSet, NSMutableArray, NSString;
@protocol HDDevicePowerObserver, HDDiagnosticObject, HDProfileReadyObserver, HDWorkoutDataAccumulatorObserver, HDWorkoutSessionObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDWorkoutSessionServer.h"
#import "HDWatchAppStateMonitor.h"
#import "HDAlertSuppressor.h"
#import "HDLocationManager.h"
#import "HDWorkoutLocationSmoother.h"
#import "HDProfile.h"

@interface HDWorkoutManager : NSObject <HDDevicePowerObserver, HDDiagnosticObject, HDProfileReadyObserver, HDWorkoutDataAccumulatorObserver, HDWorkoutSessionObserver>

 {
    HDWorkoutSessionServer *_currentWorkout;
    HDAssertion *_currentWorkoutAssertion;
    HDWorkoutSessionServer *_nextWorkout;
    NSMutableDictionary *_sessionServers;
    NSMutableDictionary *_sessionCreationHandlers;
    NSHashTable *_observerTable;
    HKObserverSet *_sessionObservers;
    HDWatchAppStateMonitor *_appStateMonitor;
    BOOL _hasPerformedPostLaunchSessionRecovery;
    NSMutableArray *_postLaunchRecoveryBlocks;
    NSObject<OS_dispatch_queue> *_postLaunchRecoveryCallbackQueue;
    HKObserverSet *_currentWorkoutObservers;
}


@property (readonly, nonatomic) HDAlertSuppressor *alertSuppressor; // ivar: _alertSuppressor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isInHeartRateRecovery;
@property (readonly, nonatomic) HDLocationManager *locationManager; // ivar: _locationManager
@property (retain, nonatomic) HDWorkoutLocationSmoother *locationSmoother; // ivar: _locationSmoother
@property (readonly, weak, nonatomic) HDProfile *profile; // ivar: _profile
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(BOOL)finishAllWorkoutsForClient:(id)arg0 error:(*id)arg1 ;
-(BOOL)hasAnyActiveWorkouts;
-(BOOL)isPowerSavingSupportedForCurrentActivity;
-(NSInteger)currentWorkoutLocationType;
-(NSUInteger)currentWorkoutActivityType;
-(id)currentWorkoutClient;
-(id)currentWorkoutSessionServer;
-(id)diagnosticDescription;
-(id)initWithProfile:(id)arg0 ;
-(id)newBiomeInterface;
-(id)recoveredWorkoutSessionServerWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)sessionServerWithConfiguration:(id)arg0 sessionUUID:(id)arg1 taskServer:(id)arg2 error:(*id)arg3 ;
-(id)unitTest_currentWorkoutSession;
-(void)_receivedStartWorkoutAppRequest:(id)arg0 completion:(id)arg1 ;
// -(void)_sendStartWorkoutAppResponse:(id)arg0 error:(unk)arg1  ;
-(void)_startWatchAppWithWorkoutConfiguration:(id)arg0 client:(id)arg1 completion:(id)arg2 ;
-(void)addWorkoutEventObserver:(id)arg0 ;
-(void)addWorkoutSessionObserver:(id)arg0 queue:(id)arg1 ;
-(void)dealloc;
-(void)devicePowerMonitor:(id)arg0 primaryPowerSourceIsCharging:(BOOL)arg1 ;
-(void)endHeartRateRecovery;
-(void)generatePauseOrResumeRequestWithCompletion:(id)arg0 ;
-(void)getCurrentWorkoutSnapshotWithCompletion:(id)arg0 ;
-(void)hk_fakeLapEventWithDate:(id)arg0 strokeStyle:(NSInteger)arg1 ;
-(void)hk_fakeStopEventWithDate:(id)arg0 ;
-(void)pauseActiveWorkoutsWithCompletion:(id)arg0 ;
-(void)performWhenPostLaunchSessionRecoveryHasCompleted:(id)arg0 ;
-(void)profileDidBecomeReady:(id)arg0 ;
-(void)receivedStartWorkoutAppRequest:(id)arg0 completion:(id)arg1 ;
-(void)recoverWorkoutSessionForClient:(id)arg0 server:(id)arg1 completion:(id)arg2 ;
-(void)registerCurrentWorkoutObserver:(id)arg0 ;
-(void)removeWorkoutEventObserver:(id)arg0 ;
-(void)removeWorkoutSessionObserver:(id)arg0 ;
-(void)sessionServerFromSessionIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)startWatchAppWithWorkoutConfiguration:(id)arg0 client:(id)arg1 completion:(id)arg2 ;
-(void)unitTest_finishAllDetachedWorkoutBuilders;
-(void)unitTest_smoothRoute:(id)arg0 withSmoother:(id)arg1 completion:(id)arg2 ;
-(void)unregisterCurrentWorkoutObserver:(id)arg0 ;
-(void)workoutSession:(id)arg0 didChangeToState:(NSInteger)arg1 fromState:(NSInteger)arg2 date:(id)arg3 ;
-(void)workoutSession:(id)arg0 didFailWithError:(id)arg1 ;
-(void)workoutSession:(id)arg0 didGenerateEvent:(id)arg1 ;
-(void)workoutSession:(id)arg0 didUpdateControllerStateForRecoveryIdentifier:(id)arg1 ;
-(void)workoutSession:(id)arg0 didUpdateDataAccumulator:(id)arg1 ;


@end


#endif