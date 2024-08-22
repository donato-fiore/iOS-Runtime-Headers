// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMUSERIDENTITYCACHE_H
#define MCMUSERIDENTITYCACHE_H

@class NSString, NSDictionary, NSMutableDictionary, NSHashTable, NSSet;
@protocol MCMUserIdentityCache, OS_dispatch_queue, OS_xpc_object;

#import <Foundation/Foundation.h>

#import "MCMUserIdentity.h"

@interface MCMUserIdentityCache : NSObject <MCMUserIdentityCache>

 {
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_flushQueue;
    NSObject<OS_xpc_object> *_listener;
}


@property (nonatomic) BOOL cacheInvalid; // ivar: _cacheInvalid
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *lock_bundleToDataSeparatedIdentitiesMap; // ivar: _lock_bundleToDataSeparatedIdentitiesMap
@property (readonly, nonatomic) NSMutableDictionary *lock_libraryRepairForUserIdentity; // ivar: _lock_libraryRepairForUserIdentity
@property (readonly, nonatomic) NSMutableDictionary *lock_managedPathRegistryForUserIdentity; // ivar: _lock_managedPathRegistryForUserIdentity
@property (readonly, nonatomic) NSDictionary *lock_personaIDToUserIdentityMap; // ivar: _lock_personaIDToUserIdentityMap
@property (readonly, nonatomic) NSDictionary *lock_personaUniqueStringToUserIdentityMap; // ivar: _lock_personaUniqueStringToUserIdentityMap
@property (readonly, nonatomic) MCMUserIdentity *lock_userIdentityForPersonalPersona; // ivar: _lock_userIdentityForPersonalPersona
@property (readonly, nonatomic) MCMUserIdentity *lock_userIdentityForUnspecificPersona; // ivar: _lock_userIdentityForUnspecificPersona
@property (readonly, nonatomic) NSHashTable *observers; // ivar: _observers
@property (retain, nonatomic) NSSet *previousUserIdentities; // ivar: _previousUserIdentities
@property (nonatomic) NSUInteger savedGeneration; // ivar: _savedGeneration
@property (readonly) Class superclass;


+(BOOL)personasAreSupported;
+(id)defaultUserIdentity;
+(id)globalBundleUserIdentity;
+(id)globalSystemUserIdentity;
+(id)userIdentityWithPersonaAttributes:(id)arg0 ;
+(id)userIdentityWithPersonaAttributes:(id)arg0 POSIXUser:(id)arg1 forceUnspecific:(BOOL)arg2 ;
+(id)userIdentityWithPersonaAttributes:(id)arg0 forceUnspecific:(BOOL)arg1 ;
-(BOOL)_lock_resync_fromUserPersonaAttributes:(id)arg0 ;
-(id)_lock_userIdentitiesForBundleIdentifier:(id)arg0 ;
-(id)_lock_userIdentityForCurrentUserWithPersonaUniqueString:(id)arg0 ;
-(id)allAccessibleUserIdentities;
-(id)defaultUserIdentity;
-(id)globalBundleUserIdentity;
-(id)globalSystemUserIdentity;
-(id)init;
-(id)libraryRepairForUserIdentity:(id)arg0 ;
-(id)managedUserPathRegistryForUserIdentity:(id)arg0 ;
-(id)personaUniqueStringForCurrentContext;
-(id)unspecificUserIdentity;
-(id)userIdentitiesForBundleIdentifier:(id)arg0 ;
-(id)userIdentityForClient:(struct container_client *)arg0 error:(*id)arg1 ;
-(id)userIdentityForCurrentContext;
-(id)userIdentityForCurrentUserWithPersonaUniqueString:(id)arg0 ;
-(id)userIdentityForLegacyMobileUser;
-(id)userIdentityForPersonaUniqueString:(id)arg0 POSIXUser:(id)arg1 ;
-(id)userIdentityForPersonalPersona;
-(id)userIdentityForPersonalPersonaWithPOSIXUser:(id)arg0 ;
-(id)userIdentityWithPersonaID:(unsigned int)arg0 ;
-(void)_lock_flush;
-(void)_lock_flushAndRepopulateWithUserIdentities:(id)arg0 ;
-(void)_lock_resync;
-(void)_notifyObserversOfChangesWithUserIdentities:(id)arg0 ;
-(void)_refreshFromUserManagementIfNecessary;
-(void)addObserver:(id)arg0 ;
-(void)flush;
-(void)flushAndRepopulateWithUserIdentities:(id)arg0 ;
-(void)forEachAccessibleUserIdentitySynchronouslyExecuteBlock:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif