// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBCOVERSHEETSPOTLIGHTPRESENTER_H
#define SBCOVERSHEETSPOTLIGHTPRESENTER_H

@class UIScrollView, NSString, _UILegibilitySettings;
@protocol SBCoverSheetSpotlightViewControllerDelegate, SBSearchPresenterDelegate, SBSpotlightPresentableViewControllerDelegate, CSCoverSheetSpotlightPresenting, SBCoverSheetSpotlightPresenterDelegate;

#import <Foundation/Foundation.h>

#import "SBCoverSheetSpotlightViewController.h"
#import "SBSearchPresenter.h"

@interface SBCoverSheetSpotlightPresenter : NSObject <SBCoverSheetSpotlightViewControllerDelegate, SBSearchPresenterDelegate, SBSpotlightPresentableViewControllerDelegate, CSCoverSheetSpotlightPresenting>

 {
    id<SBCoverSheetSpotlightPresenterDelegate> *_delegate;
    UIScrollView *_scrollView;
    SBCoverSheetSpotlightViewController *_spotlightViewController;
    SBSearchPresenter *_searchPresenter;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (nonatomic) CGFloat strength; // ivar: _strength
@property (readonly) Class superclass;


-(BOOL)isSpotlightPresented;
-(BOOL)searchPresenterCanPresent:(id)arg0 ;
-(CGFloat)searchTopOffsetForSearchPresenter:(id)arg0 ;
-(id)backgroundViewForSpotlightPresentableViewController:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)searchAffordanceViewForSpotlightPresentableViewController:(id)arg0 ;
-(id)searchPresentablesForPresenter:(id)arg0 ;
-(void)coverSheetSpotlightViewControllerAddContentView:(id)arg0 ;
-(void)coverSheetSpotlightViewControllerRemoveContentView:(id)arg0 ;
-(void)coverSheetSpotlightViewControllerShouldDismiss:(id)arg0 animated:(BOOL)arg1 ;
-(void)dismissSpotlightAnimated:(BOOL)arg0 ;
-(void)presentSpotlightAnimated:(BOOL)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 ;
-(void)searchPresenterWillDismissSearch:(id)arg0 animated:(BOOL)arg1 ;
-(void)searchPresenterWillPresentSearch:(id)arg0 animated:(BOOL)arg1 ;
-(void)spotlightPresentableViewControllerShouldDismiss:(id)arg0 ;


@end


#endif