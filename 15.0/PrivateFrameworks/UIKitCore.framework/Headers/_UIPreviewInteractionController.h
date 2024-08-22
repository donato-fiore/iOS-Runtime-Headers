// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIPREVIEWINTERACTIONCONTROLLER_H
#define _UIPREVIEWINTERACTIONCONTROLLER_H

@class NSString;
@protocol UIGestureRecognizerDelegate, UIPreviewInteractionDelegate, UIViewControllerTransitioningDelegate, _UIPreviewActionsControllerDelegate, _UIPreviewInteractionHighlighting, UIViewControllerPreviewing_Internal, _UIPreviewInteractionControllerDelegate, _UIPreviewInteractionTouchForceProviding;

#import <Foundation/Foundation.h>

#import "UIGestureRecognizer.h"
#import "_UIPreviewInteractionCommitTransition.h"
#import "_UIPreviewInteractionDismissTransition.h"
#import "_UIInteractionEffect_deprecated.h"
#import "_UIPreviewPresentationController2.h"
#import "_UIPreviewInteractionPresentationTransition.h"
#import "UIViewController.h"
#import "_UITouchesObservingGestureRecognizer.h"
#import "_UIPreviewActionsController.h"
#import "_UIPreviewInteractionGestureRecognizer.h"
#import "UIPreviewInteraction.h"
#import "UIView.h"
#import "_UISteadyTouchForceGestureRecognizer.h"

@interface _UIPreviewInteractionController : NSObject <UIGestureRecognizerDelegate, UIPreviewInteractionDelegate, UIViewControllerTransitioningDelegate, _UIPreviewActionsControllerDelegate>



@property (readonly, nonatomic) UIGestureRecognizer *beginPreviewGestureRecognizer;
@property (nonatomic) BOOL commitTransitionScheduled; // ivar: _commitTransitionScheduled
@property (retain, nonatomic) _UIPreviewInteractionCommitTransition *currentCommitTransition; // ivar: _currentCommitTransition
@property (retain, nonatomic) _UIPreviewInteractionDismissTransition *currentDismissTransition; // ivar: _currentDismissTransition
@property (retain, nonatomic) NSObject<_UIPreviewInteractionHighlighting> *currentHighlighter; // ivar: _currentHighlighter
@property (retain, nonatomic) _UIInteractionEffect_deprecated *currentInteractionEffect; // ivar: _currentInteractionEffect
@property (retain, nonatomic) _UIPreviewPresentationController2 *currentPresentationController; // ivar: _currentPresentationController
@property (retain, nonatomic) _UIPreviewInteractionPresentationTransition *currentPresentationTransition; // ivar: _currentPresentationTransition
@property (retain, nonatomic) UIViewController *currentPreviewViewController; // ivar: _currentPreviewViewController
@property (weak, nonatomic) NSObject<UIViewControllerPreviewing_Internal> *currentPreviewingContext; // ivar: _currentPreviewingContext
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UIPreviewInteractionControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dismissingPreview; // ivar: _dismissingPreview
@property (retain, nonatomic) _UITouchesObservingGestureRecognizer *gestureRecognizerForPreviewActions; // ivar: _gestureRecognizerForPreviewActions
@property (nonatomic) BOOL hasTransitionedToPreview; // ivar: _hasTransitionedToPreview
@property (readonly) NSUInteger hash;
@property (nonatomic) CGPoint initialLocationForPreviewActionsPanning; // ivar: _initialLocationForPreviewActionsPanning
@property (nonatomic) CGPoint location; // ivar: _location
@property (retain, nonatomic) NSObject<_UIPreviewInteractionTouchForceProviding> *pausingTouchForceProvider; // ivar: _pausingTouchForceProvider
@property (nonatomic) BOOL performingCommitTransition; // ivar: _performingCommitTransition
@property (nonatomic) BOOL performingPreviewTransition; // ivar: _performingPreviewTransition
@property (readonly, nonatomic) UIGestureRecognizer *presentationGestureRecognizer;
@property (retain, nonatomic) NSObject<_UIPreviewInteractionTouchForceProviding> *presentedViewTouchForceProvider; // ivar: _presentedViewTouchForceProvider
@property (weak, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (retain, nonatomic) _UIPreviewActionsController *previewActionsController; // ivar: _previewActionsController
@property (retain, nonatomic) _UIPreviewInteractionGestureRecognizer *previewGestureRecognizer; // ivar: _previewGestureRecognizer
@property (retain, nonatomic) UIPreviewInteraction *previewInteraction; // ivar: _previewInteraction
@property (retain, nonatomic) _UIPreviewInteractionGestureRecognizer *revealGestureRecognizer; // ivar: _revealGestureRecognizer
@property (weak, nonatomic) UIView *sourceView; // ivar: _sourceView
@property (retain, nonatomic) _UISteadyTouchForceGestureRecognizer *steadyTouchForceGestureRecognizer; // ivar: _steadyTouchForceGestureRecognizer
@property (readonly) Class superclass;


-(BOOL)_isLongPressGestureRecognizerUsedForDelayingActions:(id)arg0 ;
-(BOOL)_preparePreviewViewControllerPresentationFromPreviewInteraction:(id)arg0 ;
-(BOOL)_previewInteractionShouldEndOnGestureCompletion:(id)arg0 ;
-(BOOL)_previewingIsPossibleForView:(id)arg0 ;
-(BOOL)_viewControllerIsChildOfTwoColumnSplitViewController:(id)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)previewInteractionShouldBegin:(id)arg0 ;
-(id)_newHighlighterForPreviewingContext:(id)arg0 ;
-(id)_preferredNavigationControllerForCommitTransition;
-(id)_preparedInteractionEffect;
-(id)_previewPresentationControllerForViewController:(id)arg0 ;
-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)initWithView:(id)arg0 ;
-(id)interactionControllerForPresentation:(id)arg0 ;
-(id)presentationControllerForPresentedViewController:(id)arg0 presentingViewController:(id)arg1 sourceViewController:(id)arg2 ;
-(struct CGPoint )initialPlatterPositionForPreviewActionsController:(id)arg0 ;
-(struct CGSize )maximumPreviewActionsViewSizeForPreviewActionsController:(id)arg0 ;
-(void)_dismissPreviewViewControllerIfNeeded;
-(void)_dismissPreviewViewControllerIfNeededWithCompletion:(id)arg0 ;
-(void)_finalizeAfterPreviewViewControllerPresentation;
-(void)_finalizeHighlighterAfterPreviewViewControllerPresentation;
-(void)_gestureRecognizerFailed:(id)arg0 ;
-(void)_handlePreviewActionsGesture:(id)arg0 ;
-(void)_handlePreviewGesture:(id)arg0 ;
-(void)_handleRevealGesture:(id)arg0 ;
-(void)_handleSteadyTouchForceGesture:(id)arg0 ;
-(void)_overrideSourceViewForBinaryCompatibilityIfNeeded:(*id)arg0 sourceRect:(struct CGRect *)arg1 ;
-(void)_preparePreviewPresentationControllerIfNeeded:(id)arg0 ;
-(void)_resetCustomPresentationHooks;
-(void)_revertInteractionEffectToStartState;
-(void)_stopCurrentInteractionEffect;
-(void)commitInteractivePreview;
-(void)dealloc;
-(void)didDismissPreviewActionsController:(id)arg0 ;
-(void)previewActionsController:(id)arg0 didCompleteWithSelectedAction:(id)arg1 ;
-(void)previewActionsController:(id)arg0 didUpdatePlatterTranslation:(struct CGVector )arg1 withVelocity:(struct CGVector )arg2 ;
-(void)previewInteraction:(id)arg0 didUpdateCommitTransition:(CGFloat)arg1 ended:(BOOL)arg2 ;
-(void)previewInteraction:(id)arg0 didUpdatePreviewTransition:(CGFloat)arg1 ended:(BOOL)arg2 ;
-(void)previewInteractionDidCancel:(id)arg0 ;


@end


#endif