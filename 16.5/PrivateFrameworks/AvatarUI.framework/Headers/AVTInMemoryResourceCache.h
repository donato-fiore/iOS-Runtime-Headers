// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTINMEMORYRESOURCECACHE_H
#define AVTINMEMORYRESOURCECACHE_H

@class NSString, NSMutableArray, NSCache;
@protocol NSCacheDelegate, AVTResourceCache, AVTUILogger, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AVTInMemoryResourceCache : NSObject <NSCacheDelegate, AVTResourceCache>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<AVTUILogger> *logger; // ivar: _logger
@property (readonly, nonatomic) NSMutableArray *orderedEntries; // ivar: _orderedEntries
@property (readonly, nonatomic) NSCache *storage; // ivar: _storage
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *storageLock; // ivar: _storageLock
@property (readonly) Class superclass;


+(NSUInteger)costForItem:(id)arg0 scope:(id)arg1 ;
+(id)keyForItem:(id)arg0 scope:(id)arg1 ;
-(BOOL)resourceExistsInCacheForItem:(id)arg0 scope:(id)arg1 ;
-(id)_resourceForItem:(id)arg0 scope:(id)arg1 cacheMissHandler:(id)arg2 ;
// -(id)initWithLockProvider:(id)arg0 totalCostLimit:(unk)arg1 logger:(NSUInteger)arg2  ;
-(id)observeChangesForItem:(id)arg0 key:(id)arg1 ;
-(id)resourceForItem:(id)arg0 scope:(id)arg1 ;
-(id)resourceForItem:(id)arg0 scope:(id)arg1 cacheMissHandler:(id)arg2 ;
-(void)cache:(id)arg0 willEvictObject:(id)arg1 ;
-(void)clearCache;
-(void)dealloc;
-(void)evictResourceFromCache:(id)arg0 scope:(id)arg1 ;
-(void)handleChangeForItemForKey:(id)arg0 ;
-(void)nts_evictObjectsToFreeUpCost:(NSUInteger)arg0 ;
-(void)performStorageWork:(id)arg0 ;


@end


#endif