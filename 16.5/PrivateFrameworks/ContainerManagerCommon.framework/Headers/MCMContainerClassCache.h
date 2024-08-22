// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMCONTAINERCLASSCACHE_H
#define MCMCONTAINERCLASSCACHE_H

@class NSString, NSUUID, NSMutableDictionary;
@protocol MCMContainerCacheUpdatable, MCMContainerClassCache, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MCMContainerClassPath.h"
#import "MCMUserIdentityCache.h"

@interface MCMContainerClassCache : NSObject <MCMContainerCacheUpdatable, MCMContainerClassCache>



@property (readonly, nonatomic) Class cacheEntryClass; // ivar: _cacheEntryClass
@property (copy, nonatomic) id *concurrentWriteThroughHandler; // ivar: _concurrentWriteThroughHandler
@property (readonly, nonatomic) NSUInteger containerClass; // ivar: _containerClass
@property (readonly, nonatomic) MCMContainerClassPath *containerClassPath; // ivar: _containerClassPath
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *fsScanQueue; // ivar: _fsScanQueue
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSUUID *lastCompletedDiskScanUUID; // ivar: _lastCompletedDiskScanUUID
@property (readonly, nonatomic) NSMutableDictionary *lock_cache; // ivar: _lock_cache
@property (nonatomic) BOOL resyncRequired; // ivar: _resyncRequired
@property (readonly) Class superclass;
@property (retain, nonatomic) NSUUID *targetDiskScanUUID; // ivar: _targetDiskScanUUID
@property (readonly, nonatomic) MCMUserIdentityCache *userIdentityCache; // ivar: _userIdentityCache
@property (nonatomic) BOOL writeThroughEnabled; // ivar: _writeThroughEnabled


-(BOOL)_checkExistanceOfCacheEntry:(id)arg0 libraryRepair:(id)arg1 ;
-(BOOL)enumerateCacheEntriesWithEnumerator:(id)arg0 ;
-(id)_concurrent_generateCacheEntryWithURL:(id)arg0 identifier:(id)arg1 containerPath:(id)arg2 schemaVersion:(id)arg3 uuid:(id)arg4 metadata:(id)arg5 ;
-(id)_concurrent_slowGenerateCacheEntryWithFD:(int)arg0 URL:(id)arg1 identifier:(id)arg2 uuid:(id)arg3 schemaVersion:(id)arg4 containerPath:(id)arg5 ;
-(id)_setEntry:(id)arg0 forIdentifier:(id)arg1 writeThrough:(BOOL)arg2 ;
-(id)cacheEntryForIdentifier:(id)arg0 ;
-(id)initWithContainerClassPath:(id)arg0 cacheEntryClass:(Class)arg1 targetQueue:(id)arg2 userIdentityCache:(id)arg3 ;
-(id)setCacheEntry:(id)arg0 forIdentifier:(id)arg1 ;
-(id)setCacheEntry:(id)arg0 forIdentifier:(id)arg1 writeThrough:(BOOL)arg2 ;
-(void)_concurrent_processCorruptEntry:(id)arg0 handler:(id)arg1 ;
-(void)_concurrent_processURL:(id)arg0 handler:(id)arg1 ;
-(void)_handleUnrecoverableCorruptContainerPath:(id)arg0 ;
-(void)_processCorruptEntries:(id)arg0 handler:(id)arg1 ;
-(void)_processURLs:(id)arg0 handler:(id)arg1 ;
-(void)_queue_syncWithDisk;
-(void)asyncStartSynchronization;
-(void)flush;
-(void)forceWriteThrough;
-(void)waitForSynchronizationToComplete;


@end


#endif