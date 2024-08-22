// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSHIPPINGMETHODVALIDATOR_H
#define PKSHIPPINGMETHODVALIDATOR_H

@class NSString;
@protocol PKPaymentValidating;


#import "PKPaymentSummaryItemValidator.h"

@interface PKShippingMethodValidator : PKPaymentSummaryItemValidator <PKPaymentValidating>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)validatedClass;
+(id)validatorWithObject:(id)arg0 ;
-(BOOL)isValidWithAPIType:(NSUInteger)arg0 withError:(*id)arg1 ;
-(BOOL)isValidWithError:(*id)arg0 ;
-(id)initWithShippingMethod:(id)arg0 ;


@end


#endif