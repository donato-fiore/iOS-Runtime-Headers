// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTAUTHORIZATIONSUCCESSSTATEPARAM_H
#define PKPAYMENTAUTHORIZATIONSUCCESSSTATEPARAM_H



#import "PKPaymentAuthorizationStateParam.h"
#import "PKPeerPaymentTransactionMetadata.h"

@interface PKPaymentAuthorizationSuccessStateParam : PKPaymentAuthorizationStateParam

@property (retain, nonatomic) PKPeerPaymentTransactionMetadata *peerPaymentTransactionMetadata; // ivar: _peerPaymentTransactionMetadata


+(id)paramWithPeerPaymentTransactionMetadata:(id)arg0 ;
-(id)description;


@end


#endif