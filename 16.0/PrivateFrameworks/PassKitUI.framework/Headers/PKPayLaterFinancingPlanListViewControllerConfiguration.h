// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERFINANCINGPLANLISTVIEWCONTROLLERCONFIGURATION_H
#define PKPAYLATERFINANCINGPLANLISTVIEWCONTROLLERCONFIGURATION_H

@class NSArray, PKPaymentPass, PKPayLaterPaymentIntentController;

#import <Foundation/Foundation.h>

#import "PKPayLaterBusinessChatTopic.h"

@interface PKPayLaterFinancingPlanListViewControllerConfiguration : NSObject

@property (retain, nonatomic) PKPayLaterBusinessChatTopic *businessChatTopic; // ivar: _businessChatTopic
@property (retain, nonatomic) NSArray *completedFinancingPlans; // ivar: _completedFinancingPlans
@property (readonly, nonatomic) NSUInteger context; // ivar: _context
@property (retain, nonatomic) PKPaymentPass *payLaterPass; // ivar: _payLaterPass
@property (retain, nonatomic) PKPayLaterPaymentIntentController *paymentIntentController; // ivar: _paymentIntentController


-(id)initWithContext:(NSUInteger)arg0 ;


@end


#endif