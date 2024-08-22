// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPEERPAYMENTQUOTECERTIFICATESRESPONSE_H
#define PKPEERPAYMENTQUOTECERTIFICATESRESPONSE_H

@class NSArray, NSString;


#import "PKPeerPaymentWebServiceResponse.h"

@interface PKPeerPaymentQuoteCertificatesResponse : PKPeerPaymentWebServiceResponse

@property (nonatomic) BOOL devSigned; // ivar: _devSigned
@property (readonly, copy, nonatomic) NSArray *encryptionCertificates; // ivar: _encryptionCertificates
@property (readonly, copy, nonatomic) NSString *encryptionVersion; // ivar: _encryptionVersion


-(id)initWithData:(id)arg0 ;


@end


#endif