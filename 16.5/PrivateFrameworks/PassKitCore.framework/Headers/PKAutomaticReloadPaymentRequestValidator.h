// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAUTOMATICRELOADPAYMENTREQUESTVALIDATOR_H
#define PKAUTOMATICRELOADPAYMENTREQUESTVALIDATOR_H

@class NSString;
@protocol PKPaymentValidating;

#import <Foundation/Foundation.h>

#import "PKAutomaticReloadPaymentRequest.h"

@interface PKAutomaticReloadPaymentRequestValidator : NSObject <PKPaymentValidating>



@property (readonly, nonatomic) PKAutomaticReloadPaymentRequest *automaticReloadPaymentRequest; // ivar: _automaticReloadPaymentRequest
@property (copy, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)validatedClass;
+(id)validatorWithObject:(id)arg0 ;
-(BOOL)isValidWithAPIType:(NSInteger)arg0 withError:(*id)arg1 ;
-(BOOL)isValidWithError:(*id)arg0 ;
-(id)initWithAutomaticReloadPaymentRequest:(id)arg0 ;


@end


#endif