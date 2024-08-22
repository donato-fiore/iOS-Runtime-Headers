// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDASHBOARDFINANCINGPLANINSTALLMENTITEM_H
#define PKDASHBOARDFINANCINGPLANINSTALLMENTITEM_H

@class NSString, PKPayLaterFinancingPlan, PKPayLaterPaymentIntentController, PKPayLaterInstallment;
@protocol PKDashboardItem;

#import <Foundation/Foundation.h>


@interface PKDashboardFinancingPlanInstallmentItem : NSObject <PKDashboardItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PKPayLaterFinancingPlan *financingPlan; // ivar: _financingPlan
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *pageTag; // ivar: _pageTag
@property (readonly, nonatomic) PKPayLaterPaymentIntentController *paymentIntentController; // ivar: _paymentIntentController
@property (readonly, nonatomic) PKPayLaterInstallment *relevantInstallment; // ivar: _relevantInstallment
@property (readonly) Class superclass;


+(id)identifier;
-(id)initWithFinancingPlan:(id)arg0 relevantInstallment:(id)arg1 paymentIntentController:(id)arg2 pageTag:(id)arg3 ;


@end


#endif