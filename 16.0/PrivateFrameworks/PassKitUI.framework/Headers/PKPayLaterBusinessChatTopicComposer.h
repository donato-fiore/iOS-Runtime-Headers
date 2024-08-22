// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERBUSINESSCHATTOPICCOMPOSER_H
#define PKPAYLATERBUSINESSCHATTOPICCOMPOSER_H

@class PKAccountService, PKPayLaterFinancingPlan, PKAccount, PKPaymentPass, PKPayLaterInstallment, PKPayLaterPayment;

#import <Foundation/Foundation.h>


@interface PKPayLaterBusinessChatTopicComposer : NSObject {
    PKAccountService *_accountService;
    PKPayLaterFinancingPlan *_financingPlan;
    PKAccount *_payLaterAccount;
    PKPaymentPass *_payLaterPass;
    PKPayLaterInstallment *_installment;
    PKPayLaterPayment *_payment;
}




-(id)initWithPayLaterAccount:(id)arg0 payLaterPass:(id)arg1 financingPlan:(id)arg2 installment:(id)arg3 payment:(id)arg4 ;
-(void)_releventTopicsForFinancingPlanContextWithCompletion:(id)arg0 ;
-(void)_releventTopicsForPassContextWithCompletion:(id)arg0 ;
-(void)_releventTopicsForPaymentContextWithCompletion:(id)arg0 ;
-(void)releventTopicsForContext:(NSUInteger)arg0 completion:(id)arg1 ;


@end


#endif