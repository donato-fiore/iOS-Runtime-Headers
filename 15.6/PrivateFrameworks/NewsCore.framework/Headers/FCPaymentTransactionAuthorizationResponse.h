// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCPAYMENTTRANSACTIONAUTHORIZATIONRESPONSE_H
#define FCPAYMENTTRANSACTIONAUTHORIZATIONRESPONSE_H

@class NSError;

#import <Foundation/Foundation.h>

#import "FCAuthKitAuthorizationCredential.h"

@interface FCPaymentTransactionAuthorizationResponse : NSObject

@property (readonly, nonatomic) NSError *accountSignupError; // ivar: _accountSignupError
@property (readonly, nonatomic) FCAuthKitAuthorizationCredential *credential; // ivar: _credential


-(id)initWithCredential:(id)arg0 accountSignupError:(id)arg1 ;


@end


#endif