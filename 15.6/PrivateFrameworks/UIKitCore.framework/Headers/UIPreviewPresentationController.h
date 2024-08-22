// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIPREVIEWPRESENTATIONCONTROLLER_H
#define UIPREVIEWPRESENTATIONCONTROLLER_H

@class NSString, NSArray, NSHashTable;
@protocol UIGestureRecognizerDelegate, UIPreviewPresentationControllerDelegate;


#import "UIPresentationController.h"
#import "UIResponder.h"
#import "UITapGestureRecognizer.h"
#import "UIView.h"
#import "UIVisualEffectView.h"
#import "UIWindow.h"

@interface UIPreviewPresentationController : UIPresentationController <UIGestureRecognizerDelegate>



@property (nonatomic) BOOL appliesVisualEffectsToPresentingView; // ivar: _appliesVisualEffectsToPresentingView
@property (copy, nonatomic) id *containerViewConfigurationBlock; // ivar: _containerViewConfigurationBlock
@property (weak, nonatomic) UIResponder *currentPinnedResponder; // ivar: _currentPinnedResponder
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UITapGestureRecognizer *dismissGestureRecognizer; // ivar: _dismissGestureRecognizer
@property (copy, nonatomic) id *dismissalTransitionDidEndBlock; // ivar: _dismissalTransitionDidEndBlock
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *keyboardSnapshotters; // ivar: _keyboardSnapshotters
@property (copy, nonatomic) NSHashTable *keyboardWindows; // ivar: _keyboardWindows
@property (retain, nonatomic) UIView *localStatusBar; // ivar: _localStatusBar
@property (retain, nonatomic) UIVisualEffectView *presentationContainerEffectView; // ivar: _presentationContainerEffectView
@property (weak, nonatomic) UIWindow *presentationWindow; // ivar: _presentationWindow
@property (weak, nonatomic) NSObject<UIPreviewPresentationControllerDelegate> *previewPresentationDelegate; // ivar: _previewPresentationDelegate
@property (readonly) Class superclass;


+(BOOL)_shouldApplyVisualEffectsToPresentingView;
+(BOOL)_shouldInterdictServiceViewTouches;
+(id)_backgroundEffectForTraitCollection:(id)arg0 interactive:(BOOL)arg1 ;
-(BOOL)_allowsAutorotation;
-(BOOL)_keyboardShouldAnimateAlongsideForInteractiveTransitions;
-(BOOL)_presentationPotentiallyUnderlapsStatusBar;
-(BOOL)_shouldDisableInteractionDuringTransitions;
-(BOOL)_shouldKeepCurrentFirstResponder;
-(BOOL)_shouldSavePresentedViewControllerForStateRestoration;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(NSInteger)presentationStyle;
-(id)_presentationContainerView;
-(id)initWithPresentedViewController:(id)arg0 presentingViewController:(id)arg1 ;
-(struct CGRect )_frameForTransitionViewInPresentationSuperview:(id)arg0 ;
-(void)_animatePreviewTransitionIfNeeded:(id)arg0 ;
-(void)_applyVisualEffectsForPresentationPhase:(NSUInteger)arg0 ;
-(void)_cancelTransitionDidEnd:(BOOL)arg0 ;
-(void)_finalizeAfterDismissalTransition;
-(void)_handleDismissGestureRecognizer:(id)arg0 ;
-(void)_interactiveHighlightTransitionDidEnd:(BOOL)arg0 ;
-(void)_layoutForCancel;
-(void)_layoutForInteractiveHighlight;
-(void)_layoutForPreview;
-(void)_prepareContainerViewForPresentationTransition;
-(void)_prepareDismissAnimationsForTransitionCoordinator:(id)arg0 ;
-(void)_prepareDismissGestureRecognizersIfNeeded;
-(void)_prepareKeyboardForPresentationTransition;
-(void)_preparePresentationAnimationsForTransitionCoordinator:(id)arg0 ;
-(void)_prepareStatusBarForPresentationTransition;
-(void)_presentationTransitionWillBeginForContainerEffectView:(id)arg0 ;
-(void)_previewTransitionDidEnd:(BOOL)arg0 ;
-(void)dismissalTransitionDidEnd:(BOOL)arg0 ;
-(void)dismissalTransitionWillBegin;
-(void)presentationTransitionDidEnd:(BOOL)arg0 ;
-(void)presentationTransitionWillBegin;


@end


#endif