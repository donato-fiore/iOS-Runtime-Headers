// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKREFRESHVPANPAYMENTCREDENTIALREQUEST_H
#define PKREFRESHVPANPAYMENTCREDENTIALREQUEST_H



#import "PKRetrieveVPANPaymentCredentialRequest.h"

@interface PKRefreshVPANPaymentCredentialRequest : PKRetrieveVPANPaymentCredentialRequest



-(id)endpointComponents;
-(id)initWithPaymentPass:(id)arg0 vpanIdentifier:(id)arg1 deviceIdentifier:(id)arg2 nonce:(id)arg3 encryptionFields:(id)arg4 ;


@end


#endif