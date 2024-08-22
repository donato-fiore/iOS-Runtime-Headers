// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBTODAYVIEWSPOTLIGHTPRESENTER_H
#define SBTODAYVIEWSPOTLIGHTPRESENTER_H

@class SBHHomePullToSearchSettings, UIView, NSString, _UILegibilitySettings, UIScrollView, SPUISearchBarController, UIViewController;
@protocol SPUISearchBarDelegate, SBSearchPresenterDelegate, SBSpotlightPresentableViewControllerDelegate, SBLegacyTodayViewSpotlightPresentableViewControllerDelegate, SBHLegibility, SBTodayViewSpotlightPresenterDelegate;

#import <Foundation/Foundation.h>

#import "SBSearchPresenter.h"
#import "_SBTodaySpotlightViewController.h"

@interface SBTodayViewSpotlightPresenter : NSObject <SPUISearchBarDelegate, SBSearchPresenterDelegate, SBSpotlightPresentableViewControllerDelegate, SBLegacyTodayViewSpotlightPresentableViewControllerDelegate, SBHLegibility>

 {
    SBHHomePullToSearchSettings *_pullToSearchSettings;
}


@property (retain, nonatomic) UIView *containerView; // ivar: _containerView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBTodayViewSpotlightPresenterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (retain, nonatomic) SBSearchPresenter *presenter; // ivar: _presenter
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (readonly, nonatomic) SPUISearchBarController *searchBarViewController; // ivar: _searchBarViewController
@property (retain, nonatomic) _SBTodaySpotlightViewController *spotlightMultiplexingViewController; // ivar: _spotlightMultiplexingViewController
@property (readonly, nonatomic) UIViewController *spotlightViewController; // ivar: _spotlightViewController
@property (readonly) Class superclass;


-(BOOL)isPresenting;
-(BOOL)searchPresenterCanPresent:(id)arg0 ;
-(BOOL)wantsHomeAffordanceForSpotlightPresentableViewController:(id)arg0 ;
-(CGFloat)_topOffset;
-(CGFloat)searchTopOffsetForSearchPresenter:(id)arg0 ;
-(id)_newSearchBackdropView;
-(id)backdropViewForLegacyTodayViewSpotlightPresentableViewController:(id)arg0 ;
-(id)backgroundViewForSpotlightPresentableViewController:(id)arg0 ;
-(id)initWithSearchBarViewController:(id)arg0 containerView:(id)arg1 scrollView:(id)arg2 delegate:(id)arg3 ;
-(id)searchAffordanceViewForSpotlightPresentableViewController:(id)arg0 ;
-(id)searchPresentablesForPresenter:(id)arg0 ;
-(void)dismissSpotlightAnimated:(BOOL)arg0 ;
-(void)layout;
-(void)legacyTodayViewSpotlightPresentableViewControllerShouldDismiss:(id)arg0 ;
-(void)presentSpotlightAnimated:(BOOL)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 ;
-(void)searchBarDidFocus;
-(void)searchPresenterDidDismissSearch:(id)arg0 ;
-(void)searchPresenterDidPresentSearch:(id)arg0 ;
-(void)searchPresenterWillDismissSearch:(id)arg0 animated:(BOOL)arg1 ;
-(void)searchPresenterWillPresentSearch:(id)arg0 animated:(BOOL)arg1 ;
-(void)spotlightPresentableViewControllerShouldDismiss:(id)arg0 ;


@end


#endif