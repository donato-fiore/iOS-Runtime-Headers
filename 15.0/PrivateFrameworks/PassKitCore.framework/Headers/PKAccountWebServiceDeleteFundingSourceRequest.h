// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKACCOUNTWEBSERVICEDELETEFUNDINGSOURCEREQUEST_H
#define PKACCOUNTWEBSERVICEDELETEFUNDINGSOURCEREQUEST_H

@class NSString, NSURL;


#import "PKAccountWebServiceRequest.h"

@interface PKAccountWebServiceDeleteFundingSourceRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (retain, nonatomic) NSString *fundingSourceIdentifier; // ivar: _fundingSourceIdentifier


-(id)_urlRequestWithAppleAccountInformation:(id)arg0 ;


@end


#endif