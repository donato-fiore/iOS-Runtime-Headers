// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SOSFLOW_H
#define SOSFLOW_H

@class PCPersistentTimer, NSTimer, HKHealthStore, NSUserDefaults, _HKMedicalIDData, NSHashTable;
@protocol SOSCoreAnalyticsReporting;

#import <Foundation/Foundation.h>


@interface SOSFlow : NSObject {
    PCPersistentTimer *_timer;
}


@property (retain, nonatomic) NSObject<SOSCoreAnalyticsReporting> *coreAnalyticsReporter; // ivar: _coreAnalyticsReporter
@property (nonatomic) NSInteger currentState; // ivar: _currentState
@property (nonatomic) BOOL didSeeUnresponsiveResting; // ivar: _didSeeUnresponsiveResting
@property (retain, nonatomic) NSTimer *flowStateHeartbeatTimer; // ivar: _flowStateHeartbeatTimer
@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (retain, nonatomic) NSUserDefaults *healthUserDefaults; // ivar: _healthUserDefaults
@property (nonatomic) BOOL isUserResponsive; // ivar: _isUserResponsive
@property (retain, nonatomic) _HKMedicalIDData *medicalIDData; // ivar: _medicalIDData
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (nonatomic) BOOL shouldIgnoreMotionCancel; // ivar: _shouldIgnoreMotionCancel
@property (readonly, nonatomic) NSInteger sosFlowTrigger; // ivar: _sosFlowTrigger
@property (nonatomic) NSUInteger sosFlowType; // ivar: _sosFlowType


+(BOOL)isInterruptibleState:(NSInteger)arg0 ;
+(BOOL)isInterruptingEvent:(NSUInteger)arg0 ;
+(BOOL)isPreCallState:(NSInteger)arg0 ;
+(BOOL)isTerminalState:(NSInteger)arg0 ;
+(BOOL)isTriggerMechanismUserInitiated:(NSInteger)arg0 ;
+(BOOL)needsHeartbeatForState:(NSInteger)arg0 ;
+(NSInteger)sosFlowStateForString:(id)arg0 ;
+(NSUInteger)sosFlowTypeForTriggerMechanism:(NSInteger)arg0 ;
+(id)validEventsforState:(NSInteger)arg0 ;
-(BOOL)canDeviceTriggerAutoDialForSOSFlowType:(NSUInteger)arg0 ;
-(BOOL)shouldShowMedicalID;
-(CGFloat)checkInTimeoutForSOSFlowType:(NSUInteger)arg0 ;
-(NSInteger)restingState;
-(id)initWithTriggerMechanism:(NSInteger)arg0 healthStore:(id)arg1 ;
-(void)_invalidateTimer;
-(void)_prefetchMedicalID;
-(void)addObserver:(id)arg0 ;
-(void)callFinished;
-(void)clearFlowStateHeartbeatTimer;
-(void)contactsCountdownDismissed;
-(void)countdownRequestedDial;
-(void)eventTriggered;
-(void)handleEmergencyCallInititated;
-(void)handleEmergencyFallback;
-(void)handleSOSFlowEvent:(NSUInteger)arg0 withMetaData:(id)arg1 ;
-(void)handleUserExited;
-(void)motionDidCancel;
-(void)removeObserver:(id)arg0 ;
-(void)startAnomalyFlow;
-(void)startFlowStateHeartbeatTimer;
-(void)startTimerToAutoDial;
-(void)timerFired:(id)arg0 ;
-(void)timerRequestsCountdownToAutoCall;
-(void)updateState:(NSInteger)arg0 ;
-(void)userDismissedCallCountdown;
-(void)userRespondedToConfirmationWith:(NSUInteger)arg0 ;
-(void)userRespondedToRestingStateWith:(NSInteger)arg0 ;
-(void)willHandleEvent:(NSUInteger)arg0 withMetaData:(id)arg1 ;


@end


#endif