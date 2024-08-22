// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCLOCALITEM_H
#define BRCLOCALITEM_H

@class NSNumber, NSString, BRCDirectoryItem<BRCFSRooted>, BRCLocalItem<BRCShareAcceptationFault>, BRCLocalItem<BRCTopLevelShareable>, BRCLocalItem<BRCSharedToMeTopLevel>, NSDictionary, BRFileObjectID, BRCUserRowID, NSMutableSet, NSError;
@protocol BRCJobsMatching, BRCSyncThrottleItemProtocol, BRCItem;

#import <Foundation/Foundation.h>

#import "BRCZoneRowID.h"
#import "BRFieldCKInfo.h"
#import "BRCAppLibrary.h"
#import "BRCAliasItem.h"
#import "BRCDirectoryItem.h"
#import "BRCDocumentItem.h"
#import "BRCFinderBookmarkItem.h"
#import "BRCSymlinkItem.h"
#import "BRCClientZone.h"
#import "BRCPQLConnection.h"
#import "BRCItemGlobalID.h"
#import "BRCItemID.h"
#import "BRCLocalItem.h"
#import "BRCServerZone.h"
#import "BRCAccountSession.h"
#import "BRCLocalStatInfo.h"

@interface BRCLocalItem : NSObject <BRCJobsMatching, BRCSyncThrottleItemProtocol, BRCItem>

 {
    BRCZoneRowID *_parentZoneRowID;
    NSNumber *_minimumSupportedOSRowID;
    NSNumber *_knownByServer;
    NSNumber *_parentFileID;
    BRFieldCKInfo *_sideCarCKInfo;
    NSNumber *_isInDocumentScope;
    id *_serverPathMatchID;
    BOOL _resolvedPath;
    BOOL _forceDelete;
    BOOL _forceDeletedAlready;
    BOOL _forceNotif;
}


@property (retain, nonatomic) BRCAppLibrary *appLibrary; // ivar: _appLibrary
@property (readonly, nonatomic) NSString *appLibraryID;
@property (readonly, nonatomic) BRCAliasItem *asBRAlias;
@property (readonly, nonatomic) BRCDirectoryItem *asDirectory;
@property (readonly, nonatomic) BRCDocumentItem *asDocument;
@property (readonly, nonatomic) BRCDirectoryItem<BRCFSRooted> *asFSRoot;
@property (readonly, nonatomic) BRCFinderBookmarkItem *asFinderBookmark;
@property (readonly, nonatomic) BRCLocalItem<BRCShareAcceptationFault> *asShareAcceptationFault;
@property (readonly, nonatomic) BRCLocalItem<BRCTopLevelShareable> *asShareableItem;
@property (readonly, nonatomic) BRCLocalItem<BRCSharedToMeTopLevel> *asSharedToMeTopLevelItem;
@property (readonly, nonatomic) BRCSymlinkItem *asSymlink;
@property (readonly, nonatomic) NSString *bookmarkData;
@property (readonly, nonatomic) BRCClientZone *clientZone; // ivar: _clientZone
@property (readonly, nonatomic) NSString *collaborationIdentifierIfComputable;
@property (readonly, nonatomic) BRCPQLConnection *db; // ivar: _db
@property (readonly, nonatomic) NSUInteger dbRowID; // ivar: _dbRowID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *digestDescription;
@property (readonly, nonatomic) NSDictionary *extendedAttributes;
@property (readonly, nonatomic) NSString *extension;
@property (readonly, nonatomic) NSNumber *fileID;
@property (readonly, nonatomic) BRFileObjectID *fileObjectID;
@property (readonly, nonatomic) BOOL forceNeedsSyncUpWithoutDiffs;
@property (readonly, nonatomic) BOOL fromReadOnlyDB;
@property (readonly, nonatomic) BOOL hasShareIDAndIsOwnedByMe;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isAlmostDead;
@property (readonly, nonatomic) BOOL isBRAlias;
@property (readonly, nonatomic) BOOL isChildSharedItem;
@property (readonly, nonatomic) BOOL isDead;
@property (readonly, nonatomic) BOOL isDeadOrMissingInServerTruth;
@property (readonly, nonatomic) BOOL isDirectory;
@property (readonly, nonatomic) BOOL isDirectoryFault;
@property (readonly, nonatomic) BOOL isDirectoryWithPackageName;
@property (readonly, nonatomic) BOOL isDocument;
@property (readonly, nonatomic) BOOL isDocumentBeingCopiedToNewZone;
@property (readonly, nonatomic) BOOL isFSRoot;
@property (readonly, nonatomic) BOOL isFault;
@property (readonly, nonatomic) BOOL isFinderBookmark;
@property (readonly, nonatomic) BOOL isFromInitialScan;
@property (readonly, nonatomic) BOOL isIdleOrRejected;
@property (readonly, nonatomic) BOOL isInDataScope;
@property (readonly, nonatomic) BOOL isInDocumentOrTrashScope;
@property (readonly, nonatomic) BOOL isInDocumentScope;
@property (readonly, nonatomic) BOOL isInTrashScope;
@property (readonly, nonatomic) BOOL isKnownByServer;
@property (readonly, nonatomic) BOOL isKnownByServerOrInFlight;
@property (readonly, nonatomic) BOOL isLive;
@property (readonly, nonatomic) BOOL isLost;
@property (readonly, nonatomic) BOOL isOnDisk;
@property (readonly, nonatomic) BOOL isOwnedByMe;
@property (readonly, nonatomic) BOOL isPackage;
@property (readonly, nonatomic) BOOL isReadAndUploaded;
@property (readonly, nonatomic) BOOL isRejected;
@property (readonly, nonatomic) BOOL isReserved;
@property (readonly, nonatomic) BOOL isShareAcceptationFault;
@property (readonly, nonatomic) BOOL isShareableItem;
@property (readonly, nonatomic) BOOL isShared;
@property (readonly, nonatomic) BOOL isSharedByMe;
@property (readonly, nonatomic) BOOL isSharedToMe;
@property (readonly, nonatomic) BOOL isSharedToMeChildItem;
@property (readonly, nonatomic) BOOL isSharedToMeTopLevelItem;
@property (readonly, nonatomic) BOOL isSymLink;
@property (readonly, nonatomic) BOOL isTopLevelSharedItem;
@property (readonly, nonatomic) BOOL isUserVisible; // ivar: _isUserVisible
@property (readonly, nonatomic) BOOL isZoneRoot;
@property (readonly, nonatomic) BRCItemGlobalID *itemGlobalID;
@property (readonly, nonatomic) BRCItemID *itemID; // ivar: _itemID
@property (readonly, nonatomic) unsigned char itemScope;
@property (readonly, nonatomic) NSUInteger localDiffs; // ivar: _localDiffs
@property (readonly, nonatomic) NSString *logicalName;
@property (readonly, nonatomic) BOOL logicalNameNeedsRename;
@property (readonly, nonatomic) BOOL needsInsert;
@property (readonly, nonatomic) BOOL needsOSUpgradeToSyncUp;
@property (readonly, nonatomic) BOOL needsReading;
@property (readonly, nonatomic) BOOL needsSyncUp;
@property (readonly, nonatomic) BOOL needsUpload;
@property (readonly, nonatomic) NSUInteger notifsRank; // ivar: _notifsRank
@property (readonly, nonatomic) BRCLocalItem *orig; // ivar: _orig
@property (readonly, nonatomic) BRCUserRowID *ownerKey; // ivar: _ownerKey
@property (readonly, nonatomic) BRCClientZone *parentClientZone;
@property (readonly, nonatomic) NSNumber *parentFileID;
@property (readonly, nonatomic) BRFileObjectID *parentFileObjectID;
@property (readonly, nonatomic) NSString *path; // ivar: _path
@property (readonly, nonatomic) BOOL physicalNameNeedsRename;
@property (readonly, nonatomic) BRCItemID *serverPathMatchItemID;
@property (readonly, nonatomic) BRCServerZone *serverZone; // ivar: _serverZone
@property (readonly, nonatomic) BRCAccountSession *session; // ivar: _session
@property (readonly, nonatomic) NSMutableSet *setOfAppLibraryIDsWithReverseAliases;
@property (nonatomic) NSUInteger sharingOptions; // ivar: _sharingOptions
@property (readonly, nonatomic) BRCLocalStatInfo *st; // ivar: _st
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSError *syncUpError;
@property (readonly, nonatomic) unsigned int syncUpState; // ivar: _syncUpState
@property (readonly, nonatomic) unsigned short uploadStatus;


+(BOOL)computeUserVisibleStatusOfLiveItemWithParentVisible:(BOOL)arg0 parentIsNonDesktopRoot:(BOOL)arg1 parentScope:(unsigned char)arg2 itemFilename:(id)arg3 parentFilename:(id)arg4 appLibrary:(id)arg5 ;
+(BOOL)supportsSecureCoding;
+(id)newItemWithPath:(id)arg0 parentGlobalID:(id)arg1 ;
+(unsigned char)computeItemScopeFromParentIsRoot:(BOOL)arg0 parentIsDocuments:(BOOL)arg1 parentScope:(unsigned char)arg2 logicalName:(id)arg3 ;
-(BOOL)_checkForSharedToMeItemInTrashWithPath:(id)arg0 ;
-(BOOL)_checkZoneUpdateFromFSAtPath:(id)arg0 parentGlobalID:(id)arg1 ;
-(BOOL)_computedUserVisibleStatusAtPath:(id)arg0 ;
-(BOOL)_contentXattrsHaveChangedAtRelativeAPath:(id)arg0 ;
-(BOOL)_deleteFromDB:(id)arg0 keepAliases:(BOOL)arg1 offline:(BOOL)arg2 ;
-(BOOL)_hasFieldChangesNotDiffed;
-(BOOL)_insertInDB:(id)arg0 dbRowID:(NSUInteger)arg1 ;
-(BOOL)_isIndexable;
-(BOOL)_isInterestingUpdateForNotifsWithDiffs:(NSUInteger)arg0 ;
-(BOOL)_isReadonlyShareChild;
-(BOOL)_updateInDB:(id)arg0 diffs:(NSUInteger)arg1 ;
-(BOOL)changedAtRelativePath:(id)arg0 scanPackage:(BOOL)arg1 ;
-(BOOL)checkIsInDocumentsScopeWithParent:(id)arg0 ;
-(BOOL)evictInTask:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)learnStagedInfoFromDownloadStageID:(id)arg0 error:(*id)arg1 ;
-(BOOL)markLatestSyncRequestAcknowledgedInZone:(id)arg0 ;
-(BOOL)saveToDB;
-(BOOL)saveToDBForServerEdit:(BOOL)arg0 keepAliases:(BOOL)arg1 ;
-(BOOL)startDownloadInTask:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)updateFromFSAtPath:(id)arg0 parentGlobalID:(id)arg1 ;
-(BOOL)updateLocationAndMetaFromFSAtPath:(id)arg0 parentGlobalID:(id)arg1 ;
-(BOOL)updateXattrInfoFromPath:(id)arg0 error:(*id)arg1 ;
-(BOOL)validateLoggingToFile:(struct __sFILE *)arg0 ;
-(NSUInteger)diffAgainstLocalItem:(id)arg0 ;
-(NSUInteger)diffAgainstServerAliasItem:(id)arg0 ;
-(NSUInteger)diffAgainstServerItem:(id)arg0 ;
-(NSUInteger)maskForDiffsToSyncUpForZone:(id)arg0 sideCarZone:(BOOL)arg1 whenClearing:(BOOL)arg2 ;
-(NSUInteger)metadataSyncUpMask:(BOOL)arg0 ;
-(id)_initFromPQLResultSet:(id)arg0 session:(id)arg1 db:(id)arg2 error:(*id)arg3 ;
-(id)_initWithLocalItem:(id)arg0 ;
-(id)_initWithRelativePath:(id)arg0 parentGlobalID:(id)arg1 ;
-(id)_initWithServerItem:(id)arg0 dbRowID:(NSUInteger)arg1 ;
-(id)_syncZoneRowIDs;
-(id)baseSideCarRecord;
-(id)baseStructureRecord;
-(id)computedDestinationFilenameFromServerItem:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionWithContext:(id)arg0 ;
-(id)fetchParentFileIDs;
-(id)initFromPQLResultSet:(id)arg0 error:(*id)arg1 ;
-(id)initFromPQLResultSet:(id)arg0 session:(id)arg1 db:(id)arg2 error:(*id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)itemParentGlobalID;
-(id)jobsDescription;
-(id)matchingJobsWhereSQLClause;
-(id)osNameNeededToSyncUp;
-(id)parentItemIDInZone;
-(id)parentItemOnFS;
-(id)setOfParentIDs;
-(id)sharedAliasItemID;
-(id)sideCarInfo;
-(id)sideCarRecordID;
-(id)structureRecordBeingDeadInServerTruth:(BOOL)arg0 shouldPCSChainStatus:(unsigned char)arg1 inZone:(id)arg2 ;
-(id)structureRecordBeingDeadInServerTruth:(BOOL)arg0 stageID:(id)arg1 shouldPCSChainStatus:(unsigned char)arg2 ;
-(id)structureRecordIDInZone:(id)arg0 ;
-(id)unsaltedBookmarkData;
-(void)_ascendItemHierarchyWithBlock:(id)arg0 ;
-(void)_cheapCheckSavingItem;
-(void)_fixSpotlightAttributeIfNecessaryAtPath:(id)arg0 ;
-(void)_learnItemID:(id)arg0 serverItem:(id)arg1 ;
-(void)_markLostWhenReplacedByItem:(id)arg0 backoffMode:(unsigned char)arg1 ;
-(void)_markNeedsSyncingUp;
-(void)_recomputeUserVisibleAndItemScope;
-(void)_refreshAppLibraryFromParent;
-(void)_removeSharedSpotlightAttributesIfNecessary;
-(void)_sendNotificationIfNeededWithDiffs:(NSUInteger)arg0 regather:(BOOL)arg1 ;
-(void)_setOrRemoveSmartFolderSpotlightAttributeAt:(id)arg0 ;
-(void)_updatePropagatedInfoFromFSAtPath:(id)arg0 ;
-(void)_updatePropagatedInfoIfNeeded;
-(void)_updateSharedZoneBoostingWithDiffs:(NSUInteger)arg0 ;
-(void)_updateSyncUpSchedulerWithDiffs:(NSUInteger)arg0 ;
-(void)applyMetadataOnFileID:(NSUInteger)arg0 liveFD:(NSUInteger)arg1 sharingOptions:(NSUInteger)arg2 ;
-(void)beginBounceAndSaveToDBWithBounceNumber:(NSUInteger)arg0 ;
-(void)bouncePhysicalNameToRepresentableName;
-(void)bounceReservedItemWithBounceNumber:(NSUInteger)arg0 ;
-(void)bounceSourceItemWithServerLogicalName:(id)arg0 bounceNumber:(NSUInteger)arg1 ;
-(void)clearFromStage;
-(void)createSyncUpJob;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fixupStagedItemAtStartup;
-(void)handleUnknownItemError;
-(void)inheritOSUpgradeNeededFromItem:(id)arg0 ;
-(void)insertTombstoneAliasRecordInZone:(id)arg0 ;
-(void)learnItemID:(id)arg0 serverItem:(id)arg1 path:(id)arg2 markLost:(BOOL)arg3 ;
-(void)markBounceFailed;
-(void)markBounceFinished;
-(void)markDead;
-(void)markForceNeedsSyncUp;
-(void)markForceNotify;
-(void)markForceRejected;
-(void)markFound;
-(void)markItemForgottenByServer;
-(void)markLatestSyncRequestFailedInZone:(id)arg0 ;
-(void)markLatestSyncRequestRejectedInZone:(id)arg0 ;
-(void)markLiveFromStageWithPath:(id)arg0 ;
-(void)markLostClearGenerationID:(BOOL)arg0 backoffMode:(unsigned char)arg1 ;
-(void)markLostWhenReplacedByItem:(id)arg0 ;
-(void)markMetadataLive;
-(void)markNeedsDeleteForRescheduleOfItem:(id)arg0 ;
-(void)markNeedsDeleteWhenAlreadyDeadInServerTruth;
-(void)markNeedsOSUpgradeToSyncUpWithName:(id)arg0 ;
-(void)markNeedsUploadOrSyncingUp;
-(void)markRejectedItemRemotelyRevived;
-(void)markRemovedFromFilesystemForServerEdit:(BOOL)arg0 ;
-(void)markRenamedUsingServerItem:(id)arg0 toRelpath:(id)arg1 logicalName:(id)arg2 filename:(id)arg3 origLogicalNameBeforeBounce:(id)arg4 forContentApplyOnly:(BOOL)arg5 ;
-(void)markReserved;
-(void)markStagedWithFileID:(NSUInteger)arg0 generationID:(unsigned int)arg1 ;
-(void)markStagedWithFileID:(NSUInteger)arg0 generationID:(unsigned int)arg1 documentID:(unsigned int)arg2 ;
-(void)moveAsideLocally;
-(void)prepareForSyncUpInZone:(id)arg0 ;
-(void)prepareForSyncUpSideCarZone;
-(void)resetWhileKeepingClientItems;
-(void)scanParentDirectory;
-(void)scheduleSyncDownForOOBModifyRecordsAck;
-(void)serializeStructuralPluginHints:(id)arg0 ;
-(void)setOrRemoveSpotlightAttributeAt:(id)arg0 ;
-(void)triggerNotificationIfNeeded;
-(void)updateFromFSAtPath:(id)arg0 ;
-(void)updateItemMetadataFromServerItem:(id)arg0 appliedSharingPermission:(BOOL)arg1 ;
-(void)updateParentZoneRowID:(id)arg0 ;
-(void)updateStatMetadataFromServerItem:(id)arg0 ;
-(void)updateStructuralCKInfoFromServerItem:(id)arg0 ;
-(void)wasMarkedDead;


@end


#endif