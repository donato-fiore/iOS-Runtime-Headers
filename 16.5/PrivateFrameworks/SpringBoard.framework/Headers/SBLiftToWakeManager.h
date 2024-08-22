// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBLIFTTOWAKEMANAGER_H
#define SBLIFTTOWAKEMANAGER_H

@class NSString;
@protocol CSExternalEventHandling, SBLiftToWakeObserver, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "SBBacklightController.h"
#import "SBIdleTimerGlobalCoordinator.h"
#import "SBLiftToWakeController.h"
#import "SBLockScreenManager.h"
#import "SBMainDisplayPolicyAggregator.h"

@interface SBLiftToWakeManager : NSObject <CSExternalEventHandling, SBLiftToWakeObserver, BSInvalidatable>

 {
    BOOL _observing;
    BOOL _significantUserInteractionOccuredSinceWake;
    BOOL _invalidated;
}


@property (retain, nonatomic, getter=_backlightController, setter=_setBacklightController:) SBBacklightController *backlightController; // ivar: _accessor_backlightController
@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=_gestureWokeScreen, setter=_setGestureWokeScreen:) BOOL gestureWokeScreen; // ivar: _gestureWokeScreen
@property (readonly) NSUInteger hash;
@property (retain, nonatomic, getter=_idleTimerCoordinator, setter=_setIdleTimerCoordinator:) SBIdleTimerGlobalCoordinator *idleTimerCoordinator; // ivar: _accessor_idleTimerCoordinator
@property (retain, nonatomic, getter=_liftToWakeController, setter=_setLiftToWakeController:) SBLiftToWakeController *liftToWakeController; // ivar: _liftToWakeController
@property (retain, nonatomic, getter=_lockScreenManager, setter=_setLockScreenManager:) SBLockScreenManager *lockScreenManager; // ivar: _accessor_lockScreenManager
@property (readonly, nonatomic) NSInteger participantState;
@property (retain, nonatomic, getter=_policyAggregator, setter=_setPolicyAggregator:) SBMainDisplayPolicyAggregator *policyAggregator; // ivar: _accessor_policyAggregator
@property (readonly) Class superclass;


-(BOOL)_isLockScreenMainPageVisible;
-(BOOL)handleEvent:(id)arg0 ;
-(BOOL)wouldHandleButtonEvent:(id)arg0 ;
-(id)_initWithLiftToWakeController:(id)arg0 ;
-(id)init;
-(void)_backlightWillTurnOn:(id)arg0 ;
-(void)_ignoredTransition:(NSInteger)arg0 ;
-(void)conformsToCSEventHandling;
-(void)dealloc;
-(void)invalidate;
-(void)liftToWakeController:(id)arg0 didObserveTransition:(NSInteger)arg1 deviceOrientation:(NSInteger)arg2 ;


@end


#endif