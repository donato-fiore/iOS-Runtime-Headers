// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RCSAVEDRECORDINGSMODEL_H
#define RCSAVEDRECORDINGSMODEL_H

@class NSPersistentStore, NSManagedObjectContext, NSEntityDescription, NSCloudKitMirroringRequestOptions, NSArray, NSSet, NSPersistentContainer, NSData, NSString;
@protocol NSFetchedResultsControllerDelegate, RCFolder;

#import <Foundation/Foundation.h>

#import "RCPersistentContainer.h"
#import "RCDatabaseMetadata.h"
#import "RCFoldersFetchedResultsController.h"
#import "RCSavedRecordingsController.h"

@interface RCSavedRecordingsModel : NSObject <NSFetchedResultsControllerDelegate>

 {
    RCPersistentContainer *_container;
    RCDatabaseMetadata *_metadata;
    NSPersistentStore *_cloudStore;
    NSManagedObjectContext *_context;
    NSEntityDescription *_cloudRecordingEntity;
    NSEntityDescription *_folderEntity;
    NSCloudKitMirroringRequestOptions *_mirroringRequestOptions;
    RCFoldersFetchedResultsController *_foldersController;
}


@property (readonly, nonatomic) NSArray *allRecordings;
@property (readonly, nonatomic) NSSet *audioProperties;
@property (readonly, nonatomic) RCSavedRecordingsController *availableRecordingsController; // ivar: _availableRecordingsController
@property (readonly, nonatomic) NSObject<RCFolder> *capturedOnWatchRecordingsFolder;
@property (readonly, nonatomic) NSPersistentContainer *container;
@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) NSData *currentChangeToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *deletedRecordings;
@property (readonly, nonatomic) RCSavedRecordingsController *deletedRecordingsController; // ivar: _deletedRecordingsController
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableSaveNotifications; // ivar: _disableSaveNotifications
@property (readonly, nonatomic) RCSavedRecordingsController *favoriteRecordingsController;
@property (readonly, nonatomic) NSObject<RCFolder> *favoriteRecordingsFolder;
@property (readonly, nonatomic) RCFoldersFetchedResultsController *foldersController;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger isSavingDisabledCount; // ivar: _isSavingDisabledCount
@property (readonly, nonatomic) RCSavedRecordingsController *musicMemosRecordingsController;
@property (readonly, nonatomic) NSObject<RCFolder> *recentlyDeletedRecordingsFolder;
@property (readonly, nonatomic) NSArray *recordings;
@property (readonly, nonatomic) RCSavedRecordingsController *recordingsController; // ivar: _recordingsController
@property (readonly) Class superclass;
@property BOOL valid; // ivar: _valid
@property (readonly, nonatomic) NSObject<RCFolder> *voiceMemosRecordingsFolder;
@property (readonly, nonatomic) RCSavedRecordingsController *watchOSRecordingsController;


+(BOOL)migrateDatabaseIfNecessary;
+(id)_copyFileIntoRecordingsDirectory:(id)arg0 ;
+(id)_dateFormatterComponentFormatting;
+(id)_moveFileIntoRecordingsDirectory:(id)arg0 ;
+(id)cloudMirroringModel;
+(id)creationDateFromStandardRecordingURL:(id)arg0 ;
+(id)currentLocationBasedName;
+(id)newPrivateModel;
+(id)newSyncModel;
+(id)savedRecordingsDirectory;
+(id)sharedModelForMainQueue;
+(id)sharedModelForQueue:(id)arg0 ;
+(id)standardNameForRecordingWithCreationDate:(id)arg0 uniqueID:(id)arg1 ;
+(id)standardPathForRecording:(id)arg0 ;
+(id)standardPathForRecordingWithCreationDate:(id)arg0 uniqueID:(id)arg1 ;
+(id)standardURLForRecordingWithCreationDate:(id)arg0 ;
+(id)startStoreServers:(id)arg0 ;
+(void)_determineImportabilityOfRecordingWithAudioFile:(id)arg0 preferredFormat:(unsigned int)arg1 completionHandler:(id)arg2 ;
+(void)_importImportableRecordingWithAudioAsset:(id)arg0 name:(id)arg1 date:(id)arg2 uniqueID:(id)arg3 presetName:(id)arg4 outputFileType:(id)arg5 completionHandler:(id)arg6 ;
+(void)_importRecordingWithSourceAudioURL:(id)arg0 name:(id)arg1 date:(id)arg2 uniqueID:(id)arg3 preferredFormat:(unsigned int)arg4 completionHandler:(id)arg5 ;
+(void)_insertRecordingWithImportableAudioURL:(id)arg0 name:(id)arg1 date:(id)arg2 uniqueID:(id)arg3 completionHandler:(id)arg4 ;
+(void)determineImportabilityOfRecordingWithAudioURL:(id)arg0 completionHandler:(id)arg1 ;
+(void)importRecordingWithSourceAudioURL:(id)arg0 name:(id)arg1 date:(id)arg2 completionHandler:(id)arg3 ;
+(void)importRecordingWithSourceAudioURL:(id)arg0 name:(id)arg1 date:(id)arg2 userInfo:(id)arg3 completionHandler:(id)arg4 ;
+(void)importRecordingWithSourceAudioURL:(id)arg0 name:(id)arg1 date:(id)arg2 xpcConnection:(id)arg3 userInfo:(id)arg4 completionHandler:(id)arg5 ;
-(BOOL)__saveManagedObjectContext:(*id)arg0 ;
-(BOOL)deleteDatabaseProperty:(id)arg0 ;
-(BOOL)exportToCloud:(id)arg0 ;
-(BOOL)fetchExportProgress:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)fetchObjectsFromCloud:(id)arg0 entityToAttributesToFetch:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)hasExistingRecordingForAudioFile:(id)arg0 ;
-(BOOL)importFromCloud:(id)arg0 ;
-(BOOL)resetCloud:(id)arg0 ;
-(BOOL)saveIfNecessary:(*id)arg0 ;
-(BOOL)setValue:(id)arg0 forDatabaseProperty:(id)arg1 ;
-(BOOL)setValue:(id)arg0 forDatabaseProperty:(id)arg1 save:(BOOL)arg2 ;
-(id)_allTitles;
-(id)_folderWithType:(NSInteger)arg0 ;
-(id)_folderWithUUID:(id)arg0 ;
-(id)_foldersWithNameFetchRequest:(id)arg0 ;
-(id)_foldersWithUUIDFetchRequest:(id)arg0 ;
-(id)_initWithContainer:(id)arg0 concurrencyType:(NSUInteger)arg1 ;
-(id)_labelPresetsForQuery:(id)arg0 ;
-(id)_recordingsControllerWithPredicate:(id)arg0 ;
-(id)_recordingsWithUniqueID:(id)arg0 templateName:(id)arg1 ;
-(id)_recordingsWithUniqueIDs:(id)arg0 templateName:(id)arg1 ;
-(id)_transactionHistorySinceToken:(id)arg0 ;
-(id)_userDefinedFolder:(id)arg0 ;
-(id)cloudRecordingEntity;
-(id)cloudStore;
-(id)context;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)currentPersistentHistoryToken;
-(id)duplicateRecording:(id)arg0 error:(*id)arg1 ;
-(id)enumerateChangeHistorySinceToken:(id)arg0 usingBlock:(id)arg1 ;
-(id)existingFolderWithName:(id)arg0 ;
-(id)existingFolderWithUUID:(id)arg0 ;
-(id)folderEntity;
-(id)folderWithName:(id)arg0 ;
-(id)indexPathForRecording:(id)arg0 ;
-(id)init;
-(id)insertRecordingWithAudioFile:(id)arg0 duration:(CGFloat)arg1 date:(id)arg2 ;
-(id)insertRecordingWithAudioFile:(id)arg0 duration:(CGFloat)arg1 date:(id)arg2 customLabelBase:(id)arg3 ;
-(id)insertRecordingWithAudioFile:(id)arg0 duration:(CGFloat)arg1 date:(id)arg2 customTitleBase:(id)arg3 uniqueID:(id)arg4 ;
-(id)metadataValueForKey:(id)arg0 ;
-(id)mirroringDelegate;
-(id)mirroringOptions;
-(id)mirroringRequestOptions;
-(id)mostRecentRecording;
-(id)nextRecordingDefaultLabelWithCustomLabelBase:(id)arg0 ;
-(id)nextRecordingDefaultLabelWithCustomTitleBase:(id)arg0 ;
-(id)recordingAtIndex:(NSUInteger)arg0 ;
-(id)recordingWithID:(id)arg0 ;
-(id)recordingWithITunesPersistentID:(NSInteger)arg0 ;
-(id)recordingWithPath:(id)arg0 ;
-(id)recordingWithURIRepresentation:(id)arg0 ;
-(id)recordingWithUniqueID:(id)arg0 ;
-(id)recordingsControllerWithFolder:(id)arg0 ;
-(id)recordingsControllerWithFolderName:(id)arg0 ;
-(id)recordingsForSpotlightSearch:(id)arg0 ;
-(id)recordingsWithPredicate:(id)arg0 ;
-(id)recordingsWithUniqueID:(id)arg0 ;
-(id)recordingsWithUniqueIDs:(id)arg0 ;
-(id)transactionForToken:(id)arg0 ;
-(id)valueForDatabaseProperty:(id)arg0 ;
-(void)_deleteFolderAndRecordings:(id)arg0 shouldPermanentlyErase:(BOOL)arg1 ;
-(void)_deleteRecordingsWithDurationLessThan:(CGFloat)arg0 passingTest:(id)arg1 ;
-(void)_deliverSaveNotifications;
-(void)_enumerateFetchedRecordingTitles:(id)arg0 ;
-(void)_enumerateRecordingsWithEntityDescription:(id)arg0 propertiesToFetch:(id)arg1 sortDescriptors:(id)arg2 withBlock:(id)arg3 ;
-(void)_scheduleAutomaticRecordingDeletions;
-(void)_synchronizeRecordingsMetadata;
-(void)addRecording:(id)arg0 toFolder:(id)arg1 ;
-(void)addRecordings:(id)arg0 toFolder:(id)arg1 ;
-(void)controllerDidChangeContent:(id)arg0 ;
-(void)dealloc;
-(void)deleteFolder:(id)arg0 ;
-(void)deleteFolderAndAllPlayableRecordings:(id)arg0 ;
-(void)deleteFolderAndPermanentlyEraseAllPlayableRecordings:(id)arg0 ;
-(void)deletePlayableRecordingsInFolder:(id)arg0 ;
-(void)deleteRecording:(id)arg0 ;
-(void)deleteRecordings:(id)arg0 ;
-(void)enumerateExistingRecordingsWithBlock:(id)arg0 ;
-(void)enumerateExistingRecordingsWithProperties:(id)arg0 sortDescriptors:(id)arg1 block:(id)arg2 ;
-(void)eraseAllDeleted;
-(void)erasePlayableRecordingsInFolder:(id)arg0 ;
-(void)eraseRecording:(id)arg0 ;
-(void)eraseRecordings:(id)arg0 ;
-(void)eraseRecordingsDeletedBeforeDate:(id)arg0 ;
-(void)finishSaveByUpdatingSearchableIndexWithChangeContext:(id)arg0 ;
-(void)mergeRecordings:(id)arg0 allTransactions:(id)arg1 ;
-(void)moveFolder:(id)arg0 toIndexPath:(id)arg1 ;
-(void)performBlockAndWait:(id)arg0 ;
-(void)performBlockAndWaitInTemporaryContext:(id)arg0 ;
-(void)performWithSavingDisabled:(id)arg0 ;
-(void)reconcileChangedFolder:(id)arg0 ;
-(void)removeRecording:(id)arg0 fromFolder:(id)arg1 ;
-(void)renameFolder:(id)arg0 toName:(id)arg1 ;
-(void)resetPersistedTransientState;
-(void)restoreDeletedRecording:(id)arg0 ;
-(void)restoreDeletedRecordings:(id)arg0 ;
-(void)saveIfNecessary;
-(void)setEnhanced:(BOOL)arg0 ofRecording:(id)arg1 ;
-(void)setFavorite:(BOOL)arg0 ofRecording:(id)arg1 ;
-(void)setMetadataValue:(id)arg0 forKey:(id)arg1 ;
-(void)setTitle:(id)arg0 ofRecording:(id)arg1 ;


@end


#endif