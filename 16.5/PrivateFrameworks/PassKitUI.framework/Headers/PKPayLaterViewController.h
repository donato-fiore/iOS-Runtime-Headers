// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERVIEWCONTROLLER_H
#define PKPAYLATERVIEWCONTROLLER_H

@class UIView, PKAccountService, NSString, PKAccount;
@protocol PKAccountServiceObserver, PKPayLaterSectionControllerDelegate, PKPayLaterViewControllerDelegate;


#import "PKPaymentSetupOptionsViewController.h"
#import "PKAnimatedNavigationBarTitleView.h"

@interface PKPayLaterViewController : PKPaymentSetupOptionsViewController <PKAccountServiceObserver, PKPayLaterSectionControllerDelegate, PKPayLaterViewControllerDelegate>

 {
    PKAnimatedNavigationBarTitleView *_navBarImageView;
    CGFloat _navBarAnimationProgress;
    UIView *_footerView;
}


@property (readonly, nonatomic) PKAccountService *accountService; // ivar: _accountService
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKAccount *payLaterAccount; // ivar: _payLaterAccount
@property (readonly) Class superclass;


-(BOOL)disablesAutomaticDismissalUponEnteringBackground;
-(BOOL)pkui_disablesAutomaticDismissalUponEnteringBackground;
-(CGFloat)footerViewContentHeight;
-(CGFloat)headerHeight;
-(id)additionalAnalyticsDictionary;
-(id)initWithPayLaterAccount:(id)arg0 ;
-(id)navigationBarAnimationText;
-(id)navigationBarAnimationView;
-(id)navigationControllerViewControllers;
-(id)pageTag;
-(void)_cancelButtonTapped;
-(void)_layoutFooter;
-(void)_reportViewDidAppear:(BOOL)arg0 ;
-(void)_updateNavigationBarIconForNavigationBarAppeared:(BOOL)arg0 ;
-(void)accountChanged:(id)arg0 ;
-(void)accountFinancingPlanAdded:(id)arg0 accountIdentifier:(id)arg1 ;
-(void)accountFinancingPlanRemoved:(id)arg0 accountIdentifier:(id)arg1 ;
-(void)accountFinancingPlanUpdated:(id)arg0 oldFinancingPlan:(id)arg1 accountIdentifier:(id)arg2 ;
-(void)dealloc;
-(void)didAddFinancingPlan:(id)arg0 ;
-(void)didRemoveFinancingPlan:(id)arg0 ;
-(void)didTapHyperLink:(id)arg0 ;
-(void)didUpdateFinancingPlan:(id)arg0 ;
-(void)didUpdatePayLaterAccount:(id)arg0 ;
-(void)popViewControllerAnimated:(BOOL)arg0 ;
-(void)pushViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)reloadNavigationBarHeaderFooterLayout;
-(void)reportAnalyticsEvent:(id)arg0 ;
-(void)setFooterView:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)willMoveToParentViewController:(id)arg0 ;


@end


#endif