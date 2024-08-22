// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIPREVIEWPRESENTATIONCONTROLLER_H
#define _UIPREVIEWPRESENTATIONCONTROLLER_H

@class NSLayoutConstraint, NSString, NSArray;
@protocol UIInteractionProgressObserver, _UIPreviewActionSheetViewDelegate, _UIPlatterMenuDynamicsControllerDelegate, UIForcePresentationController, _UIForcePresentationControllerDelegate, UIViewControllerPreviewing;


#import "UIPreviewPresentationController.h"
#import "UIView.h"
#import "UIImageView.h"
#import "UIScrollView.h"
#import "_UIStatesFeedbackGenerator.h"
#import "UIWindow.h"
#import "UIPreviewForceInteractionProgress.h"
#import "UIInteractionProgress.h"
#import "UIPreviewAction.h"
#import "_UIPreviewQuickActionView.h"
#import "UIGestureRecognizer.h"
#import "_UIPlatterMenuDynamicsController.h"
#import "_UIPreviewPresentationContainerView.h"
#import "_UIPreviewActionSheetView.h"
#import "UIPreviewInteractionController.h"
#import "_UIPreviewPresentationEffectView.h"
#import "_UIVelocityIntegrator.h"
#import "UITapGestureRecognizer.h"
#import "_UIPreviewPresentationAnimator.h"

@interface _UIPreviewPresentationController : UIPreviewPresentationController <UIInteractionProgressObserver, _UIPreviewActionSheetViewDelegate, _UIPlatterMenuDynamicsControllerDelegate, UIForcePresentationController>



@property (readonly, nonatomic) UIView *_revealContainerView;
@property (nonatomic) BOOL _sourceViewSnapshotAndScaleTransformSuppressed; // ivar: _sourceViewSnapshotAndScaleTransformSuppressed
@property (retain, nonatomic) UIImageView *actionSheetAvailableImageView; // ivar: _actionSheetAvailableImageView
@property (retain, nonatomic) UIView *actionSheetContainerView; // ivar: _actionSheetContainerView
@property (readonly, nonatomic, getter=isBreathing) BOOL breathing; // ivar: _breathing
@property (retain, nonatomic) UIScrollView *containerScrollView; // ivar: _containerScrollView
@property (retain, nonatomic) NSLayoutConstraint *containerScrollViewXConstraint; // ivar: _containerScrollViewXConstraint
@property (nonatomic) NSUInteger currentPresentationPhase; // ivar: _currentPresentationPhase
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didSendBeginEvent; // ivar: _didSendBeginEvent
@property (retain, nonatomic) _UIStatesFeedbackGenerator *feedbackGenerator; // ivar: _feedbackGenerator
@property (weak, nonatomic) NSObject<_UIForcePresentationControllerDelegate> *forcePresentationControllerDelegate; // ivar: _forcePresentationControllerDelegate
@property (nonatomic) BOOL hasAskedForCommitInternally; // ivar: _hasAskedForCommitInternally
@property (nonatomic) BOOL hasAskedForDismissalInternally; // ivar: _hasAskedForDismissalInternally
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *initialSourceViewSnapshot; // ivar: _initialSourceViewSnapshot
@property (retain, nonatomic) UIWindow *initialSourceViewSnapshotWindow; // ivar: _initialSourceViewSnapshotWindow
@property (retain, nonatomic) UIPreviewForceInteractionProgress *interactionProgressForBreathing; // ivar: _interactionProgressForBreathing
@property (retain, nonatomic) UIPreviewForceInteractionProgress *interactionProgressForCommit; // ivar: _interactionProgressForCommit
@property (retain, nonatomic) UIInteractionProgress *interactionProgressForPresentation; // ivar: _interactionProgressForPresentation
@property (nonatomic) BOOL isAnimatingActionSheet; // ivar: _isAnimatingActionSheet
@property (copy, nonatomic) UIPreviewAction *leadingPreviewAction; // ivar: _leadingPreviewAction
@property (retain, nonatomic) _UIPreviewQuickActionView *leadingQuickActionView; // ivar: _leadingQuickActionView
@property (retain, nonatomic) NSLayoutConstraint *leadingQuickActionViewEdgeConstraint; // ivar: _leadingQuickActionViewEdgeConstraint
@property (nonatomic) BOOL leadingQuickActionViewSelected; // ivar: _leadingQuickActionViewSelected
@property (retain, nonatomic) UIGestureRecognizer *modalPreviewActionsPanningGestureRecognizer; // ivar: _modalPreviewActionsPanningGestureRecognizer
@property (retain, nonatomic) UIGestureRecognizer *panningGestureRecognizer; // ivar: _panningGestureRecognizer
@property (nonatomic) BOOL panningGestureRecognizerInProgress; // ivar: _panningGestureRecognizerInProgress
@property (retain, nonatomic) _UIPlatterMenuDynamicsController *platterMenuController; // ivar: _platterMenuController
@property (nonatomic) BOOL preDismissAnimationsInflight; // ivar: _preDismissAnimationsInflight
@property (retain, nonatomic) _UIPreviewPresentationContainerView *presentationContainerView; // ivar: _presentationContainerView
@property (copy, nonatomic) id *presentationPhaseCompletionBlock; // ivar: _presentationPhaseCompletionBlock
@property (nonatomic) CGFloat presentationViewCornerRadius;
@property (copy, nonatomic) NSArray *previewActionItems; // ivar: _previewActionItems
@property (retain, nonatomic) _UIPreviewActionSheetView *previewActionSheet; // ivar: _previewActionSheet
@property (weak, nonatomic) UIPreviewInteractionController *previewInteractionController; // ivar: _previewInteractionController
@property (weak, nonatomic) NSObject<UIViewControllerPreviewing> *previewingContext; // ivar: _previewingContext
@property (retain, nonatomic) _UIPreviewPresentationEffectView *revealContainerView; // ivar: _revealContainerView
@property (retain, nonatomic) _UIVelocityIntegrator *revealPanningVelocityIntegrator; // ivar: _revealPanningVelocityIntegrator
@property (readonly) Class superclass;
@property (retain, nonatomic) UITapGestureRecognizer *tapToDismissGestureRecognizer; // ivar: _tapToDismissGestureRecognizer
@property (copy, nonatomic) UIPreviewAction *trailingPreviewAction; // ivar: _trailingPreviewAction
@property (retain, nonatomic) _UIPreviewQuickActionView *trailingQuickActionView; // ivar: _trailingQuickActionView
@property (retain, nonatomic) NSLayoutConstraint *trailingQuickActionViewEdgeConstraint; // ivar: _trailingQuickActionViewEdgeConstraint
@property (nonatomic) BOOL trailingQuickActionViewSelected; // ivar: _trailingQuickActionViewSelected
@property (retain, nonatomic) _UIPreviewPresentationAnimator *unhighlightPreviewCellSnapshotViewAnimator; // ivar: _unhighlightPreviewCellSnapshotViewAnimator


+(BOOL)_shouldApplyVisualEffectsToPresentingView;
+(id)_backgroundEffectForTraitCollection:(id)arg0 interactive:(BOOL)arg1 ;
-(BOOL)_canCommitPresentation;
-(BOOL)_canDismissPresentation;
-(BOOL)_hasPreviewActions;
-(BOOL)_hasPreviewQuickActions;
-(BOOL)_hasSelectedQuickAction;
-(BOOL)_platterIsInInitialPosition;
-(BOOL)_platterIsInInitialPositionMostly;
-(BOOL)_platterIsSelectingPreviewActions;
-(BOOL)_shouldSavePresentedViewControllerForStateRestoration;
-(BOOL)previewActionSheetCanSelectItem:(id)arg0 ;
-(CGFloat)_leadingQuickActionOffsetForCenterPosition:(struct CGPoint )arg0 swipeView:(id)arg1 ;
-(CGFloat)_quickActionSelectionOffset;
-(CGFloat)_quickActionsSelectionThresholdForPreviewMenuItemStyle:(NSInteger)arg0 ;
-(CGFloat)_trailingQuickActionOffsetForCenterPosition:(struct CGPoint )arg0 swipeView:(id)arg1 ;
-(CGFloat)minimumSpacingBetweenPlatterAndMenu;
-(CGFloat)platterContainerCenterX;
-(CGFloat)platterContainerCenterY;
-(id)_animatorForContainmentTransition;
-(id)_makeAndAddToViewHierarchyPreviewActionSheetForMenuItems:(id)arg0 ;
-(id)_viewsParticipatingInNavigationControllerTransition;
-(id)initWithPresentedViewController:(id)arg0 presentingViewController:(id)arg1 ;
-(id)leadingSwipeActionView;
-(id)platterView;
-(id)trailingSwipeActionView;
-(struct CGPoint )_applyLayoutAdjustmentsForManagedViewWithPosition:(struct CGPoint )arg0 ;
-(struct CGPoint )_dismissedActionSheetCenterForActionSheet:(id)arg0 ;
-(struct CGPoint )_presentedActionSheetCenterForActionSheet:(id)arg0 ;
-(struct CGPoint )centerForMenuDismissed;
-(struct CGPoint )centerForMenuDismissedForActionSheet:(id)arg0 ;
-(struct CGPoint )centerForMenuPresented;
-(struct CGPoint )centerForMenuPresentedForActionSheet:(id)arg0 ;
-(struct CGPoint )centerForPlatterWithMenuViewDismissed;
-(struct CGPoint )centerForPlatterWithMenuViewPresented;
-(struct CGPoint )centerForPlatterWithMenuViewPresentedForActionSheet:(id)arg0 ;
-(struct CGPoint )initialCenterForLeadingSwipeActionView;
-(struct CGPoint )initialCenterForTrailingSwipeActionView;
-(struct CGRect )_preferredSourceViewRect;
-(struct CGRect )platterBounds;
-(struct CGRect )platterContainerBounds;
-(void)_beginBreathing;
-(void)_configureActionSheetChromeViews;
-(void)_configureDynamicsController;
-(void)_configureInitialActionSheetViewIfNeeded;
-(void)_dismissForHandledActionWithCompletion:(id)arg0 ;
-(void)_dismissForSelectionQuickActionAnimated;
-(void)_dismissPresentation;
-(void)_dismissPresentationWithCompletion:(id)arg0 ;
-(void)_dismissTransitionDidComplete:(BOOL)arg0 ;
-(void)_endBreathing;
-(void)_hideQuickActions;
-(void)_invokeCommitHandlerFromInteractionProgress;
-(void)_layoutForDismissTransition;
-(void)_layoutForPreviewInteractionProgress:(CGFloat)arg0 ;
-(void)_layoutForPreviewTransition;
-(void)_layoutForRevealTransition;
-(void)_layoutForRevealUnhighlightTransition:(CGFloat)arg0 ;
-(void)_panningGestureRecognizerDidFire:(id)arg0 ;
-(void)_prepareInitialSourceViewSnapshot;
-(void)_preparePresentationContainerViewForPreviewInteraction;
-(void)_preparePresentationContainerViewForPreviewTransition;
-(void)_presentSubActionSheetForPreviewActionGroup:(id)arg0 ;
-(void)_presentationTransitionWillBeginForContainerEffectView:(id)arg0 ;
-(void)_previewTransitionDidComplete:(BOOL)arg0 ;
-(void)_restorePlatterToInitialStatePositionAnimated;
-(void)_restorePlatterToInitialStatePositionAnimatedWithCompletion:(id)arg0 ;
-(void)_revealTransitionDidComplete:(BOOL)arg0 ;
-(void)_setupInteractionProgressForBreathing;
-(void)_stopUnhighlightPreviewCellSnapshotViewAnimationIfNeeded;
-(void)_tapToDismissPreviewWithActionsDidFire:(id)arg0 ;
-(void)_triggerQuickActionHandlerIfNeeded;
-(void)_unhighlightPreviewCellSnapshotViewsIfNeeded;
-(void)_updateBreathingTransformWithProgress:(CGFloat)arg0 animated:(BOOL)arg1 ;
-(void)_updateRevealContainerViewForSourceRect:(struct CGRect )arg0 ;
-(void)_updateVisibiltyOfPreviewActionChromeForCurrentState;
-(void)_willCommitPresentation;
-(void)containerViewWillLayoutSubviews;
-(void)dealloc;
-(void)dismissalTransitionDidEnd:(BOOL)arg0 ;
-(void)dismissalTransitionWillBegin;
-(void)interactionProgress:(id)arg0 didEnd:(BOOL)arg1 ;
-(void)interactionProgressDidUpdate:(id)arg0 ;
-(void)platterMenuDynamicsController:(id)arg0 didMoveSwipeView:(id)arg1 toPosition:(struct CGPoint )arg2 ;
-(void)platterMenuDynamicsControllerDidDismissWithController:(id)arg0 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)presentationTransitionDidEnd:(BOOL)arg0 ;
-(void)presentationTransitionWillBegin;
-(void)setupAdditionalModalGestureRecognizers;
-(void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)updateSwipeActionsIfApplicable;


@end


#endif