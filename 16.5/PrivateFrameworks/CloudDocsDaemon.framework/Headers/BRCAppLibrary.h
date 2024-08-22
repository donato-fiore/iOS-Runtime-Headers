// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCAPPLIBRARY_H
#define BRCAPPLIBRARY_H

@class NSString, NSMutableDictionary, NSMutableSet, BRContainer, NSNumber, BRMangledID, NSURL;
@protocol BRCListOperationDelegate, BRCForegroundClient, BRCAppLibraryDelegate;

#import <Foundation/Foundation.h>

#import "BRCListDirectoryContentsOperation.h"
#import "BRCPQLConnection.h"
#import "BRCALRowID.h"
#import "BRCPrivateClientZone.h"
#import "BRCRelativePath.h"
#import "BRCFSEventsMonitor.h"
#import "BRCAccountSession.h"
#import "brc_task_tracker.h"
#import "BRCSyncContext.h"
#import "BRCZoneRowID.h"

@interface BRCAppLibrary : NSObject <BRCListOperationDelegate, BRCForegroundClient>

 {
    uint8_t _activeQueries;
    uint8_t _activeRecursiveQueries;
    uint8_t _activeAliasQueries;
    NSInteger _maxLostStamp;
    NSString *_deepScanReason;
    NSMutableDictionary *_pendingFileCoordinators;
    NSMutableSet *_XPCClientsUsingUbiquity;
    BOOL _activated;
    BOOL _addedToSharedMetadataSyncContextForegroundClient;
    NSMutableSet *_targetSharedServerZones;
    NSMutableSet *_foregroundClients;
    BRCListDirectoryContentsOperation *_pristineFetchOp;
    BRCListDirectoryContentsOperation *_trashFetchOp;
}


@property (readonly, nonatomic) NSString *absolutePath;
@property (readonly, nonatomic) NSString *appLibraryID; // ivar: _appLibraryID
@property (readonly, nonatomic) BRContainer *containerMetadata; // ivar: _containerMetadata
@property (retain, nonatomic) NSString *containerMetadataEtag; // ivar: _containerMetadataEtag
@property (nonatomic) BOOL containerMetadataNeedsSyncUp; // ivar: _containerMetadataNeedsSyncUp
@property (nonatomic) NSUInteger containerMetadataSyncRequestID; // ivar: _containerMetadataSyncRequestID
@property (readonly, nonatomic) BRCPQLConnection *db; // ivar: _db
@property (retain, nonatomic) BRCALRowID *dbRowID; // ivar: _dbRowID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSNumber *deepScanStamp;
@property (retain, nonatomic) NSNumber *deepScanStamp; // ivar: _deepScanStamp
@property (weak, nonatomic) BRCPrivateClientZone *defaultClientZone; // ivar: _defaultClientZone
@property (retain, nonatomic) NSObject<BRCAppLibraryDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BRCRelativePath *documentsPath;
@property (readonly, nonatomic) NSNumber *fileID;
@property (retain, nonatomic) NSNumber *fileID; // ivar: _fileID
@property (readonly, nonatomic) BRCFSEventsMonitor *fsEventsMonitor;
@property (readonly, nonatomic) NSNumber *generationID;
@property (retain, nonatomic) NSNumber *generationID; // ivar: _generationID
@property (readonly) BOOL hasActiveAliasQueries;
@property (readonly) BOOL hasActiveQueries;
@property (readonly) BOOL hasActiveRecursiveQueries;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL isCloudDocsAppLibrary;
@property (readonly, nonatomic) BOOL isForeground;
@property (readonly, nonatomic) BOOL isGreedy;
@property (readonly, nonatomic) BOOL isiCloudDesktopAppLibrary;
@property (readonly, nonatomic) NSString *logName;
@property (readonly, nonatomic) BRMangledID *mangledID; // ivar: _mangledID
@property (nonatomic) NSInteger maxLostStamp;
@property (nonatomic) BOOL needsSave; // ivar: _needsSave
@property (readonly, nonatomic) NSString *pathRelativeToRoot;
@property (readonly, nonatomic) NSMutableDictionary *plist;
@property (readonly, nonatomic) BRCRelativePath *root;
@property (retain, nonatomic) NSNumber *rootQuotaUsage; // ivar: _rootQuotaUsage
@property (retain, nonatomic) BRCAccountSession *session; // ivar: _session
@property (readonly, nonatomic) BOOL shouldEvictUploadedItems;
@property (readonly, nonatomic) unsigned int state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger syncedFolderType;
@property (readonly, nonatomic) brc_task_tracker *tracker; // ivar: _tracker
@property (readonly, nonatomic) BRCSyncContext *transferSyncContext;
@property (readonly, nonatomic) BRCSyncContext *transferSyncContextIfExists;
@property (readonly, nonatomic) NSURL *url;
@property (retain, nonatomic) BRCZoneRowID *zoneRowID; // ivar: _zoneRowID


-(BOOL)hasDocumentsOrDirectory;
-(BOOL)hasLocalChanges;
-(BOOL)hasUbiquitousDocuments;
-(BOOL)hasUbiquityClientsConnected;
-(BOOL)includesDataScope;
-(BOOL)integrityCheckBoosting;
-(BOOL)isCoordinationPendingForItem:(id)arg0 ;
-(BOOL)isDesktopAppLibrary;
-(BOOL)isDocumentScopePublic;
-(BOOL)isDocumentsAppLibrary;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAppLibrary:(id)arg0 ;
-(BOOL)isStillTargetingSharedServerZone:(id)arg0 ;
-(BOOL)markChildrenLostForItemID:(id)arg0 inZone:(id)arg1 fileID:(id)arg2 ;
-(BOOL)markChildrenLostForItemID:(id)arg0 inZone:(id)arg1 fileID:(id)arg2 startingFromRow:(NSUInteger)arg3 hasMoreWork:(*BOOL)arg4 ;
-(BOOL)shouldSaveContainerMetadataServerside;
-(BOOL)supportsSpotlightIndexing;
-(BOOL)wasMovedToCloudDocs;
-(BOOL)zoneHasShareAlias;
-(NSInteger)throttleHashWithItemID:(id)arg0 ;
-(NSUInteger)allocateLostStampAddingBackoff:(BOOL)arg0 ;
-(NSUInteger)documentCountWithDB:(id)arg0 ;
-(NSUInteger)documentSizeUsageWithDB:(id)arg0 ;
-(id)_aliasAppLibraryTargetSQLPrefix;
-(id)_targetSharedServerZonesEnumerator;
-(id)_unwrappedDescriptionWithContext:(id)arg0 ;
-(id)aliasByUnsaltedBookmarkData:(id)arg0 ;
-(id)coordinatorForItem:(id)arg0 forRead:(BOOL)arg1 ;
-(id)createAliasWithTarget:(id)arg0 parentPath:(id)arg1 forceReparent:(BOOL)arg2 error:(*id)arg3 ;
-(id)descriptionWithContext:(id)arg0 ;
-(id)documentsFolderItemID;
-(id)enumerateUserVisibleChildrenDirectoriesOfItemGlobalID:(id)arg0 db:(id)arg1 ;
-(id)enumerateUserVisibleChildrenOfItemGlobalID:(id)arg0 sortOrder:(unsigned char)arg1 offset:(NSUInteger)arg2 limit:(NSUInteger)arg3 db:(id)arg4 ;
-(id)fetchDocumentsDirectoryItem;
-(id)fetchDocumentsDirectoryItem:(id)arg0 ;
-(id)fetchRootItem;
-(id)fetchRootItemInDB:(id)arg0 ;
-(id)init;
-(id)initWithMangledID:(id)arg0 dbRowID:(id)arg1 zoneRowID:(id)arg2 db:(id)arg3 plist:(id)arg4 session:(id)arg5 initialCreation:(BOOL)arg6 createdRootOnDisk:(BOOL)arg7 createdCZMMoved:(BOOL)arg8 rootFileID:(id)arg9 ;
-(id)itemByRowID:(NSUInteger)arg0 ;
-(id)itemByRowID:(NSUInteger)arg0 db:(id)arg1 ;
-(id)itemIDByRowID:(NSUInteger)arg0 ;
-(id)itemIDByRowID:(NSUInteger)arg0 db:(id)arg1 ;
-(id)itemsEnumeratorChildOf:(id)arg0 withDeadItems:(BOOL)arg1 rankMin:(NSUInteger)arg2 rankMax:(NSUInteger)arg3 count:(NSUInteger)arg4 db:(id)arg5 ;
-(id)itemsEnumeratorWithRankMin:(NSUInteger)arg0 rankMax:(NSUInteger)arg1 namePrefix:(id)arg2 withDeadItems:(BOOL)arg3 shouldIncludeFolders:(BOOL)arg4 shouldIncludeOnlyFolders:(BOOL)arg5 shouldIncludeDocumentsScope:(BOOL)arg6 shouldIncludeDataScope:(BOOL)arg7 shouldIncludeExternalScope:(BOOL)arg8 shouldIncludeTrashScope:(BOOL)arg9 count:(NSUInteger)arg10 db:(id)arg11 ;
-(id)liveAliasesEnumeratorTargetingThisAppLibrary;
-(unsigned int)_activateState:(unsigned int)arg0 origState:(unsigned int)arg1 ;
-(void)_addTargetSharedServerZone:(id)arg0 ;
-(void)_addTargetSharedServerZoneForSharedItem:(id)arg0 ;
-(void)_removeAllTargetSharedServerZonesWhenNoLongerForeground;
-(void)_removeTargetSharedServerZoneIfNecessary:(id)arg0 ;
-(void)_resolveTargetSharedClientZonesWhenBecameForeground;
-(void)_updateContainerMetadataFromRecord:(id)arg0 stripIcons:(BOOL)arg1 ;
-(void)_updateIsInCloudDocsZone;
-(void)activate;
-(void)addClientUsingUbiquity:(id)arg0 ;
-(void)addForegroundClient:(id)arg0 ;
-(void)associateWithClientZone:(id)arg0 ;
-(void)associateWithClientZone:(id)arg0 offline:(BOOL)arg1 ;
-(void)cancelFileCoordinators;
-(void)cancelWriteCoordinatorForItem:(id)arg0 ;
-(void)clearStateBits:(unsigned int)arg0 ;
-(void)close;
-(void)computeDocumentEvictableSizeUsageWithDB:(id)arg0 reply:(id)arg1 ;
-(void)computeDocumentEvictableSizeUsageWithLowTimeDelta:(CGFloat)arg0 medTimeDelta:(CGFloat)arg1 highTimeDelta:(CGFloat)arg2 db:(id)arg3 reply:(id)arg4 ;
-(void)continueMarkingChildrenLostInZone:(id)arg0 ;
-(void)didCreateDataScopedItem;
-(void)didCreateDocumentScopedItem;
-(void)didFindLostItem:(id)arg0 oldAppLibrary:(id)arg1 ;
-(void)didReceiveHandoffRequest;
-(void)didRemoveDocumentsFolder;
-(void)didUpdateDocumentScopePublic;
-(void)fetchPristineness;
-(void)fetchTrashItems;
-(void)freeFileCoordinationSlotsAfterDelayForRead:(BOOL)arg0 ;
-(void)fsrootDidMoveToPath:(id)arg0 ;
-(void)listOperation:(id)arg0 wasReplacedByOperation:(id)arg1 ;
-(void)notifyClient:(id)arg0 whenFaultingIsDone:(id)arg1 ;
-(void)recomputeShouldEvictState;
-(void)recreateDocumentsFolderIfNeededOnDisk;
-(void)registerQueryWithAliases:(BOOL)arg0 isRecursive:(BOOL)arg1 ;
-(void)removeClientUsingUbiquity:(id)arg0 ;
-(void)removeForegroundClient:(id)arg0 ;
-(void)scheduleContainerMetadataSyncUp;
-(void)scheduleDeepScanWithReason:(id)arg0 ;
-(void)scheduleFullLibraryContentsFetch;
-(void)setIsOverQuota:(BOOL)arg0 ;
-(void)unregisterQueryWithAliases:(BOOL)arg0 isRecursive:(BOOL)arg1 ;
-(void)updateFromFSAtPath:(id)arg0 ;
-(void)updateWithPlist:(id)arg0 ;
-(void)zoneDidChangeMovedToCloudDocsState;


@end


#endif