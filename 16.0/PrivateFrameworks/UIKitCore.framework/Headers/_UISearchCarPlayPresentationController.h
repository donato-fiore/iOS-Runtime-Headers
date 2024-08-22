// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISEARCHCARPLAYPRESENTATIONCONTROLLER_H
#define _UISEARCHCARPLAYPRESENTATIONCONTROLLER_H

@class UISearchPresentationController;


#import "UIVisualEffectView.h"

@interface _UISearchCarPlayPresentationController : UISearchPresentationController

@property (retain, nonatomic) UIVisualEffectView *blurView; // ivar: _blurView


-(BOOL)animatorShouldLayoutPresentationViews;
-(BOOL)forceObeyNavigationBarInsets;
-(BOOL)resultsUnderlapsSearchBar;
-(BOOL)searchBarCanContainScopeBar;
-(BOOL)searchBarShouldClipToBounds;
-(BOOL)searchBarToBecomeTopAttached;
-(BOOL)shouldAccountForStatusBar;
-(CGFloat)resultsControllerContentOffset;
-(CGFloat)statusBarAdjustment;
-(NSInteger)adaptivePresentationStyle;
-(NSUInteger)edgeForHidingNavigationBar;
-(id)_presentationControllerForTraitCollection:(id)arg0 ;
-(id)_presentedViewControllerForSizeClassPair:(struct ? )arg0 ;
-(id)adaptivePresentationController;
-(id)backgroundObscuringView;
-(struct CGRect )finalFrameForContainerView;
-(void)containerViewWillLayoutSubviews;
-(void)hideBackgroundObscuringView;
-(void)setContentVisible:(BOOL)arg0 ;
-(void)showBackgroundObscuringView;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif