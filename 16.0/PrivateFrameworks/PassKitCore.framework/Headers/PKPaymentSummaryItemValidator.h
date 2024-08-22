// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTSUMMARYITEMVALIDATOR_H
#define PKPAYMENTSUMMARYITEMVALIDATOR_H

@class NSString;
@protocol PKPaymentValidating;

#import <Foundation/Foundation.h>

#import "PKPaymentSummaryItem.h"

@interface PKPaymentSummaryItemValidator : NSObject <PKPaymentValidating>



@property (copy, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PKPaymentSummaryItem *item; // ivar: _item
@property (readonly) Class superclass;


+(Class)validatedClass;
+(id)validatorWithObject:(id)arg0 ;
-(BOOL)isValidWithAPIType:(NSInteger)arg0 withError:(*id)arg1 ;
-(BOOL)isValidWithError:(*id)arg0 ;
-(id)initWithPaymentSummaryItem:(id)arg0 ;


@end


#endif