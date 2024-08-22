// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHBACKLIGHTTRANSITIONSTATEMACHINEABORTCONTEXT_H
#define BLSHBACKLIGHTTRANSITIONSTATEMACHINEABORTCONTEXT_H

@class BLSBacklightChangeEvent, NSString;
@protocol BLSHWatchdogAbortContext;

#import <Foundation/Foundation.h>

#import "BLSHBacklightAggregateState.h"
#import "BLSHBacklightMutableTargetState.h"
#import "BLSHPendingEnvironmentUpdateOperation.h"
#import "BLSHPendingUpdatePresentation.h"
#import "BLSHPendingUpdateToSpecifier.h"
#import "BLSHPendingUpdateDisplayMode.h"
#import "BLSHEnsureFlipbookCurrentOperation.h"
#import "BLSHBacklightEnvironmentStateMachine.h"

@interface BLSHBacklightTransitionStateMachineAbortContext : NSObject <BLSHWatchdogAbortContext>

 {
    BLSHBacklightAggregateState *_currentState;
    BLSHBacklightMutableTargetState *_targetState;
    BLSHPendingEnvironmentUpdateOperation *_pendingEventToPerform;
    BLSHPendingUpdatePresentation *_pendingUpdatePresentation;
    BLSHPendingUpdateToSpecifier *_pendingUpdateToSpecifier;
    BLSHPendingUpdateDisplayMode *_pendingUpdateDisplayMode;
    BLSHEnsureFlipbookCurrentOperation *_ensureFlipbookCurrentOperation;
    BLSBacklightChangeEvent *_queuedEventToPerform;
    BLSBacklightChangeEvent *_pendingPrewarmedEvent;
    BLSHBacklightEnvironmentStateMachine *_environmentStateMachine;
    BOOL _sleepRequested;
    BOOL _sleepImminent;
    CGFloat _timeInSleepImminent;
}


@property (readonly, nonatomic) NSUInteger abortReason; // ivar: _abortReason
@property (readonly, copy, nonatomic) NSString *abortReasonString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasEnsureFlipbookCurrent;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *void payload; // ivar: _payload
@property (readonly, nonatomic) unsigned int payloadSize; // ivar: _payloadSize
@property (readonly) Class superclass;


+(unsigned int)backlightChangeRequestExplanationIdentifierFromString:(id)arg0 ;
-(id)initWithCurrentState:(id)arg0 targetState:(id)arg1 pendingEventToPerform:(id)arg2 pendingUpdatePresentation:(id)arg3 pendingUpdateToSpecifier:(id)arg4 pendingUpdateDisplayMode:(id)arg5 ensureFlipbookCurrentOperation:(id)arg6 queuedEventToPerform:(id)arg7 pendingPrewarmedEvent:(id)arg8 environmentStateMachine:(id)arg9 sleepRequested:(BOOL)arg10 sleepImminent:(BOOL)arg11 timeInSleepImminent:(CGFloat)arg12 ;
-(void)_populatePayload;
-(void)dealloc;
-(void)setSleepImminentAbortReason;


@end


#endif