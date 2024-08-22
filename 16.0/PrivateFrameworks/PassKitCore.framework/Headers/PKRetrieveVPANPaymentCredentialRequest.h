// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKRETRIEVEVPANPAYMENTCREDENTIALREQUEST_H
#define PKRETRIEVEVPANPAYMENTCREDENTIALREQUEST_H

@class NSString, NSArray;


#import "PKPaymentWebServiceRequest.h"
#import "PKVirtualCardEncryptionFields.h"
#import "PKSecureElementPass.h"

@interface PKRetrieveVPANPaymentCredentialRequest : PKPaymentWebServiceRequest

@property (copy, nonatomic) NSString *deviceIdentifier; // ivar: _deviceIdentifier
@property (retain, nonatomic) PKVirtualCardEncryptionFields *encryptionFields; // ivar: _encryptionFields
@property (readonly, copy, nonatomic) NSArray *endpointComponents;
@property (copy, nonatomic) NSString *merchantHost; // ivar: _merchantHost
@property (copy, nonatomic) NSString *nonce; // ivar: _nonce
@property (retain, nonatomic) PKSecureElementPass *paymentPass; // ivar: _paymentPass
@property (copy, nonatomic) NSString *vpanIdentifier; // ivar: _vpanIdentifier


-(id)_urlRequestWithServiceURL:(id)arg0 appleAccountInformation:(id)arg1 ;
-(id)initWithPaymentPass:(id)arg0 vpanIdentifier:(id)arg1 deviceIdentifier:(id)arg2 nonce:(id)arg3 encryptionFields:(id)arg4 merchantHost:(id)arg5 ;


@end


#endif