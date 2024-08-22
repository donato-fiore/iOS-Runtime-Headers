// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKINAPPPAYMENTSESSION_H
#define PKINAPPPAYMENTSESSION_H



#import "PKPaymentSession.h"

@interface PKInAppPaymentSession : PKPaymentSession



-(id)_appletForPaymentApplication:(id)arg0 ;
-(id)_appletWithIdentifier:(id)arg0 ;
-(id)authorizePaymentRequest:(id)arg0 forPaymentApplication:(id)arg1 usingNonce:(id)arg2 withAuthenticationCredential:(id)arg3 ;
-(id)authorizePaymentRequest:(id)arg0 forPaymentApplication:(id)arg1 usingNonce:(id)arg2 withAuthenticationCredential:(id)arg3 isFeatureNotSupportedError:(*BOOL)arg4 ;
-(id)authorizePaymentRequest:(id)arg0 forPaymentApplication:(id)arg1 withAuthorizationParameters:(id)arg2 ;
-(id)authorizeWithRequest:(id)arg0 authorizationParameters:(id)arg1 ;
-(id)initWithInternalSession:(id)arg0 targetQueue:(id)arg1 ;


@end


#endif