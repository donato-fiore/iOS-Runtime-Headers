// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISEARCHPOPOVERPRESENTATIONCONTROLLER_H
#define _UISEARCHPOPOVERPRESENTATIONCONTROLLER_H

@class UIPresentationController<_UISearchControllerPresenting>, NSString;
@protocol _UISearchControllerPresenting;


#import "UIPopoverPresentationController.h"
#import "_UISearchPresentationAssistant.h"
#import "UIView.h"

@interface _UISearchPopoverPresentationController : UIPopoverPresentationController <_UISearchControllerPresenting>

 {
    _UISearchPresentationAssistant *_assistant;
}


@property (readonly, nonatomic) UIPresentationController<_UISearchControllerPresenting> *adaptivePresentationController;
@property (readonly, nonatomic) BOOL animatorShouldLayoutPresentationViews;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger edgeForHidingNavigationBar;
@property (readonly, nonatomic) CGRect finalFrameForContainerView; // ivar: finalFrameForContainerView
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


-(BOOL)_forcePresentationInPresenterScene;
-(NSInteger)adaptivePresentationStyle;
-(id)_popoverHostingWindow;
-(id)_presentationControllerForTraitCollection:(id)arg0 ;
-(id)_presentedViewControllerForSizeClassPair:(struct ? )arg0 ;
-(id)initWithPresentedViewController:(id)arg0 presentingViewController:(id)arg1 ;
-(void)_transitionFromDidEnd;
-(void)_transitionFromWillBegin;
-(void)_transitionToDidEnd;
-(void)_transitionToWillBegin;
-(void)presentationTransitionWillBegin;
-(void)setContentVisible:(BOOL)arg0 ;


@end


#endif