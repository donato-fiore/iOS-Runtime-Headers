// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISEARCHPRESENTATIONCONTROLLER_H
#define _UISEARCHPRESENTATIONCONTROLLER_H

@class NSMapTable, UIPresentationController<_UISearchControllerPresenting>, NSString;
@protocol _UISearchControllerPresenting;


#import "UIPresentationController.h"
#import "_UISearchPresentationAssistant.h"
#import "UIView.h"

@interface _UISearchPresentationController : UIPresentationController <_UISearchControllerPresenting>

 {
    _UISearchPresentationAssistant *_assistant;
    UIView *_placeholderView;
    NSMapTable *_excisedSearchBarConstraitMap;
    NSMapTable *_placeholderConstraitMap;
    ? _controllerFlags;
}


@property (readonly, nonatomic) UIPresentationController<_UISearchControllerPresenting> *adaptivePresentationController;
@property (readonly, nonatomic) BOOL animatorShouldLayoutPresentationViews;
@property (readonly, nonatomic) UIView *backgroundObscuringView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger edgeForHidingNavigationBar;
@property (readonly, nonatomic) CGRect finalFrameForContainerView; // ivar: _finalFrameForContainerView
@property (readonly, nonatomic) BOOL forceObeyNavigationBarInsets;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat resultsControllerContentOffset;
@property (readonly, nonatomic) BOOL resultsUnderlapsSearchBar;
@property (readonly, nonatomic) BOOL searchBarCanContainScopeBar;
@property (readonly, retain, nonatomic) UIView *searchBarContainerView;
@property (readonly, nonatomic) BOOL searchBarShouldClipToBounds;
@property (readonly, nonatomic) BOOL searchBarToBecomeTopAttached;
@property (readonly, nonatomic) BOOL shouldAccountForStatusBar;
@property (readonly, nonatomic) CGFloat statusBarAdjustment;
@property (readonly) Class superclass;


+(BOOL)shouldExciseSearchBar:(id)arg0 duringPresentationWithPresenter:(id)arg1 ;
-(BOOL)_inheritsPresentingViewControllerThemeLevel;
-(BOOL)_shouldDisableInteractionDuringTransitions;
-(BOOL)_shouldKeepCurrentFirstResponder;
-(BOOL)_shouldRespectDefinesPresentationContext;
-(BOOL)shouldPresentInFullscreen;
-(CGFloat)_visibleRefreshControlHeightForTableView:(id)arg0 ;
-(NSInteger)adaptivePresentationStyle;
-(id)_constraintCopyOfConstraint:(id)arg0 replaceItem:(id)arg1 withItem:(id)arg2 ;
-(id)_createVisualStyleForProvider:(id)arg0 ;
-(id)_presentationControllerForTraitCollection:(id)arg0 ;
-(id)_presentedViewControllerForPresentationController:(id)arg0 traitCollection:(id)arg1 ;
-(id)initWithPresentedViewController:(id)arg0 presentingViewController:(id)arg1 ;
-(struct CGRect )frameOfPresentedViewInContainerView;
-(void)_dismissalTransitionWithSearchBarHostedByNavBarDidEnd:(BOOL)arg0 ;
-(void)_dismissalTransitionWithSearchBarHostedByNavBarWillBegin;
-(void)_dismissalTransitionWithSearchBarNotHostedByNavBarDidEnd:(BOOL)arg0 ;
-(void)_dismissalTransitionWithSearchBarNotHostedByNavBarWillBegin;
-(void)_exciseSearchBarFromCurrentContext;
-(void)_layoutPresentationWithSize:(struct CGSize )arg0 transitionCoordinator:(id)arg1 ;
-(void)_placeSearchBarBackIntoOriginalContext;
-(void)_presentationTransitionWithSearchBarHostedByNavBarDidEnd:(BOOL)arg0 ;
-(void)_presentationTransitionWithSearchBarHostedByNavBarWillBegin;
-(void)_presentationTransitionWithSearchBarNotHostedByNavBarDidEnd:(BOOL)arg0 ;
-(void)_presentationTransitionWithSearchBarNotHostedByNavBarWillBegin;
-(void)_transitionFromDidEnd;
-(void)_transitionFromWillBegin;
-(void)_transitionToDidEnd;
-(void)_transitionToPresentationController:(id)arg0 withTransitionCoordinator:(id)arg1 ;
-(void)_transitionToWillBegin;
-(void)_updateContainerFinalFrameForNonExcisedSearchBar;
-(void)_updatePresentingViewControllerContentScrollViewWithOffsets:(struct CGSize )arg0 transitionCoordinator:(id)arg1 ;
-(void)containerViewWillLayoutSubviews;
-(void)dealloc;
-(void)dismissalTransitionDidEnd:(BOOL)arg0 ;
-(void)dismissalTransitionWillBegin;
-(void)hideBackgroundObscuringView;
-(void)presentationTransitionDidEnd:(BOOL)arg0 ;
-(void)presentationTransitionWillBegin;
-(void)setContentVisible:(BOOL)arg0 ;
-(void)showBackgroundObscuringView;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif