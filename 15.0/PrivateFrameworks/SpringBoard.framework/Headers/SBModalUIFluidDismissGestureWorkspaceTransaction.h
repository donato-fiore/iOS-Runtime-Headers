// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBMODALUIFLUIDDISMISSGESTUREWORKSPACETRANSACTION_H
#define SBMODALUIFLUIDDISMISSGESTUREWORKSPACETRANSACTION_H

@class UINotificationFeedbackGenerator;


#import "SBSystemGestureWorkspaceTransaction.h"
#import "SBAppSwitcherSettings.h"
#import "SBAppStatusBarSettingsAssertion.h"
#import "SBAssistantRootViewController.h"
#import "SBTransientOverlayPresentationManager.h"
#import "SBTransientOverlayViewController.h"
#import "SBAssistantController.h"
#import "SBMainWorkspaceTransaction.h"

@interface SBModalUIFluidDismissGestureWorkspaceTransaction : SBSystemGestureWorkspaceTransaction {
    SBAppSwitcherSettings *_settings;
    SBAppStatusBarSettingsAssertion *_statusBarAssertion;
    UINotificationFeedbackGenerator *_dismissalFeedbackGenerator;
    SBAssistantRootViewController *_assistantRootViewController;
    SBTransientOverlayPresentationManager *_transientOverlayPresentationManager;
    SBTransientOverlayViewController *_transientOverlayViewController;
    CGPoint _dismissingViewTouchOffset;
    CGRect _originalBounds;
    CGPoint _originalCenter;
    BOOL _initiatedFromBottomEdge;
    BOOL _hasPreservedInputViews;
    BOOL _isDismissing;
}


@property (nonatomic) BOOL animateGestureCancelationOrFailure; // ivar: _animateGestureCancelationOrFailure
@property (retain, nonatomic) SBAssistantController *assistantController; // ivar: _assistantController
@property (retain, nonatomic) SBMainWorkspaceTransaction *currentTransaction; // ivar: _currentTransaction
@property (nonatomic) CGFloat dismissalThreshold; // ivar: _dismissalThreshold
@property (readonly, nonatomic) NSInteger dismissalType; // ivar: _dismissalType


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
-(id)initWithTransitionRequest:(id)arg0 assistantController:(id)arg1 dismissalType:(NSInteger)arg2 initiatedFromBottomEdge:(BOOL)arg3 ;
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