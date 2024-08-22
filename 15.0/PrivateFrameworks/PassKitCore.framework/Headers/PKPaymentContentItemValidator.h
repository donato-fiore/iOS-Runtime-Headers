// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTCONTENTITEMVALIDATOR_H
#define PKPAYMENTCONTENTITEMVALIDATOR_H

@class NSString;
@protocol PKPaymentValidating;

#import <Foundation/Foundation.h>

#import "PKPaymentContentItem.h"

@interface PKPaymentContentItemValidator : NSObject <PKPaymentValidating>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PKPaymentContentItem *item; // ivar: _item
@property (readonly) Class superclass;


+(Class)validatedClass;
+(id)validatorWithObject:(id)arg0 ;
-(BOOL)isValidWithAPIType:(NSUInteger)arg0 withError:(*id)arg1 ;
-(BOOL)isValidWithError:(*id)arg0 ;
-(id)initWithContentItem:(id)arg0 ;


@end


#endif