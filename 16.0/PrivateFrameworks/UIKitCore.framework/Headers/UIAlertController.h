// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIALERTCONTROLLER_H
#define UIALERTCONTROLLER_H

@class NSString, NSAttributedString, NSSet, NSMutableDictionary, NSMapTable, NSPointerArray, NSMutableArray, NSArray, NSIndexSet;
@protocol UIAlertControllerContaining, _UIAlertControllerTextFieldViewControllerContaining, UIPreviewInteractionControllerDelegate, UIAlertControllerVisualStyleProviding, UIAlertControllerSystemProvidedPresentationDelegate, UIAlertControllerCoordinatedActionPerforming;


#import "UIViewController.h"
#import "_UIAlertControllerTextFieldViewController.h"
#import "UITapGestureRecognizer.h"
#import "_UIAlertControllerShimPresenter.h"
#import "UIAlertControllerStackManager.h"
#import "UIImage.h"
#import "UIAlertAction.h"
#import "UIPopoverController.h"
#import "UIView.h"
#import "UIAlertControllerVisualStyle.h"
#import "UIPreviewInteractionController.h"
#import "UIGestureRecognizer.h"
#import "_UIAnimationCoordinator.h"

@interface UIAlertController : UIViewController <UIAlertControllerContaining, _UIAlertControllerTextFieldViewControllerContaining, UIPreviewInteractionControllerDelegate, UIAlertControllerVisualStyleProviding>

 {
    NSString *_message;
    NSAttributedString *_attributedTitle;
    NSAttributedString *_attributedMessage;
    NSAttributedString *_attributedDetailMessage;
    NSSet *_linkedAlertControllers;
    NSMutableDictionary *_actionToKeyCommandsDictionary;
    NSMapTable *_keyCommandToActionMapTable;
    NSInteger _preferredStyle;
    NSInteger _severity;
    UIViewController *_contentViewController;
    _UIAlertControllerTextFieldViewController *_textFieldViewController;
    UITapGestureRecognizer *_backButtonDismissGestureRecognizer;
    id *_ownedTransitioningDelegate;
    BOOL _isInRecomputePreferredContentSize;
    NSInteger _batchActionChangesInProgressCount;
    _UIAlertControllerShimPresenter *_presenter;
    NSPointerArray *_actionsWithInvokedHandlers;
    UIAlertControllerStackManager *_alertControllerStackManager;
    UIImage *_image;
    BOOL _springLoaded;
}


@property (readonly) NSMutableArray *_actionDelimiterIndices; // ivar: __actionDelimiterIndices
@property (readonly) NSMutableArray *_actions; // ivar: _actions
@property (readonly) BOOL _alignsToKeyboard;
@property (copy, nonatomic, getter=_attributedDetailMessage, setter=_setAttributedDetailMessage:) NSAttributedString *_attributedDetailMessage;
@property (readonly) UIAlertAction *_cancelAction; // ivar: _cancelAction
@property (nonatomic, setter=_setCompatibilityPopoverController:) UIPopoverController *_compatibilityPopoverController; // ivar: __compatibilityPopoverController
@property (readonly) UIView *_dimmingView;
@property (readonly) UIAlertAction *_focusedAction;
@property (readonly) UIView *_foregroundView;
@property (retain, nonatomic, setter=_setHeaderContentViewController:) UIViewController *_headerContentViewController; // ivar: _headerContentViewController
@property (nonatomic, getter=_isHidden, setter=_setHidden:) BOOL _hidden; // ivar: _hidden
@property (retain, nonatomic, setter=_setPresentationSourceRepresentationView:) UIView *_presentationSourceRepresentationView; // ivar: __presentationSourceRepresentationView
@property (readonly) NSInteger _resolvedStyle; // ivar: _resolvedStyle
@property (retain, nonatomic, setter=_setSeparatedHeaderContentViewController:) UIViewController *_separatedHeaderContentViewController; // ivar: _separatedHeaderContentViewController
@property (nonatomic, setter=_setShouldAlignToKeyboard:) BOOL _shouldAlignToKeyboard; // ivar: __shouldAlignToKeyboard
@property (setter=_setShouldAllowNilParameters:) BOOL _shouldAllowNilParameters; // ivar: __shouldAllowNilParameters
@property BOOL _shouldFlipFrameForShimDismissal; // ivar: __shouldFlipFrameForShimDismissal
@property (readonly) BOOL _shouldProvideDimmingView;
@property (readonly) BOOL _shouldReverseActions;
@property (retain, nonatomic, setter=_setSystemProvidedPresentationDelegate:) NSObject<UIAlertControllerSystemProvidedPresentationDelegate> *_systemProvidedPresentationDelegate; // ivar: __systemProvidedPresentationDelegate
@property (retain, nonatomic, setter=_setSystemProvidedPresentationView:) UIView *_systemProvidedPresentationView; // ivar: __systemProvidedPresentationView
@property (readonly) _UIAlertControllerTextFieldViewController *_textFieldViewController;
@property (retain, nonatomic, setter=_setVisualStyle:) UIAlertControllerVisualStyle *_visualStyle; // ivar: __visualStyle
@property (copy, nonatomic, getter=_accessoryImage, setter=_setAccessoryImage:) UIImage *accessoryImage; // ivar: _accessoryImage
@property (retain, nonatomic, setter=_setActions:) NSArray *actions;
@property (copy, nonatomic, getter=_attributedMessage, setter=_setAttributedMessage:) NSAttributedString *attributedMessage;
@property (copy, nonatomic, getter=_attributedTitle, setter=_setAttributedTitle:) NSAttributedString *attributedTitle;
@property (retain, nonatomic) UIViewController *contentViewController;
@property (weak, nonatomic) NSObject<UIAlertControllerCoordinatedActionPerforming> *coordinatedActionPerformingDelegate; // ivar: _coordinatedActionPerformingDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=_dismissedFromShim, setter=_setDismissedFromShim:) BOOL dismissedFromShim; // ivar: dismissedFromShim
@property (nonatomic, getter=_effectAlpha, setter=_setEffectAlpha:) CGFloat effectAlpha;
@property (nonatomic, getter=_hasPreservedInputViews, setter=_setHasPreservedInputViews:) BOOL hasPreservedInputViews; // ivar: _hasPreservedInputViews
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic, getter=_indexesOfActionSectionSeparators, setter=_setIndexesOfActionSectionSeparators:) NSIndexSet *indexesOfActionSectionSeparators; // ivar: _indexesOfActionSectionSeparators
@property (copy, nonatomic) NSString *message;
@property (retain, nonatomic) UIAlertAction *preferredAction; // ivar: _preferredAction
@property (nonatomic) NSInteger preferredStyle;
@property (retain, nonatomic, getter=_previewInteractionController, setter=_setPreviewInteractionController:) UIPreviewInteractionController *previewInteractionController; // ivar: _previewInteractionController
@property (nonatomic) NSInteger severity;
@property (weak, nonatomic, getter=_styleProvider, setter=_setStyleProvider:) NSObject<UIAlertControllerVisualStyleProviding> *styleProvider; // ivar: _styleProvider
@property (readonly) Class superclass;
@property (retain, nonatomic, getter=_systemProvidedGestureRecognizer, setter=_setSystemProvidedGestureRecognizer:) UIGestureRecognizer *systemProvidedGestureRecognizer; // ivar: _systemProvidedGestureRecognizer
@property (retain, nonatomic) _UIAnimationCoordinator *temporaryAnimationCoordinator; // ivar: _temporaryAnimationCoordinator
@property (readonly, nonatomic) NSArray *textFields;
@property (copy, nonatomic) NSString *title;
@property (nonatomic, getter=_titleLineBreakMode, setter=_setTitleLineBreakMode:) NSInteger titleLineBreakMode; // ivar: _titleLineBreakMode
@property (nonatomic, getter=_titleMaximumLineCount, setter=_setTitleMaximumLineCount:) NSInteger titleMaximumLineCount; // ivar: _titleMaximumLineCount


+(BOOL)_allowInteractiveSheetDismissal;
+(BOOL)_shouldUsePresentationController;
+(id)_alertControllerContainedInViewController:(id)arg0 ;
+(id)_alertControllerWithTitle:(id)arg0 message:(id)arg1 ;
+(id)_createTransitioningDelegateForIdiom:(NSInteger)arg0 ;
+(id)alertControllerWithTitle:(id)arg0 message:(id)arg1 preferredStyle:(NSInteger)arg2 ;
+(void)registerPlatformStyleProvider:(id)arg0 forIdiom:(NSInteger)arg1 ;
-(BOOL)_allowsShowingDimmingView;
-(BOOL)_canBePresentedAtLocation:(struct CGPoint )arg0 ;
-(BOOL)_canDismissWithGestureRecognizer;
-(BOOL)_defersToPresentingViewControllerForSupportedInterfaceOrientations;
-(BOOL)_hasAttributedMessage;
-(BOOL)_hasAttributedTitle;
-(BOOL)_hasContentToDisplay;
-(BOOL)_hasDetailMessage;
-(BOOL)_hasMessage;
-(BOOL)_hasTitle;
-(BOOL)_idiomSupportsBackGesture:(NSInteger)arg0 ;
-(BOOL)_isPresented;
-(BOOL)_isPresentedAsPopover;
-(BOOL)_isSupportedInterfaceOrientation:(NSInteger)arg0 ;
-(BOOL)_needsPreferredSizeCalculated;
-(BOOL)_requiresCustomPresentationController;
-(BOOL)_shouldBecomeFirstResponder;
-(BOOL)_shouldDismissOnSizeChange;
-(BOOL)_shouldFitWidthToContentViewControllerWidth;
-(BOOL)_shouldPreserveInputViews;
-(BOOL)_shouldSizeToFillSuperview;
-(BOOL)_shouldSupportReturnKeyPresses;
-(BOOL)_shouldTreatEmptyStringsAsNil;
-(BOOL)_viewControllerIsPresentedInModalPresentationContext:(id)arg0 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)isSpringLoaded;
-(BOOL)performsViewControllerCommitTransitionForPreviewInteractionController:(id)arg0 ;
-(BOOL)shouldAutorotate;
-(NSInteger)_buttonTypeForBackGestureForIdiom:(NSInteger)arg0 ;
-(NSInteger)_modalPresentationStyleForResolvedStyle;
-(id)_actionForReturnKey;
-(id)_alertControllerContainer;
-(id)_alertControllerView;
-(id)_containedAlertController;
-(id)_currentDescriptor;
-(id)_dismissGestureRecognizer;
-(id)_keyCommandForAction:(id)arg0 input:(id)arg1 modifierFlags:(NSInteger)arg2 ;
-(id)_presentationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)_returnKeyCommand;
-(id)_setView:(id)arg0 forSystemProvidedPresentationWithDelegate:(id)arg1 ;
-(id)_textFieldContainingViewWithTextField:(id)arg0 position:(NSInteger)arg1 ;
-(id)cancelAction;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)linkedAlertControllers;
-(id)platformStyleViewForAlertController:(id)arg0 inIdiom:(NSInteger)arg1 ;
-(id)previewInteractionController:(id)arg0 viewControllerForPreviewingAtPosition:(struct CGPoint )arg1 inView:(id)arg2 presentingViewController:(*id)arg3 ;
-(id)visualStyleForAlertControllerStyle:(NSInteger)arg0 traitCollection:(id)arg1 descriptor:(id)arg2 ;
-(struct UIEdgeInsets )_contentInsets;
-(struct __CFString *)_powerLoggingEventName;
-(void)_action:(id)arg0 changedToKeyCommandWithInput:(id)arg1 modifierFlags:(NSInteger)arg2 ;
-(void)_addActionWithTitle:(id)arg0 image:(id)arg1 style:(NSInteger)arg2 handler:(id)arg3 ;
-(void)_addActionWithTitle:(id)arg0 style:(NSInteger)arg1 handler:(id)arg2 ;
// -(void)_addActionWithTitle:(id)arg0 style:(NSInteger)arg1 handler:(id)arg2 shouldDismissHandler:(unk)arg3  ;
-(void)_addKeyCommandForAction:(id)arg0 withInput:(id)arg1 modifierFlags:(NSInteger)arg2 ;
-(void)_addReturnKeyCommandIfAppropriate;
-(void)_addSectionDelimiter;
-(void)_attemptAnimatedDismissWithGestureRecognizer:(id)arg0 ;
-(void)_becomeFirstResponderIfAppropriate;
-(void)_beginNoPresentingViewControllerPresentation;
-(void)_childViewController:(id)arg0 willTransitionToSize:(struct CGSize )arg1 withAnimations:(id)arg2 ;
-(void)_clearActionHandlers;
-(void)_contentViewControllerWillTransitionToSize:(struct CGSize )arg0 withAnimations:(id)arg1 ;
-(void)_didParentTextFieldViewController;
-(void)_dismissAnimated:(BOOL)arg0 triggeringAction:(id)arg1 ;
-(void)_dismissAnimated:(BOOL)arg0 triggeringAction:(id)arg1 triggeredByPopoverDimmingView:(BOOL)arg2 dismissCompletion:(id)arg3 ;
-(void)_dismissFromBackButton:(id)arg0 ;
-(void)_dismissFromPopoverDimmingView;
-(void)_dismissWithAction:(id)arg0 ;
-(void)_dismissWithAction:(id)arg0 dismissCompletion:(id)arg1 ;
-(void)_dismissWithCancelAction;
-(void)_endNoPresentingViewControllerPresentation;
-(void)_flipFrameForShimDismissalIfNecessary;
-(void)_getRotationContentSettings:(struct ? *)arg0 ;
-(void)_handleKeyCommand:(id)arg0 ;
-(void)_handleReturn;
-(void)_headerContentViewControllerWillTransitionToSize:(struct CGSize )arg0 withAnimations:(id)arg1 ;
-(void)_installBackGestureRecognizer;
-(void)_invokeHandlersForAction:(id)arg0 ;
-(void)_logBeingDismissed;
-(void)_logBeingPresented;
// -(void)_performAction:(id)arg0 invokeActionBlock:(id)arg1 dismissAndPerformActionIfNotAlreadyPerformed:(unk)arg2  ;
-(void)_performBatchActionChangesWithBlock:(id)arg0 ;
-(void)_postDidBeginSystemProvidedDismissalOfAlertController;
-(void)_postWillBeginSystemProvidedDismissalOfAlertController;
-(void)_preserveInputViewsAnimated:(BOOL)arg0 ;
-(void)_recomputePreferredContentSize;
-(void)_reevaluateResolvedStyle;
-(void)_removeAllActions;
-(void)_removeAllTextFields;
-(void)_removeKeyCommandForAction:(id)arg0 ;
-(void)_restoreInputViewsAnimated:(BOOL)arg0 ;
-(void)_returnKeyPressedInLastTextField;
-(void)_setShouldReverseActions:(BOOL)arg0 ;
-(void)_uninstallBackGestureRecognizer;
-(void)_updateModalPresentationStyle;
-(void)_updateProvidedStyle;
-(void)_updateProvidedStyleWithTraitCollection:(id)arg0 ;
-(void)_updateShouldAlignToKeyboard;
-(void)_updateTextFieldViewControllerWithVisualStyle:(id)arg0 ;
-(void)_updateViewFrameForLandscapePresentationInShimIfNecessary;
-(void)_willParentTextFieldViewController;
-(void)addAction:(id)arg0 ;
-(void)addTextFieldWithConfigurationHandler:(id)arg0 ;
-(void)dealloc;
-(void)linkAlertController:(id)arg0 ;
-(void)loadView;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)previewInteractionController:(id)arg0 performCommitForPreviewViewController:(id)arg1 committedViewController:(id)arg2 ;
-(void)previewInteractionController:(id)arg0 willPresentViewController:(id)arg1 forPosition:(struct CGPoint )arg2 inSourceView:(id)arg3 ;
-(void)setCancelAction:(id)arg0 ;
-(void)setModalPresentationStyle:(NSInteger)arg0 ;
-(void)setSpringLoaded:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)unlinkAlertController:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif