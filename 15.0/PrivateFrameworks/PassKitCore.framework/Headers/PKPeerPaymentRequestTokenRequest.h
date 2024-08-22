// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPEERPAYMENTREQUESTTOKENREQUEST_H
#define PKPEERPAYMENTREQUESTTOKENREQUEST_H

@class NSDecimalNumber, NSString;


#import "PKPeerPaymentWebServiceRequest.h"

@interface PKPeerPaymentRequestTokenRequest : PKPeerPaymentWebServiceRequest

@property (copy, nonatomic) NSDecimalNumber *amount; // ivar: _amount
@property (copy, nonatomic) NSString *currency; // ivar: _currency
@property (copy, nonatomic) NSString *recipientIdentifier; // ivar: _recipientIdentifier
@property (copy, nonatomic) NSString *recipientPhoneOrEmail; // ivar: _recipientPhoneOrEmail
@property (copy, nonatomic) NSString *senderAddress; // ivar: _senderAddress


-(id)_urlRequestWithServiceURL:(id)arg0 appleAccountInformation:(id)arg1 deviceIdentifier:(id)arg2 deviceScore:(id)arg3 deviceMetadata:(id)arg4 ;


@end


#endif