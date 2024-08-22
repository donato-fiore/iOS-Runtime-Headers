// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLREBUILDJOURNALMANAGER_H
#define PLREBUILDJOURNALMANAGER_H

@protocol PLJournalManager, OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "PLLibraryServicesManager.h"
#import "PLJournalManager.h"
#import "PLChangeHandlingNotificationObserver.h"

@interface PLRebuildJournalManager : NSObject <PLJournalManager>

 {
    PLLibraryServicesManager *_lsm;
    PLJournalManager *_journalManager;
    PLChangeHandlingNotificationObserver *_changeHandlingNotificationObserver;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_startupWaitGroup;
    unsigned short _state;
}




+(BOOL)assetJournalExists:(id)arg0 error:(*id)arg1 ;
+(BOOL)existingJournalsCompatibleForRebuild:(id)arg0 error:(*id)arg1 ;
+(BOOL)isEnabledWithPathManager:(id)arg0 error:(*id)arg1 ;
+(id)baseURLFromPathManager:(id)arg0 ;
+(id)name;
+(id)payloadClasses;
-(BOOL)_coalesceJournalsForPayloadClassIDs:(id)arg0 withChangeJournalOverThreshold:(float)arg1 error:(*id)arg2 ;
-(BOOL)_performSnapshotForPayloadClassIDs:(id)arg0 error:(*id)arg1 ;
-(BOOL)_performSnapshotIfNecessaryWithError:(*id)arg0 ;
-(BOOL)_recreateResourcesForAsset:(id)arg0 withPayload:(id)arg1 resources:(id)arg2 recreateOptions:(unsigned char)arg3 storeOptions:(id)arg4 libraryID:(id)arg5 isCPLEnabled:(BOOL)arg6 ;
-(BOOL)_replayFromCurrentHistoryToken;
-(BOOL)_snapshotJournalsForPayloadClassIDs:(id)arg0 error:(*id)arg1 ;
-(BOOL)coalesceJournalsForPayloadClassIDs:(id)arg0 withChangeJournalOverThreshold:(float)arg1 error:(*id)arg2 ;
-(BOOL)snapshotJournalsForPayloadClassIDs:(id)arg0 error:(*id)arg1 ;
-(id)_assetsToImportFromAssetJournalInManagedObjectContext:(id)arg0 outOnDiskURLs:(id)arg1 ;
-(id)_newTransientContext;
-(id)assetsToImportFromAssetJournalInManagedObjectContext:(id)arg0 outOnDiskURLs:(id)arg1 ;
-(id)initWithLibraryServicesManager:(id)arg0 ;
-(void)_handleChangeHandlingNotificationWithTransaction:(id)arg0 ;
-(void)_recreateAssetsInManagedObjectContext:(id)arg0 options:(unsigned char)arg1 progress:(id)arg2 ;
-(void)_recreateNonAssetsInManagedObjectContext:(id)arg0 progress:(id)arg1 ;
-(void)_registerForChangeHandlingNotifications;
-(void)_removeLegacyPersistedMetadataIfNecessary;
-(void)_retrySnapshot;
-(void)_snapshotJournalsIgnoreHistoreIfNecessaryForPayloadClassIDs:(id)arg0 ;
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