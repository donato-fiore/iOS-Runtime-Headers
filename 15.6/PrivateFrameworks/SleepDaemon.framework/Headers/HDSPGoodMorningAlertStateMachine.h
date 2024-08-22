// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSPGOODMORNINGALERTSTATEMACHINE_H
#define HDSPGOODMORNINGALERTSTATEMACHINE_H

@class HKSPPersistentStateMachine, NSDate, NSString, HKSPSleepScheduleModel;
@protocol HDSPGoodMorningAlertStateMachineDelegate, HDSPGoodMorningAlertStateMachineInfoProvider, HDSPGoodMorningAlertStateMachineEventHandler, NAScheduler;


#import "HDSPGoodMorningAlertDisabledState.h"
#import "HDSPGoodMorningAlertPresentingState.h"
#import "HDSPGoodMorningAlertWaitingState.h"

@interface HDSPGoodMorningAlertStateMachine : HKSPPersistentStateMachine <HDSPGoodMorningAlertStateMachineDelegate, HDSPGoodMorningAlertStateMachineInfoProvider, HDSPGoodMorningAlertStateMachineEventHandler>



@property (readonly, nonatomic) NSObject<NAScheduler> *callbackScheduler;
@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<HDSPGoodMorningAlertStateMachineDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HDSPGoodMorningAlertDisabledState *disabledState; // ivar: _disabledState
@property (readonly, nonatomic) BOOL goodMorningAlertEnabled;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<HDSPGoodMorningAlertStateMachineInfoProvider> *infoProvider;
@property (readonly, nonatomic) BOOL isAppleWatch;
@property (readonly, nonatomic) BOOL isOnCharger;
@property (readonly, nonatomic) HDSPGoodMorningAlertPresentingState *presentingState; // ivar: _presentingState
@property (readonly, nonatomic) HKSPSleepScheduleModel *sleepScheduleModel;
@property (readonly, nonatomic) NSUInteger sleepScheduleState;
@property (readonly) Class superclass;
@property (readonly, nonatomic) HDSPGoodMorningAlertWaitingState *waitingState; // ivar: _waitingState


-(NSUInteger)loggingCategory;
-(id)initWithIdentifier:(id)arg0 persistence:(id)arg1 delegate:(id)arg2 infoProvider:(id)arg3 currentDateProvider:(id)arg4 ;
-(void)dismissAlertForGoodMorning;
-(void)goodMorningAlertTimedOut;
-(void)presentAlertForGoodMorning;
-(void)scheduleGoodMorningTimeOut;
-(void)unscheduleGoodMorningTimeOut;


@end


#endif