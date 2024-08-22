// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPEERPAYMENTADDASSOCIATEDACCOUNTREQUEST_H
#define PKPEERPAYMENTADDASSOCIATEDACCOUNTREQUEST_H

@class NSString;


#import "PKPeerPaymentWebServiceRequest.h"

@interface PKPeerPaymentAddAssociatedAccountRequest : PKPeerPaymentWebServiceRequest

@property (copy, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (copy, nonatomic) NSString *firstName; // ivar: _firstName
@property (copy, nonatomic) NSString *lastName; // ivar: _lastName
@property (nonatomic) NSUInteger role; // ivar: _role


-(id)_urlRequestWithServiceURL:(id)arg0 appleAccountInformation:(id)arg1 ;


@end


#endif