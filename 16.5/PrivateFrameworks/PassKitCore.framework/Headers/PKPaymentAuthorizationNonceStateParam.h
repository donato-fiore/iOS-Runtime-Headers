// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTAUTHORIZATIONNONCESTATEPARAM_H
#define PKPAYMENTAUTHORIZATIONNONCESTATEPARAM_H

@class NSData;


#import "PKPaymentAuthorizationStateParam.h"
#import "PKAuthenticatorEvaluationResponse.h"

@interface PKPaymentAuthorizationNonceStateParam : PKPaymentAuthorizationStateParam

@property (retain, nonatomic) NSData *credential; // ivar: _credential
@property (retain, nonatomic) PKAuthenticatorEvaluationResponse *evaluationResponse; // ivar: _evaluationResponse


+(id)paramWithAuthenticatorEvaluationResponse:(id)arg0 ;
+(id)paramWithCredential:(id)arg0 ;
-(id)description;


@end


#endif