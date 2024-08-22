// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPEERPAYMENTSTATEMENTREQUEST_H
#define PKPEERPAYMENTSTATEMENTREQUEST_H

@class NSString;


#import "PKPeerPaymentWebServiceRequest.h"

@interface PKPeerPaymentStatementRequest : PKPeerPaymentWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (copy, nonatomic) NSString *emailAddress; // ivar: _emailAddress


-(id)_urlRequestWithServiceURL:(id)arg0 appleAccountInformation:(id)arg1 ;


@end


#endif