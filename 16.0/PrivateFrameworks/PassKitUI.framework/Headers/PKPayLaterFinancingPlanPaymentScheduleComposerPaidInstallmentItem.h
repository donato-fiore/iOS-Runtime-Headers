// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERFINANCINGPLANPAYMENTSCHEDULECOMPOSERPAIDINSTALLMENTITEM_H
#define PKPAYLATERFINANCINGPLANPAYMENTSCHEDULECOMPOSERPAIDINSTALLMENTITEM_H

@class NSString, PKPayLaterInstallment, PKPayLaterPayment;
@protocol PKPayLaterFinancingPlanPaymentScheduleComposerItem;

#import <Foundation/Foundation.h>


@interface PKPayLaterFinancingPlanPaymentScheduleComposerPaidInstallmentItem : NSObject <PKPayLaterFinancingPlanPaymentScheduleComposerItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PKPayLaterInstallment *installment; // ivar: _installment
@property (readonly, nonatomic) PKPayLaterPayment *payment; // ivar: _payment
@property (readonly) Class superclass;


-(NSUInteger)type;
-(id)date;
-(id)initWithInstallment:(id)arg0 payment:(id)arg1 ;
-(void)populateRow:(id)arg0 financingPlan:(id)arg1 ;


@end


#endif