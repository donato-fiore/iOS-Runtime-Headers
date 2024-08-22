// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERDISPUTEEXPLANATIONVIEWCONTROLLER_H
#define PKPAYLATERDISPUTEEXPLANATIONVIEWCONTROLLER_H

@class PKPayLaterFinancingPlan, PKPayLaterFinancingPlanDispute, PKPayLaterDynamicContentPage, PKPaymentPass;


#import "PKPayLaterViewController.h"
#import "PKPayLaterDisputeExplanationSectionController.h"
#import "PKBusinessChatController.h"

@interface PKPayLaterDisputeExplanationViewController : PKPayLaterViewController {
    PKPayLaterFinancingPlan *_financingPlan;
    PKPayLaterFinancingPlanDispute *_dispute;
    PKPayLaterDisputeExplanationSectionController *_sectionController;
    PKPayLaterDynamicContentPage *_dynamicContentPage;
    NSUInteger _layout;
    PKBusinessChatController *_businessChatController;
    PKPaymentPass *_payLaterPass;
}




+(id)dynamicContentPageForEvidenceRequiredForDispute:(id)arg0 ;
-(id)initWithFinancingPlan:(id)arg0 dispute:(id)arg1 payLaterAccount:(id)arg2 payLaterPass:(id)arg3 layout:(NSUInteger)arg4 dynamicContentPage:(id)arg5 ;
-(void)_resendEmailTapped;
-(void)_showSpinner:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif