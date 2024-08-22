// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTSENDOWNERSHIPTOKENSREQUEST_H
#define PKPAYMENTSENDOWNERSHIPTOKENSREQUEST_H

@class NSSet;


#import "PKPaymentWebServiceRequest.h"

@interface PKPaymentSendOwnershipTokensRequest : PKPaymentWebServiceRequest

@property (retain, nonatomic) NSSet *passOwnershipTokens; // ivar: _passOwnershipTokens
@property (nonatomic) NSUInteger reason; // ivar: _reason


-(id)_urlRequestWithServiceURL:(id)arg0 deviceIdentifier:(id)arg1 deviceMetadata:(id)arg2 appleAccountInformation:(id)arg3 ;


@end


#endif