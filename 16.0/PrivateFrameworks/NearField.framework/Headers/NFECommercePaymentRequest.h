// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NFECOMMERCEPAYMENTREQUEST_H
#define NFECOMMERCEPAYMENTREQUEST_H

@class NSString, NSData, NSDecimalNumber, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NFECommercePaymentRequest : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *appletIdentifier; // ivar: _appletIdentifier
@property (retain, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (retain, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (nonatomic) unsigned char merchantCapabilities; // ivar: _merchantCapabilities
@property (retain, nonatomic) NSData *merchantData; // ivar: _merchantData
@property (retain, nonatomic) NSData *networkMerchantIdentifier; // ivar: _networkMerchantIdentifier
@property (retain, nonatomic) NSDecimalNumber *transactionAmount; // ivar: _transactionAmount
@property (retain, nonatomic) NSDate *transactionDate; // ivar: _transactionDate
@property (nonatomic) unsigned int unpredictableNumber; // ivar: _unpredictableNumber


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif