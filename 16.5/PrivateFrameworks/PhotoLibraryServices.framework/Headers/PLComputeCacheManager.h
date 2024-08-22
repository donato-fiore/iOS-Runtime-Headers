// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLCOMPUTECACHEMANAGER_H
#define PLCOMPUTECACHEMANAGER_H

@class PLCoreAnalyticsEventManager, NSNumber;
@protocol PLCloudAssetPayloadRestoreDelegate, PLJournalManager, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PLLibraryServicesManager.h"
#import "PLJournalManager.h"
#import "PLPhotoLibrary.h"

@interface PLComputeCacheManager : NSObject <PLCloudAssetPayloadRestoreDelegate, PLJournalManager>

 {
    PLLibraryServicesManager *_lsm;
    PLJournalManager *_journalManager;
    PLCoreAnalyticsEventManager *_coreAnalyticsManager;
    NSNumber *_restoreState;
    PLPhotoLibrary *_restoreCachePhotoLibrary;
    NSObject<OS_dispatch_queue> *_queue;
    os_unfair_lock_s _restoreStateLock;
}


@property (readonly, nonatomic) BOOL isReadyForAnalysis;


+(BOOL)isEnabledWithPathManager:(id)arg0 error:(*id)arg1 ;
+(BOOL)shouldPublishAnalyticsForRestoreError:(id)arg0 ;
+(id)_urlForLocation:(NSInteger)arg0 pathManager:(id)arg1 createIfNeeded:(BOOL)arg2 error:(*id)arg3 ;
+(id)baseURLFromPathManager:(id)arg0 ;
+(id)name;
+(id)payloadClasses;
+(id)restorePayloadClasses;
-(BOOL)_addBackupCreatedMarkerWithError:(*id)arg0 ;
-(BOOL)_archivePrepareDirectoryWithError:(*id)arg0 ;
-(BOOL)_archiveSnapshotIfNecessaryWithError:(*id)arg0 ;
-(BOOL)_archiveSnapshotWithError:(*id)arg0 ;
-(BOOL)_createArchiveWithError:(*id)arg0 ;
-(BOOL)_getRestoreCount:(*short)arg0 error:(*id)arg1 ;
-(BOOL)_hasBackupArchive;
-(BOOL)_hasBackupCreatedMarker;
-(BOOL)_hasPrepareDataToBackupWithError:(*id)arg0 ;
-(BOOL)_incrementRestoreCount:(*short)arg0 error:(*id)arg1 ;
-(BOOL)_isValidArchiveURL:(id)arg0 filenameExclusionList:(id)arg1 ;
-(BOOL)_performSnapshotForPayloadClassIDs:(id)arg0 error:(*id)arg1 ;
-(BOOL)_removeComputeCacheDataForMatchingRestoreState:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)_removeLocation:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)_removeRestoreDataWithError:(*id)arg0 ;
-(BOOL)_removeSnapshotWithError:(*id)arg0 ;
-(BOOL)_restoreComputeCacheArchiveWithProgress:(id)arg0 error:(*id)arg1 ;
-(BOOL)_restoreComputeCacheWithProgress:(id)arg0 error:(*id)arg1 ;
-(BOOL)_snapshotJournalsForPayloadClassIDs:(id)arg0 error:(*id)arg1 ;
-(BOOL)_transferAndPrepareComputeCacheFromBackupToRestoreLocationWithError:(*id)arg0 ;
-(BOOL)_transferToBackupLocationWithError:(*id)arg0 ;
-(BOOL)coalesceJournalsForPayloadClassIDs:(id)arg0 withChangeJournalOverThreshold:(float)arg1 error:(*id)arg2 ;
-(BOOL)createArchiveWithError:(*id)arg0 ;
-(BOOL)resetComputeCacheWithError:(*id)arg0 ;
-(BOOL)restoreComputeCacheWithProgress:(id)arg0 error:(*id)arg1 ;
-(BOOL)snapshotComputeCacheAndBackupIfNeededWithError:(*id)arg0 ;
-(BOOL)snapshotJournalsForPayloadClassIDs:(id)arg0 error:(*id)arg1 ;
-(NSInteger)_libraryAssetCount;
-(NSInteger)_performBlockOnRestoreStateLockAndWait:(id)arg0 ;
-(NSInteger)_restoreState;
-(NSUInteger)_getArchiveSize;
-(id)_cachedPolicyConfiguration;
-(id)_filenameExclusionList;
-(id)_newTransientContext;
-(id)_snapshotPolicy;
-(id)initWithLibraryServicesManager:(id)arg0 ;
-(id)managedObjectContext;
-(id)resolveLocalIdentifiersForCloudIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)status;
-(id)statusFromPolicy:(id)arg0 ;
-(void)_enumerateComputeCachePrepareDirectoryUsingBlock:(id)arg0 ;
-(void)_publish;
-(void)_resetRestoreState;
-(void)_setRestoreState:(NSInteger)arg0 ;
-(void)_updateCachedPolicyConfigurationWithCPLConfiguration:(id)arg0 ;
-(void)coalesceJournalsForPayloadClassIDs:(id)arg0 withChangeJournalOverThreshold:(float)arg1 completionHandler:(id)arg2 ;
-(void)notifyCPLConfiguration:(id)arg0 ;
-(void)notifyReadyToRestore;
-(void)performTransactionAndWait:(id)arg0 ;
-(void)snapshotJournalsForPayloadClassIDs:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)start;
-(void)stop;


@end


#endif