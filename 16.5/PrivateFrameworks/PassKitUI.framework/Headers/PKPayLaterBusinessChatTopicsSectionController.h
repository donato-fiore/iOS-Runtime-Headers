// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERBUSINESSCHATTOPICSSECTIONCONTROLLER_H
#define PKPAYLATERBUSINESSCHATTOPICSSECTIONCONTROLLER_H

@class PKPaymentPass, PKPayLaterFinancingPlan, PKPayLaterInstallment, PKPayLaterPayment, NSArray, PKAccountService;
@protocol PKPayLaterBusinessChatTopicsSectionControllerDelegate;


#import "PKPayLaterSectionController.h"
#import "PKPaymentTransactionIconGenerator.h"
#import "PKPayLaterIconTextRow.h"

@interface PKPayLaterBusinessChatTopicsSectionController : PKPayLaterSectionController {
    id<PKPayLaterBusinessChatTopicsSectionControllerDelegate> *_delegate;
    PKPaymentPass *_payLaterPass;
    PKPayLaterFinancingPlan *_financingPlan;
    PKPayLaterInstallment *_installment;
    PKPayLaterPayment *_payment;
    NSArray *_topics;
    NSArray *_topicsRows;
    PKPaymentTransactionIconGenerator *_iconGenerator;
    PKPayLaterIconTextRow *_iconTextRow;
    PKAccountService *_accountService;
    NSUInteger _businessChatContext;
}




-(id)headerAttributedStringForIdentifier:(id)arg0 ;
-(id)identifiers;
-(id)initWithPayLaterAccount:(id)arg0 payLaterPass:(id)arg1 financingPlan:(id)arg2 installment:(id)arg3 payment:(id)arg4 topics:(id)arg5 businessChatContext:(NSUInteger)arg6 delegate:(id)arg7 ;
-(id)layoutWithLayoutEnvironment:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)snapshotWithPreviousSnapshot:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)_configureFinancingPlanSection:(id)arg0 ;
-(void)_configureTopicsSection:(id)arg0 ;
-(void)_financingPlansForTopic:(id)arg0 completion:(id)arg1 ;
-(void)_handleTopicRowTapped:(id)arg0 topic:(id)arg1 ;
-(void)_showListOfFinancingPlansForRow:(id)arg0 topic:(id)arg1 ;
-(void)_showTopicExplanationForRow:(id)arg0 topic:(id)arg1 ;
-(void)_updateIconForFinancingPlan:(id)arg0 ;


@end


#endif