// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTDIGITALISSUANCEMETADATA_H
#define PKPAYMENTDIGITALISSUANCEMETADATA_H

@class NSString, NSArray, NSDictionary, NSSet;

#import <Foundation/Foundation.h>


@interface PKPaymentDigitalIssuanceMetadata : NSObject

@property (readonly, copy, nonatomic) NSString *action; // ivar: _action
@property (readonly, copy, nonatomic) NSArray *defaultSuggestions; // ivar: _defaultSuggestions
@property (readonly, copy, nonatomic) NSString *merchantID; // ivar: _merchantID
@property (readonly, copy, nonatomic) NSArray *serviceProviderAcceptedNetworks; // ivar: _serviceProviderAcceptedNetworks
@property (readonly, copy, nonatomic) NSArray *serviceProviderCapabilities; // ivar: _serviceProviderCapabilities
@property (readonly, copy, nonatomic) NSString *serviceProviderCountryCode; // ivar: _serviceProviderCountryCode
@property (readonly, copy, nonatomic) NSDictionary *serviceProviderDict; // ivar: _serviceProviderDict
@property (readonly, copy, nonatomic) NSString *serviceProviderIdentifier; // ivar: _serviceProviderIdentifier
@property (readonly, copy, nonatomic) NSSet *serviceProviderSupportedCountries; // ivar: _serviceProviderSupportedCountries
@property (readonly, copy, nonatomic) NSArray *serviceProviderSupportedNetworks;


-(id)initWithDictionary:(id)arg0 ;


@end


#endif