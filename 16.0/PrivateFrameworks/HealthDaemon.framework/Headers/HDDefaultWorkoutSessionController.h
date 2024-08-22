// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDDEFAULTWORKOUTSESSIONCONTROLLER_H
#define HDDEFAULTWORKOUTSESSIONCONTROLLER_H

@class HKWorkoutActivity, NSSet, NSString;
@protocol HDWorkoutEventCollectorDelegate, HDWorkoutSessionController, HDWorkoutSessionStateController, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDProfile.h"
#import "HDWorkoutSessionConfiguration.h"
#import "HDSessionAssertionGroup.h"
#import "HDWorkoutEventsManager.h"
#import "HDBiomeInterface.h"

@interface HDDefaultWorkoutSessionController : NSObject <HDWorkoutEventCollectorDelegate, HDWorkoutSessionController>

 {
    HDProfile *_profile;
    id<HDWorkoutSessionStateController> *_sessionStateController;
    NSObject<OS_dispatch_queue> *_queue;
    HDWorkoutSessionConfiguration *_sessionConfiguration;
    HDSessionAssertionGroup *_assertionGroup;
    HDWorkoutEventsManager *_eventsManager;
    NSInteger _sessionServerState;
    HDBiomeInterface *_bmInterface;
    HKWorkoutActivity *_currentActivity;
    NSSet *_collectedTypes;
    id *_hkTestTransitionCompletionHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)recoveryIdentifier;
+(void)willFinishSessionWithRecoveryData:(id)arg0 profile:(id)arg1 ;
-(BOOL)enableAutomaticDetectionForActivityConfigurations:(id)arg0 ;
-(id)initWithProfile:(id)arg0 sessionConfiguration:(id)arg1 sessionStateController:(id)arg2 recoveryState:(id)arg3 ;
-(void)_lowPowerModeStateChanged:(id)arg0 ;
-(void)beginNewActivity:(id)arg0 ;
-(void)dealloc;
-(void)endCurrentActivity:(id)arg0 ;
-(void)fakeActivityDetection:(id)arg0 workoutActivity:(id)arg1 ;
-(void)hktest_setStateTransitionCompletionHandler:(id)arg0 ;
-(void)receivedWorkoutEvent:(id)arg0 ;
-(void)receivedWorkoutEvent:(id)arg0 forWorkoutActivity:(id)arg1 ;
-(void)unitTest_setCMWorkoutManager:(id)arg0 ;
-(void)unitTest_suggestActivity:(id)arg0 ;
-(void)workoutSessionServer:(id)arg0 accumulatorDidChange:(id)arg1 ;
-(void)workoutSessionServer:(id)arg0 didChangeConfiguration:(id)arg1 ;
-(void)workoutSessionServer:(id)arg0 didTransitionFromState:(NSInteger)arg1 toState:(NSInteger)arg2 date:(id)arg3 ;


@end


#endif