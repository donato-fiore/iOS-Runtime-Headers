// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDPCSMEMORYCACHE_H
#define CKDPCSMEMORYCACHE_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CKDPCSMemoryCache : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // ivar: _accessQueue
@property (retain, nonatomic) NSMutableDictionary *cacheEntries; // ivar: _cacheEntries
@property (nonatomic) NSUInteger maxEntries; // ivar: _maxEntries
@property NSUInteger memoryCacheDeleteCount; // ivar: _memoryCacheDeleteCount
@property NSUInteger memoryCacheEvictCount; // ivar: _memoryCacheEvictCount
@property NSUInteger memoryCacheHighwaterCount; // ivar: _memoryCacheHighwaterCount
@property NSUInteger memoryCacheHitCount; // ivar: _memoryCacheHitCount
@property NSUInteger memoryCacheRequestCount; // ivar: _memoryCacheRequestCount
@property NSUInteger memoryCacheUpdateCount; // ivar: _memoryCacheUpdateCount
@property (nonatomic) CGFloat minAge; // ivar: _minAge
@property CGFloat oldestCacheEntry; // ivar: _oldestCacheEntry


+(void)initialize;
+(void)registerEvictionTimer;
+(void)runMemoryCacheEvictionInAllCaches;
+(void)setupMemoryNotifications;
+(void)startEvictionTimer;
+(void)stopEvictionTimer;
-(BOOL)hasStatusToReport;
-(NSUInteger)_cacheCount;
-(id)CKStatusReportArray;
-(id)init;
-(void)_lockedEvictEntriesFromCache;
-(void)clearCache;
-(void)getPCSDataFromCacheForID:(id)arg0 databaseScope:(NSInteger)arg1 withCompletionHandler:(id)arg2 ;
-(void)runCacheEviction;
-(void)setPCSData:(id)arg0 forItemID:(id)arg1 databaseScope:(NSInteger)arg2 withCompletionHandler:(id)arg3 ;


@end


#endif