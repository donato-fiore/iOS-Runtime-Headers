// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPEERPAYMENTQUOTECERTIFICATESREQUEST_H
#define PKPEERPAYMENTQUOTECERTIFICATESREQUEST_H



#import "PKPeerPaymentWebServiceRequest.h"

@interface PKPeerPaymentQuoteCertificatesRequest : PKPeerPaymentWebServiceRequest

@property (nonatomic) NSUInteger destination; // ivar: _destination


-(id)_urlRequestWithServiceURL:(id)arg0 appleAccountInformation:(id)arg1 ;


@end


#endif