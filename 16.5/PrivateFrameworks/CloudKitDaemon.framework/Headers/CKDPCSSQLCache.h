// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDPCSSQLCACHE_H
#define CKDPCSSQLCACHE_H

@class CKContainerID, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CKDPCSSQLCacheTableGroup.h"
#import "CKDPCSSQLCacheTable.h"

@interface CKDPCSSQLCache : NSObject {
    CKContainerID *_containerID;
    NSString *_accountID;
    NSString *_encryptionServiceName;
    CKDPCSSQLCacheTableGroup *_cacheGroup;
    CKDPCSSQLCacheTable *_table;
    NSObject<OS_dispatch_queue> *_asyncQueue;
}


@property NSUInteger cacheHitCount; // ivar: _cacheHitCount
@property NSUInteger cacheRequestCount; // ivar: _cacheRequestCount


+(void)evictPCSSQLCachesForKnownContainers;
-(BOOL)hasStatusToReport;
-(id)CKStatusReportArray;
-(id)_lockedFetchPCSDataForID:(id)arg0 databaseScope:(NSInteger)arg1 itemType:(NSUInteger)arg2 ;
-(id)initWithDeviceContext:(id)arg0 containerID:(id)arg1 accountOverrideInfo:(id)arg2 accountID:(id)arg3 encryptionServiceName:(id)arg4 ;
-(void)_lockedSetPCSData:(id)arg0 databaseScope:(NSInteger)arg1 itemType:(NSUInteger)arg2 forID:(id)arg3 ;
-(void)_setPCSData:(id)arg0 forItemWithID:(id)arg1 databaseScope:(NSInteger)arg2 itemType:(NSUInteger)arg3 withCompletionHandler:(id)arg4 ;
-(void)clearCache;
-(void)clearInvalidatedCacheEntriesWithSkipZonePCS:(BOOL)arg0 completionHandler:(id)arg1 ;
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