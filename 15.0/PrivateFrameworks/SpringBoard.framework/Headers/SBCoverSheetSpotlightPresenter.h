// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBCOVERSHEETSPOTLIGHTPRESENTER_H
#define SBCOVERSHEETSPOTLIGHTPRESENTER_H

@class SBHHomePullToSearchSettings, SBFFluidBehaviorSettings, UIScrollView, NSString;
@protocol SPUIRemoteSearchViewDelegate, PTSettingsKeyObserver, SBCoverSheetSpotlightViewControllerDelegate, CSCoverSheetSpotlightPresenting, SBCoverSheetSpotlightPresenterDelegate;

#import <Foundation/Foundation.h>

#import "SBCoverSheetSpotlightViewController.h"

@interface SBCoverSheetSpotlightPresenter : NSObject <SPUIRemoteSearchViewDelegate, PTSettingsKeyObserver, SBCoverSheetSpotlightViewControllerDelegate, CSCoverSheetSpotlightPresenting>

 {
    id<SBCoverSheetSpotlightPresenterDelegate> *_delegate;
    SBHHomePullToSearchSettings *_pullToSearchSettings;
    SBFFluidBehaviorSettings *_searchAnimationSettings;
    UIScrollView *_scrollView;
    BOOL _scrollViewBeganScrollingFromTop;
    NSInteger _searchState;
    SBCoverSheetSpotlightViewController *_spotlightViewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isSpotlightPresented;
-(CGFloat)_rubberbandingOffsetForContentOffset:(struct CGPoint )arg0 ;
-(CGFloat)_spotlightPresentationProgressForOffset:(CGFloat)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)_setUpSearchAnimationSettings;
-(void)coverSheetSpotlightViewControllerShouldDismiss:(id)arg0 animated:(BOOL)arg1 ;
-(void)dismissSearchView;
-(void)dismissSpotlightAnimated:(BOOL)arg0 ;
-(void)presentSpotlightAnimated:(BOOL)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 ;
-(void)setSearchState:(NSInteger)arg0 withMode:(NSInteger)arg1 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;


@end


#endif