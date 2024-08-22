// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIGNMERCHANTPAYMENTHANDLER_H
#define SIGNMERCHANTPAYMENTHANDLER_H

@class NFECommercePaymentSession;


#import "STSHandler.h"
#import "STSSigningSession.h"

@interface SignMerchantPaymentHandler : STSHandler {
    NFECommercePaymentSession *_nfECommerceSession;
}


@property (readonly, weak, nonatomic) STSSigningSession *parent; // ivar: _parent


-(id)initWithParent:(id)arg0 ;
-(id)signInAppPayment:(id)arg0 authorization:(id)arg1 error:(*id)arg2 ;
-(id)startNFSessionWithCompletion:(id)arg0 ;
-(unsigned char)supportedCredentialType;


@end


#endif