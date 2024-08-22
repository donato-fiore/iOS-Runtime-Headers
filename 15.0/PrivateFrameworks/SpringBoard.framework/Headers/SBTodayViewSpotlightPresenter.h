// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBTODAYVIEWSPOTLIGHTPRESENTER_H
#define SBTODAYVIEWSPOTLIGHTPRESENTER_H

@class SBHHomePullToSearchSettings, UIView, NSString, NSLayoutConstraint, SBFFeatherBlurView, UIScrollView, SBFFluidBehaviorSettings, MTMaterialView, NSArray, NSMutableSet, _UIPortalView, SPUISearchBarController;
@protocol SPUISearchBarDelegate, SPUIRemoteSearchViewDelegate, PTSettingsKeyObserver, SBTodayViewSpotlightPresenterDelegate;

#import <Foundation/Foundation.h>

#import "_SBTodaySpotlightViewController.h"

@interface SBTodayViewSpotlightPresenter : NSObject <SPUISearchBarDelegate, SPUIRemoteSearchViewDelegate, PTSettingsKeyObserver>

 {
    SBHHomePullToSearchSettings *_pullToSearchSettings;
}


@property (retain, nonatomic) UIView *containerView; // ivar: _containerView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBTodayViewSpotlightPresenterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSLayoutConstraint *featherBlurHeightConstraint; // ivar: _featherBlurHeightConstraint
@property (retain, nonatomic) SBFFeatherBlurView *featherBlurView; // ivar: _featherBlurView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (nonatomic) BOOL scrollViewBeganScrollingFromTop; // ivar: _scrollViewBeganScrollingFromTop
@property (retain, nonatomic) SBFFluidBehaviorSettings *searchAnimationSettings; // ivar: _searchAnimationSettings
@property (retain, nonatomic) MTMaterialView *searchBackdropView; // ivar: _searchBackdropView
@property (retain, nonatomic) NSArray *searchBarGradientMaskLayers; // ivar: _searchBarGradientMaskLayers
@property (retain, nonatomic) NSMutableSet *searchBarPortalRequirementReasons; // ivar: _searchBarPortalRequirementReasons
@property (retain, nonatomic) _UIPortalView *searchBarPortalView; // ivar: _searchBarPortalView
@property (readonly, nonatomic) SPUISearchBarController *searchBarViewController; // ivar: _searchBarViewController
@property (retain, nonatomic) NSLayoutConstraint *searchBarViewTopConstraint; // ivar: _searchBarViewTopConstraint
@property (nonatomic) NSInteger searchState; // ivar: _searchState
@property (retain, nonatomic) _SBTodaySpotlightViewController *spotlightViewController; // ivar: _spotlightViewController
@property (readonly) Class superclass;


-(BOOL)isPresenting;
-(CGFloat)_rubberbandingOffsetForContentOffset:(struct CGPoint )arg0 ;
-(CGFloat)_spotlightPresentationProgressForOffset:(CGFloat)arg0 ;
-(CGFloat)_topOffset;
-(id)initWithSearchBarViewController:(id)arg0 containerView:(id)arg1 scrollView:(id)arg2 delegate:(id)arg3 ;
-(id)sharedRemoteSearchViewController;
-(void)_beginRequiringSearchBarPortalViewForReason:(id)arg0 ;
-(void)_didDismissSpotlight;
-(void)_didPresentSpotlight;
-(void)_endRequiringSearchBarPortalViewForReason:(id)arg0 ;
-(void)_layoutSearchViews;
-(void)_layoutSearchViewsWithMode:(NSInteger)arg0 withCompletion:(id)arg1 ;
-(void)_setUpFeatherBackgroundMatchMoveAnimations;
-(void)_setUpSearchAnimationSettings;
-(void)_setUpSearchBackdrop;
-(void)_setUpSearchBackdropMatchMoveAnimation;
-(void)_setUpSearchBar;
-(void)_willDismissSpotlightAnimated:(BOOL)arg0 ;
-(void)_willPresentSpotlightAnimated:(BOOL)arg0 ;
-(void)containerViewDidMoveToWindow:(id)arg0 ;
-(void)containerViewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)dismissSearchView;
-(void)dismissSpotlightAnimated:(BOOL)arg0 ;
-(void)layout;
-(void)presentSpotlightAnimated:(BOOL)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 ;
-(void)searchBarDidFocus;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;


@end


#endif