// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDASHBOARDFINANCINGPLANITEM_H
#define PKDASHBOARDFINANCINGPLANITEM_H

@class NSString, PKPayLaterFinancingPlan, PKAccount, PKPayLaterPaymentIntentController;
@protocol PKDashboardItem;

#import <Foundation/Foundation.h>


@interface PKDashboardFinancingPlanItem : NSObject <PKDashboardItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PKPayLaterFinancingPlan *financingPlan; // ivar: _financingPlan
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *pageTag; // ivar: _pageTag
@property (readonly, nonatomic) PKAccount *payLaterAccount; // ivar: _payLaterAccount
@property (readonly, nonatomic) PKPayLaterPaymentIntentController *paymentIntentController; // ivar: _paymentIntentController
@property (readonly) Class superclass;


+(id)identifier;
-(id)initWithFinancingPlan:(id)arg0 payLaterAccount:(id)arg1 paymentIntentController:(id)arg2 pageTag:(id)arg3 ;


@end


#endif