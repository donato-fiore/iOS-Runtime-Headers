// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSTODAYVIEWCONTROLLER_H
#define CSTODAYVIEWCONTROLLER_H

@class NSSet, WGWidgetGroupViewController, UIView, NSString, _UILegibilitySettings, SBViewControllerTransitionContext;
@protocol WGWidgetGroupViewControllerDelegate, CSStatusBarBackgroundIntersecting, SBFLegibilitySettingsProviderDelegate, CSDateViewScrolling, SPUISearchBarDelegate, SBFLegibilitySettingsProvider, SBFAuthenticationStatusProvider, CSPersistentContentLayoutProviding, CSSpotlightPresenting, CSTodayViewControllerDelegate, CSWidgetGroupViewControllerProviding;


#import "CSCoverSheetViewControllerBase.h"
#import "CSComponent.h"
#import "CSLayoutStrategy.h"
#import "CSPageViewController.h"
#import "CSPaddingHeaderViewController.h"
#import "CSTodayPageView.h"

@interface CSTodayViewController : CSCoverSheetViewControllerBase <WGWidgetGroupViewControllerDelegate, CSStatusBarBackgroundIntersecting, SBFLegibilitySettingsProviderDelegate, CSDateViewScrolling, SPUISearchBarDelegate, SBFLegibilitySettingsProvider>

 {
    CSComponent *_dateViewComponent;
    CSComponent *_statusBarBackgroundComponent;
    CSComponent *_proudLockComponent;
    CSComponent *_homeAffordanceComponent;
    CSComponent *_controlCenterGrabberComponent;
    NSSet *_contentViews;
    id<SBFLegibilitySettingsProvider> *_spotlightLegibilityProvider;
    WGWidgetGroupViewController *_todayViewController;
    UIView *_fakeCanvasView;
    BOOL _pullToSearchPossible;
    BOOL _pullToSearchRecognizing;
    BOOL _scrollViewContentOffsetDirty;
    CGPoint _scrollViewLastContentOffset;
    BOOL _shouldAnimateNextDateComponentUpdate;
}


@property (retain, nonatomic) NSObject<SBFAuthenticationStatusProvider> *authenticationStatusProvider; // ivar: _authenticationStatusProvider
@property (readonly, nonatomic) CGFloat clippingOffset;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBFLegibilitySettingsProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat distanceFromBarToContent;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CSLayoutStrategy *layoutStrategy; // ivar: _layoutStrategy
@property (readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (weak, nonatomic) CSPageViewController *pageController; // ivar: _pageController
@property (weak, nonatomic) NSObject<CSPersistentContentLayoutProviding> *persistentLayoutProviding; // ivar: _persistentLayoutProviding
@property (retain, nonatomic) NSObject<CSSpotlightPresenting> *spotlightPresenter; // ivar: _spotlightPresenter
@property (readonly) Class superclass;
@property (weak, nonatomic) CSPaddingHeaderViewController *timePaddingViewController; // ivar: _timePaddingViewController
@property (weak, nonatomic) NSObject<CSTodayViewControllerDelegate> *todayViewControllerDelegate; // ivar: _todayViewControllerDelegate
@property (readonly, nonatomic) CGFloat topContentInset;
@property (retain, nonatomic) SBViewControllerTransitionContext *transitionContext; // ivar: _transitionContext
@property (retain, nonatomic) CSTodayPageView *view;
@property (retain, nonatomic) NSObject<CSWidgetGroupViewControllerProviding> *widgetGroupViewControllerProvider; // ivar: _widgetGroupViewControllerProvider


+(BOOL)_isPortrait;
+(CGFloat)verticalSpacingBetweenWidgets;
-(BOOL)_allowsDateViewScroll;
-(BOOL)handleEvent:(id)arg0 ;
-(BOOL)pullDownSearchGestureDraggingFromTopOfScrollView:(id)arg0 ;
-(CGFloat)_dateMinY;
-(CGFloat)_maxClippingOffset;
-(CGFloat)_statusBarHeight;
-(CGFloat)_topContentInsetForNavigationBar:(id)arg0 ;
-(CGFloat)_totalDistanceForBlurTransition;
-(CGFloat)pullDownSearchGesturePercentComplete;
-(CGFloat)pullDownSearchGestureYOffset;
-(NSInteger)participantState;
-(id)_dateMovingScrollView;
-(id)_majorScrollView;
-(id)_searchBarViewController;
-(id)init;
-(struct CGSize )_timePaddingSize;
-(struct CGSize )widgetGroupViewController:(id)arg0 sizeForInterfaceOrientation:(NSInteger)arg1 ;
-(struct UIEdgeInsets )widgetGroupViewController:(id)arg0 contentOccludingInsetsForInterfaceOrientation:(NSInteger)arg1 ;
-(struct UIEdgeInsets )widgetListViewEdgeInsetsIncludingSearchHeader:(BOOL)arg0 ;
-(void)_evaluateContentViews;
-(void)_initializeTodayViewControllerIfNecessary;
-(void)_prepareChildViewControllersIfNecessary;
-(void)_setTodayViewController:(id)arg0 ;
-(void)_setUpScrollView:(id)arg0 ;
-(void)_updateAppearance;
-(void)_updateAppearanceForScrollView:(id)arg0 ;
-(void)_updateAppearanceForScrollView:(id)arg0 animated:(BOOL)arg1 ;
-(void)_updateBehavior;
-(void)_updateContentInsets;
-(void)_updateSpotlightLegibility;
-(void)_widgetEditViewDidDisappear:(id)arg0 ;
-(void)_widgetEditViewDidDisappearImplementation;
-(void)_widgetEditViewWillAppear:(id)arg0 ;
-(void)_widgetEditViewWillDisappear:(id)arg0 ;
-(void)aggregateAppearance:(id)arg0 ;
-(void)aggregateBehavior:(id)arg0 ;
-(void)cleanupAfterSpotlightDismissal;
-(void)handleDraggingWillEndWithTargetContentOffset:(struct CGPoint *)arg0 forScrollView:(id)arg1 ;
-(void)handleScrollingEnded:(id)arg0 ;
-(void)loadView;
-(void)providerLegibilitySettingsChanged:(id)arg0 ;
-(void)resetForSpotlightDismissalAnimated:(BOOL)arg0 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)searchBarDidFocus;
-(void)updateAccessoryLegibility;
-(void)updateAppearanceForHidden:(BOOL)arg0 offset:(struct CGPoint )arg1 ;
-(void)updateAppearanceForStatusBarBackgroundHidden:(BOOL)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif