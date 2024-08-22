// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTWEBSERVICESUPPORTTOPICSREQUEST_H
#define PKACCOUNTWEBSERVICESUPPORTTOPICSREQUEST_H

@class NSString, NSURL;


#import "PKAccountWebServiceRequest.h"
#import "PKPaymentTransaction.h"

@interface PKAccountWebServiceSupportTopicsRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (copy, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (retain, nonatomic) PKPaymentTransaction *transaction; // ivar: _transaction


-(id)_urlRequestWithAppleAccountInformation:(id)arg0 ;


@end


#endif