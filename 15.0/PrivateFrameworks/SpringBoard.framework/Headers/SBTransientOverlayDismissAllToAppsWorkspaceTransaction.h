// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBTRANSIENTOVERLAYDISMISSALLTOAPPSWORKSPACETRANSACTION_H
#define SBTRANSIENTOVERLAYDISMISSALLTOAPPSWORKSPACETRANSACTION_H

@class NSArray;
@protocol BSInvalidatable;


#import "SBToAppsWorkspaceTransaction.h"
#import "SBAutoPIPWorkspaceTransaction.h"

@interface SBTransientOverlayDismissAllToAppsWorkspaceTransaction : SBToAppsWorkspaceTransaction {
    NSArray *_switcherTransitioningTransientOverlayViewControllers;
    SBAutoPIPWorkspaceTransaction *_autoPIPTransaction;
    id<BSInvalidatable> *_pipWindowLevelOverrideAssertionInvalidatable;
    BOOL _isUsingSwitcherAnimation;
    BOOL _beganDismissingTransientOverlays;
}




-(BOOL)_canBeInterrupted;
-(BOOL)_shouldAnimateTransition;
-(BOOL)_shouldResignActiveForAnimation;
-(BOOL)_shouldUseSwitcherDismissalAnimationForTransientOverlayViewController:(id)arg0 ;
-(BOOL)canInterruptForTransitionRequest:(id)arg0 ;
-(NSUInteger)_concurrentOverlayDismissalOptions;
-(NSUInteger)_serialOverlayPreDismissalOptions;
-(id)_setupAnimation;
-(id)initWithTransitionRequest:(id)arg0 ;
-(void)_begin;
-(void)_didComplete;
-(void)_handleDismissOverlaysCompletion;
-(void)_logForInterruptAttemptReason:(id)arg0 ;
-(void)_performDismissal;
-(void)dealloc;


@end


#endif