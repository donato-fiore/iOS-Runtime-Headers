// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERFINANCINGPLANPAYMENTSCHEDULECOMPOSERPAYMENTITEM_H
#define PKPAYLATERFINANCINGPLANPAYMENTSCHEDULECOMPOSERPAYMENTITEM_H

@class NSString, PKPayLaterFinancingPlan, PKPayLaterPayment;
@protocol PKPayLaterFinancingPlanPaymentScheduleComposerItem;

#import <Foundation/Foundation.h>


@interface PKPayLaterFinancingPlanPaymentScheduleComposerPaymentItem : NSObject <PKPayLaterFinancingPlanPaymentScheduleComposerItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PKPayLaterFinancingPlan *financingPlan; // ivar: _financingPlan
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PKPayLaterPayment *payment; // ivar: _payment
@property (readonly) Class superclass;


-(NSUInteger)type;
-(id)date;
-(id)initWithFinancingPlan:(id)arg0 payment:(id)arg1 ;
-(id)installmentIdentifier;
-(void)populateRow:(id)arg0 ;


@end


#endif