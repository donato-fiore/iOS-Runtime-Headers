// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKACCOUNTWEBSERVICETERMSREQUEST_H
#define PKACCOUNTWEBSERVICETERMSREQUEST_H

@class NSString, NSURL;


#import "PKAccountWebServiceRequest.h"

@interface PKAccountWebServiceTermsRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (nonatomic) BOOL termsAccepted; // ivar: _termsAccepted
@property (copy, nonatomic) NSString *termsIdentifier; // ivar: _termsIdentifier


-(id)_urlRequestWithAppleAccountInformation:(id)arg0 ;


@end


#endif