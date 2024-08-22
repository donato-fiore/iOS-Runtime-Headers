// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NFTRUSTPAYMENTSIGNRESPONSE_H
#define NFTRUSTPAYMENTSIGNRESPONSE_H



#import "NFTrustObject.h"
#import "NFECommercePaymentResponse.h"
#import "NFTrustSignResponse.h"

@interface NFTrustPaymentSignResponse : NFTrustObject

@property (retain, nonatomic) NFECommercePaymentResponse *paymentResponse; // ivar: _paymentResponse
@property (retain, nonatomic) NFTrustSignResponse *signResponse; // ivar: _signResponse


+(BOOL)supportsSecureCoding;
+(id)paymentSignResponseWithSignResponse:(id)arg0 paymentResponse:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif