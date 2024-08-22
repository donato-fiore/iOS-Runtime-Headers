// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKACCOUNTWEBSERVICETERMSDATAREQUEST_H
#define PKACCOUNTWEBSERVICETERMSDATAREQUEST_H

@class NSString, NSURL;


#import "PKAccountWebServiceRequest.h"

@interface PKAccountWebServiceTermsDataRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (copy, nonatomic) NSString *termsDataFormat; // ivar: _termsDataFormat
@property (copy, nonatomic) NSString *termsIdentifier; // ivar: _termsIdentifier


-(id)_urlRequestWithAppleAccountInformation:(id)arg0 ;


@end


#endif