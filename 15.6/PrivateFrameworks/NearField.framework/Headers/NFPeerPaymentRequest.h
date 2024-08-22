// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NFPEERPAYMENTREQUEST_H
#define NFPEERPAYMENTREQUEST_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NFECommercePaymentRequest.h"
#import "NFPeerPaymentTransferRequest.h"

@interface NFPeerPaymentRequest : NSObject <NSSecureCoding>



@property (retain, nonatomic) NFECommercePaymentRequest *topUpRequest; // ivar: _topUpRequest
@property (retain, nonatomic) NFPeerPaymentTransferRequest *transferRequest; // ivar: _transferRequest


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif