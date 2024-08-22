// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERFINANCINGPLANPAYMENTSCHEDULECOMPOSERDECLINEDINSTALLMENTITEM_H
#define PKPAYLATERFINANCINGPLANPAYMENTSCHEDULECOMPOSERDECLINEDINSTALLMENTITEM_H

@class NSString, PKPayLaterPayment;
@protocol PKPayLaterFinancingPlanPaymentScheduleComposerItem;


#import "PKPayLaterFinancingPlanPaymentScheduleComposerInstallmentItem.h"

@interface PKPayLaterFinancingPlanPaymentScheduleComposerDeclinedInstallmentItem : PKPayLaterFinancingPlanPaymentScheduleComposerInstallmentItem <PKPayLaterFinancingPlanPaymentScheduleComposerItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PKPayLaterPayment *payment; // ivar: _payment
@property (readonly) Class superclass;


-(NSUInteger)type;
-(id)initWithInstallment:(id)arg0 payment:(id)arg1 ;
-(void)populateRow:(id)arg0 financingPlan:(id)arg1 ;


@end


#endif