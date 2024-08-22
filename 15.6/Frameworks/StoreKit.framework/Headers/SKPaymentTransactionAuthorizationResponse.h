// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKPAYMENTTRANSACTIONAUTHORIZATIONRESPONSE_H
#define SKPAYMENTTRANSACTIONAUTHORIZATIONRESPONSE_H

@class NSError, AKAuthorizationCredential;

#import <Foundation/Foundation.h>


@interface SKPaymentTransactionAuthorizationResponse : NSObject

@property (readonly, nonatomic) NSError *accountSignupError; // ivar: _accountSignupError
@property (readonly, nonatomic) AKAuthorizationCredential *authorizationAppleIDCredential; // ivar: _authorizationAppleIDCredential


-(id)initWithAuthorizationCredential:(id)arg0 error:(id)arg1 ;


@end


#endif