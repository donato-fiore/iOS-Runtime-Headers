// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLBACKGROUNDJOBPERSONSYNCWORKER_H
#define PLBACKGROUNDJOBPERSONSYNCWORKER_H

@class NSSet, NSPersistentHistoryToken;


#import "PLBackgroundJobWorker.h"
#import "PLPhotoLibraryBundle.h"

@interface PLBackgroundJobPersonSyncWorker : PLBackgroundJobWorker {
    NSSet *_propertiesToIgnore;
}


@property (copy) NSPersistentHistoryToken *cancelledWorkItem; // ivar: _cancelledWorkItem
@property (retain) PLPhotoLibraryBundle *testingSourceBundle; // ivar: _testingSourceBundle


+(BOOL)_isTokenInvalidError:(id)arg0 ;
+(BOOL)supportsWellKnownPhotoLibraryIdentifier:(NSInteger)arg0 ;
+(BOOL)usesMultipleLibrariesConcurrently;
-(BOOL)_resetPersonSyncInTargetLibrary:(id)arg0 error:(*id)arg1 ;
-(BOOL)_shouldCancelCurrentWorkItem:(id)arg0 ;
-(BOOL)_syncFaceCropsFromLibrary:(id)arg0 toLibrary:(id)arg1 error:(*id)arg2 ;
-(BOOL)_systemPhotoLibraryChangedSinceLastRunWithSourceLibrary:(id)arg0 targetLibrary:(id)arg1 ;
-(BOOL)isInterruptible;
-(id)_anyPersistentHistoryTokenWithLibrary:(id)arg0 ;
-(id)_faceCropUuidsFromLibrary:(id)arg0 error:(*id)arg1 ;
-(id)_faceCropUuidsMissingFromList:(id)arg0 inLibrary:(id)arg1 error:(*id)arg2 ;
-(id)_lastPersonSyncSourceLibraryURLFromSourceLibrary:(id)arg0 targetLibrary:(id)arg1 ;
-(id)_lastPersonSyncTokenFromLibrary:(id)arg0 ;
-(id)_sourcePhotoLibraryWithName:(char *)arg0 ;
-(id)_transactionIteratorSinceLastToken:(id)arg0 sourceLibrary:(id)arg1 error:(*id)arg2 ;
-(id)_transactionIteratorSinceTokenIfValid:(id)arg0 sourceLibrary:(id)arg1 error:(*id)arg2 ;
-(id)workItemsNeedingProcessingInLibrary:(id)arg0 ;
-(void)_deletePersonWithUuid:(id)arg0 fromLibrary:(id)arg1 ;
-(void)_processNextPersonInChangedObjectIDs:(id)arg0 fromSourceLibrary:(id)arg1 toDestLibrary:(id)arg2 group:(id)arg3 workItem:(id)arg4 deletedUuids:(id)arg5 errorHandler:(id)arg6 ;
-(void)_resetFacesProcessingForPerson:(id)arg0 ;
-(void)_savePersonSyncToken:(id)arg0 toLibrary:(id)arg1 ;
-(void)_setupPropertiesToIgnoreWithSourceLibrary:(id)arg0 ;
-(void)_syncPerson:(id)arg0 toLibrary:(id)arg1 completion:(id)arg2 ;
-(void)_updateLastPersonSyncSourceLibraryURLWithSourceLibrary:(id)arg0 targetLibrary:(id)arg1 ;
-(void)performWorkOnItem:(id)arg0 inLibrary:(id)arg1 completion:(id)arg2 ;
-(void)stopWorkingOnItem:(id)arg0 ;


@end


#endif