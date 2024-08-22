// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERFINANCINGPLANPAYMENTSCHEDULECOMPOSERINSTALLMENTITEM_H
#define PKPAYLATERFINANCINGPLANPAYMENTSCHEDULECOMPOSERINSTALLMENTITEM_H

@class NSString, PKPayLaterInstallment;
@protocol PKPayLaterFinancingPlanPaymentScheduleComposerItem;

#import <Foundation/Foundation.h>


@interface PKPayLaterFinancingPlanPaymentScheduleComposerInstallmentItem : NSObject <PKPayLaterFinancingPlanPaymentScheduleComposerItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PKPayLaterInstallment *installment; // ivar: _installment
@property (readonly) Class superclass;


-(NSUInteger)type;
-(id)date;
-(id)initWithInstallment:(id)arg0 ;
-(id)paymentIdentifier;
-(void)populateRow:(id)arg0 financingPlan:(id)arg1 ;


@end


#endif