// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAUTOMATICRELOADPAYMENTSUMMARYITEMVALIDATOR_H
#define PKAUTOMATICRELOADPAYMENTSUMMARYITEMVALIDATOR_H



#import "PKPaymentSummaryItemValidator.h"

@interface PKAutomaticReloadPaymentSummaryItemValidator : PKPaymentSummaryItemValidator



+(Class)validatedClass;
+(id)validatorWithObject:(id)arg0 ;
-(BOOL)isValidWithAPIType:(NSInteger)arg0 withError:(*id)arg1 ;
-(BOOL)isValidWithError:(*id)arg0 ;
-(id)initWithAutomaticReloadPaymentSummaryItem:(id)arg0 ;


@end


#endif