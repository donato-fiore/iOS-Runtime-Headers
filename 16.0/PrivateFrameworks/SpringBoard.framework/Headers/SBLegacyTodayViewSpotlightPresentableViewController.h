// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBLEGACYTODAYVIEWSPOTLIGHTPRESENTABLEVIEWCONTROLLER_H
#define SBLEGACYTODAYVIEWSPOTLIGHTPRESENTABLEVIEWCONTROLLER_H

@class UIViewController, NSString, NSLayoutConstraint, SBFFeatherBlurView, UIScrollView, MTMaterialView, NSArray, NSMutableSet, _UIPortalView, SPUISearchBarController, SBHHomePullToSearchSettings;
@protocol SPUIRemoteSearchViewDelegate, SBSearchPresentable, SBLegacyTodayViewSpotlightPresentableViewControllerDelegate;


#import "SBSpotlightMultiplexingViewController.h"

@interface SBLegacyTodayViewSpotlightPresentableViewController : UIViewController <SPUIRemoteSearchViewDelegate, SBSearchPresentable>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBLegacyTodayViewSpotlightPresentableViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSLayoutConstraint *featherBlurHeightConstraint; // ivar: _featherBlurHeightConstraint
@property (retain, nonatomic) SBFFeatherBlurView *featherBlurView; // ivar: _featherBlurView
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat maxPresentationOffset; // ivar: _maxPresentationOffset
@property (readonly, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (retain, nonatomic) MTMaterialView *searchBackdropView; // ivar: _searchBackdropView
@property (retain, nonatomic) NSArray *searchBarGradientMaskLayers; // ivar: _searchBarGradientMaskLayers
@property (retain, nonatomic) NSMutableSet *searchBarPortalRequirementReasons; // ivar: _searchBarPortalRequirementReasons
@property (retain, nonatomic) _UIPortalView *searchBarPortalView; // ivar: _searchBarPortalView
@property (readonly, nonatomic) SPUISearchBarController *searchBarViewController; // ivar: _searchBarViewController
@property (retain, nonatomic) NSLayoutConstraint *searchBarViewTopConstraint; // ivar: _searchBarViewTopConstraint
@property (retain, nonatomic) SBHHomePullToSearchSettings *searchTransitionSettings;
@property (readonly, nonatomic) SBSpotlightMultiplexingViewController *spotlightMultiplexingViewController; // ivar: _spotlightMultiplexingViewController
@property (readonly) Class superclass;
@property (nonatomic) CGFloat topOffset; // ivar: _topOffset


-(BOOL)_canShowWhileLocked;
-(id)_sharedRemoteSearchViewController;
-(id)initWithSpotlightMultiplexingViewController:(id)arg0 searchBarViewController:(id)arg1 scrollView:(id)arg2 ;
-(id)willBeginAnimatingPresentationProgressForState:(SEL)arg0 needsInitialLayout:(NSInteger)arg1 ;
-(void)_beginRequiringSearchBarPortalViewForReason:(id)arg0 ;
-(void)_endRequiringSearchBarPortalViewForReason:(id)arg0 ;
-(void)_setUpFeatherBackgroundMatchMoveAnimations;
-(void)_setUpSearchBackdrop;
-(void)_setUpSearchBackdropMatchMoveAnimation;
-(void)_setUpSearchBar;
-(void)_updateMaskLayers;
-(void)dismissSearchView;
-(void)updatePresentationProgress:(CGFloat)arg0 withOffset:(CGFloat)arg1 presentationState:(NSInteger)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif