// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSMERCHANTPAYMENTREQUEST_H
#define STSMERCHANTPAYMENTREQUEST_H

@class NSString, NSData;


#import "STSInAppPaymentRequest.h"

@interface STSMerchantPaymentRequest : STSInAppPaymentRequest

@property (retain, nonatomic) NSString *appletIdentifier; // ivar: _appletIdentifier
@property (nonatomic) NSInteger merchantCapabilities; // ivar: _merchantCapabilities
@property (retain, nonatomic) NSData *merchantData; // ivar: _merchantData
@property (retain, nonatomic) NSData *networkMerchantIdentifier; // ivar: _networkMerchantIdentifier
@property (nonatomic) unsigned int unpredictableNumber; // ivar: _unpredictableNumber


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTransactionAmount:(id)arg0 currencyCode:(id)arg1 countryCode:(id)arg2 transactionDate:(id)arg3 merchantCapabilities:(NSInteger)arg4 merchantData:(id)arg5 unpredictableNumber:(unsigned int)arg6 ;
-(id)toNFECommercePaymentRequest:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif