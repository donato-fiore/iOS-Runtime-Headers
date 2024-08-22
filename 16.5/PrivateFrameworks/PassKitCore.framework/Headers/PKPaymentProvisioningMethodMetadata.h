// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTPROVISIONINGMETHODMETADATA_H
#define PKPAYMENTPROVISIONINGMETHODMETADATA_H

@class NSString, NSDecimalNumber, NSDictionary, NSArray;

#import <Foundation/Foundation.h>

#import "PKPaymentDigitalIssuanceMetadata.h"

@interface PKPaymentProvisioningMethodMetadata : NSObject

@property (readonly, copy, nonatomic) NSString *currency; // ivar: _currency
@property (readonly, copy, nonatomic) NSDecimalNumber *depositAmount; // ivar: _depositAmount
@property (readonly, nonatomic) NSUInteger depositType; // ivar: _depositType
@property (readonly, nonatomic) PKPaymentDigitalIssuanceMetadata *digitalIssuanceMetadata; // ivar: _digitalIssuanceMetadata
@property (readonly, copy, nonatomic) NSDecimalNumber *maxLoadedBalance; // ivar: _maxLoadedBalance
@property (readonly, copy, nonatomic) NSDecimalNumber *minLoadedBalance; // ivar: _minLoadedBalance
@property (readonly, copy, nonatomic) NSDecimalNumber *minimumReaderModeBalance; // ivar: _minimumReaderModeBalance
@property (readonly, copy, nonatomic) NSString *productIdentifier; // ivar: _productIdentifier
@property (readonly, copy, nonatomic) NSDictionary *readerModeMetadata; // ivar: _readerModeMetadata
@property (readonly, copy, nonatomic) NSDictionary *readerModeResources; // ivar: _readerModeResources
@property (readonly, copy, nonatomic) NSArray *requiredFields; // ivar: _requiredFields


-(id)initWithDictionary:(id)arg0 ;


@end


#endif