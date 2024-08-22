// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
@property (nonatomic) NSUInteger source; // ivar: _source


-(id)_urlRequestWithServiceURL:(id)arg0 appleAccountInformation:(id)arg1 deviceIdentifier:(id)arg2 deviceScore:(id)arg3 odiAssessment:(id)arg4 deviceMetadata:(id)arg5 ;


@end


#endif