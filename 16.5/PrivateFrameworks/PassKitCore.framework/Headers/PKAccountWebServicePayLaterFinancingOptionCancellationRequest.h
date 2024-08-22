// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTWEBSERVICEPAYLATERFINANCINGOPTIONCANCELLATIONREQUEST_H
#define PKACCOUNTWEBSERVICEPAYLATERFINANCINGOPTIONCANCELLATIONREQUEST_H

@class NSString, NSURL, NSError;


#import "PKAccountWebServiceRequest.h"

@interface PKAccountWebServicePayLaterFinancingOptionCancellationRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (copy, nonatomic) NSError *error; // ivar: _error
@property (copy, nonatomic) NSString *optionIdentifier; // ivar: _optionIdentifier
@property (nonatomic) NSUInteger reason; // ivar: _reason


-(id)_urlRequestWithAppleAccountInformation:(id)arg0 ;


@end


#endif