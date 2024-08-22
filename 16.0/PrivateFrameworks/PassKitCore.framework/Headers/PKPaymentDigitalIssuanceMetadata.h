// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTDIGITALISSUANCEMETADATA_H
#define PKPAYMENTDIGITALISSUANCEMETADATA_H

@class NSString, NSArray, NSDictionary, NSSet;

#import <Foundation/Foundation.h>


@interface PKPaymentDigitalIssuanceMetadata : NSObject

@property (readonly, copy, nonatomic) NSString *action; // ivar: _action
@property (readonly, copy, nonatomic) NSString *balanceIdentifier; // ivar: _balanceIdentifier
@property (readonly, copy, nonatomic) NSString *balanceLocalizedDescription; // ivar: _balanceLocalizedDescription
@property (readonly, copy, nonatomic) NSString *balanceLocalizedDisplayName; // ivar: _balanceLocalizedDisplayName
@property (readonly, copy, nonatomic) NSArray *defaultSuggestions; // ivar: _defaultSuggestions
@property (readonly, copy, nonatomic) NSString *merchantID; // ivar: _merchantID
@property (readonly, nonatomic, getter=isPurchaseBased) BOOL purchaseBased; // ivar: _purchaseBased
@property (readonly, copy, nonatomic) NSArray *serviceProviderAcceptedNetworks; // ivar: _serviceProviderAcceptedNetworks
@property (readonly, copy, nonatomic) NSArray *serviceProviderCapabilities; // ivar: _serviceProviderCapabilities
@property (readonly, copy, nonatomic) NSString *serviceProviderCountryCode; // ivar: _serviceProviderCountryCode
@property (readonly, copy, nonatomic) NSDictionary *serviceProviderDict; // ivar: _serviceProviderDict
@property (readonly, copy, nonatomic) NSString *serviceProviderIdentifier; // ivar: _serviceProviderIdentifier
@property (readonly, copy, nonatomic) NSArray *serviceProviderProducts; // ivar: _serviceProviderProducts
@property (readonly, copy, nonatomic) NSString *serviceProviderProductsLocalizedDescription; // ivar: _serviceProviderProductsLocalizedDescription
@property (readonly, copy, nonatomic) NSString *serviceProviderProductsLocalizedDisplayName; // ivar: _serviceProviderProductsLocalizedDisplayName
@property (readonly, copy, nonatomic) NSSet *serviceProviderSupportedCountries; // ivar: _serviceProviderSupportedCountries
@property (readonly, copy, nonatomic) NSArray *serviceProviderSupportedNetworks;


-(id)initWithDictionary:(id)arg0 ;


@end


#endif