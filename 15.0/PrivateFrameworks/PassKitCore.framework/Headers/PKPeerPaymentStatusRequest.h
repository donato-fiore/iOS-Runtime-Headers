// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPEERPAYMENTSTATUSREQUEST_H
#define PKPEERPAYMENTSTATUSREQUEST_H

@class NSString;


#import "PKPeerPaymentWebServiceRequest.h"

@interface PKPeerPaymentStatusRequest : PKPeerPaymentWebServiceRequest

@property (copy, nonatomic) NSString *paymentIdentifier; // ivar: _paymentIdentifier


-(id)_urlRequestWithServiceURL:(id)arg0 appleAccountInformation:(id)arg1 ;


@end


#endif