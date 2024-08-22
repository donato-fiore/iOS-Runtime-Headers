// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCSTAGEREGISTRY_H
#define BRCSTAGEREGISTRY_H

@class NSMutableSet, NSMutableDictionary, NSString;
@protocol BRCModule, BRCLowDiskDelegate, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BRCAccountSession.h"
#import "BRCStagePersistedState.h"
#import "brc_task_tracker.h"

@interface BRCStageRegistry : NSObject <BRCModule, BRCLowDiskDelegate>

 {
    BRCAccountSession *_session;
    NSString" _stageDirectoryPath;
    NSUInteger _stageDirectoryFileID;
    NSMutableSet *_unflushedStagedFileIDs;
    NSMutableSet *_activeUploadStageIDs;
    NSMutableSet *_activeDownloadStageIDs;
    NSMutableDictionary *_watchedLockedFileIDs;
    NSObject<OS_dispatch_source> *_lockedTestTimer;
    NSObject<OS_dispatch_queue> *_flushingQueue;
    BRCStagePersistedState *_persistedState;
    BOOL _lowDiskSpace;
    NSObject<OS_dispatch_queue> *_queue;
    brc_task_tracker *_tracker;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) int deviceID; // ivar: _deviceID
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCancelled; // ivar: _isCancelled
@property (readonly) Class superclass;


+(BOOL)applySharingReadonlyACLsToFD:(int)arg0 statInfo:(id)arg1 version:(id)arg2 clientZone:(id)arg3 sharingOptions:(NSUInteger)arg4 ;
+(unsigned short)computeItemModeFromStatInfo:(id)arg0 isPackage:(BOOL)arg1 ;
+(void)migrateStageToVersion2_0WithSession:(id)arg0 ;
-(BOOL)_flockToMakeLiveAtPath:(id)arg0 error:(*id)arg1 ;
-(BOOL)_graveyardAt:(int)arg0 path:(id)arg1 forItemID:(id)arg2 ;
-(BOOL)_hasContentsInPath:(id)arg0 ;
-(BOOL)copyPackageFileWithPackageFd:(int)arg0 toStageFd:(int)arg1 relpath:(id)arg2 ;
-(BOOL)didFlushStagedFileID:(NSUInteger)arg0 ;
-(BOOL)existsInOldVersionStageOrGraveyard:(NSUInteger)arg0 ;
-(BOOL)existsInStage:(NSUInteger)arg0 generationID:(*unsigned int)arg1 ;
-(BOOL)makeDirectoryInStageGatherFileID:(*NSUInteger)arg0 generationID:(*unsigned int)arg1 error:(*id)arg2 ;
-(BOOL)makeItemLive:(id)arg0 fromStage:(NSUInteger)arg1 bySwappingWith:(id)arg2 fileName:(id)arg3 error:(*id)arg4 ;
-(BOOL)makeSideFaultInStageGatherFileID:(*NSUInteger)arg0 generationID:(*unsigned int)arg1 documentID:(*unsigned int)arg2 properties:(id)arg3 inAppLibrary:(id)arg4 forCreation:(BOOL)arg5 error:(*id)arg6 ;
-(BOOL)makeSymlinkWithTarget:(id)arg0 inStageGatherFileID:(*NSUInteger)arg1 generationID:(*unsigned int)arg2 error:(*id)arg3 ;
-(BOOL)moveFromStage:(NSUInteger)arg0 toPath:(id)arg1 fileName:(id)arg2 error:(*id)arg3 ;
-(BOOL)moveFromStageToGraveyard:(NSUInteger)arg0 forItemID:(id)arg1 ;
-(BOOL)moveOldVersionFromPath:(id)arg0 error:(*id)arg1 ;
-(BOOL)moveToGraveyardFromPath:(id)arg0 forItemID:(id)arg1 error:(*id)arg2 ;
-(BOOL)pendingFetchRecordDirExistsInStageWithStartingChangeToken:(id)arg0 recordZoneID:(id)arg1 ;
-(BOOL)rememberStagedDownloadWithID:(id)arg0 gatherFileID:(*NSUInteger)arg1 generationID:(*unsigned int)arg2 documentID:(*unsigned int)arg3 appLibrary:(id)arg4 error:(*id)arg5 ;
-(BOOL)saveXattrAtURL:(id)arg0 forSignature:(id)arg1 error:(*id)arg2 ;
-(BOOL)saveXattrBlob:(id)arg0 forSignature:(id)arg1 error:(*id)arg2 ;
-(BOOL)transferDocumentID:(unsigned int)arg0 fromOldVersionStage:(NSUInteger)arg1 toStage:(NSUInteger)arg2 ;
-(NSInteger)_garbageCollectDeltaSyncDatabases;
-(NSInteger)_garbageCollectDownloads;
-(NSInteger)_garbageCollectFaults;
-(NSInteger)_garbageCollectOldVersions;
-(NSInteger)_garbageCollectPackages;
-(NSInteger)_garbageCollectQBSDatabases;
-(NSInteger)_garbageCollectSpace:(NSInteger)arg0 ;
-(NSInteger)_garbageCollectUploads;
-(NSInteger)_purgeSpaceUnderQueue:(NSInteger)arg0 withUrgency:(int)arg1 ;
-(NSInteger)_removeUnusedXattrBlobs;
-(NSInteger)garbageCollectSpace:(NSInteger)arg0 ;
-(NSInteger)purgableSpace;
-(NSInteger)purgeGraveyardSpace:(NSInteger)arg0 withUrgency:(int)arg1 ;
-(NSInteger)purgeSpace:(NSInteger)arg0 withUrgency:(int)arg1 ;
-(NSUInteger)_processPendingListDatabaseObjects:(id)arg0 ;
-(id)_anchorNameForChangeToken:(id)arg0 recordZoneID:(id)arg1 ;
-(id)_anchorNameForRecordID:(id)arg0 ;
-(id)_anchorNamePrefixForRecordZoneID:(id)arg0 ;
-(id)_pathForDirIndex:(unsigned char)arg0 ;
-(id)_pathInStage:(NSUInteger)arg0 index:(*unsigned char)arg1 generationID:(*unsigned int)arg2 ;
-(id)createURLForDownloadWithStageID:(id)arg0 name:(id)arg1 ;
-(id)createURLForUploadWithStageID:(id)arg0 name:(id)arg1 ;
-(id)downloadStageURLForFileID:(NSUInteger)arg0 ;
-(id)initWithAccountSession:(id)arg0 ;
-(id)loadXattrBlobForSignature:(id)arg0 error:(*id)arg1 ;
-(id)makeNonLocalVersionSideFaultWithAdditionName:(id)arg0 clientZone:(id)arg1 statInfo:(id)arg2 version:(id)arg3 sharingOptions:(NSUInteger)arg4 error:(*id)arg5 ;
-(id)nonLocalFaultURLForAdditionName:(id)arg0 ;
-(id)pendingDeltaFetchRecordDirWithStartingChangeToken:(id)arg0 recordZoneID:(id)arg1 ;
-(id)pendingListRecordDirWithStartingChangeToken:(id)arg0 ;
-(id)urlForXattrSignature:(id)arg0 ;
-(int)_openStageDirectory:(unsigned char)arg0 ;
-(int)_performInStageDirectory:(unsigned char)arg0 block:(id)arg1 ;
-(void)_fileIDMightHaveBeenUnlocked:(id)arg0 ;
-(void)_updatePersistedStateWithLatestGCStartTime:(NSInteger)arg0 ;
-(void)_watchLockedRelpath:(id)arg0 ;
-(void)applyMetadataOnFileDescriptor:(int)arg0 liveFileDescriptor:(int)arg1 itemID:(id)arg2 clientZone:(id)arg3 statInfo:(id)arg4 version:(id)arg5 sharingOptions:(NSUInteger)arg6 ;
-(void)associateDownloadStageID:(id)arg0 withOperation:(id)arg1 ;
-(void)associateSyncUpStageID:(id)arg0 withOperation:(id)arg1 ;
-(void)cancel;
-(void)cleanupStagedDownloadWithID:(id)arg0 forItemID:(id)arg1 ;
-(void)cleanupStagedSyncUpWithID:(id)arg0 ;
-(void)cleanupStagedUploadWithID:(id)arg0 ;
-(void)close;
-(void)disarmLockedTestTimer;
-(void)forgetWatchedLockedFileID:(id)arg0 ;
-(void)forgetWatchedLockedFileIDsForAppLibrary:(id)arg0 ;
-(void)lowDiskStatusChangedForDevice:(int)arg0 hasEnoughSpace:(BOOL)arg1 ;
-(void)open;
-(void)removeDatabaseObjectsForZone:(id)arg0 ;
-(void)resume;
-(void)setStageDirectoryForXattr:(id)arg0 ;
-(void)willFlushAllStagedFileIDs;


@end


#endif