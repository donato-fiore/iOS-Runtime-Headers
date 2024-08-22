// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTINSTALLMENTCONFIGURATION_H
#define PKPAYMENTINSTALLMENTCONFIGURATION_H

@class NSDictionary, NSDecimalNumber, NSString, NSArray, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKPaymentInstallmentConfiguration : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSDictionary *applicationMetadata; // ivar: _applicationMetadata
@property (retain, nonatomic) NSDecimalNumber *bindingTotalAmount; // ivar: _bindingTotalAmount
@property (copy, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (nonatomic) NSInteger feature; // ivar: _feature
@property (nonatomic, getter=isInStorePurchase) BOOL inStorePurchase; // ivar: _inStorePurchase
@property (copy, nonatomic) NSArray *installmentItems; // ivar: _installmentItems
@property (copy, nonatomic) NSString *installmentMerchantIdentifier; // ivar: _installmentMerchantIdentifier
@property (copy, nonatomic) NSData *merchandisingImageData; // ivar: _merchandisingImageData
@property (retain, nonatomic) NSDecimalNumber *openToBuyThresholdAmount; // ivar: _openToBuyThresholdAmount
@property (copy, nonatomic) NSString *referrerIdentifier; // ivar: _referrerIdentifier
@property (nonatomic) NSInteger retailChannel; // ivar: _retailChannel


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToInstallmentConfiguration:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeToBodyDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif