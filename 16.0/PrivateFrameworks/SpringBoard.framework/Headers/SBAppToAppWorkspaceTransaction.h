// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBAPPTOAPPWORKSPACETRANSACTION_H
#define SBAPPTOAPPWORKSPACETRANSACTION_H

@protocol OS_dispatch_group;


#import "SBToAppsWorkspaceTransaction.h"
#import "SBAutoPIPWorkspaceTransaction.h"
#import "SBUIAnimationController.h"

@interface SBAppToAppWorkspaceTransaction : SBToAppsWorkspaceTransaction {
    SBAutoPIPWorkspaceTransaction *_autoPIPTransaction;
    SBUIAnimationController *_animation;
    NSUInteger _autoPIPTransitionOrder;
    NSObject<OS_dispatch_group> *_pipDuringSwitchTransitionTasksGroup;
}


@property (nonatomic) BOOL preventWhitePointAdaptationStrengthUpdateOnComplete; // ivar: _preventWhitePointAdaptationStrengthUpdateOnComplete


-(BOOL)_canBeInterrupted;
-(BOOL)_hasPostAnimationTasks;
-(BOOL)_hasPreAnimationTasks;
-(BOOL)_shouldResignActiveForAnimation;
-(BOOL)_transitionWasCancelled;
-(BOOL)canInterruptForTransitionRequest:(id)arg0 ;
-(BOOL)shouldAnimateOrientationChangeOnCompletion;
-(BOOL)shouldPerformToAppStateCleanupOnCompletion;
-(NSUInteger)_concurrentOverlayDismissalOptions;
-(NSUInteger)_serialOverlayPreDismissalOptions;
-(id)_setupAnimation;
-(id)_setupAnimationFrom:(id)arg0 to:(id)arg1 ;
-(id)debugDescription;
-(id)initWithTransitionRequest:(id)arg0 ;
-(void)_animationDidRevealApplication;
-(void)_animationWillBegin:(BOOL)arg0 ;
-(void)_begin;
-(void)_beginTransition;
-(void)_cleanUpAfterAnimation;
-(void)_clearAnimation;
-(void)_didComplete;
-(void)_handleApplicationDidNotChange:(id)arg0 ;
-(void)_handleApplicationUpdateScenesTransactionFailed:(id)arg0 ;
-(void)_performPostAnimationTasksWithCompletion:(id)arg0 ;
-(void)_performPreAnimationTasksWithCompletion:(id)arg0 ;
-(void)dealloc;


@end


#endif