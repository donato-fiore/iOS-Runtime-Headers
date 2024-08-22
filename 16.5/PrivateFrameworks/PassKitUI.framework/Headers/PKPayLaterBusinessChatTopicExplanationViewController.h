// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERBUSINESSCHATTOPICEXPLANATIONVIEWCONTROLLER_H
#define PKPAYLATERBUSINESSCHATTOPICEXPLANATIONVIEWCONTROLLER_H

@class PKPayLaterFinancingPlan, PKPaymentPass, PKPayLaterInstallment, PKPayLaterPayment, PKPayLaterBusinessChatTopic, PKPayLaterDynamicContentPage, NSString;
@protocol PKPayLaterSectionControllerDelegate;


#import "PKPayLaterViewController.h"
#import "PKPayLaterBusinessChatTopicExplanationSectionController.h"
#import "PKBusinessChatController.h"

@interface PKPayLaterBusinessChatTopicExplanationViewController : PKPayLaterViewController <PKPayLaterSectionControllerDelegate>

 {
    PKPayLaterFinancingPlan *_financingPlan;
    PKPaymentPass *_payLaterPass;
    PKPayLaterInstallment *_installment;
    PKPayLaterPayment *_payment;
    PKPayLaterBusinessChatTopic *_topic;
    PKPayLaterBusinessChatTopicExplanationSectionController *_sectionController;
    PKBusinessChatController *_businessChatController;
    PKPayLaterDynamicContentPage *_dynamicContentPage;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)disablesAutomaticDismissalUponEnteringBackground;
-(id)additionalAnalyticsDictionary;
-(id)initWithPayLaterAccount:(id)arg0 payLaterPass:(id)arg1 financingPlan:(id)arg2 installment:(id)arg3 payment:(id)arg4 topic:(id)arg5 dynamicContent:(id)arg6 ;
-(id)pageTag;
-(void)_cancelTapped;
-(void)_openBusinessChat;
-(void)viewDidLoad;


@end


#endif