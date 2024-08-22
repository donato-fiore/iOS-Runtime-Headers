// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPEERPAYMENTACCEPTTERMSREQUEST_H
#define PKPEERPAYMENTACCEPTTERMSREQUEST_H

@class NSString;


#import "PKPeerPaymentWebServiceRequest.h"

@interface PKPeerPaymentAcceptTermsRequest : PKPeerPaymentWebServiceRequest

@property (copy, nonatomic) NSString *termsIdentifier; // ivar: _termsIdentifier


-(id)_urlRequestWithServiceURL:(id)arg0 appleAccountInformation:(id)arg1 deviceIdentifier:(id)arg2 ;


@end


#endif