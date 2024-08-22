// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTAUTHORIZATIONNONCESTATEPARAM_H
#define PKPAYMENTAUTHORIZATIONNONCESTATEPARAM_H

@class NSData, PKAuthenticatorEvaluationResponse;


#import "PKPaymentAuthorizationStateParam.h"

@interface PKPaymentAuthorizationNonceStateParam : PKPaymentAuthorizationStateParam

@property (retain, nonatomic) NSData *credential; // ivar: _credential
@property (retain, nonatomic) PKAuthenticatorEvaluationResponse *evaluationResponse; // ivar: _evaluationResponse


+(id)paramWithAuthenticatorEvaluationResponse:(id)arg0 ;
+(id)paramWithCredential:(id)arg0 ;
-(id)description;


@end


#endif