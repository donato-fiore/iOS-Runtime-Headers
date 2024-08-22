// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPEERPAYMENTPERFORMACTIONREQUEST_H
#define PKPEERPAYMENTPERFORMACTIONREQUEST_H

@class NSString;


#import "PKPeerPaymentWebServiceRequest.h"

@interface PKPeerPaymentPerformActionRequest : PKPeerPaymentWebServiceRequest

@property (copy, nonatomic) NSString *action; // ivar: _action
@property (copy, nonatomic) NSString *paymentIdentifier; // ivar: _paymentIdentifier


-(id)_urlRequestWithServiceURL:(id)arg0 appleAccountInformation:(id)arg1 ;


@end


#endif