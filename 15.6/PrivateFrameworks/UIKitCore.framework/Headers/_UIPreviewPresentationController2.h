// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIPREVIEWPRESENTATIONCONTROLLER2_H
#define _UIPREVIEWPRESENTATIONCONTROLLER2_H

@protocol _UIPreviewInteractionHighlighting, UIViewControllerPreviewing_Internal;


#import "UIPreviewPresentationController.h"
#import "_UIPreviewPresentationPlatterView.h"
#import "UIViewPropertyAnimator.h"

@interface _UIPreviewPresentationController2 : UIPreviewPresentationController

@property (readonly, nonatomic) CGRect _computedPlatterFrame;
@property (retain, nonatomic) _UIPreviewPresentationPlatterView *contentPlatterView; // ivar: _contentPlatterView
@property (weak, nonatomic) NSObject<_UIPreviewInteractionHighlighting> *currentHighlighter; // ivar: _currentHighlighter
@property (weak, nonatomic) UIViewPropertyAnimator *currentTransitionAnimator; // ivar: _currentTransitionAnimator
@property (nonatomic) BOOL hasPerformedInitialLayout; // ivar: _hasPerformedInitialLayout
@property (nonatomic) CGFloat interactiveTransitionFraction; // ivar: _interactiveTransitionFraction
@property (nonatomic) CGAffineTransform preferredContentPlatterTransform; // ivar: _preferredContentPlatterTransform
@property (weak, nonatomic) NSObject<UIViewControllerPreviewing_Internal> *previewingContext; // ivar: _previewingContext
@property (retain, nonatomic) _UIPreviewPresentationPlatterView *revealPlatterView; // ivar: _revealPlatterView
@property (nonatomic) BOOL shouldEnableUserInteractionOnPlatter; // ivar: _shouldEnableUserInteractionOnPlatter
@property (nonatomic) BOOL shouldScaleContentViewToAspectFitPlatter; // ivar: _shouldScaleContentViewToAspectFitPlatter


-(BOOL)_shouldDisableInteractionDuringTransitions;
-(BOOL)_shouldReduceMotion;
-(id)initWithPresentedViewController:(id)arg0 presentingViewController:(id)arg1 previewingContext:(id)arg2 ;
-(struct CGRect )_preferredContentPlatterRectForContainerRect:(struct CGRect )arg0 ;
-(void)_layoutContentViews;
-(void)_performDismissAnimationsWithTransitionContext:(id)arg0 ;
-(void)_performPresentationAnimationsWithTransitionContext:(id)arg0 ;
-(void)_performReducedMotionDismissAnimationsWithTransitionContext:(id)arg0 ;
-(void)_performReducedMotionPresentationAnimationsWithTransitionContext:(id)arg0 ;
-(void)_performTransitionAnimations:(id)arg0 ;
-(void)_prepareContentPlatterViewForPresentationTransitionIfNeeded:(id)arg0 ;
-(void)_prepareContentViewsForPresentationAnimationsIfNeeded;
-(void)_preparePresentationAnimationsForTransitionCoordinator:(id)arg0 ;
-(void)_prepareRevealPlatterViewForPresentationTransitionIfNeeded:(id)arg0 ;
-(void)_presentationTransitionWillBeginForContainerEffectView:(id)arg0 ;
-(void)_updateFromInteractionEffect:(id)arg0 ;
-(void)containerViewDidLayoutSubviews;
-(void)dismissalTransitionDidEnd:(BOOL)arg0 ;
-(void)dismissalTransitionWillBegin;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)presentationTransitionDidEnd:(BOOL)arg0 ;
-(void)presentationTransitionWillBegin;
-(void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg0 ;


@end


#endif