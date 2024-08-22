// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTAUTHORIZATIONREQUEST_H
#define PKPAYMENTAUTHORIZATIONREQUEST_H

@class NSData;

#import <Foundation/Foundation.h>

#import "PKPaymentRequest.h"

@interface PKPaymentAuthorizationRequest : NSObject

@property (retain, nonatomic) NSData *credential; // ivar: _credential
@property (retain, nonatomic) NSData *nonceData; // ivar: _nonceData
@property (readonly, nonatomic) PKPaymentRequest *paymentRequest; // ivar: _paymentRequest


-(id)initWithPaymentRequest:(id)arg0 ;


@end


#endif