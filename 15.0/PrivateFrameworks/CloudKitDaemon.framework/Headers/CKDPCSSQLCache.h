// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDPCSSQLCACHE_H
#define CKDPCSSQLCACHE_H

@protocol OS_dispatch_queue;


#import "CKDPQLCache.h"

@interface CKDPCSSQLCache : CKDPQLCache

@property NSUInteger cacheHitCount; // ivar: _cacheHitCount
@property NSUInteger cacheRequestCount; // ivar: _cacheRequestCount
@property (readonly, nonatomic) CGFloat earliestValidDate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *recordQueue; // ivar: _recordQueue


+(id)globalPCSSQLCacheEvictionQueue;
+(id)pathForContainer:(id)arg0 ;
+(void)_evictPCSSQLCachesForAppContainerAccountTuples:(id)arg0 ;
+(void)evictPCSSQLCachesForKnownContainers;
+(void)registerPCSSQLCacheEvictionActivity;
-(id)CKStatusReportArray;
-(id)_initWithContainer:(id)arg0 ;
-(id)_lockedFetchPCSDataForID:(id)arg0 databaseScope:(NSInteger)arg1 itemType:(NSUInteger)arg2 ofClass:(Class)arg3 ;
-(id)createInitialTablesSQL;
-(id)infoToUpgradeFromVersion:(NSUInteger)arg0 ;
-(id)path;
-(void)_lockedSetPCSData:(id)arg0 databaseScope:(NSInteger)arg1 itemType:(NSUInteger)arg2 forID:(id)arg3 ;
-(void)_setPCSData:(id)arg0 forItemWithID:(id)arg1 databaseScope:(NSInteger)arg2 itemType:(NSUInteger)arg3 withCompletionHandler:(id)arg4 ;
-(void)clearCache;
-(void)clearInvalidatedCacheEntriesWithSkipZonePCS:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)fetchPCSDataForRecordWithID:(id)arg0 databaseScope:(NSInteger)arg1 withCompletionHandler:(id)arg2 ;
-(void)fetchPCSDataForShareWithID:(id)arg0 databaseScope:(NSInteger)arg1 withCompletionHandler:(id)arg2 ;
-(void)fetchPCSDataForZoneWithID:(id)arg0 databaseScope:(NSInteger)arg1 withCompletionHandler:(id)arg2 ;
-(void)removePCSDataForItemsInShareWithID:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)removePCSDataForItemsInZoneWithID:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)setRecordPCSData:(id)arg0 forRecordWithID:(id)arg1 databaseScope:(NSInteger)arg2 withCompletionHandler:(id)arg3 ;
-(void)setSharePCSData:(id)arg0 forShareWithID:(id)arg1 databaseScope:(NSInteger)arg2 withCompletionHandler:(id)arg3 ;
-(void)setZonePCSData:(id)arg0 forZoneWithID:(id)arg1 databaseScope:(NSInteger)arg2 withCompletionHandler:(id)arg3 ;


@end


#endif