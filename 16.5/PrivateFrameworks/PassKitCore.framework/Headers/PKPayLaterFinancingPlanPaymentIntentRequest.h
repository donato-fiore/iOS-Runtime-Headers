// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERFINANCINGPLANPAYMENTINTENTREQUEST_H
#define PKPAYLATERFINANCINGPLANPAYMENTINTENTREQUEST_H

@class NSMutableArray, NSString;

#import <Foundation/Foundation.h>


@interface PKPayLaterFinancingPlanPaymentIntentRequest : NSObject

@property (retain, nonatomic) NSMutableArray *completions; // ivar: _completions
@property (readonly, nonatomic) NSUInteger intent; // ivar: _intent
@property (readonly, copy, nonatomic) NSString *planIdentifier; // ivar: _planIdentifier


-(id)identifier;
-(id)initWithPlanIdentifier:(id)arg0 intent:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)callCompletionsWithResponse:(id)arg0 error:(id)arg1 ;
-(void)coalesceWithRequest:(id)arg0 ;


@end


#endif