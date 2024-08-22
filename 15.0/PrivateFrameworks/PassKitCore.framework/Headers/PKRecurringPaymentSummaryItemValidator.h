// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKRECURRINGPAYMENTSUMMARYITEMVALIDATOR_H
#define PKRECURRINGPAYMENTSUMMARYITEMVALIDATOR_H



#import "PKPaymentSummaryItemValidator.h"

@interface PKRecurringPaymentSummaryItemValidator : PKPaymentSummaryItemValidator



+(Class)validatedClass;
+(id)validatorWithObject:(id)arg0 ;
-(BOOL)isValidWithAPIType:(NSUInteger)arg0 withError:(*id)arg1 ;
-(BOOL)isValidWithError:(*id)arg0 ;
-(id)initWithRecurringPaymentSummaryItem:(id)arg0 ;


@end


#endif