// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBMODALUIFLUIDDISMISSGESTUREWORKSPACETRANSACTION_H
#define SBMODALUIFLUIDDISMISSGESTUREWORKSPACETRANSACTION_H

@class UINotificationFeedbackGenerator;
@protocol SBTransientOverlayPresenting, SBAssistantSceneControlling;


#import "SBSystemGestureWorkspaceTransaction.h"
#import "SBAppSwitcherSettings.h"
#import "SBWindowSceneStatusBarSettingsAssertion.h"
#import "SBAssistantRootViewController.h"
#import "SBTransientOverlayViewController.h"
#import "SBMainWorkspaceTransaction.h"
#import "SBWindowScene.h"

@interface SBModalUIFluidDismissGestureWorkspaceTransaction : SBSystemGestureWorkspaceTransaction {
    SBAppSwitcherSettings *_settings;
    SBWindowSceneStatusBarSettingsAssertion *_statusBarAssertion;
    UINotificationFeedbackGenerator *_dismissalFeedbackGenerator;
    SBAssistantRootViewController *_assistantRootViewController;
    id<SBTransientOverlayPresenting> *_transientOverlayPresenter;
    SBTransientOverlayViewController *_transientOverlayViewController;
    CGPoint _dismissingViewTouchOffset;
    CGRect _originalBounds;
    CGPoint _originalCenter;
    BOOL _initiatedFromBottomEdge;
    BOOL _hasPreservedInputViews;
    BOOL _isDismissing;
}


@property (nonatomic) BOOL animateGestureCancelationOrFailure; // ivar: _animateGestureCancelationOrFailure
@property (retain, nonatomic) NSObject<SBAssistantSceneControlling> *assistantController; // ivar: _assistantController
@property (retain, nonatomic) SBMainWorkspaceTransaction *currentTransaction; // ivar: _currentTransaction
@property (nonatomic) CGFloat dismissalThreshold; // ivar: _dismissalThreshold
@property (readonly, nonatomic) NSInteger dismissalType; // ivar: _dismissalType
@property (weak, nonatomic) SBWindowScene *windowScene; // ivar: _windowScene


-(BOOL)_canBeInterrupted;
-(BOOL)_shouldDismissImmmediatelyAtFullGestureProgress;
-(BOOL)canInterruptForTransitionRequest:(id)arg0 ;
-(CGFloat)_backgroundWeightingForDismissal:(BOOL)arg0 ;
-(CGFloat)_backgroundWeightingForGestureProgress;
-(CGFloat)_clientAnimationsDelay;
-(CGFloat)_hapticDelay;
-(CGFloat)_scaleForDismissal;
-(CGFloat)_scaleForGestureProgress;
-(CGFloat)_swipeUpGestureProgress;
-(CGFloat)_swipeUpGestureTranslation;
-(CGFloat)_yOffsetForGestureProgress;
-(CGFloat)_zoomOutDelay;
-(NSInteger)_notificationFeedbackType;
-(id)_dismissalFeedbackGenerator;
-(id)_layoutSettings;
-(id)_viewForGesture;
-(id)initWithTransitionRequest:(id)arg0 windowScene:(id)arg1 dismissalType:(NSInteger)arg2 initiatedFromBottomEdge:(BOOL)arg3 ;
-(void)_begin;
-(void)_beginWithGesture:(id)arg0 ;
-(void)_cleanupHierarchyForDismissal:(BOOL)arg0 ;
-(void)_didComplete;
-(void)_didInterruptWithReason:(id)arg0 ;
-(void)_dismissClientAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)_finishInteractionAndDismiss:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_finishWithCompletionType:(NSInteger)arg0 ;
-(void)_finishWithGesture:(id)arg0 ;
-(void)_setFluidDismissalState:(id)arg0 ;
-(void)_updateDismissingViewLayoutAndStyleForGesture;
-(void)_updateWithGesture:(id)arg0 ;
-(void)systemGestureStateChanged:(id)arg0 ;


@end


#endif