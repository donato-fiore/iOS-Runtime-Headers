// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTREGISTERCREDENTIALRESPONSE_H
#define PKPAYMENTREGISTERCREDENTIALRESPONSE_H

@class NSData, NSURL;


#import "PKPaymentWebServiceResponse.h"

@interface PKPaymentRegisterCredentialResponse : PKPaymentWebServiceResponse

@property (readonly, nonatomic) NSData *credentialAttestation; // ivar: _credentialAttestation
@property (readonly, nonatomic) NSData *encryptedData; // ivar: _encryptedData
@property (readonly, nonatomic) NSData *ephemeralPublicKey; // ivar: _ephemeralPublicKey
@property (readonly, nonatomic) NSURL *passURL; // ivar: _passURL


-(id)initWithData:(id)arg0 ;


@end


#endif