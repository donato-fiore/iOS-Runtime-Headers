// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERFINANCINGPLANPAYMENTSECTIONCONTROLLER_H
#define PKPAYLATERFINANCINGPLANPAYMENTSECTIONCONTROLLER_H

@class PKPaymentPass, UIImage, NSDateFormatter, PKPayLaterPaymentIntentController, PKPayLaterFinancingPlan, PKPayLaterPayment;


#import "PKPayLaterSectionController.h"
#import "PKPayLaterButtonRow.h"
#import "PKPayLaterFinancingPlanRow.h"
#import "PKBusinessChatController.h"
#import "PKPayLaterBusinessChatTopicComposer.h"

@interface PKPayLaterFinancingPlanPaymentSectionController : PKPayLaterSectionController {
    PKPayLaterButtonRow *_reportIssueButton;
    PKPayLaterFinancingPlanRow *_financingPlanRow;
    PKPaymentPass *_payLaterPass;
    UIImage *_merchantIcon;
    UIImage *_resizedMerchantIcon;
    PKBusinessChatController *_businessChatController;
    NSDateFormatter *_paymentDateFormatter;
    PKPayLaterPaymentIntentController *_paymentIntentController;
    PKPayLaterBusinessChatTopicComposer *_topicsComposer;
}


@property (retain, nonatomic) PKPayLaterFinancingPlan *financingPlan; // ivar: _financingPlan
@property (retain, nonatomic) PKPayLaterPayment *payment; // ivar: _payment


-(Class)headerViewClassForSectionIdentifier:(id)arg0 ;
-(id)identifiers;
-(id)initWithFinancingPlan:(id)arg0 payment:(id)arg1 payLaterAccount:(id)arg2 paymentIntentController:(id)arg3 merchantIcon:(id)arg4 delegate:(id)arg5 ;
-(id)snapshotWithPreviousSnapshot:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)_configurePaymentSummarySection:(id)arg0 ;
-(void)_configureReportIssueSection:(id)arg0 ;
-(void)configureHeaderView:(id)arg0 forSectionIdentifier:(id)arg1 ;


@end


#endif