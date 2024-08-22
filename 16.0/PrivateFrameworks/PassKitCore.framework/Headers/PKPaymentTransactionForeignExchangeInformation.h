// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTTRANSACTIONFOREIGNEXCHANGEINFORMATION_H
#define PKPAYMENTTRANSACTIONFOREIGNEXCHANGEINFORMATION_H

@class NSDecimalNumber;
@protocol NSSecureCoding, PKCloudStoreCoding;

#import <Foundation/Foundation.h>

#import "PKCurrencyAmount.h"

@interface PKPaymentTransactionForeignExchangeInformation : NSObject <NSSecureCoding, PKCloudStoreCoding>



@property (copy, nonatomic) PKCurrencyAmount *destinationCurrencyAmount; // ivar: _destinationCurrencyAmount
@property (copy, nonatomic) NSDecimalNumber *exchangeRate; // ivar: _exchangeRate


+(BOOL)supportsSecureCoding;
+(id)recordNamePrefix;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToForeignExchangeInformation:(id)arg0 ;
-(BOOL)isValid;
-(NSUInteger)hash;
-(NSUInteger)itemType;
-(id)initWithCloudStoreCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)jsonDictionaryRepresentation;
-(id)jsonString;
-(id)primaryIdentifier;
-(id)recordTypesAndNamesForCodingType:(NSUInteger)arg0 ;
-(void)_encodeServerDataWithCloudStoreCoder:(id)arg0 ;
-(void)applyPropertiesFromCloudStoreRecord:(id)arg0 ;
-(void)encodeWithCloudStoreCoder:(id)arg0 codingType:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif