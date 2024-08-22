// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPEERPAYMENTSESSION_H
#define PKPEERPAYMENTSESSION_H



#import "PKPaymentSession.h"

@interface PKPeerPaymentSession : PKPaymentSession



-(BOOL)deleteApplet;
-(id)authorizePeerPaymentQuote:(id)arg0 forPaymentApplication:(id)arg1 withAuthenticationCredential:(id)arg2 ;
-(id)authorizePeerPaymentQuote:(id)arg0 forPaymentApplication:(id)arg1 withAuthenticationCredential:(id)arg2 shouldReregister:(*BOOL)arg3 ;
-(id)initWithInternalSession:(id)arg0 targetQueue:(id)arg1 ;


@end


#endif