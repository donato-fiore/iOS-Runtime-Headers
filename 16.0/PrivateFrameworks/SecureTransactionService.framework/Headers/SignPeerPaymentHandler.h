// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIGNPEERPAYMENTHANDLER_H
#define SIGNPEERPAYMENTHANDLER_H

@class NFPeerPaymentSession;


#import "STSHandler.h"
#import "STSSigningSession.h"

@interface SignPeerPaymentHandler : STSHandler {
    NFPeerPaymentSession *_nfPeerPaymentSession;
}


@property (readonly, weak, nonatomic) STSSigningSession *parent; // ivar: _parent


-(id)initWithParent:(id)arg0 ;
-(id)signPeerPayment:(id)arg0 authorization:(id)arg1 error:(*id)arg2 ;
-(id)startNFSessionWithCompletion:(id)arg0 ;
-(unsigned char)supportedCredentialType;


@end


#endif