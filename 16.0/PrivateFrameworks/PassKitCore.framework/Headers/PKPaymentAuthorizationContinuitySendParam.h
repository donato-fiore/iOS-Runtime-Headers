// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTAUTHORIZATIONCONTINUITYSENDPARAM_H
#define PKPAYMENTAUTHORIZATIONCONTINUITYSENDPARAM_H



#import "PKPaymentAuthorizationStateParam.h"
#import "PKRemotePaymentRequest.h"

@interface PKPaymentAuthorizationContinuitySendParam : PKPaymentAuthorizationStateParam

@property (retain, nonatomic) PKRemotePaymentRequest *remotePaymentRequest; // ivar: _remotePaymentRequest


+(id)paramWithRemotePaymentRequest:(id)arg0 ;


@end


#endif