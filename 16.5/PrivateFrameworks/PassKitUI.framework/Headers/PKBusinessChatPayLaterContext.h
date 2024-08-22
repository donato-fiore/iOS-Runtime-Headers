// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKBUSINESSCHATPAYLATERCONTEXT_H
#define PKBUSINESSCHATPAYLATERCONTEXT_H

@class PKAccount, PKPaymentPass, PKPayLaterBusinessChatTopic, PKPayLaterFinancingPlan, PKPayLaterInstallment, PKPayLaterPayment, PKPayLaterFinancingPlanDispute, NSString;
@protocol PKBusinessChatContext;

#import <Foundation/Foundation.h>


@interface PKBusinessChatPayLaterContext : NSObject <PKBusinessChatContext>

 {
    PKAccount *_payLaterAccount;
    PKPaymentPass *_paymentPass;
    PKPayLaterBusinessChatTopic *_topic;
    PKPayLaterFinancingPlan *_financingPlan;
    PKPayLaterInstallment *_installment;
    PKPayLaterPayment *_payment;
    PKPayLaterFinancingPlanDispute *_dispute;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)requiresAuthorization;
-(id)bodyText;
-(id)businessIdentifier;
-(id)groupParameters;
-(id)initWithPayLaterAccount:(id)arg0 paymentPass:(id)arg1 topic:(id)arg2 financingPlan:(id)arg3 installment:(id)arg4 payment:(id)arg5 dispute:(id)arg6 ;
-(id)intentParameters;


@end


#endif