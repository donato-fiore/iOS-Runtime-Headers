// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKACCOUNTWEBSERVICEFINANCINGPLANFUNDINGSOURCEACTIONREQUEST_H
#define PKACCOUNTWEBSERVICEFINANCINGPLANFUNDINGSOURCEACTIONREQUEST_H

@class NSString, NSURL;


#import "PKPaymentRewrapRequest.h"

@interface PKAccountWebServiceFinancingPlanFundingSourceActionRequest : PKPaymentRewrapRequest

@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (nonatomic) NSUInteger intent; // ivar: _intent
@property (copy, nonatomic) NSString *planIdentifier; // ivar: _planIdentifier


-(id)_murlRequestWithServiceURL:(id)arg0 endpointComponents:(id)arg1 queryParameters:(id)arg2 appleAccountInformation:(id)arg3 ;
-(id)_urlRequestWithServiceURL:(id)arg0 deviceIdentifier:(id)arg1 rewrapData:(id)arg2 appleAccountInformation:(id)arg3 ;


@end


#endif