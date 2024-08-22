// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDASSETCACHE_H
#define CKDASSETCACHE_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>

#import "CKDClonedFileCache.h"
#import "CKDMMCS.h"
#import "CKSAssetCacheTableGroup.h"
#import "CKDAssetHandleTable.h"
#import "CKDAssetVolumeTable.h"
#import "CKDDirectoryContext.h"

@interface CKDAssetCache : NSObject {
    CKDClonedFileCache *_clonedFileCache;
}


@property (weak, nonatomic) CKDMMCS *MMCS; // ivar: _MMCS
@property (readonly, nonatomic) NSString *applicationBundleID; // ivar: _applicationBundleID
@property (readonly, nonatomic) CKSAssetCacheTableGroup *assetCacheTableGroup; // ivar: _assetCacheTableGroup
@property (readonly, nonatomic) CKDAssetHandleTable *assetHandleTable; // ivar: _assetHandleTable
@property (readonly, nonatomic) CKDAssetVolumeTable *assetVolumeTable; // ivar: _assetVolumeTable
@property (nonatomic) NSInteger checkoutCount; // ivar: _checkoutCount
@property BOOL didDrop; // ivar: _didDrop
@property (retain, nonatomic) CKDDirectoryContext *directoryContext; // ivar: _directoryContext
@property (readonly, nonatomic) NSString *fileDownloadPath;
@property BOOL isEvictionScheduled; // ivar: _isEvictionScheduled
@property (readonly, nonatomic) BOOL isNewEmptyCache; // ivar: _isNewEmptyCache
@property (retain, nonatomic) NSDate *oldestLastUsedTime; // ivar: _oldestLastUsedTime


+(id)_sharedCachesByDirectory;
+(id)_sharedCachesQueue;
+(id)assetCacheWithApplicationBundleID:(id)arg0 directoryContext:(id)arg1 database:(id)arg2 didInit:(*BOOL)arg3 error:(*id)arg4 ;
+(int)openFdForDownloadPath:(id)arg0 error:(*id)arg1 ;
-(BOOL)parseCachedPath:(id)arg0 assetHandleUUID:(*id)arg1 assetSignature:(*id)arg2 ;
-(BOOL)parseCachedPath:(id)arg0 assetHandleUUIDString:(*id)arg1 assetSignatureString:(*id)arg2 ;
-(BOOL)startTrackingGetAssetHandles:(id)arg0 operationType:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)startTrackingRegisterOrPutAssetHandles:(id)arg0 operationType:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)updateAssetHandlesForGetMMCSItems:(id)arg0 cloneItems:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)updateAssetHandlesForPutMMCSItems:(id)arg0 cloneItems:(BOOL)arg1 error:(*id)arg2 ;
-(NSUInteger)_evictAllFilesForced:(BOOL)arg0 ;
-(NSUInteger)_evictDownloadedFilesWithEvictionInfo:(id)arg0 ;
-(NSUInteger)_evictWithEvictionInfo:(id)arg0 ;
-(NSUInteger)clearForced:(BOOL)arg0 ;
-(NSUInteger)countAssetCacheItems;
-(NSUInteger)evictAllFilesForced:(BOOL)arg0 ;
-(NSUInteger)predictedEvictedSizeForAllFilesForced:(BOOL)arg0 ;
-(id)_getAssetHandlesForCachedButNotRegisteredMMCSItems:(id)arg0 error:(*id)arg1 ;
-(id)_initWithApplicationBundleID:(id)arg0 directoryContext:(id)arg1 database:(id)arg2 error:(*id)arg3 ;
-(id)_saveData:(id)arg0 error:(*id)arg1 ;
-(id)assetHandleWithCachedPath:(id)arg0 ;
-(id)clonedFileCache;
-(id)deviceIDForVolumeIndex:(id)arg0 ;
-(id)existingEntriesForRegisterOrPutHandles:(id)arg0 volumeIndex:(id)arg1 ;
-(id)findAssetHandleForItemID:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)mmcsEngineContext;
-(id)trackCachedButNotRegisteredMMCSItems:(id)arg0 error:(*id)arg1 ;
-(id)trackDownloadedData:(id)arg0 signature:(id)arg1 error:(*id)arg2 ;
-(id)updateAssetHandlesForChunkedMMCSItems:(id)arg0 error:(*id)arg1 ;
-(id)updateAssetHandlesForRegisteredMMCSItems:(id)arg0 error:(*id)arg1 ;
-(id)volumeIndexForDeviceID:(id)arg0 ;
-(void)_deleteAssetHandlesAndUnregisterItemsForUnmountedAssetVolumes;
-(void)_expireAssetHandlesWithExpiryDate:(id)arg0 ;
-(void)_resetAssetInflight;
-(void)_scheduleEvictionForDownloadedFiles;
-(void)checkAssetHandlesForRegisteredMMCSItems:(id)arg0 ;
-(void)clearAssetCache;
-(void)dealloc;
-(void)drop;
-(void)enumerateAssetHandlesSegregatedByVolume:(id)arg0 block:(id)arg1 ;
-(void)expireAssetHandlesIfNecessary;
-(void)setupPersistentStateAtStartup;
-(void)showAssetCache;
-(void)stopTrackingAssetHandlesByItemIDs:(id)arg0 ;
-(void)unregisterItemIDsAndDeleteAssetHandlesWithEvictionInfo:(id)arg0 ;
-(void)unregisterItemsAndDeleteUnregisteredAssetHandlesWithIDs:(id)arg0 deleteUnregisteredAssetHandlesWithIDs:(id)arg1 ;
-(void)updateLastAccessTimeForUUID:(id)arg0 ;


@end


#endif