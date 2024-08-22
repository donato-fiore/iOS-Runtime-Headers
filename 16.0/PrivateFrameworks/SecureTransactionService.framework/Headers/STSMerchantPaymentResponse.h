// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSMERCHANTPAYMENTRESPONSE_H
#define STSMERCHANTPAYMENTRESPONSE_H

@class NSData, NSNumber, NSArray;


#import "STSInAppPaymentResponse.h"

@interface STSMerchantPaymentResponse : STSInAppPaymentResponse

@property (readonly, nonatomic) NSData *confirmationBlobHash; // ivar: _confirmationBlobHash
@property (readonly, nonatomic) NSData *confirmationBlobSignature; // ivar: _confirmationBlobSignature
@property (readonly, nonatomic) NSNumber *confirmationBlobVersion; // ivar: _confirmationBlobVersion
@property (readonly, nonatomic) NSArray *sepCerts; // ivar: _sepCerts


+(BOOL)supportsSecureCoding;
-(id)initFromNFECommercePaymentResponse:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif