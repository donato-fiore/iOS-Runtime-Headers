// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERFINANCINGPLANVIEWCONTROLLER_H
#define PKPAYLATERFINANCINGPLANVIEWCONTROLLER_H

@class PKPayLaterFinancingPlan, PKPaymentPass, PKPayLaterPaymentIntentController, UIImage, NSDateFormatter, UIImageView, NSString;
@protocol PKPayLaterContentActionFooterViewDelegate, PKPayLaterDashboardMessageComposerDelegate, PKViewControllerPreflightable;


#import "PKPayLaterViewController.h"
#import "PKPayLaterFinancingPlanSectionController.h"
#import "PKPayLaterContentActionFooterView.h"
#import "PKPayLaterDashboardMessageComposer.h"
#import "PKPaymentTransactionIconGenerator.h"

@interface PKPayLaterFinancingPlanViewController : PKPayLaterViewController <PKPayLaterContentActionFooterViewDelegate, PKPayLaterDashboardMessageComposerDelegate, PKViewControllerPreflightable>

 {
    PKPayLaterFinancingPlan *_financingPlan;
    PKPaymentPass *_payLaterPass;
    PKPayLaterFinancingPlanSectionController *_sectionController;
    PKPayLaterPaymentIntentController *_paymentIntentController;
    PKPayLaterContentActionFooterView *_footerView;
    UIImage *_merchantIcon;
    NSDateFormatter *_dateFormatter;
    PKPayLaterDashboardMessageComposer *_dashboardMessagesComposer;
    PKPaymentTransactionIconGenerator *_iconGenerator;
    UIImageView *_navigationBarImageView;
    BOOL _preflightedData;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)headerHeight;
-(id)additionalAnalyticsDictionary;
-(id)initWithFinancingPlan:(id)arg0 payLaterAccount:(id)arg1 paymentIntentController:(id)arg2 merchantIcon:(id)arg3 iconGenerator:(id)arg4 ;
-(id)navigationBarAnimationView;
-(id)pageTag;
-(void)_closeButtonTapped;
-(void)_configureFooter;
-(void)_updateMerchantIcon;
-(void)dashboardMessageComposer:(id)arg0 requestPresentFinancingPlanDetails:(id)arg1 ;
-(void)dashboardMessageComposer:(id)arg0 requestPresentPassDetailsForPass:(id)arg1 ;
-(void)dashboardMessageComposer:(id)arg0 requestPresentViewController:(id)arg1 ;
-(void)dashboardMessageComposer:(id)arg0 requestPushViewController:(id)arg1 ;
-(void)didUpdateFinancingPlan:(id)arg0 ;
-(void)didUpdatePayLaterAccount:(id)arg0 ;
-(void)payLaterContentActionFooterViewDidTapButton;
-(void)preflightWithCompletion:(id)arg0 ;
-(void)reloadMessages;
-(void)viewDidLoad;


@end


#endif