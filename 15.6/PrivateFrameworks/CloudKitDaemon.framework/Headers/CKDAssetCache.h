// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDASSETCACHE_H
#define CKDASSETCACHE_H

@class NSString, NSMutableSet, NSMutableDictionary, CKSQLite;

#import <Foundation/Foundation.h>

#import "CKDMMCS.h"
#import "CKDDirectoryContext.h"

@interface CKDAssetCache : NSObject

@property (weak, nonatomic) CKDMMCS *MMCS; // ivar: _MMCS
@property (readonly, nonatomic) NSString *applicationBundleID; // ivar: _applicationBundleID
@property (nonatomic) NSInteger checkoutCount; // ivar: _checkoutCount
@property (readonly, nonatomic) BOOL databaseWasReset; // ivar: _databaseWasReset
@property (retain, nonatomic) NSMutableSet *deferredDeletedAssetHandles; // ivar: _deferredDeletedAssetHandles
@property (retain, nonatomic) NSMutableDictionary *deferredLastUsedTimeByTrackingUUID; // ivar: _deferredLastUsedTimeByTrackingUUID
@property BOOL didDrop; // ivar: _didDrop
@property (retain, nonatomic) CKDDirectoryContext *directoryContext; // ivar: _directoryContext
@property (nonatomic) int fileDownloadDirectoryFd; // ivar: _fileDownloadDirectoryFd
@property (readonly, nonatomic) NSString *fileDownloadPath;
@property (readonly, nonatomic) BOOL hasMigrated;
@property BOOL isEvictionScheduled; // ivar: _isEvictionScheduled
@property (readonly, nonatomic) CKSQLite *sqlite; // ivar: _sqlite
@property (retain, nonatomic) NSMutableDictionary *volumeIndexByVolumeUUID; // ivar: _volumeIndexByVolumeUUID
@property (retain, nonatomic) NSMutableDictionary *volumeUUIDByVolumeIndex; // ivar: _volumeUUIDByVolumeIndex


+(id)_sharedCachesByDirectory;
+(id)_sharedCachesQueue;
+(id)assetCacheWithApplicationBundleID:(id)arg0 directoryContext:(id)arg1 didInit:(*BOOL)arg2 error:(*id)arg3 ;
+(int)openFdForDownloadPath:(id)arg0 error:(*id)arg1 ;
+(void)registerExpirationForAssetHandles;
-(BOOL)parseCachedPath:(id)arg0 assetHandleUUID:(*id)arg1 assetSignature:(*id)arg2 ;
-(BOOL)parseCachedPath:(id)arg0 assetHandleUUIDString:(*id)arg1 assetSignatureString:(*id)arg2 ;
-(BOOL)startTrackingGetAssetHandles:(id)arg0 operationType:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)startTrackingRegisterOrPutAssetHandles:(id)arg0 operationType:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)updateAssetHandlesForGetMMCSItems:(id)arg0 error:(*id)arg1 ;
-(BOOL)updateAssetHandlesForPutMMCSItems:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)_evictAllFilesForced:(BOOL)arg0 ;
-(NSUInteger)_evictDownloadedFilesWithEvictionInfo:(id)arg0 ;
-(NSUInteger)_evictWithEvictionInfo:(id)arg0 ;
-(NSUInteger)clearForced:(BOOL)arg0 ;
-(NSUInteger)countAssetCacheItems;
-(NSUInteger)evictAllFilesForced:(BOOL)arg0 ;
-(NSUInteger)predictedEvictedSizeForAllFilesForced:(BOOL)arg0 ;
-(id)_getAssetHandlesForCachedButNotRegisteredMMCSItems:(id)arg0 error:(*id)arg1 ;
-(id)_getAssetHandlesForDownloadedMMCSItems:(id)arg0 error:(*id)arg1 ;
-(id)_initWithApplicationBundleID:(id)arg0 directoryContext:(id)arg1 error:(*id)arg2 ;
-(id)_performUnregisterItemsAndDeleteUnregisteredAssetHandlesWithIDs:(id)arg0 deleteUnregisteredAssetHandlesWithIDs:(id)arg1 ;
-(id)_saveData:(id)arg0 error:(*id)arg1 ;
-(id)assetHandleWithCachedPath:(id)arg0 ;
-(id)deviceIDForVolumeIndex:(id)arg0 ;
-(id)existingOrNewVolumeIndexForDeviceID:(id)arg0 ;
-(id)existingOrNewVolumeIndexForVolumeUUID:(id)arg0 ;
-(id)findAssetHandleForItemID:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)trackCachedButNotRegisteredMMCSItems:(id)arg0 error:(*id)arg1 ;
-(id)trackDownloadedData:(id)arg0 signature:(id)arg1 error:(*id)arg2 ;
-(id)trackDownloadedMMCSItems:(id)arg0 error:(*id)arg1 ;
-(id)updateAssetHandlesForChunkedMMCSItems:(id)arg0 error:(*id)arg1 ;
-(id)updateAssetHandlesForRegisteredMMCSItems:(id)arg0 error:(*id)arg1 ;
-(id)volumeUUIDWithVolumeIndex:(id)arg0 ;
-(void)_deleteAssetHandlesAndUnregisterItemsForUnmountedAssetVolumes;
-(void)_expireAssetHandlesWithExpiryDate:(id)arg0 group:(id)arg1 ;
-(void)_expireAssetHandlesWithGroup:(id)arg0 ;
-(void)_performExpirationForAssetHandles;
-(void)_resetAssetInflight;
-(void)_scheduleEvictionForDownloadedFiles;
-(void)_setVolumeIndex:(id)arg0 forVolumeUUID:(id)arg1 ;
-(void)checkAssetHandlesForRegisteredMMCSItems:(id)arg0 ;
-(void)clearAssetCache;
-(void)dealloc;
-(void)deferredStopTrackingAssetHandlesByItemIDs:(id)arg0 ;
-(void)deferredUpdateLastTimeUsedForUUID:(id)arg0 ;
-(void)drop;
-(void)expireAssetHandlesIfNecessaryWithGroup:(id)arg0 ;
-(void)forgetVolumeUUID:(id)arg0 ;
-(void)registerForCacheExpiration;
-(void)scheduleUnregisterItemIDsAndDeleteAssetHandlesWithEvictionInfo:(id)arg0 completionBlock:(id)arg1 ;
-(void)scheduleUnregisterItemsAndDeleteUnregisteredAssetHandlesWithIDs:(id)arg0 ;
-(void)scheduleUnregisterItemsAndDeleteUnregisteredAssetHandlesWithIDs:(id)arg0 deleteUnregisteredAssetHandlesWithIDs:(id)arg1 completionBlock:(id)arg2 ;
-(void)serialize:(id)arg0 ;
-(void)serialize_async:(id)arg0 ;
-(void)setupPersistentStateAtStartup;
-(void)showAssetCache;
-(void)stopTrackingAssetHandlesByItemIDs:(id)arg0 ;
-(void)unregisterDeferredItemIDs:(id)arg0 andDeleteAssetHandles:(id)arg1 ;
-(void)updateDeferredLastAccessTimeForUUIDs;


@end


#endif