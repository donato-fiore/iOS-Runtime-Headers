// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTREQUESTVALIDATOR_H
#define PKPAYMENTREQUESTVALIDATOR_H

@class NSString;
@protocol PKPaymentValidating;

#import <Foundation/Foundation.h>

#import "PKPaymentRequest.h"

@interface PKPaymentRequestValidator : NSObject <PKPaymentValidating>

 {
    PKPaymentRequest *_request;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)validatedClass;
+(id)validatorWithObject:(id)arg0 ;
-(BOOL)_checkTotal:(id)arg0 withAPIType:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)isValidWithAPIType:(NSUInteger)arg0 withError:(*id)arg1 ;
-(BOOL)isValidWithError:(*id)arg0 ;
-(id)initWithPaymentRequest:(id)arg0 ;


@end


#endif