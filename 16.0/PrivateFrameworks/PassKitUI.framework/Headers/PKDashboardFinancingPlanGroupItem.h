// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDASHBOARDFINANCINGPLANGROUPITEM_H
#define PKDASHBOARDFINANCINGPLANGROUPITEM_H

@class NSString, NSArray, PKAccount, PKPayLaterPaymentIntentController;
@protocol PKDashboardItem;

#import <Foundation/Foundation.h>


@interface PKDashboardFinancingPlanGroupItem : NSObject <PKDashboardItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *financingPlans; // ivar: _financingPlans
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *pageTag; // ivar: _pageTag
@property (readonly, nonatomic) PKAccount *payLaterAccount; // ivar: _payLaterAccount
@property (readonly, nonatomic) PKPayLaterPaymentIntentController *paymentIntentController; // ivar: _paymentIntentController
@property (readonly) Class superclass;


+(id)identifier;
-(id)initWithFinancingPlans:(id)arg0 payLaterAccount:(id)arg1 paymentIntentController:(id)arg2 pageTag:(id)arg3 ;


@end


#endif