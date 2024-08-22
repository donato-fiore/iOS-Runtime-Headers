// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTAUTHORIZATIONAUTHORIZESTATEPARAM_H
#define PKPAYMENTAUTHORIZATIONAUTHORIZESTATEPARAM_H

@class NSData, PKAuthenticatorEvaluationResponse;


#import "PKPaymentAuthorizationStateParam.h"

@interface PKPaymentAuthorizationAuthorizeStateParam : PKPaymentAuthorizationStateParam

@property (retain, nonatomic) NSData *credential; // ivar: _credential
@property (nonatomic) NSInteger cryptogramType; // ivar: _cryptogramType
@property (retain, nonatomic) PKAuthenticatorEvaluationResponse *evaluationResponse; // ivar: _evaluationResponse
@property (retain, nonatomic) NSData *networkMerchantIdentifier; // ivar: _networkMerchantIdentifier
@property (retain, nonatomic) NSData *nonceData; // ivar: _nonceData


+(id)paramWithAuthenticatorEvaluationResponse:(id)arg0 ;
+(id)paramWithCredential:(id)arg0 ;
+(id)paramWithNonceParam:(id)arg0 nonce:(id)arg1 cryptogramType:(NSInteger)arg2 networkMerchantIdentifier:(id)arg3 ;
-(id)description;


@end


#endif