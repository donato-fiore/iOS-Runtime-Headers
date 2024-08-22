// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTAUTHORIZATIONREWRAPSTATEPARAM_H
#define PKPAYMENTAUTHORIZATIONREWRAPSTATEPARAM_H

@class NSData;


#import "PKPaymentAuthorizationStateParam.h"
#import "PKWrappedPayment.h"

@interface PKPaymentAuthorizationRewrapStateParam : PKPaymentAuthorizationStateParam

@property (retain, nonatomic) NSData *credential; // ivar: _credential
@property (nonatomic) NSInteger cryptogramType; // ivar: _cryptogramType
@property (retain, nonatomic) NSData *nonceData; // ivar: _nonceData
@property (retain, nonatomic) PKWrappedPayment *wrappedPayment; // ivar: _wrappedPayment


+(id)paramWithWrappedPayment:(id)arg0 nonce:(id)arg1 credential:(id)arg2 cryptogramType:(NSInteger)arg3 ;
-(id)description;


@end


#endif