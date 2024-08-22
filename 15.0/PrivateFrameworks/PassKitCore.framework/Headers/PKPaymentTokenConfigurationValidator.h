// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTTOKENCONFIGURATIONVALIDATOR_H
#define PKPAYMENTTOKENCONFIGURATIONVALIDATOR_H

@class NSString;
@protocol PKPaymentValidating;

#import <Foundation/Foundation.h>

#import "PKPaymentTokenConfiguration.h"

@interface PKPaymentTokenConfigurationValidator : NSObject <PKPaymentValidating>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PKPaymentTokenConfiguration *tokenConfiguration; // ivar: _tokenConfiguration
@property (copy, nonatomic) NSString *tokenContextCurrencyCode; // ivar: _tokenContextCurrencyCode


+(Class)validatedClass;
+(id)validatorWithObject:(id)arg0 ;
-(BOOL)isValidWithAPIType:(NSUInteger)arg0 withError:(*id)arg1 ;
-(BOOL)isValidWithError:(*id)arg0 ;
-(id)initWithPaymentTokenConfiguration:(id)arg0 ;


@end


#endif