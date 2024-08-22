// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDFIRSTPARTYWORKOUTSESSIONCONTROLLER_H
#define HDFIRSTPARTYWORKOUTSESSIONCONTROLLER_H

@class NSString;
@protocol HDWorkoutSessionController, HDWorkoutSessionStateController, HDWorkoutDataAccumulator;

#import <Foundation/Foundation.h>

#import "HDDefaultWorkoutSessionController.h"

@interface HDFirstPartyWorkoutSessionController : NSObject <HDWorkoutSessionController, HDWorkoutSessionStateController>

 {
    id<HDWorkoutSessionStateController> *_sessionStateController;
    HDDefaultWorkoutSessionController *_defaultSessionController;
    NSInteger _currentState;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<HDWorkoutDataAccumulator> *workoutDataAccumulator;


+(id)recoveryIdentifier;
+(void)willFinishSessionWithRecoveryData:(id)arg0 profile:(id)arg1 ;
-(BOOL)enableAutomaticDetectionForActivityConfigurations:(id)arg0 ;
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
-(void)beginNewActivity:(id)arg0 ;
-(void)didBeginNewActivity:(id)arg0 ;
-(void)didDetectActivityChange:(id)arg0 ;
-(void)didEndCurrentActivity:(id)arg0 ;
-(void)endCurrentActivity:(id)arg0 ;
-(void)endHeartRateRecovery;
-(void)fakeActivityDetection:(id)arg0 workoutActivity:(id)arg1 ;
-(void)finish;
-(void)finishAggregationWithDate:(id)arg0 ;
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