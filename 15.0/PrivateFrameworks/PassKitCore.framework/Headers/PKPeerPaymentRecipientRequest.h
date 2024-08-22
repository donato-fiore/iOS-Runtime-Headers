// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPEERPAYMENTRECIPIENTREQUEST_H
#define PKPEERPAYMENTRECIPIENTREQUEST_H

@class NSString;


#import "PKPeerPaymentWebServiceRequest.h"

@interface PKPeerPaymentRecipientRequest : PKPeerPaymentWebServiceRequest

@property (copy, nonatomic) NSString *recipientAddress; // ivar: _recipientAddress
@property (nonatomic) NSUInteger recipientAddressSource; // ivar: _recipientAddressSource
@property (copy, nonatomic) NSString *senderAddress; // ivar: _senderAddress


-(id)_urlRequestWithServiceURL:(id)arg0 appleAccountInformation:(id)arg1 deviceIdentifier:(id)arg2 ;


@end


#endif