// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERBUSINESSCHATTOPICEXPLANATIONSECTIONCONTROLLER_H
#define PKPAYLATERBUSINESSCHATTOPICEXPLANATIONSECTIONCONTROLLER_H

@class PKPaymentPass, PKPayLaterFinancingPlan, PKPayLaterInstallment, PKPayLaterPayment, PKPayLaterBusinessChatTopic;


#import "PKPayLaterSectionController.h"

@interface PKPayLaterBusinessChatTopicExplanationSectionController : PKPayLaterSectionController {
    PKPaymentPass *_payLaterPass;
    PKPayLaterFinancingPlan *_financingPlan;
    PKPayLaterInstallment *_installment;
    PKPayLaterPayment *_payment;
    PKPayLaterBusinessChatTopic *_topic;
}




-(id)_firstSectionIdentifier;
-(id)headerAttributedStringForIdentifier:(id)arg0 ;
-(id)identifiers;
-(id)initWithPayLaterAccount:(id)arg0 payLaterPass:(id)arg1 financingPlan:(id)arg2 installment:(id)arg3 payment:(id)arg4 topic:(id)arg5 dynamicContentPage:(id)arg6 delegate:(id)arg7 ;
-(id)layoutWithLayoutEnvironment:(id)arg0 sectionIdentifier:(id)arg1 ;
-(id)snapshotWithPreviousSnapshot:(id)arg0 forSectionIdentifier:(id)arg1 ;
-(void)_configureDynamicSection:(id)arg0 snapshot:(id)arg1 ;
-(void)applyHeaderConfigurationProperties:(id)arg0 sectionIdentifier:(id)arg1 ;


@end


#endif