// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKACCOUNTWEBSERVICEADDFUNDINGSOURCEREQUEST_H
#define PKACCOUNTWEBSERVICEADDFUNDINGSOURCEREQUEST_H

@class NSString, NSURL;


#import "PKAccountWebServiceRequest.h"
#import "PKAccountWebServiceCertificatesResponse.h"
#import "PKAccountPaymentFundingSource.h"

@interface PKAccountWebServiceAddFundingSourceRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (retain, nonatomic) PKAccountWebServiceCertificatesResponse *certificatesResponse; // ivar: _certificatesResponse
@property (retain, nonatomic) PKAccountPaymentFundingSource *fundingSource; // ivar: _fundingSource
@property (retain, nonatomic) NSString *fundingSourceTermsIdentifier; // ivar: _fundingSourceTermsIdentifier


-(id)_urlRequestWithAppleAccountInformation:(id)arg0 ;


@end


#endif