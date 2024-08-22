// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKAPPLEPAYTRUSTSIGNATURE_H
#define PKAPPLEPAYTRUSTSIGNATURE_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKApplePayTrustSignatureRequest.h"

@interface PKApplePayTrustSignature : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSData *paymentData; // ivar: _paymentData
@property (readonly, copy, nonatomic) NSData *signatureData; // ivar: _signatureData
@property (readonly, nonatomic) PKApplePayTrustSignatureRequest *signatureRequest; // ivar: _signatureRequest


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSignatureRequest:(id)arg0 signature:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif