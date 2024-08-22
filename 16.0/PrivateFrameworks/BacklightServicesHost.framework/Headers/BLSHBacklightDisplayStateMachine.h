// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSHBACKLIGHTDISPLAYSTATEMACHINE_H
#define BLSHBACKLIGHTDISPLAYSTATEMACHINE_H

@class NSString;
@protocol BLSCBDisplayStateDelegate, BLSHWatchdogDelegate, BSInvalidatable, BLSHBacklightOSInterfaceProviding, BLSHBacklightDisplayStateMachineDelegate;

#import <Foundation/Foundation.h>


@interface BLSHBacklightDisplayStateMachine : NSObject <BLSCBDisplayStateDelegate, BLSHWatchdogDelegate>

 {
    id<BSInvalidatable> *_watchdogTimer;
    os_unfair_lock_s _lock;
    id<BLSHBacklightOSInterfaceProviding> *_osInterface;
    int _lock_sequenceNumber;
    ? _lock_displayRampOperation;
    NSInteger _lock_prewarmingDisplayMode;
    NSInteger _lock_lastSteadyStateDisplayMode;
    NSInteger _lock_completedCBDisplayMode;
    ? _lock_cbDisplayModeTransitionOperation;
    ? _lock_cbFlipbookStateChangeOperation;
    NSInteger _lock_completedCBFlipbookState;
    BOOL _lock_updatingCA;
    BOOL _lock_isPrewarmingDisplayMode;
    NSUInteger _stateHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<BLSHBacklightDisplayStateMachineDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger displayMode;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger lastSteadyStateDisplayMode;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTransitioningDisplayMode) BOOL transitioningDisplayMode;


-(id)abortContext;
-(id)identifier;
-(id)initWithDelegate:(id)arg0 platformProvider:(id)arg1 osInterfaceProvider:(id)arg2 ;
-(void)dealloc;
-(void)osInterfaceProvider:(id)arg0 didCompleteSwitchToFlipbookState:(NSInteger)arg1 withError:(id)arg2 ;
-(void)osInterfaceProvider:(id)arg0 didCompleteTransitionToDisplayMode:(NSInteger)arg1 withError:(id)arg2 ;
-(void)prewarmForDisplayMode:(NSInteger)arg0 ;


@end


#endif