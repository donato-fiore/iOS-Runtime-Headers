// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSIDENTITYPROVIDERSTOREFRONTCOLLECTION_H
#define VSIDENTITYPROVIDERSTOREFRONTCOLLECTION_H

@class NSString, NSMutableArray;

#import <Foundation/Foundation.h>


@interface VSIdentityProviderStorefrontCollection : NSObject

@property (retain, nonatomic) NSString *localizedDisplayName; // ivar: _localizedDisplayName
@property (retain, nonatomic) NSMutableArray *mutableAllIdentityProviders; // ivar: _mutableAllIdentityProviders
@property (retain, nonatomic) NSMutableArray *mutableFeaturedIdentityProviders; // ivar: _mutableFeaturedIdentityProviders
@property (retain, nonatomic) NSString *storefrontTwoCharCode; // ivar: _storefrontTwoCharCode


-(id)allIdentityProviders;
-(id)featuredIdentityProviders;
-(id)init;
-(void)featureProvidersInCurrentStorefront;


@end


#endif