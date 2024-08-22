// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRCSERVERZONE_H
#define BRCSERVERZONE_H

@class NSString, BRMangledID, NSMutableDictionary, CKRecordZoneID;
@protocol BRCJobsMatching, BRCZone;

#import <Foundation/Foundation.h>

#import "BRCSyncContext.h"
#import "BRCServerChangeState.h"
#import "BRCClientZone.h"
#import "BRCPQLConnection.h"
#import "BRCZoneRowID.h"
#import "BRCPendingChangesStream.h"
#import "BRCAccountSession.h"

@interface BRCServerZone : NSObject <BRCJobsMatching, BRCZone>

 {
    BRCSyncContext *_metadataSyncContext;
}


@property (readonly) BRCServerChangeState *changeState; // ivar: _changeState
@property (readonly, nonatomic) BRCClientZone *clientZone; // ivar: _clientZone
@property (readonly, nonatomic) BRCPQLConnection *db; // ivar: _db
@property (retain, nonatomic) BRCZoneRowID *dbRowID; // ivar: _dbRowID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isCloudDocsZone;
@property (readonly, nonatomic) BOOL isPrivateZone;
@property (readonly, nonatomic) BOOL isSharedZone;
@property (readonly, nonatomic) BRMangledID *mangledID;
@property (readonly, nonatomic) BRCSyncContext *metadataSyncContext;
@property (readonly, nonatomic) BRCSyncContext *metadataSyncContextIfExists;
@property (nonatomic) BOOL needsSave; // ivar: _needsSave
@property (readonly, nonatomic) NSString *ownerName;
@property (readonly, nonatomic) BRCPendingChangesStream *pendingChanges; // ivar: _pendingChanges
@property (readonly, nonatomic) NSMutableDictionary *plist;
@property (retain, nonatomic) BRCAccountSession *session; // ivar: _session
@property (readonly, nonatomic) unsigned int state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, nonatomic) CKRecordZoneID *zoneID;
@property (readonly, nonatomic) NSString *zoneName; // ivar: _zoneName


-(BOOL)_markItemDeadForRecordID:(id)arg0 ;
-(BOOL)_markShareIDDead:(id)arg0 ;
-(BOOL)_recoverFromCorruptShareOptionsWithItemType:(char)arg0 itemID:(id)arg1 parentID:(id)arg2 sharingOptions:(NSUInteger)arg3 ;
-(BOOL)_saveDeletedRecordIDs:(id)arg0 ;
-(BOOL)_saveEditedAliasRecord:(id)arg0 zonesNeedingAllocRanks:(id)arg1 error:(*id)arg2 ;
-(BOOL)_saveEditedContentRecords:(id)arg0 zonesNeedingAllocRanks:(id)arg1 ;
-(BOOL)_saveEditedDirOrDocStructureRecord:(id)arg0 error:(*id)arg1 ;
-(BOOL)_saveEditedDocumentContentRecord:(id)arg0 error:(*id)arg1 ;
-(BOOL)_saveEditedFinderBookmarkRecord:(id)arg0 error:(*id)arg1 ;
-(BOOL)_saveEditedRecord:(id)arg0 zonesNeedingAllocRanks:(id)arg1 error:(*id)arg2 ;
-(BOOL)_saveEditedShareRecord:(id)arg0 error:(*id)arg1 ;
-(BOOL)_saveEditedShareRecords:(id)arg0 deletedShareRecordIDs:(id)arg1 zonesNeedingAllocRanks:(id)arg2 ;
-(BOOL)_saveEditedStructureRecords:(id)arg0 zonesNeedingAllocRanks:(id)arg1 ;
-(BOOL)_saveEditedSymlinkRecord:(id)arg0 error:(*id)arg1 ;
-(BOOL)_saveItemID:(id)arg0 stat:(id)arg1 serverMetrics:(id)arg2 record:(id)arg3 error:(*id)arg4 ;
-(BOOL)_saveItemID:(id)arg0 stat:(id)arg1 serverMetrics:(id)arg2 record:(id)arg3 origName:(id)arg4 base:(id)arg5 no:(id)arg6 ext:(id)arg7 ;
-(BOOL)_saveItemID:(id)arg0 version:(id)arg1 record:(id)arg2 iWorkSharingOptions:(NSUInteger)arg3 ;
-(BOOL)_savePendingChangesDeletedRecordIDsIgnoringRecordIDs:(id)arg0 ;
-(BOOL)_savePendingChangesEditedContentRecordsIgnoringRecordIDs:(id)arg0 zonesNeedingAllocRanks:(id)arg1 ;
-(BOOL)_savePendingChangesEditedStructureRecordsIgnoringRecordIDs:(id)arg0 zonesNeedingAllocRanks:(id)arg1 ;
-(BOOL)_savePendingChangesSharesIgnoringRecordIDs:(id)arg0 zonesNeedingAllocRanks:(id)arg1 ;
-(BOOL)allocateRanksWhenCaughtUp:(BOOL)arg0 ;
-(BOOL)dumpStatusToContext:(id)arg0 error:(*id)arg1 ;
-(BOOL)dumpTablesToContext:(id)arg0 includeAllItems:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)hasXattrWithSignature:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)resetServerTruth;
-(BOOL)resetServerTruthAndDestroyZone:(BOOL)arg0 ;
-(BOOL)serverZoneIsCreated;
-(BOOL)shouldRecreateServerZoneAfterError:(id)arg0 ;
-(BOOL)storeXattr:(id)arg0 ;
-(BOOL)validateItemsLoggingToFile:(struct __sFILE *)arg0 db:(id)arg1 ;
-(BOOL)validateStructureLoggingToFile:(struct __sFILE *)arg0 db:(id)arg1 ;
-(NSUInteger)_saveInconsistentStateWithRequestID:(NSUInteger)arg0 serverChangeToken:(id)arg1 editedRecords:(id)arg2 deletedRecordIDs:(id)arg3 deletedShareRecordIDs:(id)arg4 syncStatus:(NSInteger)arg5 ;
-(NSUInteger)didSyncDownRequestID:(NSUInteger)arg0 serverChangeToken:(id)arg1 editedRecords:(id)arg2 deletedRecordIDs:(id)arg3 deletedShareRecordIDs:(id)arg4 movedZoneNames:(id)arg5 allocRankZones:(*id)arg6 syncStatus:(NSInteger)arg7 savedDirectly:(*BOOL)arg8 ;
-(id)_structurePrefixForType:(char)arg0 ;
-(id)asPrivateZone;
-(id)asSharedZone;
-(id)deleteAllContentsOperation;
-(id)descriptionWithContext:(id)arg0 ;
-(id)directDirectoryChildItemIDsOfParentEnumerator:(id)arg0 ;
-(id)initWithMangledID:(id)arg0 dbRowID:(id)arg1 plist:(id)arg2 session:(id)arg3 ;
-(id)itemByItemID:(id)arg0 ;
-(id)itemByItemID:(id)arg0 db:(id)arg1 ;
-(id)itemsEnumeratorWithDB:(id)arg0 ;
-(id)jobsDescription;
-(id)matchingJobsWhereSQLClause;
-(id)xattrForSignature:(id)arg0 ;
-(void)_collectTombstoneForRank:(NSUInteger)arg0 ;
-(void)_reportCantSaveProblem:(id)arg0 record:(id)arg1 ;
-(void)activateWithClientZone:(id)arg0 offline:(BOOL)arg1 ;
-(void)addForegroundClient:(id)arg0 ;
-(void)clearStateBits:(unsigned int)arg0 ;
-(void)collectTombstoneRanks:(id)arg0 ;
-(void)deactivateFromClientZone;
-(void)deleteAllContentsOnServerWithCompletionBlock:(id)arg0 ;
-(void)destroyPendingChangesDBOnQueue:(BOOL)arg0 ;
-(void)forceMoveToCloudDocs;
-(void)handleBrokenStructure;
-(void)removeForegroundClient:(id)arg0 ;
-(void)saveQueryRecords:(id)arg0 ;
-(void)scheduleMoveToCloudDocs;


@end


#endif