// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLBACKGROUNDJOBGUESTASSETSYNCWORKER_H
#define PLBACKGROUNDJOBGUESTASSETSYNCWORKER_H

@class NSPersistentHistoryToken;


#import "PLBackgroundJobWorker.h"

@interface PLBackgroundJobGuestAssetSyncWorker : PLBackgroundJobWorker

@property (copy) NSPersistentHistoryToken *cancelledWorkItem; // ivar: _cancelledWorkItem


+(BOOL)_isTokenInvalidError:(id)arg0 ;
+(BOOL)supportsWellKnownPhotoLibraryIdentifier:(NSInteger)arg0 ;
+(id)workerWithLibraryBundle:(id)arg0 ;
-(BOOL)_batchResetGuestSavedAssetTypeInManagedObjectContext:(id)arg0 error:(*id)arg1 ;
-(BOOL)_batchResetSyndicationProcessingInManagedObjectContext:(id)arg0 error:(*id)arg1 ;
-(BOOL)_checkSyndicationPreferencesEnabledAndCleanupGuestAssetsIfNeededWithPhotoLibrary:(id)arg0 ;
-(BOOL)_resetSyndicationProcessingInSourceLibrary:(id)arg0 error:(*id)arg1 ;
-(BOOL)_shouldCancelCurrentWorkItem:(id)arg0 ;
-(BOOL)_systemPhotoLibraryChangedSinceLastRunWithSourceLibrary:(id)arg0 targetLibrary:(id)arg1 ;
-(BOOL)isInterruptible;
-(id)_anyPersistentHistoryTokenWithLibrary:(id)arg0 ;
-(id)_lastGuestAssetSyncTargetLibraryURLFromSourceLibrary:(id)arg0 targetLibrary:(id)arg1 ;
-(id)_lastGuestAssetSyncTokenFromLibrary:(id)arg0 ;
-(id)_sourcePhotoLibraryWithName:(char *)arg0 ;
-(id)_transactionIteratorSinceLastToken:(id)arg0 sourceLibrary:(id)arg1 error:(*id)arg2 ;
-(id)_transactionIteratorSinceTokenIfValid:(id)arg0 sourceLibrary:(id)arg1 error:(*id)arg2 ;
-(id)workItemsNeedingProcessingInLibrary:(id)arg0 ;
-(void)_deleteAllGuestAssetsInPhotoLibrary:(id)arg0 reason:(id)arg1 ;
-(void)_deleteAssetWithUuid:(id)arg0 syndicationIdentifier:(id)arg1 fromLibrary:(id)arg2 ;
-(void)_markAsWasGuestAssetOnAssetWithSyndicationIdentifier:(id)arg0 inLibrary:(id)arg1 ;
-(void)_processNextAssetInChangedObjectIDs:(id)arg0 fromSourceLibrary:(id)arg1 toDestLibrary:(id)arg2 group:(id)arg3 workItem:(id)arg4 deletedUuids:(id)arg5 errorHandler:(id)arg6 ;
-(void)_saveGuestAssetSyncToken:(id)arg0 toLibrary:(id)arg1 ;
-(void)_syncAsset:(id)arg0 toLibrary:(id)arg1 completion:(id)arg2 ;
-(void)_updateLastGuestAssetSyncTargetLibraryURLInSourceLibrary:(id)arg0 targetLibrary:(id)arg1 ;
-(void)performWorkOnItem:(id)arg0 inLibrary:(id)arg1 completion:(id)arg2 ;
-(void)stopWorkingOnItem:(id)arg0 ;


@end


#endif