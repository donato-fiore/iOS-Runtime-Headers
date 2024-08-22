// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKACCOUNTWEBSERVICEBANKLOOKUPREQUEST_H
#define PKACCOUNTWEBSERVICEBANKLOOKUPREQUEST_H

@class NSURL, NSString;


#import "PKAccountWebServiceRequest.h"

@interface PKAccountWebServiceBankLookupRequest : PKAccountWebServiceRequest

@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (copy, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (copy, nonatomic) NSString *query; // ivar: _query


-(id)_urlRequestWithAppleAccountInformation:(id)arg0 ;


@end


#endif