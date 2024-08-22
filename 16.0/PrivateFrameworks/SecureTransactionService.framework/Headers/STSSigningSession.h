// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSSIGNINGSESSION_H
#define STSSIGNINGSESSION_H



#import "STSSessionBase.h"
#import "STSCredential.h"

@interface STSSigningSession : STSSessionBase {
    STSCredential *_activeCredential;
}




-(id)_createHandlerForMerchantPaymentSign;
-(id)_createHandlerForPeerPaymentSign;
-(id)canStartSession;
-(id)createHandlerForCredential:(id)arg0 ;
-(id)setActiveCredential:(id)arg0 ;
-(id)signInAppPayment:(id)arg0 authorization:(id)arg1 error:(*id)arg2 ;
-(id)signPeerPayment:(id)arg0 authorization:(id)arg1 error:(*id)arg2 ;


@end


#endif