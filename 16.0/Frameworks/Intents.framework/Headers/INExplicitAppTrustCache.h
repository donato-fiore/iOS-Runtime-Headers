// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INEXPLICITAPPTRUSTCACHE_H
#define INEXPLICITAPPTRUSTCACHE_H

@class NSArray, NSSet;

#import <Foundation/Foundation.h>


@interface INExplicitAppTrustCache : NSObject {
    BOOL _loadedManagedBundleIdentifiers;
    BOOL _loadedTrustedCodeSigningIdentities;
    BOOL _enterpriseAppTrustAllowedLoaded;
}


@property (nonatomic) BOOL enterpriseAppTrustAllowed; // ivar: _enterpriseAppTrustAllowed
@property (retain, nonatomic) NSArray *managedBundleIdentifiers; // ivar: _managedBundleIdentifiers
@property (retain, nonatomic) NSSet *signingIdentitiesRequiringExplicitTrust; // ivar: _signingIdentitiesRequiringExplicitTrust
@property (retain, nonatomic) NSArray *trustedCodeSigningIdentities; // ivar: _trustedCodeSigningIdentities




@end


#endif