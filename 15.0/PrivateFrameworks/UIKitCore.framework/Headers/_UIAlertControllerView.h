// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIALERTCONTROLLERVIEW_H
#define _UIALERTCONTROLLERVIEW_H

@class NSMutableArray, NSArray, NSLayoutConstraint, NSString;
@protocol UIInterfaceActionHandlerInvocationDelegate, UIScrollViewDelegate, UISpringLoadedInteractionSupporting, UIGestureRecognizerDelegatePrivate;


#import "UIView.h"
#import "UIAlertController.h"
#import "UIAlertControllerVisualStyle.h"
#import "_UIAlertControllerInterfaceActionGroupView.h"
#import "UIVisualEffectView.h"
#import "UILabel.h"
#import "_UIKeyboardLayoutAlignmentView.h"
#import "UIAlertAction.h"
#import "_UIAlertControllerActionViewMetrics.h"
#import "_UIFlexibleConstantConstraintSet.h"

@interface _UIAlertControllerView : UIView <UIInterfaceActionHandlerInvocationDelegate, UIScrollViewDelegate, UISpringLoadedInteractionSupporting, UIGestureRecognizerDelegatePrivate>

 {
    UIAlertController *_alertController;
    UIAlertControllerVisualStyle *_visualStyle;
    ? _alertControllerViewFlags;
    UIView *_contentViewTopItemsView;
    _UIAlertControllerInterfaceActionGroupView *_mainInterfaceActionsGroupView;
    _UIAlertControllerInterfaceActionGroupView *_discreteCancelActionGroupView;
    UIVisualEffectView *_titleAndMessageLabelVibrantContainerView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UILabel *_detailMessageLabel;
    UIView *_separatedHeaderContentViewControllerContainerView;
    UIView *_headerContentViewControllerContainerView;
    UIView *_contentViewControllerContainerView;
    UIView *_textFieldViewControllerContainerView;
    _UIKeyboardLayoutAlignmentView *_keyboardLayoutAlignmentView;
    UIView *_keyboardLayoutAlignmentAvailableSpaceView;
    NSMutableArray *_actionViews;
    CGPoint _actionSelectionInitialLocation;
    NSInteger _layoutRequiresPositionUpdateCount;
    NSArray *_dimmingViewConstraints;
    NSArray *_dimmingViewForegroundViewTopConstraints;
    NSArray *_dimmingViewForegroundViewBottomConstraints;
    NSArray *_dimmingViewConstraintsForAlertStyle;
    NSArray *_dimmingViewConstraintsForActionSheetStyle;
    NSArray *_noDimmingViewConstraints;
    NSLayoutConstraint *_headerContentViewControllerPreferredWidthConstraint;
    NSLayoutConstraint *_headerContentViewControllerPreferredHeightConstraint;
    CGSize _largestActionDimension;
    UIAlertAction *_effectivePreferredAction;
    NSInteger _batchActionChangesInProgressCount;
}


@property (readonly) UIView *_contentView; // ivar: _contentView
@property (readonly) UIView *_dimmingView; // ivar: _dimmingView
@property (retain, nonatomic, setter=_setVisualStyle:) UIAlertControllerVisualStyle *_visualStyle;
@property (retain) NSLayoutConstraint *actionGroupEqualsContentViewWidthConstraint; // ivar: _actionGroupEqualsContentViewWidthConstraint
@property (nonatomic) BOOL actionScrubbingEnabled; // ivar: _actionScrubbingEnabled
@property (retain, nonatomic) _UIAlertControllerActionViewMetrics *actionViewMetrics; // ivar: _actionViewMetrics
@property (nonatomic, getter=_actionsReversed, setter=_setActionsReversed:) BOOL actionsReversed; // ivar: _actionsReversed
@property (weak) UIAlertController *alertController;
@property BOOL alignsToKeyboard;
@property BOOL cancelActionIsDiscrete;
@property (retain) NSLayoutConstraint *centerXConstraint; // ivar: _centerXConstraint
@property (retain) NSLayoutConstraint *centerYConstraint; // ivar: _centerYConstraint
@property (retain) NSLayoutConstraint *contentScrollViewBottomConstraint; // ivar: _contentScrollViewBottomConstraint
@property (retain) NSLayoutConstraint *contentScrollViewMaximumWidthConstraint; // ivar: _contentScrollViewMaximumWidthConstraint
@property (retain) NSLayoutConstraint *contentViewBottomConstraint; // ivar: _contentViewBottomConstraint
@property (retain) NSLayoutConstraint *contentViewControllerContainerViewHeightConstraint; // ivar: _contentViewControllerContainerViewHeightConstraint
@property (retain) NSLayoutConstraint *contentViewControllerContainerViewTopAlignmentConstraint; // ivar: _contentViewControllerContainerViewTopAlignmentConstraint
@property (retain) NSLayoutConstraint *contentViewControllerContainerViewWidthConstraint; // ivar: _contentViewControllerContainerViewWidthConstraint
@property (retain) NSLayoutConstraint *contentViewControllerViewBottomConstraint; // ivar: _contentViewControllerViewBottomConstraint
@property (retain) NSLayoutConstraint *contentViewControllerViewLeftConstraint; // ivar: _contentViewControllerViewLeftConstraint
@property (retain) NSLayoutConstraint *contentViewControllerViewRightConstraint; // ivar: _contentViewControllerViewRightConstraint
@property (retain) NSLayoutConstraint *contentViewControllerViewTopConstraint; // ivar: _contentViewControllerViewTopConstraint
@property (retain) NSLayoutConstraint *contentViewMaxHeightConstraint; // ivar: _contentViewMaxHeightConstraint
@property (retain) NSLayoutConstraint *contentViewTopConstraint; // ivar: _contentViewTopConstraint
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSLayoutConstraint *detailMessageLabelTopAlignmentConstraint; // ivar: _detailMessageLabelTopAlignmentConstraint
@property (retain) NSLayoutConstraint *discreteActionGroupViewHorizontalLayoutTrailingConstraint; // ivar: _discreteActionGroupViewHorizontalLayoutTrailingConstraint
@property (retain) NSLayoutConstraint *discreteCancelActionViewHeightConstraint; // ivar: _discreteCancelActionViewHeightConstraint
@property (retain) NSLayoutConstraint *discreteCancelActionViewLeadingConstraint; // ivar: _discreteCancelActionViewLeadingConstraint
@property (retain) NSLayoutConstraint *discreteCancelActionViewTopConstraint; // ivar: _discreteCancelActionViewTopConstraint
@property (retain) NSLayoutConstraint *discreteCancelActionViewWidthConstraint; // ivar: _discreteCancelActionViewWidthConstraint
@property (nonatomic) CGFloat effectAlpha;
@property (retain) NSLayoutConstraint *foregroundViewWidthConstraint; // ivar: _foregroundViewWidthConstraint
@property BOOL hasDimmingView;
@property (readonly) NSUInteger hash;
@property (retain) NSLayoutConstraint *headerContentViewControllerContainerViewTopAlignmentConstraint; // ivar: _headerContentViewControllerContainerViewTopAlignmentConstraint
@property (retain) NSLayoutConstraint *heightConstraint; // ivar: _heightConstraint
@property (nonatomic, getter=_layoutSize, setter=_setLayoutSize:) CGSize layoutSize; // ivar: _layoutSize
@property (retain) NSLayoutConstraint *mainActionButtonSequenceViewHeightConstraint; // ivar: _mainActionButtonSequenceViewHeightConstraint
@property (retain) NSLayoutConstraint *mainActionButtonSequenceViewHorizontalAlignmentConstraint; // ivar: _mainActionButtonSequenceViewHorizontalAlignmentConstraint
@property (retain) NSLayoutConstraint *mainActionButtonSequenceViewWidthConstraint; // ivar: _mainActionButtonSequenceViewWidthConstraint
@property (retain) _UIFlexibleConstantConstraintSet *messageLabelTopAlignmentConstraints; // ivar: _messageLabelTopAlignmentConstraints
@property (nonatomic) CGFloat offset; // ivar: _offset
@property (nonatomic) BOOL presentationContextPrefersCancelActionShown; // ivar: _presentationContextPrefersCancelActionShown
@property BOOL presentedAsPopover;
@property (retain) NSLayoutConstraint *separatedHeaderContentViewControllerContainerViewBottomConstraint; // ivar: _separatedHeaderContentViewControllerContainerViewBottomConstraint
@property (retain) NSLayoutConstraint *separatedHeaderContentViewControllerContainerViewWidthConstraint; // ivar: _separatedHeaderContentViewControllerContainerViewWidthConstraint
@property BOOL shouldHaveBackdropView;
@property (nonatomic, getter=isSpringLoaded) BOOL springLoaded; // ivar: _springLoaded
@property (readonly) Class superclass;
@property (retain) NSLayoutConstraint *textFieldViewControllerContainerViewHeightConstraint; // ivar: _textFieldViewControllerContainerViewHeightConstraint
@property (retain) _UIFlexibleConstantConstraintSet *textFieldViewControllerContainerViewTopAlignmentConstraints; // ivar: _textFieldViewControllerContainerViewTopAlignmentConstraints
@property (retain) NSLayoutConstraint *textFieldViewControllerContainerViewWidthConstraint; // ivar: _textFieldViewControllerContainerViewWidthConstraint
@property (retain) NSLayoutConstraint *textFieldViewControllerViewBottomConstraint; // ivar: _textFieldViewControllerViewBottomConstraint
@property (retain) NSLayoutConstraint *textFieldViewControllerViewLeftConstraint; // ivar: _textFieldViewControllerViewLeftConstraint
@property (retain) NSLayoutConstraint *textFieldViewControllerViewRightConstraint; // ivar: _textFieldViewControllerViewRightConstraint
@property (retain) NSLayoutConstraint *textFieldViewControllerViewTopConstraint; // ivar: _textFieldViewControllerViewTopConstraint
@property (retain) NSArray *titleAndMessageLabelVibrantContainerViewVerticalConstraints; // ivar: _titleAndMessageLabelVibrantContainerViewVerticalConstraints
@property (retain) _UIFlexibleConstantConstraintSet *titleLabelTopAlignmentConstraints; // ivar: _titleLabelTopAlignmentConstraints
@property (retain) NSLayoutConstraint *widthConstraint; // ivar: _widthConstraint


+(BOOL)requiresConstraintBasedLayout;
+(void)initialize;
-(BOOL)_actionLayoutIsVertical;
-(BOOL)_buttonsAreTopMost;
-(BOOL)_canLayOutActionsHorizontally;
-(BOOL)_forceLayoutEngineSolutionInRationalEdges;
-(BOOL)_hasAttributedMessage;
-(BOOL)_hasAttributedTitle;
-(BOOL)_hasDetailMessage;
-(BOOL)_hasDiscreteCancelAction;
-(BOOL)_hasMessage;
-(BOOL)_hasTextFields;
-(BOOL)_hasTitle;
-(BOOL)_horizontalLayoutCanUseFullWidth;
-(BOOL)_shouldAllowPassthroughToLayersBehindUsForTouches:(id)arg0 ;
-(BOOL)_shouldHaveCancelActionInMainActionButtonSequenceView;
-(BOOL)_titleAndMessageLabelUseVibrancy;
-(BOOL)hasDiscreteHorizontalCancelAction;
-(BOOL)shouldUpdateFocusInContext:(id)arg0 ;
-(BOOL)showsCancelAction;
-(CGFloat)_availableWidthForHorizontalLayout:(BOOL)arg0 ;
-(CGFloat)_idealLayoutWidth;
-(CGFloat)_labelHorizontalInsets;
-(CGFloat)_layoutWidthForHorizontalLayout:(BOOL)arg0 ;
-(CGFloat)_marginBetweenInterfaceActionGroups;
-(CGFloat)_spaceRequiredForActionSectionsSpacing;
-(CGFloat)_verticalLayoutWidth;
-(NSInteger)_numberOfActionsForMainActionButtonSequenceView;
-(NSInteger)tintAdjustmentMode;
-(id)__cancelActionView;
-(id)_attributedDetailMessage;
-(id)_attributedMessage;
-(id)_attributedTitle;
-(id)_discreteCancelActionView;
-(id)_effectivePreferredAction;
-(id)_focusedAction;
-(id)_indexesOfActionSectionSeparators;
-(id)_interfaceActionForAlertAction:(id)arg0 inActionGroupView:(id)arg1 ;
-(id)_interfaceActionRepresentationForAlertAlertAction:(id)arg0 ;
-(id)_newStyledBackgroundView;
-(id)_preferredActionView;
-(id)_presentableAlertActions;
-(id)_textFieldViewController;
-(id)_unlocalizedOrderedPresentableAlertActionViewRepresentations;
-(id)_unlocalizedOrderedPresentableAlertActions;
-(id)_vibrancyEffectForTitleAndMessageLabel;
-(id)actions;
-(id)cancelAction;
-(id)contentViewController;
-(id)headerContentViewController;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)message;
-(id)preferredFocusedView;
-(id)separatedHeaderContentViewController;
-(id)textFields;
-(id)title;
-(struct CGSize )_itemSizeForHorizontalLayout:(BOOL)arg0 ;
-(struct CGSize )_itemSizeForHorizontalLayout:(BOOL)arg0 visualStyleRequiresActionRepresentationToFitItemSize:(*BOOL)arg1 ;
-(struct CGSize )_mainActionButtonSequenceViewSizeForHorizontalLayout:(BOOL)arg0 itemSize:(struct CGSize )arg1 ;
-(struct CGSize )_minimumSizeForAllActions;
-(struct CGSize )_sizeForLayoutWidthDetermination;
-(struct UIEdgeInsets )_contentInsets;
-(void)_accessibilityColorsChanged;
-(void)_actionLayoutDirectionChanged;
-(void)_actionsChanged;
-(void)_addContentViewControllerToViewHierarchyIfNecessary;
-(void)_addHeaderContentViewControllerToViewHierarchyIfNecessary;
-(void)_addSeparatedHeaderContentViewControllerToViewHierarchyIfNecessary;
-(void)_applyContentViewControllerContainerViewConstraints;
-(void)_applyDetailMessageConstraints;
-(void)_applyHeaderContentViewControllerContainerViewConstraints;
-(void)_applyISEngineLayoutValuesToBoundsOnly:(BOOL)arg0 ;
-(void)_applyKeyboardAlignmentViewsConstraints;
-(void)_applyMessageConstraints;
-(void)_applySeparatedContentViewControllerContainerViewContraints;
-(void)_applyTextFieldViewControllerContainerViewConstraints;
-(void)_applyTitleAndMessageLabelVibrantContainerViewConstraints;
-(void)_applyTitleConstraints;
-(void)_applyViewConstraints;
-(void)_associateActionsWithActionViews;
-(void)_configureActionGroupViewToAllowHorizontalLayout:(BOOL)arg0 ;
-(void)_contentSizeChanged;
-(void)_disableAllowGroupOpacitiyIfNecessaryAlongsideTransitionCoordinator:(id)arg0 ;
-(void)_ensureActionViewRepresentationsHaveMetrics;
-(void)_layoutAndPositionInParentIfNeeded;
-(void)_performBatchActionChangesWithBlock:(id)arg0 ;
-(void)_prepareContentView;
-(void)_prepareContentViewControllerContainerView;
-(void)_prepareContentViewTopItemsView;
-(void)_prepareDetailMessageLabel;
-(void)_prepareDimmingView;
-(void)_prepareDimmingViewConstraints;
-(void)_prepareDiscreteCancelActionGroupView;
-(void)_prepareForWindowDealloc;
-(void)_prepareForWindowHostingSceneRemoval;
-(void)_prepareHeaderContentViewControllerContainerView;
-(void)_prepareKeyboardLayoutAlignmentViews;
-(void)_prepareMainInterfaceActionsGroupView;
-(void)_prepareMesssageLabel;
-(void)_prepareSeparateContentViewControllerContainerView;
-(void)_prepareTextFieldViewControllerContainerView;
-(void)_prepareTitleAndMessageLabelVibrantContainer;
-(void)_prepareTitleLabel;
-(void)_prepareViewsAndAddConstraints;
-(void)_propertiesChanged;
-(void)_recomputeActionMetrics;
-(void)_recomputeAlertControllerWidth;
-(void)_reevaluateSuperviewSizingConstraints;
-(void)_reloadInterfaceActionViewRepresentations;
-(void)_reloadInterfaceActionsGroupViewPreferredAction;
-(void)_removeContentViewControllerViewFromHierarchy;
-(void)_removeHeaderContentViewControllerViewFromHierarchy;
-(void)_removeSeparatedHeaderContentViewControllerFromHierarchy;
-(void)_scrollInitialActionToVisibleForPresentation;
-(void)_setAttributedDetailMessage:(id)arg0 ;
-(void)_setAttributedMessage:(id)arg0 ;
-(void)_setAttributedTitle:(id)arg0 ;
-(void)_setMessage:(id)arg0 ;
-(void)_setTitle:(id)arg0 ;
-(void)_setupHorizontalConstraintsForLabelView:(id)arg0 ;
-(void)_sizeOfContentViewControllerChanged;
-(void)_sizeOfHeaderContentViewControllerChanged;
-(void)_sizeOfTextFieldViewControllerChanged;
-(void)_textFieldsChanged;
-(void)_updateActionViewHeight;
-(void)_updateActionViewVisualStyle:(id)arg0 ;
-(void)_updateActionsGroupPresentationStyles;
-(void)_updateCancelActionBeingDiscrete;
-(void)_updateConstraintConstants;
-(void)_updateConstraintSpacingForExternalOffset;
-(void)_updateContentView;
-(void)_updateDetailLabelContents;
-(void)_updateDetailLabelFontSize;
-(void)_updateForPropertyChangeIfNeeded;
-(void)_updateInsets;
-(void)_updateLabelFontSizes;
-(void)_updateLabelProperties;
-(void)_updateLabelTextColor;
-(void)_updateMainScrollableHeaderViewHasRealContent;
-(void)_updateMessageLabelContents;
-(void)_updateMessageLabelFontSize;
-(void)_updatePreferredAction;
-(void)_updateStyleForIdiomChange:(BOOL)arg0 ;
-(void)_updateTintColor;
-(void)_updateTitleLabelContents;
-(void)_updateTitleLabelFontSize;
-(void)_willMoveToWindow:(id)arg0 ;
-(void)beginTrackingSessionByTakingOverForSystemProvidedGestureRecognizer:(id)arg0 ;
-(void)configureForDismissAlongsideTransitionCoordinator:(id)arg0 ;
-(void)configureForPresentAlongsideTransitionCoordinator:(id)arg0 ;
-(void)dealloc;
-(void)deselectAllActions;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
// -(void)interfaceAction:(id)arg0 invokeActionHandler:(id)arg1 completion:(unk)arg2  ;
-(void)safeAreaInsetsDidChange;
-(void)setTintAdjustmentMode:(NSInteger)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)updateConstraints;
-(void)updateObservations:(id)arg0 ;


@end


#endif