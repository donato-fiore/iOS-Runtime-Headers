// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSPEERPAYMENTREQUEST_H
#define STSPEERPAYMENTREQUEST_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "STSMerchantPaymentRequest.h"
#import "STSPeerPaymentTransferRequest.h"

@interface STSPeerPaymentRequest : NSObject <NSSecureCoding>



@property (retain, nonatomic) STSMerchantPaymentRequest *topUpRequest; // ivar: _topUpRequest
@property (retain, nonatomic) STSPeerPaymentTransferRequest *transferRequest; // ivar: _transferRequest


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTransferRequest:(id)arg0 topUpRequest:(id)arg1 ;
-(id)toNFPeerPaymentRequest:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif