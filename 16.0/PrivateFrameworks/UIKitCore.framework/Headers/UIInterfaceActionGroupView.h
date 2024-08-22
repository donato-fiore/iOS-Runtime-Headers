// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIINTERFACEACTIONGROUPVIEW_H
#define UIINTERFACEACTIONGROUPVIEW_H

@class NSString, UIView<UISeparatorDisplaying>, NSLayoutConstraint, NSArray, NSMutableArray, UIFont, NSPointerArray;
@protocol UIScrollViewDelegate, UIGestureRecognizerDelegatePrivate, _UIInterfaceActionPresenting, UIInterfaceActionGroupDisplayPropertyObserver, UIInterfaceActionGroupDisplaying, UISpringLoadedInteractionSupporting, UIInterfaceActionHandlerInvocationDelegate, UIInterfaceActionVisualStyleProviding;


#import "UIView.h"
#import "UIInterfaceActionVisualStyle.h"
#import "UIInterfaceActionGroup.h"
#import "UIInterfaceActionSelectionTrackingController.h"
#import "UILongPressGestureRecognizer.h"
#import "_UIInterfaceActionRepresentationsSequenceView.h"
#import "_UIContentConstraintsLayoutGuide.h"
#import "UIInterfaceActionRepresentationView.h"
#import "UIInterfaceActionHighlightAttributes.h"
#import "UIInterfaceActionSeparatorAttributes.h"

@interface UIInterfaceActionGroupView : UIView <UIScrollViewDelegate, UIGestureRecognizerDelegatePrivate, _UIInterfaceActionPresenting, UIInterfaceActionGroupDisplayPropertyObserver, UIInterfaceActionGroupDisplaying, UISpringLoadedInteractionSupporting>

 {
    BOOL _needsUpdateTopLevelViewsArrangement;
    BOOL _needsUpdateActionSequenceViewArrangement;
    BOOL _needsInitialViewLoading;
    BOOL _isSettingVisualStyle;
    UIInterfaceActionVisualStyle *_activeTestingVisualStyle;
    NSString *_cachedSizeCategory;
}


@property (readonly, nonatomic) UIInterfaceActionGroup *actionGroup; // ivar: _actionGroup
@property (weak, nonatomic) NSObject<UIInterfaceActionHandlerInvocationDelegate> *actionHandlerInvocationDelegate; // ivar: _actionHandlerInvocationDelegate
@property (readonly, nonatomic) NSInteger actionLayoutAxis; // ivar: _actionLayoutAxis
@property (readonly, nonatomic) UIInterfaceActionSelectionTrackingController *actionSelectionController; // ivar: _actionSelectionController
@property (retain, nonatomic) UILongPressGestureRecognizer *actionSelectionGestureRecognizer; // ivar: _actionSelectionGestureRecognizer
@property (readonly, nonatomic) UIView<UISeparatorDisplaying> *actionSequenceTopSeparatorView; // ivar: _actionSequenceTopSeparatorView
@property (readonly, nonatomic) _UIInterfaceActionRepresentationsSequenceView *actionSequenceView; // ivar: _actionSequenceView
@property (readonly, nonatomic) NSLayoutConstraint *actionSequenceViewWidthAnchoredToConstantConstraint; // ivar: _actionSequenceViewWidthAnchoredToConstantConstraint
@property (readonly, nonatomic) NSLayoutConstraint *actionSequenceViewWidthAnchoredToContentGuideConstraint; // ivar: _actionSequenceViewWidthAnchoredToContentGuideConstraint
@property (nonatomic, getter=_alignActionSeparatorLeadingEdgeWithContent, setter=_setAlignActionSeparatorLeadingEdgeWithContent:) BOOL alignActionSeparatorLeadingEdgeWithContent; // ivar: _alignActionSeparatorLeadingEdgeWithContent
@property (retain, nonatomic) NSArray *allowedActionLayoutAxisByPriority; // ivar: _allowedActionLayoutAxisByPriority
@property (retain, nonatomic) UIInterfaceActionVisualStyle *appliedVisualStyle; // ivar: _appliedVisualStyle
@property (readonly, nonatomic) NSArray *arrangedHeaderViews;
@property (readonly, nonatomic) NSMutableArray *arrangedScrollableHeaderViews; // ivar: _arrangedScrollableHeaderViews
@property (readonly, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (readonly, nonatomic) _UIContentConstraintsLayoutGuide *contentGuide; // ivar: _contentGuide
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=_drawsBackground, setter=_setDrawsBackground:) BOOL drawsBackground; // ivar: _drawsBackground
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIInterfaceActionRepresentationView *preferredActionRepresentation; // ivar: _preferredActionRepresentation
@property (nonatomic) NSInteger presentationStyle; // ivar: _presentationStyle
@property (nonatomic) CGFloat requiredActionRepresentationWidth; // ivar: _requiredActionRepresentationWidth
@property (nonatomic) BOOL scrubbingEnabled; // ivar: _scrubbingEnabled
@property (nonatomic, getter=_selectionHighlightContinuousCornerRadius, setter=_setSelectionHighlightContinuousCornerRadius:) CGFloat selectionHighlightContinuousCornerRadius; // ivar: _selectionHighlightContinuousCornerRadius
@property (nonatomic) BOOL showsSeparatorAboveActions; // ivar: _showsSeparatorAboveActions
@property (nonatomic, getter=isSpringLoaded) BOOL springLoaded; // ivar: _springLoaded
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *topLevelItemsView; // ivar: _topLevelItemsView
@property (readonly, nonatomic) NSArray *topLevelViewArrangementConstraints; // ivar: _topLevelViewArrangementConstraints
@property (retain, nonatomic) UIInterfaceActionVisualStyle *visualStyle; // ivar: _visualStyle
@property (retain, nonatomic, setter=_setVisualStyleOverrideActionHighlightAttributes:) UIInterfaceActionHighlightAttributes *visualStyleOverrideActionHighlightAttributes; // ivar: _visualStyleOverrideActionHighlightAttributes
@property (retain, nonatomic, getter=_visualStyleOverrideSeparatorAttributes, setter=_setVisualStyleOverrideSeparatorAttributes:) UIInterfaceActionSeparatorAttributes *visualStyleOverrideSeparatorAttributes; // ivar: _visualStyleOverrideSeparatorAttributes
@property (retain, nonatomic, getter=_visualStyleOverrideTitleLabelFont, setter=_setVisualStyleOverrideTitleLabelFont:) UIFont *visualStyleOverrideTitleLabelFont; // ivar: _visualStyleOverrideTitleLabelFont
@property (weak, nonatomic) NSObject<UIInterfaceActionVisualStyleProviding> *visualStyleProvider; // ivar: _visualStyleProvider
@property (readonly, nonatomic) NSPointerArray *weakSimultaneouslyPresentedGroupViews; // ivar: _weakSimultaneouslyPresentedGroupViews


-(BOOL)_hasLoadedStackViewContents;
-(BOOL)_isCornerRadiusDisplayEnabled;
-(BOOL)_shouldAllowPassthroughToLayersBehindUsForTouches:(id)arg0 ;
-(BOOL)_shouldInstallContentGuideConstraints;
-(BOOL)_shouldShowSeparatorAboveActionsSequenceView;
-(CGFloat)_topLevelItemsMargin;
-(id)_actionRepresentationViewForAction:(id)arg0 ;
-(id)_alertController;
-(id)_allActionViews;
-(id)_constraintsToPinView:(id)arg0 toObject:(id)arg1 identifier:(id)arg2 ;
-(id)_currentlyFocusedActionView;
-(id)_defaultOrderingForActionRepresentationViews:(id)arg0 ;
-(id)_initWithActionGroup:(id)arg0 visualStyleProvider:(id)arg1 actionHandlerInvocationDelegate:(id)arg2 ;
-(id)_interfaceActionGroupViewState;
-(id)_interfaceActionOfFocusedRepresentationView;
-(id)_loadVisualStyleForTraitCollection:(id)arg0 ;
-(id)_newActionGroupBackgroundView;
-(id)_newSeparatorViewForSeparatingTitleAndButtons;
-(id)_orderedTopLevelViews;
-(id)_systemDefaultFocusGroupIdentifier;
-(id)_viewContainingTopLevelItems;
-(id)_viewDisplayingRoundedBackground;
-(id)_visualStyleByApplyingOurTraitsToVisualStyle:(id)arg0 traitCollection:(id)arg1 ;
-(id)_widthAnchoredToContentGuideConstraintForTopLevelView:(id)arg0 ;
-(id)defaultVisualStyleForTraitCollection:(id)arg0 presentationStyle:(NSInteger)arg1 ;
-(id)initWithActionGroup:(id)arg0 actionHandlerInvocationDelegate:(id)arg1 ;
-(id)preferredFocusedView;
-(struct CGRect )_actionSequenceVisibleRectForMakingCenteredAction:(id)arg0 ;
-(struct CGRect )_contentEdgeFrame;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )_buttonEdgeInsetsFromGroupViewEdge;
-(void)_addBackgroudViewToViewHierarchy:(id)arg0 ;
-(void)_addConstraintToActiveTopLevelViewArrangementConstraints:(id)arg0 ;
-(void)_applyVisualStyle;
-(void)_applyVisualStyleCornerRadius;
-(void)_applyVisualStyleToActionsViewScrollView;
-(void)_applyVisualStyleToBackgroundViewDisplay;
-(void)_arrangeActionViewsInActionSequenceView;
-(void)_arrangeTopLevelViews;
-(void)_associateWeakSimultaneouslyPresentedGroupViews:(id)arg0 bidirectional:(BOOL)arg1 ;
-(void)_commonInitWithActionGroup:(id)arg0 visualStyleProvider:(id)arg1 actionHandlerInvocationDelegate:(id)arg2 ;
-(void)_determineActualLayoutAxis;
-(void)_installContentGuideConstraints;
-(void)_loadActionSequenceView;
-(void)_loadTopLevelItemsView;
-(void)_loadViewsIfNeeded;
-(void)_reloadStackViewContentsIfNeeded;
-(void)_reloadTopSeparatorView;
-(void)_removeConstraintToActiveTopLevelViewArrangementConstraints:(id)arg0 ;
-(void)_removeUsAsThePresentingViewControllerForAllActions;
-(void)_scrollActionRepresentationViewToVisibleForAction:(id)arg0 animated:(BOOL)arg1 ;
-(void)_scrollPreferredActionRepresentationViewToVisibleAnimated:(BOOL)arg0 ;
-(void)_setAndApplyVisualStyle:(id)arg0 ;
-(void)_setLayoutDebuggingIdentifier:(id)arg0 ;
-(void)_setNeedsUpdateActionSequenceViewArrangement;
-(void)_setNeedsUpdateTopLevelViewsArrangement;
-(void)_setUsAsThePresentingViewControllerForAllActions;
-(void)_updateActionSequenceScrollability;
-(void)_updateActionSequenceViewActionLayoutAxis;
-(void)_updateActionSequenceViewDebugLayoutIdentifier;
-(void)_updateRequiredActionRepresentationSizeConstraints;
-(void)_updateRoundedCornerPositionForSubviews;
-(void)beginTrackingSessionByTakingOverForSystemProvidedGestureRecognizer:(id)arg0 ;
-(void)configureForDismissAlongsideTransitionCoordinator:(id)arg0 ;
-(void)configureForPresentAlongsideTransitionCoordinator:(id)arg0 ;
-(void)dealloc;
-(void)insertArrangedHeaderView:(id)arg0 atIndex:(NSUInteger)arg1 scrollable:(BOOL)arg2 ;
// -(void)interfaceAction:(id)arg0 invokeActionHandler:(id)arg1 completion:(unk)arg2  ;
-(void)interfaceActionGroup:(id)arg0 reloadDisplayedContentActionGroupProperties:(id)arg1 ;
-(void)interfaceActionGroup:(id)arg0 reloadDisplayedContentVisualStyle:(id)arg1 ;
-(void)layoutSubviews;
-(void)reloadVisualStyle;
-(void)removeArrangedHeaderView:(id)arg0 ;
-(void)scrollToCenterForInterfaceAction:(id)arg0 ;
-(void)setActiveTestingVisualStyle:(id)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setSimultaneouslyPresentedGroupViews:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;


@end


#endif