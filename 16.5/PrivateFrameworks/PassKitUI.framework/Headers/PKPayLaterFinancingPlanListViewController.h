// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERFINANCINGPLANLISTVIEWCONTROLLER_H
#define PKPAYLATERFINANCINGPLANLISTVIEWCONTROLLER_H

@class PKPayLaterFinancingPlanListViewControllerConfiguration, PKAccountService, PKAccountServicePayLaterFinancingPlanQuery, NSString;
@protocol PKPayLaterFinancingPlanListSectionControllerDelegate;


#import "PKPayLaterViewController.h"
#import "PKPayLaterFinancingPlanListSectionController.h"
#import "PKBusinessChatController.h"

@interface PKPayLaterFinancingPlanListViewController : PKPayLaterViewController <PKPayLaterFinancingPlanListSectionControllerDelegate>

 {
    PKPayLaterFinancingPlanListViewControllerConfiguration *_configuration;
    PKPayLaterFinancingPlanListSectionController *_sectionController;
    PKBusinessChatController *_businessChatController;
    PKAccountService *_accountService;
    PKAccountServicePayLaterFinancingPlanQuery *_primaryFinancingPlansUpdateQuery;
    PKAccountServicePayLaterFinancingPlanQuery *_secondaryFinancingPlansUpdateQuery;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)activePlansAndCompletedPlansCountListViewControllerWithPayLaterAccount:(id)arg0 paymentIntentController:(id)arg1 financingPlans:(id)arg2 completedFinancingPlansCount:(NSInteger)arg3 ;
+(id)completedFinancingPlansListViewControllerWithPayLaterAccount:(id)arg0 paymentIntentController:(id)arg1 completedFinancingPlans:(id)arg2 completedFinancingPlansQuery:(id)arg3 ;
+(id)disputeFinancingPlansListViewControllerWithPayLaterAccount:(id)arg0 payLaterPass:(id)arg1 businessChatTopic:(id)arg2 financingPlans:(id)arg3 completedFinancingPlans:(id)arg4 financingPlansUpdateQuery:(id)arg5 completedFinancingPlansQuery:(id)arg6 ;
+(id)financingPlansListViewControllerWithPayLaterAccount:(id)arg0 paymentIntentController:(id)arg1 financingPlans:(id)arg2 financingPlansUpdateQuery:(id)arg3 ;
-(id)additionalAnalyticsDictionary;
-(id)initWithPayLaterAccount:(id)arg0 context:(NSUInteger)arg1 primaryFinancingPlans:(id)arg2 secondaryFinancingPlans:(id)arg3 tertiaryFinancingPlansCount:(NSInteger)arg4 payLaterPass:(id)arg5 businessChatTopic:(id)arg6 paymentIntentController:(id)arg7 primaryFinancingPlansUpdateQuery:(id)arg8 secondaryFinancingPlansUpdateQuery:(id)arg9 ;
-(id)pageTag;
-(void)_updatedFinancingPlan:(id)arg0 ;
-(void)didAddFinancingPlan:(id)arg0 ;
-(void)didRemoveFinancingPlan:(id)arg0 ;
-(void)didUpdateFinancingPlan:(id)arg0 ;
-(void)didUpdatePayLaterAccount:(id)arg0 ;
-(void)openBusinessChatForTopic:(id)arg0 financingPlan:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif