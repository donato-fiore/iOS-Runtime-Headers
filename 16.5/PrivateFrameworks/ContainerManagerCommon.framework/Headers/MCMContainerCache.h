// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMCONTAINERCACHE_H
#define MCMCONTAINERCACHE_H

@class NSMutableDictionary, NSString;
@protocol MCMUserIdentityCacheObserver, MCMContainerCache, MCMChildParentMapCache, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MCMUserIdentityCache.h"

@interface MCMContainerCache : NSObject <MCMUserIdentityCacheObserver, MCMContainerCache>

 {
    NSMutableDictionary *_queue_cache;
}


@property (readonly, nonatomic) Class cacheEntryClass; // ivar: _cacheEntryClass
@property (readonly, nonatomic) NSObject<MCMChildParentMapCache> *childParentMapCache; // ivar: _childParentMapCache
@property (readonly, nonatomic) Class classCacheClass; // ivar: _classCacheClass
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (readonly, nonatomic) MCMUserIdentityCache *userIdentityCache; // ivar: _userIdentityCache


-(BOOL)_applyImplicitLinkOnBundleIdentity:(id)arg0 dataIdentity:(id)arg1 matchingIdentifier:(id)arg2 dataContainerClass:(NSUInteger)arg3 userIdentity:(id)arg4 ;
-(BOOL)_concurrent_setSandboxContainerMappingForUserIdentity:(id)arg0 identifier:(id)arg1 containerClass:(NSUInteger)arg2 url:(id)arg3 ;
-(BOOL)_concurrent_shouldRegisterSandboxMappingWithUserIdentity:(id)arg0 identifier:(id)arg1 childParentMapCache:(id)arg2 containerClass:(NSUInteger)arg3 ;
-(BOOL)_sandboxSentinelExistsForContainerClass:(NSUInteger)arg0 ;
-(BOOL)_shouldApplyImplicitLinksToMetadata:(id)arg0 ;
-(BOOL)isWellKnownIdentifier:(id)arg0 ;
-(BOOL)removeContainerForUserIdentity:(id)arg0 contentClass:(NSUInteger)arg1 identifier:(id)arg2 transient:(BOOL)arg3 error:(*id)arg4 ;
-(NSInteger)countContainersForOtherUserIdentitiesWithIdentity:(id)arg0 error:(*id)arg1 ;
-(id)_containerClassPathForUserIdentity:(id)arg0 containerClass:(NSUInteger)arg1 transient:(BOOL)arg2 ;
-(id)_queue_containerClassCacheForContainerClassPath:(id)arg0 ;
-(id)_queue_containerClassCacheForUserIdentity:(id)arg0 containerClass:(NSUInteger)arg1 transient:(BOOL)arg2 ;
-(id)_sandboxSentinelForContainerClass:(NSUInteger)arg0 ;
-(id)addContainerMetadata:(id)arg0 error:(*id)arg1 ;
-(id)classCacheForContainerIdentity:(id)arg0 ;
-(id)entriesForUserIdentities:(id)arg0 contentClass:(NSUInteger)arg1 transient:(BOOL)arg2 error:(*id)arg3 ;
-(id)entryForContainerIdentity:(id)arg0 classCache:(id)arg1 error:(*id)arg2 ;
-(id)entryForContainerIdentity:(id)arg0 error:(*id)arg1 ;
-(id)initWithUserIdentityCache:(id)arg0 childParentMapCache:(id)arg1 classCacheClass:(Class)arg2 cacheEntryClass:(Class)arg3 error:(*id)arg4 ;
-(id)initWithUserIdentityCache:(id)arg0 childParentMapCache:(id)arg1 classCacheClass:(Class)arg2 cacheEntryClass:(Class)arg3 queue:(id)arg4 ;
-(id)updateLinksOnContainerCacheEntry:(id)arg0 error:(*id)arg1 ;
-(void)_applyImplicitLinksToMetadata:(id)arg0 ;
-(void)_checkAndRepairLinksToMetadata:(id)arg0 recursively:(BOOL)arg1 ;
-(void)_queue_attachSandboxWriteThroughHandlerToContainerClassCache:(id)arg0 ;
-(void)_queue_flushCacheForContainerClassPath:(id)arg0 ;
-(void)_queue_invalidateUserIdentity:(id)arg0 ;
-(void)_queue_setContainerClassCache:(id)arg0 ;
-(void)_sandboxSetSentinelForContainerClass:(NSUInteger)arg0 ;
-(void)flushCacheForUserIdentity:(id)arg0 containerClass:(NSUInteger)arg1 transient:(BOOL)arg2 ;
-(void)invalidateUserIdentity:(id)arg0 ;
-(void)setContainerClassCache:(id)arg0 ;
-(void)userIdentityCache:(id)arg0 didAddUserIdentity:(id)arg1 ;
-(void)userIdentityCache:(id)arg0 didInvalidateUserIdentity:(id)arg1 ;


@end


#endif