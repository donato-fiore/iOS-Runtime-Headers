// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFLUIDSWITCHERGESTUREWORKSPACETRANSACTION_H
#define SBFLUIDSWITCHERGESTUREWORKSPACETRANSACTION_H

@class NSMutableSet, NSMutableDictionary, NSTimer, NSMapTable, UIApplicationSceneDeactivationAssertion, NSString, NSUUID;
@protocol SBUIAnimationControllerObserver, SBSceneLayoutWorkspaceTransactionDelegate, SBWorkspaceApplicationSceneTransitionContextDelegate, SBViewMorphAnimatorObserver, SBFluidSwitcherGestureWorkspaceTransactionDelegate;


#import "SBSystemGestureWorkspaceTransaction.h"
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
@property (retain, nonatomic) NSMapTable *activeLayoutStatesBySwitcherController; // ivar: _activeLayoutStatesBySwitcherController
@property (retain, nonatomic) NSMutableSet *ancillaryLayoutTransactions; // ivar: _ancillaryLayoutTransactions
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
@property (retain, nonatomic) SBSceneLayoutWorkspaceTransaction *layoutTransaction; // ivar: _layoutTransaction
@property (retain, nonatomic) NSMutableSet *layoutTransitionCompletions; // ivar: _layoutTransitionCompletions
@property (retain, nonatomic) NSMapTable *originalLayoutStatesBySwitcherController; // ivar: _originalLayoutStatesBySwitcherController
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
-(BOOL)transaction:(id)arg0 shouldKeepSceneForeground:(id)arg1 withReason:(*id)arg2 ;
-(NSInteger)_gestureType;
-(id)_copiedTransitionRequestFromTransitionRequest:(id)arg0 ;
-(id)_createWorkspaceTransientOverlayForAppLayout:(id)arg0 ;
-(id)_currentGestureEventForGesture:(id)arg0 ;
-(id)_switcherControllerForWorkspaceTransitionRequest:(id)arg0 ;
-(id)_transitionRequestForApplicationTransitionContext:(id)arg0 eventLabel:(id)arg1 ;
-(id)_windowSceneForWorkspaceTransitionRequest:(id)arg0 ;
-(id)_workspaceTransitionRequestForSwitcherTransitionRequest:(id)arg0 fromGestureManager:(id)arg1 withEventLabel:(id)arg2 ;
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
-(void)_updateMainDisplayIfNecessaryForWorkspaceTransitionRequests:(id)arg0 ;
-(void)_updatePPTsForAnimationEndedWithFinalLayoutState:(id)arg0 ;
-(void)_updatePPTsForGestureEnded;
-(void)_updatePPTsForGestureTransactionBegan;
-(void)_updateWithGesture:(id)arg0 ;
-(void)_willBeginWithGesture:(id)arg0 ;
-(void)_willInterruptWithReason:(id)arg0 ;
-(void)dealloc;
-(void)didEndAllAnimations;
-(void)handleTransitionRequestForGestureComplete:(id)arg0 fromGestureManager:(id)arg1 ;
-(void)handleTransitionRequestForGestureUpdate:(id)arg0 fromGestureManager:(id)arg1 ;
-(void)systemGestureStateChanged:(id)arg0 ;
-(void)transaction:(id)arg0 didEndLayoutTransitionWithContinuation:(id)arg1 ;
-(void)transaction:(id)arg0 performTransitionWithCompletion:(id)arg1 ;
-(void)transactionDidComplete:(id)arg0 ;
-(void)transactionWillBeginLayoutTransition:(id)arg0 ;


@end


#endif