// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIINTERFACEACTIONREPRESENTATIONVIEW_H
#define UIINTERFACEACTIONREPRESENTATIONVIEW_H

@class UIView<UIInterfaceActionVisualBackgroundDisplaying>, NSString, NSLayoutConstraint, NSArray;
@protocol UIFocusEnvironment, UISpringLoadedInteractionSupporting, UIInterfaceActionDisplayPropertyObserver, UIFocusItemContainer;


#import "UIView.h"
#import "UIInterfaceAction.h"
#import "UISpringLoadedInteraction.h"
#import "UIInterfaceActionVisualStyle.h"

@interface UIInterfaceActionRepresentationView : UIView <UIFocusEnvironment, UISpringLoadedInteractionSupporting, UIInterfaceActionDisplayPropertyObserver>

 {
    BOOL _hasLoadedBackgroundView;
    BOOL _canKeepContentsInHierarchy;
    BOOL _hasLoadedContentFirstTime;
    BOOL _enforcedCanRemoveContentFromHierarchyWhenNotVisible;
    BOOL _enforcedCanRemoveContentFromHierarchyWhenNotVisibleValue;
}


@property (nonatomic, setter=_setContentsInsertedIntoViewHierarchy:) BOOL _contentsInsertedIntoViewHierarchy; // ivar: _contentsInsertedIntoViewHierarchy
@property (readonly, nonatomic) UIInterfaceAction *action; // ivar: _action
@property (retain, nonatomic) id *actionViewStateContext; // ivar: _actionViewStateContext
@property (readonly, nonatomic) UIView<UIInterfaceActionVisualBackgroundDisplaying> *backgroundHighlightView; // ivar: _backgroundHighlightView
@property (nonatomic) BOOL canRemoveContentFromHierarchyWhenNotVisible; // ivar: _canRemoveContentFromHierarchyWhenNotVisible
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property (readonly, nonatomic) NSObject<UIFocusItemContainer> *focusItemContainer;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (retain, nonatomic) UISpringLoadedInteraction *interactionForSpringLoading; // ivar: _interactionForSpringLoading
@property (readonly, nonatomic) NSLayoutConstraint *minimumHeightConstraint; // ivar: _minimumHeightConstraint
@property (readonly, nonatomic) NSLayoutConstraint *minimumWidthConstraint; // ivar: _minimumWidthConstraint
@property (nonatomic) BOOL ownsActionContent; // ivar: _ownsActionContent
@property (readonly, weak, nonatomic) NSObject<UIFocusEnvironment> *parentFocusEnvironment;
@property (readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (readonly, weak, nonatomic) UIView *preferredFocusedView;
@property (nonatomic, getter=isPressed) BOOL pressed; // ivar: _pressed
@property (retain, nonatomic) NSString *sectionID; // ivar: _sectionID
@property (nonatomic, getter=isSpringLoaded) BOOL springLoaded;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *viewsToDisappearWhenHighlighted; // ivar: _viewsToDisappearWhenHighlighted
@property (nonatomic) NSUInteger visualCornerPosition; // ivar: _visualCornerPosition
@property (readonly, nonatomic) UIInterfaceActionVisualStyle *visualStyle;


-(BOOL)_canLoadContentsIntoHierarchy;
-(BOOL)_fittingContentViewHasItsOwnActiveMinimumSizeConstraintsWithSize:(struct CGSize )arg0 ;
-(BOOL)_handleVisualFeedbackForPress:(id)arg0 pressed:(BOOL)arg1 ;
-(BOOL)_isVisibleWithinContainmentAncestor;
-(BOOL)_shouldShowPressFeedbackForEventWithPresses:(id)arg0 ;
-(BOOL)_showsFocusForFocusedView:(id)arg0 ;
-(BOOL)canBecomeFocused;
-(BOOL)hasLayoutHeightConstraintsIdenticalToRepresentationView:(id)arg0 ;
-(BOOL)isFocused;
-(id)__fittingContentSizingViewAllowingSelf;
-(id)__fittingContentSizingViewIfNotSelf;
-(id)_fittingContentSizingView;
-(id)_viewDisplayingBackground;
-(id)initWithAction:(id)arg0 ;
-(struct CGRect )_fittingContentSizingViewFrameInBounds:(struct CGRect )arg0 ;
-(struct CGSize )_fittingContentSizeWithFittingViewSize:(struct CGSize )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(struct UIEdgeInsets )_fittingContentSizingViewMargins;
-(void)_addLoadedContentsToHierarchyFirstTime;
-(void)_addLoadedContentsToHierarchyIfAllowed;
-(void)_applyVisualStyle;
-(void)_applyVisualStyleToBackgroundViewAndHighlighting;
-(void)_applyVisualStyleToLayoutMargins;
-(void)_applyVisualStyleToMinimumSizeConstraints;
-(void)_clearBackgroundPressedState;
-(void)_didScroll;
-(void)_enforceActionRepresentationViewsCanRemoveContentFromHierarchyWhenNotVisible:(BOOL)arg0 ;
-(void)_initializeHorizontalMarginsForAction;
-(void)_loadContentsIntoHierarchyAndPrepareIfNecessary;
-(void)_reloadBackgroundHighlightView;
-(void)_removeLoadedContentsFromHierarchyIfNotVisible;
-(void)_setHorizontalMargins:(struct UIEdgeInsets )arg0 preservesSuperviewLayoutMargins:(BOOL)arg1 ;
-(void)_showVisualFeedbackForPressed:(BOOL)arg0 ;
-(void)_updateFittingContentSizingViewToFitSize;
-(void)_updateHighlightAndPressedFeedback;
-(void)_updateLoadedContentsHierarchyByInsertingOrRemovingIfNecessary;
-(void)dealloc;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)interfaceAction:(id)arg0 reloadDisplayedContentActionProperties:(id)arg1 ;
-(void)interfaceAction:(id)arg0 reloadDisplayedContentVisualStyle:(id)arg1 ;
-(void)invalidateIntrinsicContentSize;
-(void)invokeInterfaceAction;
-(void)layoutMarginsDidChange;
-(void)layoutSubviews;
-(void)loadContents;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesChanged:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)updateConstraints;
-(void)updateContentsInsertedIntoHierarchy;


@end


#endif