// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERFINANCINGPLANPAYMENTSCHEDULECOMPOSERINSTALLMENTITEM_H
#define PKPAYLATERFINANCINGPLANPAYMENTSCHEDULECOMPOSERINSTALLMENTITEM_H

@class NSString, PKPayLaterFinancingPlan, PKPayLaterInstallment;
@protocol PKPayLaterFinancingPlanPaymentScheduleComposerItem;

#import <Foundation/Foundation.h>


@interface PKPayLaterFinancingPlanPaymentScheduleComposerInstallmentItem : NSObject <PKPayLaterFinancingPlanPaymentScheduleComposerItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PKPayLaterFinancingPlan *financingPlan; // ivar: _financingPlan
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PKPayLaterInstallment *installment; // ivar: _installment
@property (readonly) Class superclass;


-(NSUInteger)type;
-(id)date;
-(id)initWithFinancingPlan:(id)arg0 installment:(id)arg1 ;
-(id)paymentIdentifier;
-(void)populateRow:(id)arg0 ;


@end


#endif