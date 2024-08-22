// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUQUICKCONTROLPRESENTATIONCOORDINATOR_H
#define HUQUICKCONTROLPRESENTATIONCOORDINATOR_H

@class NSString, UITapGestureRecognizer, UIImpactFeedbackGenerator, NSMutableSet, _UIClickPresentationInteraction, UIViewController, NSMapTable, UIView, UINavigationController, UITraitCollection, UIVisualEffectView, UILabel;
@protocol HUQuickControlContainerViewControllerDelegate, HUPresentationDelegate, UIGestureRecognizerDelegate, HUCardViewControllerDelegate, UIPresentationControllerDelegatePrivate, _UIClickPresentationInteractionDelegate, _UIClickPresentationInteractionDelegate, UIViewControllerTransitioningDelegate, _UISheetPresentationControllerDelegate, UINavigationControllerDelegate, HUHomeStatusDetailsViewControllerDelegate, HFItemManagerDelegate, UITraitEnvironment, HUQuickControlPresentationCoordinatorDelegate, NACancelable;

#import <Foundation/Foundation.h>

#import "HUPressedItemContext.h"
#import "HUQuickControlNavigationController.h"
#import "HUCardViewController.h"
#import "HUQuickControlPresentationContext.h"
#import "HUForceInterpolatedPressGestureRecognizer.h"
#import "HUGridServiceCell.h"
#import "HUQuickControlContainerViewController.h"
#import "HUHomeStatusDetailsViewController.h"
#import "HUIconView.h"
#import "HUGridServiceCellTextView.h"
#import "HUGridActionSetTitleAndDescriptionView.h"

@interface HUQuickControlPresentationCoordinator : NSObject <HUQuickControlContainerViewControllerDelegate, HUPresentationDelegate, UIGestureRecognizerDelegate, HUCardViewControllerDelegate, UIPresentationControllerDelegatePrivate, _UIClickPresentationInteractionDelegate, _UIClickPresentationInteractionDelegate, UIViewControllerTransitioningDelegate, _UISheetPresentationControllerDelegate, UINavigationControllerDelegate, HUHomeStatusDetailsViewControllerDelegate, HFItemManagerDelegate, UITraitEnvironment>



@property (readonly, nonatomic) HUPressedItemContext *activePressedItemContext;
@property (retain, nonatomic) HUQuickControlNavigationController *cardNavigationController; // ivar: _cardNavigationController
@property (retain, nonatomic) HUCardViewController *cardViewController; // ivar: _cardViewController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUQuickControlPresentationCoordinatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer; // ivar: _doubleTapGestureRecognizer
@property (retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator; // ivar: _feedbackGenerator
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isEditing; // ivar: _isEditing
@property (readonly, nonatomic) NSMutableSet *mutuallyExclusiveGestureRecognizers; // ivar: _mutuallyExclusiveGestureRecognizers
@property (retain, nonatomic) HUQuickControlPresentationContext *presentationContext; // ivar: _presentationContext
@property (retain, nonatomic) _UIClickPresentationInteraction *presentationInteraction; // ivar: _presentationInteraction
@property (readonly, nonatomic) UIViewController *presentingViewController;
@property (retain, nonatomic) NSObject<NACancelable> *pressGestureActiveTimerCancellationToken; // ivar: _pressGestureActiveTimerCancellationToken
@property (retain, nonatomic) HUForceInterpolatedPressGestureRecognizer *pressGestureRecognizer; // ivar: _pressGestureRecognizer
@property (readonly, nonatomic) NSMapTable *pressedItemContexts; // ivar: _pressedItemContexts
@property (retain, nonatomic) HUGridServiceCell *pressedTile; // ivar: _pressedTile
@property (retain, nonatomic) UIView *pressedTileBlurEffectView; // ivar: _pressedTileBlurEffectView
@property (retain, nonatomic) UIView *pressedTilePrerenderedView; // ivar: _pressedTilePrerenderedView
@property (readonly, nonatomic, getter=isQuickControlPresented) BOOL quickControlIsPresented;
@property (retain, nonatomic) HUQuickControlContainerViewController *quickControlViewController; // ivar: _quickControlViewController
@property (retain, nonatomic) UIViewController *settingsViewController; // ivar: _settingsViewController
@property (retain, nonatomic) UITapGestureRecognizer *singleTapGestureRecognizer; // ivar: _singleTapGestureRecognizer
@property (retain, nonatomic) UINavigationController *statusDetailsNavigationController; // ivar: _statusDetailsNavigationController
@property (retain, nonatomic) HUHomeStatusDetailsViewController *statusDetailsViewController; // ivar: _statusDetailsViewController
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) UIView *targetView; // ivar: _targetView
@property (readonly, nonatomic) UITraitCollection *traitCollection;
@property (retain, nonatomic) UIVisualEffectView *transitionBlurView; // ivar: _transitionBlurView
@property (retain, nonatomic) HUIconView *transitionIconView; // ivar: _transitionIconView
@property (retain, nonatomic) HUIconView *transitionIconViewVibrant; // ivar: _transitionIconViewVibrant
@property (retain, nonatomic) UILabel *transitionPrimaryLabel; // ivar: _transitionPrimaryLabel
@property (retain, nonatomic) UILabel *transitionSecondaryLabel; // ivar: _transitionSecondaryLabel
@property (retain, nonatomic) UIVisualEffectView *transitionSecondaryLabelVibrantEffectView; // ivar: _transitionSecondaryLabelVibrantEffectView
@property (retain, nonatomic) HUGridServiceCellTextView *transitionTextView; // ivar: _transitionTextView
@property (retain, nonatomic) HUGridServiceCellTextView *transitionTextViewVibrant; // ivar: _transitionTextViewVibrant
@property (retain, nonatomic) UIVisualEffectView *transitionTextViewVibrantEffectView; // ivar: _transitionTextViewVibrantEffectView
@property (retain, nonatomic) UIVisualEffectView *transitionTitleAndDescriptionVibrantEffectView; // ivar: _transitionTitleAndDescriptionVibrantEffectView
@property (retain, nonatomic) HUGridActionSetTitleAndDescriptionView *transitionTitleAndDescriptionView; // ivar: _transitionTitleAndDescriptionView


-(BOOL)_isRTL;
-(BOOL)_shouldCancelPresentation;
-(BOOL)clickPresentationInteractionShouldBegin:(id)arg0 ;
-(BOOL)clickPresentationInteractionShouldPresent:(id)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(BOOL)hasDetailsActionForQuickControlViewController:(id)arg0 item:(id)arg1 ;
-(BOOL)isActionSetTile;
-(BOOL)isTileOff;
-(BOOL)shouldDismissWholePresentationHierarchy;
-(CGFloat)quickControlViewController:(id)arg0 sourceViewInitialScaleForPresentation:(BOOL)arg1 ;
-(NSUInteger)activationStyleForClickPresentationInteraction:(id)arg0 ;
-(NSUInteger)iconSizeInActionSetTile;
-(NSUInteger)iconSizeInNavigationBar;
-(NSUInteger)iconSizeInTile;
-(id)_beginControlPresentationAnimated:(BOOL)arg0 ;
-(id)_buildCardNavigationController;
-(id)_buildQuickControlViewController;
-(id)_buildSoftwareUpdateNavigationController;
-(id)_buildStatusDetailsNavigationController;
-(id)_createPressedContextForItem:(id)arg0 userInitiated:(BOOL)arg1 ;
-(id)_dismissCardViewController;
-(id)_dismissChildViewController;
-(id)_dismissQuickControlViewControllerAnimated:(BOOL)arg0 ;
-(id)_dismissServiceDetailsViewController:(id)arg0 animated:(BOOL)arg1 ;
-(id)_gestureInstallationView;
-(id)_prepareSettingsViewController;
-(id)_sheetPresentationControllerViewForTouchContinuation:(id)arg0 ;
-(id)_viewControllerToPresent;
-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)cardViewControllerRequestingDismissal:(id)arg0 ;
-(id)clickPresentationInteraction:(id)arg0 presentationForPresentingViewController:(id)arg1 ;
-(id)clickPresentationInteraction:(id)arg0 previewForHighlightingAtLocation:(struct CGPoint )arg1 ;
-(id)createNavigationControllerForPresentationContext:(id)arg0 ;
-(id)detailsViewControllerForQuickControlViewController:(id)arg0 item:(id)arg1 ;
-(id)dismissQuickControlAnimated:(BOOL)arg0 ;
-(id)dismissQuickControlAnimated:(BOOL)arg0 wasDismissed:(*BOOL)arg1 ;
-(id)finishPresentation:(id)arg0 animated:(BOOL)arg1 ;
-(id)initWithTargetView:(id)arg0 delegate:(id)arg1 ;
-(id)presentQuickControlWithContext:(id)arg0 animated:(BOOL)arg1 ;
-(id)quickControlViewController:(id)arg0 applierForSourceViewTransitionWithAnimationSettings:(id)arg1 presenting:(BOOL)arg2 ;
-(struct CGRect )iconFrameInActionSetTile;
-(struct CGRect )iconFrameInNavigationBar;
-(struct CGRect )iconFrameInTile;
-(struct CGRect )primaryLabelFrameInActionSetTile;
-(struct CGRect )primaryLabelFrameInNavigationBar;
-(struct CGRect )primaryLabelFrameInTile;
-(struct CGRect )secondaryLabelFrameInActionSetTile;
-(struct CGRect )secondaryLabelFrameInNavigationBar;
-(struct CGRect )secondaryLabelFrameInTile;
-(struct CGRect )sourceFrameForAnimationController;
-(struct CGRect )titleAndDescriptionViewFrameInActionSetTile;
-(void)_actuateTapticFeedback;
-(void)_cleanupForQuickControlDismissal;
-(void)_configureInitialStateForPressedItemContext:(id)arg0 userInitiated:(BOOL)arg1 ;
-(void)_createTransitionViewsForDismissal;
-(void)_createTransitionViewsForPresentation;
-(void)_handleDoubleTapGesture:(id)arg0 ;
-(void)_handleMutuallyExclusiveGesture:(id)arg0 ;
-(void)_handlePressGesture:(id)arg0 ;
-(void)_handleSingleTapGesture:(id)arg0 ;
-(void)_initiateProgrammaticBounceForItem:(id)arg0 ;
-(void)_installGestureRecognizer;
-(void)_logInteractionEventOfType:(NSUInteger)arg0 withPresentationContext:(id)arg1 ;
-(void)_prepareForTapticFeedback;
-(void)_preparePressedItemContextForItem:(id)arg0 startApplier:(BOOL)arg1 ;
-(void)_pressGestureDidBecomeActive;
-(void)_pressGestureDidBeginWithLocation:(struct CGPoint )arg0 ;
-(void)_pressGestureDidEnd:(BOOL)arg0 ;
-(void)_pressedStateDidEndForItem:(id)arg0 clearPresentationContext:(BOOL)arg1 ;
-(void)_restoreOriginalTile;
-(void)_updateCardController;
-(void)_updateOverrideAttributesWithScale:(CGFloat)arg0 forItem:(id)arg1 ;
-(void)_updateOverrideAttributesWithTransform:(struct CGAffineTransform )arg0 alpha:(CGFloat)arg1 forItem:(id)arg2 ;
-(void)_validatePresentationContext:(id)arg0 ;
-(void)addMutuallyExclusiveGestureRecognizer:(id)arg0 ;
-(void)clickPresentationInteractionEnded:(id)arg0 wasCancelled:(BOOL)arg1 ;
-(void)itemManager:(id)arg0 didChangeSourceItem:(id)arg1 ;
-(void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)playBounceForItem:(id)arg0 ;
-(void)presentationControllerWillDismiss:(id)arg0 ;
-(void)quickControlViewControllerDidTapDetailsButton:(id)arg0 ;
-(void)quickControlViewControllerWillDismissDetailsViewController:(id)arg0 shouldDismissQuickControl:(BOOL)arg1 ;
-(void)removeAllTransitionSubviews;
-(void)removeMutuallyExclusiveGestureRecognizer:(id)arg0 ;
-(void)statusDetailViewControllerDidFinish:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif