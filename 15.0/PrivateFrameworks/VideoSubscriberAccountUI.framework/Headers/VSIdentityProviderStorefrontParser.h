// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSIDENTITYPROVIDERSTOREFRONTPARSER_H
#define VSIDENTITYPROVIDERSTOREFRONTPARSER_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface VSIdentityProviderStorefrontParser : NSObject

@property (copy, nonatomic) NSArray *allIdentityProviders; // ivar: _allIdentityProviders
@property (copy, nonatomic) NSArray *allStorefronts; // ivar: _allStorefronts
@property (readonly, copy, nonatomic) NSDictionary *identityProvidersByStorefront;
@property (retain, nonatomic) NSDictionary *providersByStorefront; // ivar: _providersByStorefront
@property (retain, nonatomic) NSDictionary *storefrontsByCountryCode; // ivar: _storefrontsByCountryCode
@property (readonly, copy, nonatomic) NSArray *tvProviderSupportedStorefronts;


-(id)init;
-(id)providersForStorefront:(id)arg0 ;


@end


#endif