// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTISSUERPROVISIONINGCERTIFICATESRESPONSE_H
#define PKPAYMENTISSUERPROVISIONINGCERTIFICATESRESPONSE_H

@class NSArray, NSData;


#import "PKPaymentWebServiceResponse.h"

@interface PKPaymentIssuerProvisioningCertificatesResponse : PKPaymentWebServiceResponse

@property (readonly, copy, nonatomic) NSArray *certificates; // ivar: _certificates
@property (readonly, copy, nonatomic) NSData *nonce; // ivar: _nonce
@property (copy, nonatomic) NSData *nonceSignature; // ivar: _nonceSignature
@property (copy, nonatomic) NSData *publicKeyHash; // ivar: _publicKeyHash


-(id)initWithData:(id)arg0 ;


@end


#endif