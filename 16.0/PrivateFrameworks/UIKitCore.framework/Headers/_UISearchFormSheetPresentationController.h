// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISEARCHFORMSHEETPRESENTATIONCONTROLLER_H
#define _UISEARCHFORMSHEETPRESENTATIONCONTROLLER_H

@class UIPresentationController<_UISearchControllerPresenting>, NSString;
@protocol _UISearchControllerPresenting;


#import "UIPresentationController.h"
#import "_UISearchPresentationAssistant.h"
#import "UIView.h"

@interface _UISearchFormSheetPresentationController : UIPresentationController <_UISearchControllerPresenting>

 {
    _UISearchPresentationAssistant *_assistant;
    UIView *_wrapperView;
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


-(BOOL)_shouldKeepCurrentFirstResponder;
-(BOOL)_shouldRespectDefinesPresentationContext;
-(BOOL)_shouldSubscribeToKeyboardNotifications;
-(NSInteger)adaptivePresentationStyle;
-(id)_presentationControllerForTraitCollection:(id)arg0 ;
-(id)_presentedViewControllerForPresentationController:(id)arg0 traitCollection:(id)arg1 ;
-(id)initWithPresentedViewController:(id)arg0 presentingViewController:(id)arg1 ;
-(id)presentedView;
-(struct CGRect )_frameOfPresentedViewControllerViewInSuperview;
-(struct CGRect )frameOfPresentedViewInContainerView;
-(void)_presentedView:(id)arg0 enableFormSheetAccoutrements:(BOOL)arg1 ;
-(void)_transitionFromDidEnd;
-(void)_transitionFromWillBegin;
-(void)_transitionToDidEnd;
-(void)_transitionToPresentationController:(id)arg0 withTransitionCoordinator:(id)arg1 ;
-(void)_transitionToWillBegin;
-(void)containerViewWillLayoutSubviews;
-(void)dealloc;
-(void)dismissalTransitionDidEnd:(BOOL)arg0 ;
-(void)dismissalTransitionWillBegin;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)presentationTransitionDidEnd:(BOOL)arg0 ;
-(void)presentationTransitionWillBegin;
-(void)setContentVisible:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif