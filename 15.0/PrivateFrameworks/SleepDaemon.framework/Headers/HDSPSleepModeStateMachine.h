// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSPSLEEPMODESTATEMACHINE_H
#define HDSPSLEEPMODESTATEMACHINE_H

@class HKSPPersistentStateMachine, NSDate, NSString, HKSPSleepScheduleModel;
@protocol HDSPSleepModeStateMachineDelegate, HDSPSleepModeStateMachineInfoProvider, HDSPSleepModeStateMachineEventHandler, NAScheduler;


#import "HDSPSleepModeAutomatedOffFromManualState.h"
#import "HDSPSleepModeAutomatedOffState.h"
#import "HDSPSleepModeBedtimeState.h"
#import "HDSPSleepModeManualBedtimeState.h"
#import "HDSPSleepModeManualOffState.h"
#import "HDSPSleepModeOffState.h"
#import "HDSPSleepModeWindDownState.h"

@interface HDSPSleepModeStateMachine : HKSPPersistentStateMachine <HDSPSleepModeStateMachineDelegate, HDSPSleepModeStateMachineInfoProvider, HDSPSleepModeStateMachineEventHandler>



@property (readonly, nonatomic) HDSPSleepModeAutomatedOffFromManualState *automatedOffFromManualState; // ivar: _automatedOffFromManualState
@property (readonly, nonatomic) HDSPSleepModeAutomatedOffState *automatedOffState; // ivar: _automatedOffState
@property (readonly, nonatomic) HDSPSleepModeBedtimeState *bedtimeState; // ivar: _bedtimeState
@property (readonly, nonatomic) NSObject<NAScheduler> *callbackScheduler;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<HDSPSleepModeStateMachineDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasSleepFocusMode;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<HDSPSleepModeStateMachineInfoProvider> *infoProvider;
@property (readonly, nonatomic) HDSPSleepModeManualBedtimeState *manualBedtimeState; // ivar: _manualBedtimeState
@property (readonly, nonatomic) HDSPSleepModeManualOffState *manualOffState; // ivar: _manualOffState
@property (readonly, nonatomic) HDSPSleepModeOffState *offState; // ivar: _offState
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) NSUInteger sleepScheduleState;
@property (readonly) Class superclass;
@property (readonly, nonatomic) HDSPSleepModeWindDownState *windDownState; // ivar: _windDownState


-(BOOL)shouldGoIntoSleepModeDuringState:(NSUInteger)arg0 ;
-(NSUInteger)loggingCategory;
-(id)initWithIdentifier:(id)arg0 persistence:(id)arg1 delegate:(id)arg2 infoProvider:(id)arg3 currentDateProvider:(id)arg4 ;
-(void)automationTurnedOffSleepModeWithReason:(NSUInteger)arg0 ;
-(void)automationTurnedOnSleepModeWithReason:(NSUInteger)arg0 ;
-(void)sleepFocusModeDidChange;
-(void)sleepModeDidChange:(NSInteger)arg0 previousMode:(NSInteger)arg1 reason:(NSUInteger)arg2 ;
-(void)sleepScheduleStateChangedToBedtime:(NSUInteger)arg0 fromState:(NSUInteger)arg1 ;
-(void)sleepScheduleStateChangedToDisabledFromState:(NSUInteger)arg0 ;
-(void)sleepScheduleStateChangedToWakeUp:(NSUInteger)arg0 ;
-(void)sleepScheduleStateChangedToWindDown:(NSUInteger)arg0 fromState:(NSUInteger)arg1 ;
-(void)userTurnedOffSleepModeWithReason:(NSUInteger)arg0 ;
-(void)userTurnedOnSleepModeWithReason:(NSUInteger)arg0 ;


@end


#endif