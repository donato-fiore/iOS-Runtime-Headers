// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFLUIDSWITCHERGESTUREWORKSPACETRANSACTION_H
#define SBFLUIDSWITCHERGESTUREWORKSPACETRANSACTION_H

@class NSMutableSet, NSMutableDictionary, NSTimer, UIApplicationSceneDeactivationAssertion, NSString, NSUUID;
@protocol SBUIAnimationControllerObserver, SBSceneLayoutWorkspaceTransactionDelegate, SBWorkspaceApplicationSceneTransitionContextDelegate, SBViewMorphAnimatorObserver, SBFluidSwitcherGestureWorkspaceTransactionDelegate;


#import "SBSystemGestureWorkspaceTransaction.h"
#import "SBMainDisplayLayoutState.h"
#import "SBUISwitcherAnimationController.h"
#import "SBAutoPIPWorkspaceTransaction.h"
#import "SBMainWorkspaceTransaction.h"
#import "SBSceneLayoutWorkspaceTransaction.h"
#import "SBAppLayout.h"
#import "SBTransientOverlayViewController.h"
#import "SBFluidSwitcherViewController.h"

@interface SBFluidSwitcherGestureWorkspaceTransaction : SBSystemGestureWorkspaceTransaction <SBUIAnimationControllerObserver, SBSceneLayoutWorkspaceTransactionDelegate, SBWorkspaceApplicationSceneTransitionContextDelegate, SBViewMorphAnimatorObserver>

 {
    BOOL _calledBeginWithGesture;
    BOOL _hasActiveLayoutStateTransitionCoordinatorTransition;
    BOOL _hasCompletedFirstCACommitSinceTransactionBeganForPPT;
    NSInteger _numberOfAppLayoutsTraveledWithArcSwipe;
    CGFloat _digitizerSurfaceHeightForLastGestureEvent;
    BOOL _isPointerTouch;
    NSMutableSet *_sceneIdentifiersWithSceneUpdateTransactionsInProgress;
    NSMutableDictionary *_pendingSceneUpdateTransactionsBySceneIdentifier;
}


@property (retain, nonatomic) NSTimer *activateScenesTimer; // ivar: _activateScenesTimer
@property (retain, nonatomic) SBMainDisplayLayoutState *activeLayoutState; // ivar: _activeLayoutState
@property (retain, nonatomic) SBUISwitcherAnimationController *animationController; // ivar: _animationController
@property (retain, nonatomic) SBAutoPIPWorkspaceTransaction *autoPIPWorkspaceTransaction; // ivar: _autoPIPWorkspaceTransaction
@property (retain, nonatomic) UIApplicationSceneDeactivationAssertion *backgroundingScenesDeactivationAssertion; // ivar: _backgroundingScenesDeactivationAssertion
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBFluidSwitcherGestureWorkspaceTransactionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SBMainWorkspaceTransaction *finalRootTransaction; // ivar: _finalRootTransaction
@property (readonly, nonatomic) NSUUID *gestureID; // ivar: _gestureID
@property (readonly, nonatomic) BOOL hasCompletedAtLeastOneGesture; // ivar: _hasCompletedAtLeastOneGesture
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *layoutCompletion; // ivar: _layoutCompletion
@property (retain, nonatomic) SBMainDisplayLayoutState *originalLayoutState; // ivar: _originalLayoutState
@property (retain, nonatomic) SBSceneLayoutWorkspaceTransaction *sceneLayoutTransaction; // ivar: _sceneLayoutTransaction
@property (retain, nonatomic) SBAppLayout *selectedAppLayout; // ivar: _selectedAppLayout
@property (nonatomic) BOOL shouldCancelGestureUponInterruption; // ivar: _shouldCancelGestureUponInterruption
@property (readonly) Class superclass;
@property (retain, nonatomic) SBTransientOverlayViewController *switcherTransitioningTransientOverlayViewController; // ivar: _switcherTransitioningTransientOverlayViewController
@property (weak, nonatomic) SBFluidSwitcherViewController *switcherViewController; // ivar: _switcherViewController


-(BOOL)_canBeInterrupted;
-(BOOL)_sceneUpdateTransactionIsForLiveResize:(id)arg0 ;
-(BOOL)canInterruptForTransitionRequest:(id)arg0 ;
-(BOOL)isLiveResize;
-(BOOL)shouldSuppressMedusaKeyboardDuringGesture;
-(NSInteger)_gestureType;
-(id)_copiedTransitionRequestFromTransitionRequest:(id)arg0 ;
-(id)_createWorkspaceTransientOverlayForAppLayout:(id)arg0 ;
-(id)_currentGestureEventForGesture:(id)arg0 ;
-(id)_transitionRequestForApplicationTransitionContext:(id)arg0 eventLabel:(id)arg1 ;
-(id)_transitionRequestForSwitcherTransitionRequest:(id)arg0 eventLabel:(id)arg1 ;
-(id)createSceneEntityForHandle:(id)arg0 ;
-(id)initWithTransitionRequest:(id)arg0 fluidSwitcherViewController:(id)arg1 delegate:(id)arg2 ;
-(id)layoutStateForApplicationTransitionContext:(id)arg0 ;
-(id)previousLayoutStateForApplicationTransitionContext:(id)arg0 ;
-(struct CGRect )applicationTransitionContext:(id)arg0 frameForApplicationSceneEntity:(id)arg1 ;
-(void)_acquireBackgroundingScenesDeactivationAssertionForTransitionRequest:(id)arg0 ;
-(void)_addChildWorkspaceTransaction:(id)arg0 ;
-(void)_addWaitForSceneLayoutTransitionTransaction:(id)arg0 forLeafAnimationControllers:(id)arg1 ;
-(void)_begin;
-(void)_beginWithGesture:(id)arg0 ;
-(void)_childTransactionDidComplete:(id)arg0 ;
-(void)_didComplete;
-(void)_didInterruptWithReason:(id)arg0 ;
-(void)_failRunningLayoutStateTransition;
-(void)_finishWithCompletionType:(NSInteger)arg0 ;
-(void)_finishWithGesture:(id)arg0 ;
-(void)_runSceneLayoutTransactionForTransitionRequest:(id)arg0 updateScenes:(BOOL)arg1 ;
-(void)_startSceneUpdateTransaction:(id)arg0 forSceneIdentifier:(id)arg1 ;
-(void)_switcherGestureDidUpdate:(id)arg0 ;
-(void)_updateDigitizerSurfaceDimensions;
-(void)_updatePPTsForAnimationEndedWithFinalLayoutState:(id)arg0 ;
-(void)_updatePPTsForGestureEnded;
-(void)_updatePPTsForGestureTransactionBegan;
-(void)_updateWithGesture:(id)arg0 ;
-(void)_willBeginWithGesture:(id)arg0 ;
-(void)_willInterruptWithReason:(id)arg0 ;
-(void)completeGestureWithTransitionRequest:(id)arg0 ;
-(void)dealloc;
-(void)didEndAllAnimations;
-(void)systemGestureStateChanged:(id)arg0 ;
-(void)transaction:(id)arg0 didEndLayoutTransitionWithContinuation:(id)arg1 ;
-(void)transaction:(id)arg0 performTransitionWithCompletion:(id)arg1 ;
-(void)transactionDidComplete:(id)arg0 ;
-(void)transactionWillBeginLayoutTransition:(id)arg0 ;
-(void)updateGestureWithTransitionRequest:(id)arg0 ;


@end


#endif