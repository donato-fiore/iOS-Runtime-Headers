// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKACCOUNTWEBSERVICECANCELPAYMENTREQUEST_H
#define PKACCOUNTWEBSERVICECANCELPAYMENTREQUEST_H

@class NSString, NSURL;


#import "PKAccountWebServiceRequest.h"

@interface PKAccountWebServiceCancelPaymentRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (copy, nonatomic) NSString *paymentReferenceIdentifier; // ivar: _paymentReferenceIdentifier


-(id)_urlRequestWithAppleAccountInformation:(id)arg0 ;


@end


#endif