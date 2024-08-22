// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKWORKOUTSESSION_H
#define HKWORKOUTSESSION_H

@class NSDate, NSString, NSUUID;
@protocol _HKXPCExportable, HKStateMachineDelegate, NSSecureCoding, OS_dispatch_queue, HKWorkoutSessionDelegate;

#import <Foundation/Foundation.h>

#import "HKWorkoutSessionTaskConfiguration.h"
#import "HKTaskServerProxyProvider.h"
#import "HKLiveWorkoutBuilder.h"
#import "HKStateMachine.h"
#import "HKHealthStore.h"
#import "HKWorkoutConfiguration.h"

@interface HKWorkoutSession : NSObject <_HKXPCExportable, HKStateMachineDelegate, NSSecureCoding>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    id<HKWorkoutSessionDelegate> *_delegate;
    NSInteger _state;
    NSDate *_startDate;
    NSDate *_endDate;
    HKWorkoutSessionTaskConfiguration *_configuration;
    HKTaskServerProxyProvider *_proxyProvider;
    id<HKWorkoutSessionDelegate> *_strongDelegate;
    HKLiveWorkoutBuilder *_associatedWorkoutBuilder;
    HKStateMachine *_targetStateMachine;
}


@property (readonly) NSUInteger activityType;
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HKWorkoutSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSDate *endDate;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) BOOL isGymKitSession;
@property (readonly) NSInteger locationType;
@property (nonatomic) BOOL shouldStopPreviousSession;
@property (readonly) NSDate *startDate;
@property (readonly) NSInteger state;
@property (readonly) Class superclass;
@property (readonly, copy) HKWorkoutConfiguration *workoutConfiguration;


+(BOOL)_applicationHasRunningWorkout;
+(BOOL)supportsSecureCoding;
+(id)clientInterface;
+(id)serverInterface;
+(id)targetWorkoutSessionStateMachineForSessionUUID:(id)arg0 ;
+(void)_unitTest_clearAllRunningWorkouts;
-(BOOL)_queue_shouldAttemptRecovery;
-(id)_initWithHealthStore:(id)arg0 taskConfiguration:(id)arg1 error:(*id)arg2 ;
-(id)_privateDelegate;
-(id)associatedWorkoutBuilder;
-(id)associatedWorkoutBuilderWithDevice:(id)arg0 goalType:(NSUInteger)arg1 goal:(id)arg2 ;
-(id)exportedInterface;
-(id)initWithActivityType:(NSUInteger)arg0 locationType:(NSInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 error:(*id)arg1 ;
-(id)initWithHealthStore:(id)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(id)remoteInterface;
-(void)_queue_markRecoveryRequired;
-(void)_recoverWithCompletion:(id)arg0 ;
-(void)_setAssociatedWorkoutBuilder:(id)arg0 ;
-(void)_setupWithHealthStore:(id)arg0 ;
-(void)_unitTest_discardAssociatedWorkoutBuilder;
-(void)client_didChangeToState:(NSInteger)arg0 date:(id)arg1 ;
-(void)client_didFailWithError:(id)arg0 ;
-(void)client_didGenerateEvents:(id)arg0 ;
-(void)client_didUpdateStartDate:(id)arg0 endDate:(id)arg1 ;
-(void)client_didUpdateWorkoutConfiguration:(id)arg0 ;
-(void)client_synchronizeWithCompletion:(id)arg0 ;
-(void)connectionInterrupted;
-(void)connectionInvalidated;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)end;
-(void)endWithCompletion:(id)arg0 ;
-(void)pause;
-(void)pauseWithCompletion:(id)arg0 ;
-(void)prepare;
-(void)prepareWithCompletion:(id)arg0 ;
-(void)resume;
-(void)resumeWithCompletion:(id)arg0 ;
-(void)startActivity;
-(void)startActivityWithDate:(id)arg0 ;
-(void)startActivityWithDate:(id)arg0 completion:(id)arg1 ;
-(void)stateMachine:(id)arg0 didIgnoreEvent:(NSInteger)arg1 state:(id)arg2 ;
-(void)stateMachine:(id)arg0 didTransition:(id)arg1 fromState:(id)arg2 toState:(id)arg3 date:(id)arg4 error:(id)arg5 ;
-(void)stopActivity;
-(void)stopActivityWithDate:(id)arg0 ;
-(void)stopActivityWithDate:(id)arg0 completion:(id)arg1 ;


@end


#endif