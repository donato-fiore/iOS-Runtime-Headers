// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDPCSCACHE_H
#define CKDPCSCACHE_H

@class NSString, CKAccountOverrideInfo, CKContainerID, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CKDPCSMemoryCache.h"
#import "CKDPCSSQLCache.h"

@interface CKDPCSCache : NSObject

@property (readonly, nonatomic) NSString *accountID; // ivar: _accountID
@property (readonly, nonatomic) CKAccountOverrideInfo *accountOverrideInfo; // ivar: _accountOverrideInfo
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (readonly, nonatomic) CKContainerID *containerID; // ivar: _containerID
@property (readonly, nonatomic) NSString *encryptionServiceName; // ivar: _encryptionServiceName
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fetchQueue; // ivar: _fetchQueue
@property (retain, nonatomic) NSMutableDictionary *outstandingFetches; // ivar: _outstandingFetches
@property (readonly, nonatomic) CKDPCSMemoryCache *recordMemoryCache; // ivar: _recordMemoryCache
@property (readonly, nonatomic) CKDPCSMemoryCache *shareMemoryCache; // ivar: _shareMemoryCache
@property (readonly, nonatomic) CKDPCSSQLCache *sqlCache; // ivar: _sqlCache
@property (readonly, nonatomic) CKDPCSMemoryCache *zoneMemoryCache; // ivar: _zoneMemoryCache


-(BOOL)hasStatusToReport;
-(id)CKStatusReportArray;
-(id)_lockedGetOutstandingFetchForOperation:(id)arg0 options:(NSUInteger)arg1 itemIDString:(id)arg2 ;
-(id)initWithDeviceContext:(id)arg0 containerID:(id)arg1 accountOverrideInfo:(id)arg2 accountID:(id)arg3 encryptionServiceName:(id)arg4 ;
-(void)_lockedAddOutstandingFetch:(id)arg0 forItemIDString:(id)arg1 databaseScope:(NSInteger)arg2 ;
// -(void)_lockedCreatePCSCacheFetchOfItem:(id)arg0 forOperation:(id)arg1 options:(NSUInteger)arg2 fetchCreator:(id)arg3 withCompletionHandler:(unk)arg4  ;
// -(void)_lockedFetchPCSForItem:(id)arg0 memoryCache:(id)arg1 forOperation:(id)arg2 options:(NSUInteger)arg3 fetchCreator:(id)arg4 withCompletionHandler:(unk)arg5  ;
-(void)_lockedGetSQLCacheWithCompletionHandler:(id)arg0 ;
// -(void)_lockedHandleMemoryFetchOfItem:(id)arg0 pcsData:(id)arg1 forOperation:(id)arg2 options:(NSUInteger)arg3 fetchCreator:(id)arg4 withCompletionHandler:(unk)arg5  ;
-(void)_lockedInvalidateAllOutstandingPCSFetchesForItemIDString:(id)arg0 databaseScope:(NSInteger)arg1 ;
-(void)_lockedRemoveOutstandingFetch:(id)arg0 forItemIDString:(id)arg1 databaseScope:(NSInteger)arg2 ;
-(void)_setPCSData:(id)arg0 forFetchedRecordID:(id)arg1 withScope:(NSInteger)arg2 withCompletionHandler:(id)arg3 ;
-(void)_setPCSData:(id)arg0 forFetchedShareID:(id)arg1 withScope:(NSInteger)arg2 withCompletionHandler:(id)arg3 ;
-(void)_setPCSData:(id)arg0 forFetchedZoneID:(id)arg1 withScope:(NSInteger)arg2 withCompletionHandler:(id)arg3 ;
-(void)_updateMemoryCacheWithPCSData:(id)arg0 forItemWithID:(id)arg1 inMemoryCache:(id)arg2 databaseScope:(NSInteger)arg3 withCompletionHandler:(id)arg4 ;
-(void)clearInvalidatedPCSSQLCacheEntriesWithSkipZonePCS:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)clearPCSCaches;
-(void)clearPCSMemoryCaches;
-(void)dealloc;
-(void)fetchPCSForRecordWithID:(id)arg0 forOperation:(id)arg1 options:(NSUInteger)arg2 withCompletionHandler:(id)arg3 ;
-(void)fetchPCSForShareWithID:(id)arg0 forOperation:(id)arg1 options:(NSUInteger)arg2 withCompletionHandler:(id)arg3 ;
-(void)fetchPCSForZoneWithID:(id)arg0 forOperation:(id)arg1 options:(NSUInteger)arg2 withCompletionHandler:(id)arg3 ;
-(void)getSQLCache:(id)arg0 ;
-(void)removePCSDataForItemsInShareWithID:(id)arg0 ;
-(void)removePCSDataForItemsInZoneWithID:(id)arg0 ;
-(void)runMemoryCacheEviction;
-(void)updateMemoryCacheWithRecordPCSData:(id)arg0 forRecordWithID:(id)arg1 databaseScope:(NSInteger)arg2 withCompletionHandler:(id)arg3 ;
-(void)updateMemoryCacheWithSharePCSData:(id)arg0 forShareWithID:(id)arg1 databaseScope:(NSInteger)arg2 withCompletionHandler:(id)arg3 ;
-(void)updateMemoryCacheWithZonePCSData:(id)arg0 forZoneWithID:(id)arg1 databaseScope:(NSInteger)arg2 withCompletionHandler:(id)arg3 ;


@end


#endif