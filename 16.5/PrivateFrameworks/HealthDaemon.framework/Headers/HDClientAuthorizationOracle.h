// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCLIENTAUTHORIZATIONORACLE_H
#define HDCLIENTAUTHORIZATIONORACLE_H

@class NSString, _HKEntitlements;

#import <Foundation/Foundation.h>

#import "HDProfile.h"

@interface HDClientAuthorizationOracle : NSObject {
    HDProfile *_profile;
    NSString *_sourceBundleIdentifier;
    _HKEntitlements *_entitlements;
    BOOL _clientHasPrivateEntitlement;
}




-(BOOL)isAuthorizedToReadObject:(id)arg0 error:(*id)arg1 ;
-(BOOL)performReadAuthorizationTransactionWithError:(*id)arg0 handler:(id)arg1 ;
-(id)additionalAuthorizationPredicateForObjectType:(id)arg0 error:(*id)arg1 ;
-(id)filteredObjectsForReadAuthorization:(id)arg0 anchor:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithSourceBundleIdentifier:(id)arg0 entitlements:(id)arg1 profile:(id)arg2 ;
-(id)readAuthorizationStatusForType:(id)arg0 error:(*id)arg1 ;
-(id)readAuthorizationStatusesForTypes:(id)arg0 error:(*id)arg1 ;


@end


#endif