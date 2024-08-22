// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMCONTINUITYCAPTURESTATEMACHINE_H
#define CMCONTINUITYCAPTURESTATEMACHINE_H

@class NSMutableArray, NSMutableDictionary;
@protocol CMContinuityCaptureStateMachineActionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CMContinuityCaptureState.h"

@interface CMContinuityCaptureStateMachine : NSObject {
    NSMutableArray *_transactions;
    NSMutableArray *_previousStates;
    NSMutableDictionary *_events;
    NSMutableArray *_eventQueue;
    id<CMContinuityCaptureStateMachineActionDelegate> *_actionDelegate;
}


@property (retain, nonatomic) CMContinuityCaptureState *currentState; // ivar: _currentState
@property (retain, nonatomic) NSMutableArray *deferredEvents; // ivar: _deferredEvents
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(BOOL)postEventWithName:(id)arg0 data:(id)arg1 ;
-(BOOL)postSameStateAction:(id)arg0 transition:(id)arg1 event:(id)arg2 ;
-(BOOL)postStateChangeAction:(id)arg0 transition:(id)arg1 event:(id)arg2 ;
-(BOOL)stateMachineCaptureSessionGuard;
-(BOOL)stateMachineConnectionChangeGuard;
-(BOOL)stateMachineImageCaptureGuard;
-(BOOL)stateMachinePauseGuard;
-(BOOL)stateMachineSidecarConnectGuard;
-(BOOL)stateMachineStreamGuard;
-(NSUInteger)actionTypeForEventName:(id)arg0 ;
-(id)description;
-(id)eventForName:(id)arg0 ;
-(id)getDeferredEventsToPostForState:(id)arg0 ;
-(id)getNewStateAfterPostingDeferredEvents:(id)arg0 deferredEventsToPost:(*id)arg1 ;
-(id)initWithActionDelegate:(id)arg0 queue:(id)arg1 ;
-(void)_enqueueEventWithNameToPost:(id)arg0 data:(id)arg1 ;
-(void)_notifyCompletion:(id)arg0 ;
-(void)addEvents:(id)arg0 ;
-(void)addStateTransitions:(id)arg0 ;
-(void)aggregateEvents;
-(void)enqueueDataEventWithNameToPost:(id)arg0 data:(id)arg1 ;
-(void)enqueueEventWithNameToPost:(id)arg0 ;
-(void)enqueueEventWithNameToPostOnCurrentQueue:(id)arg0 ;
-(void)notifyCompletion:(id)arg0 ;
-(void)setupStateMachineForAgent;
-(void)setupStateMachineForExtension;
-(void)stateMachineDisableReconnect;
-(void)stateMachineEnterDisable:(NSUInteger)arg0 ;
-(void)stateMachineEnterPause:(NSUInteger)arg0 ;
-(void)stateMachineExitPause:(NSUInteger)arg0 ;
-(void)stateMachineForceRestartStream:(NSUInteger)arg0 ;
-(void)stateMachineImageCapture;
-(void)stateMachineNotifyCompletion:(id)arg0 ;
-(void)stateMachinePause:(NSUInteger)arg0 ;
-(void)stateMachineRestartStream:(NSUInteger)arg0 data:(id)arg1 ;
-(void)stateMachineResume:(NSUInteger)arg0 ;
-(void)stateMachineSidecarConnect:(NSUInteger)arg0 ;
-(void)stateMachineSidecarDisconnect:(NSUInteger)arg0 ;
-(void)stateMachineStartStream:(NSUInteger)arg0 ;
-(void)stateMachineStopStream:(NSUInteger)arg0 ;
-(void)stateMachineStreamDisable:(NSUInteger)arg0 ;
-(void)stateMachineStreamEnable:(NSUInteger)arg0 ;
-(void)stateMachineTerminate;
-(void)stateMachineUserDisconnect:(NSUInteger)arg0 ;
-(void)stateMachineUserDisconnectPendingNotification:(NSUInteger)arg0 ;
-(void)stateMachineUserReconnect:(NSUInteger)arg0 ;


@end


#endif