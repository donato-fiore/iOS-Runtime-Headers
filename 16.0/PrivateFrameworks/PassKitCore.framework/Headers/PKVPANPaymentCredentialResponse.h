// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKVPANPAYMENTCREDENTIALRESPONSE_H
#define PKVPANPAYMENTCREDENTIALRESPONSE_H

@class NSString;


#import "PKPaymentWebServiceResponse.h"
#import "PKEncryptedVPANPaymentCredentials.h"

@interface PKVPANPaymentCredentialResponse : PKPaymentWebServiceResponse

@property (readonly, copy, nonatomic) PKEncryptedVPANPaymentCredentials *credentials; // ivar: _credentials
@property (readonly, copy, nonatomic) NSString *expiration; // ivar: _expiration
@property (readonly, copy, nonatomic) NSString *vpanIdentifier; // ivar: _vpanIdentifier


-(id)initWithData:(id)arg0 ;


@end


#endif