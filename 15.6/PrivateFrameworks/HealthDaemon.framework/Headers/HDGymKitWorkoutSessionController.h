// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDGYMKITWORKOUTSESSIONCONTROLLER_H
#define HDGYMKITWORKOUTSESSIONCONTROLLER_H

@class NSUUID;
@protocol HDFitnessMachineSessionObserver, HDWorkoutSessionController, HDWorkoutSessionStateController, OS_dispatch_queue, HDWorkoutDataAccumulator;

#import <Foundation/Foundation.h>

#import "HDProfile.h"
#import "HDDefaultWorkoutSessionController.h"

@interface HDGymKitWorkoutSessionController : NSObject <HDFitnessMachineSessionObserver, HDWorkoutSessionController, HDWorkoutSessionStateController>

 {
    HDProfile *_profile;
    id<HDWorkoutSessionStateController> *_sessionStateController;
    NSObject<OS_dispatch_queue> *_queue;
    HDDefaultWorkoutSessionController *_defaultSessionController;
    NSUUID *_fitnessMachineSessionUUID;
    BOOL _acceptsDataAccumulators;
    id<HDWorkoutDataAccumulator> *_currentAccumulator;
}


@property (readonly, nonatomic) NSObject<HDWorkoutDataAccumulator> *workoutDataAccumulator;


+(id)recoveryIdentifier;
+(void)willFinishSessionWithRecoveryData:(id)arg0 profile:(id)arg1 ;
-(BOOL)endWithError:(*id)arg0 ;
-(BOOL)pauseWithError:(*id)arg0 ;
-(BOOL)prepareWithError:(*id)arg0 ;
-(BOOL)resumeWithError:(*id)arg0 ;
-(BOOL)startActivityWithDate:(id)arg0 error:(*id)arg1 ;
-(BOOL)stopActivityWithDate:(id)arg0 error:(*id)arg1 ;
-(BOOL)storeSessionControllerState:(id)arg0 forRecoveryIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)initWithProfile:(id)arg0 sessionConfiguration:(id)arg1 sessionStateController:(id)arg2 recoveryState:(id)arg3 ;
-(void)autoPauseWithDate:(id)arg0 ;
-(void)autoResumeWithDate:(id)arg0 ;
-(void)endHeartRateRecovery;
-(void)finish;
-(void)finishAggregationWithDate:(id)arg0 ;
-(void)fitnessMachineSessionUUID:(id)arg0 updatedRecoveryConfiguration:(id)arg1 ;
-(void)generateConfigurationUpdate:(id)arg0 ;
-(void)generateError:(id)arg0 ;
-(void)generateEvent:(id)arg0 ;
-(void)generateMetadata:(id)arg0 ;
-(void)hktest_setStateTransitionCompletionHandler:(id)arg0 ;
-(void)unitTest_setCMWorkoutManager:(id)arg0 ;
-(void)workoutSessionServer:(id)arg0 accumulatorDidChange:(id)arg1 ;
-(void)workoutSessionServer:(id)arg0 didChangeConfiguration:(id)arg1 ;
-(void)workoutSessionServer:(id)arg0 didTransitionFromState:(NSInteger)arg1 toState:(NSInteger)arg2 date:(id)arg3 ;


@end


#endif