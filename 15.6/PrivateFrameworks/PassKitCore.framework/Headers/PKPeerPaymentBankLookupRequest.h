// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPEERPAYMENTBANKLOOKUPREQUEST_H
#define PKPEERPAYMENTBANKLOOKUPREQUEST_H

@class NSString;


#import "PKPeerPaymentWebServiceRequest.h"

@interface PKPeerPaymentBankLookupRequest : PKPeerPaymentWebServiceRequest

@property (copy, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (copy, nonatomic) NSString *query; // ivar: _query


-(id)_urlRequestWithServiceURL:(id)arg0 appleAccountInformation:(id)arg1 ;
-(id)initWithCountryCode:(id)arg0 query:(id)arg1 ;


@end


#endif