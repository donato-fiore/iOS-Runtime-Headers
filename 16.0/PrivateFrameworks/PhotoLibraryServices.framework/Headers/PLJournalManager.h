// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLJOURNALMANAGER_H
#define PLJOURNALMANAGER_H

@class NSPersistentHistoryToken;
@protocol OS_dispatch_queue, OS_dispatch_group;


#import "PLJournalManagerCore.h"
#import "PLLibraryServicesManager.h"
#import "PLChangeHandlingNotificationObserver.h"

@interface PLJournalManager : PLJournalManagerCore {
    PLLibraryServicesManager *_lsm;
    PLChangeHandlingNotificationObserver *_changeHandlingNotificationObserver;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_startupWaitGroup;
    unsigned short _state;
    NSPersistentHistoryToken *_currentHistoryToken;
    uint8_t _ignoreHistoryDuringSnapshot;
}




+(BOOL)assetJournalExists:(id)arg0 error:(*id)arg1 ;
+(BOOL)existingJournalsCompatibleForRebuild:(id)arg0 error:(*id)arg1 ;
+(Class)payloadClassForAdditionalEntityName:(id)arg0 ;
// +(id)entriesByPayloadClassIDFromHistoryToken:(id)arg0 currentHistoryToken:(*id)arg1 withManagedObjectContext:(id)arg2 shouldStopBlock:(id)arg3 error:(unk)arg4  ;
+(id)existingObjectWithID:(id)arg0 managedObjectContext:(id)arg1 ;
+(id)payloadClasses;
-(BOOL)_appendEntriesByPayloadClassID:(id)arg0 withCurrentHistoryToken:(id)arg1 ;
-(BOOL)_coalesceJournalsForPayloadClassIDs:(id)arg0 withChangeJournalOverThreshold:(float)arg1 ;
-(BOOL)_needFullSnapshot;
-(BOOL)_needPartialSnapshot:(id)arg0 ;
-(BOOL)_needSnapshot;
-(BOOL)_performSnapshotsForceFull:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)_recreateResourcesForAsset:(id)arg0 withPayload:(id)arg1 resources:(id)arg2 recreateOptions:(unsigned char)arg3 storeOptions:(id)arg4 libraryID:(id)arg5 isCPLEnabled:(BOOL)arg6 ;
-(BOOL)_replayFromCurrentHistoryToken;
-(BOOL)forceFullSnapshot:(*id)arg0 ;
-(id)_assetsToImportFromAssetJournalInManagedObjectContext:(id)arg0 outOnDiskURLs:(id)arg1 ;
-(id)assetsToImportFromAssetJournalInManagedObjectContext:(id)arg0 outOnDiskURLs:(id)arg1 ;
-(id)initWithLibrayServicesManager:(id)arg0 ;
-(id)newTransientContext;
-(void)_handleChangeHandlingNotificationWithTransaction:(id)arg0 ;
-(void)_loadHistoryToken;
-(void)_recreateAssetsInManagedObjectContext:(id)arg0 options:(unsigned char)arg1 progress:(id)arg2 ;
-(void)_recreateNonAssetsInManagedObjectContext:(id)arg0 progress:(id)arg1 ;
-(void)_registerForChangeHandlingNotifications;
-(void)_removeLegacyPersistedMetadataIfNecessary;
-(void)_retrySnapshot;
-(void)_start;
-(void)_startAfterRebuild;
-(void)_unregisterForChangeHandlingNotifications;
-(void)coalesceJournalsForPayloadClassIDs:(id)arg0 withChangeJournalOverThreshold:(float)arg1 completionHandler:(id)arg2 ;
-(void)notifyRebuildComplete;
-(void)notifyWillRebuild;
-(void)recreateAllObjectsInManagedObjectContext:(id)arg0 options:(unsigned char)arg1 ;
-(void)recreateAssetsInManagedObjectContext:(id)arg0 options:(unsigned char)arg1 progress:(id)arg2 ;
-(void)recreateNonAssetsInManagedObjectContext:(id)arg0 progress:(id)arg1 ;
-(void)snapshotJournalsForPayloadClassIDs:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)start;
-(void)stop;


@end


#endif