// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKDEFERREDPAYMENTSUMMARYITEMVALIDATOR_H
#define PKDEFERREDPAYMENTSUMMARYITEMVALIDATOR_H



#import "PKPaymentSummaryItemValidator.h"

@interface PKDeferredPaymentSummaryItemValidator : PKPaymentSummaryItemValidator



+(Class)validatedClass;
+(id)validatorWithObject:(id)arg0 ;
-(BOOL)isValidWithAPIType:(NSUInteger)arg0 withError:(*id)arg1 ;
-(BOOL)isValidWithError:(*id)arg0 ;
-(id)initWithDeferredPaymentSummaryItem:(id)arg0 ;


@end


#endif