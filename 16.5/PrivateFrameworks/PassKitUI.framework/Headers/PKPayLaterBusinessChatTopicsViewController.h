// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERBUSINESSCHATTOPICSVIEWCONTROLLER_H
#define PKPAYLATERBUSINESSCHATTOPICSVIEWCONTROLLER_H

@class PKPayLaterFinancingPlan, PKPaymentPass, PKPayLaterInstallment, PKPayLaterPayment, NSArray, NSString;
@protocol PKPayLaterSectionControllerDelegate, PKPayLaterBusinessChatTopicsSectionControllerDelegate;


#import "PKPayLaterViewController.h"
#import "PKPayLaterBusinessChatTopicsSectionController.h"
#import "PKBusinessChatController.h"

@interface PKPayLaterBusinessChatTopicsViewController : PKPayLaterViewController <PKPayLaterSectionControllerDelegate, PKPayLaterBusinessChatTopicsSectionControllerDelegate>

 {
    PKPayLaterFinancingPlan *_financingPlan;
    PKPaymentPass *_payLaterPass;
    PKPayLaterInstallment *_installment;
    PKPayLaterPayment *_payment;
    NSArray *_topics;
    NSUInteger _businessChatContext;
    PKPayLaterBusinessChatTopicsSectionController *_sectionController;
    PKBusinessChatController *_businessChatController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)disablesAutomaticDismissalUponEnteringBackground;
-(id)initWithPayLaterAccount:(id)arg0 payLaterPass:(id)arg1 financingPlan:(id)arg2 installment:(id)arg3 payment:(id)arg4 topics:(id)arg5 businessChatContext:(NSUInteger)arg6 ;
-(id)pageTag;
-(void)_cancelTapped;
-(void)_continueToChat;
-(void)openBusinessChatForTopic:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif