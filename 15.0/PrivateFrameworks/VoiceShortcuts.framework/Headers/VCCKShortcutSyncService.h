// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCCKSHORTCUTSYNCSERVICE_H
#define VCCKSHORTCUTSYNCSERVICE_H

@class WFDatabase, NSString, CKRecordZoneID, CKSyncEngine, NSMutableDictionary;
@protocol CKSyncEngineDataSource, WFDatabaseObjectObserver;

#import <Foundation/Foundation.h>

#import "VCCKApplicationStateObserver.h"

@interface VCCKShortcutSyncService : NSObject <CKSyncEngineDataSource, WFDatabaseObjectObserver>



@property (readonly, nonatomic) VCCKApplicationStateObserver *applicationObserver; // ivar: _applicationObserver
@property (readonly, nonatomic) WFDatabase *database; // ivar: _database
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CKRecordZoneID *shortcutsZoneID;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CKSyncEngine *syncEngine; // ivar: _syncEngine
@property (readonly, nonatomic) NSMutableDictionary *workflowFilesForIdentifiers; // ivar: _workflowFilesForIdentifiers


-(BOOL)mergeLocalOrderingChangesWithRemoteOrderingChangesFromOrderingRecord:(id)arg0 ;
-(id)calculateSubsetForRemoteOrdering:(id)arg0 withLocalOrdering:(id)arg1 ;
-(id)collectionIdentifierForRecordID:(id)arg0 ;
-(id)folderRecordForRecordID:(id)arg0 ;
-(id)initWithContainer:(id)arg0 database:(id)arg1 applicationObserver:(id)arg2 ;
-(id)mergedOrderingFromLocalOrdering:(id)arg0 previousOrdering:(id)arg1 remoteOrdering:(id)arg2 ;
-(id)rootCollectionRecord;
-(id)syncEngine:(id)arg0 recordToSaveForRecordID:(id)arg1 ;
-(id)syncFlagsRecord;
-(id)workflowOrderingRecordForRecordID:(id)arg0 ;
-(id)workflowRecordForRecordID:(id)arg0 ;
-(id)workflowRecordForReference:(id)arg0 properties:(id)arg1 ;
-(void)addRecordIDsToSave:(id)arg0 recordIDsToDelete:(id)arg1 ;
-(void)applyLegacyOrderedWorkflowIDsToRootCollection:(id)arg0 ;
-(void)createShortcutsZone;
-(void)databaseDidChange:(id)arg0 modified:(id)arg1 inserted:(id)arg2 removed:(id)arg3 ;
-(void)dealloc;
-(void)fetchAndModifyChangesInShortcutsZone;
-(void)fetchAndModifyChangesInShortcutsZoneWithCompletion:(id)arg0 ;
-(void)fetchChangesInShortcutsZone;
-(void)fetchChangesInShortcutsZoneWithCompletion:(id)arg0 ;
-(void)handleDeletedRecordWithID:(id)arg0 ;
-(void)handleFetchedCollectionOrderingRecord:(id)arg0 ;
-(void)handleFetchedDeletionOfRecordWithID:(id)arg0 ;
-(void)handleFetchedFolderRecord:(id)arg0 ;
-(void)handleFetchedLegacyOrderingRecord:(id)arg0 ;
-(void)handleFetchedSyncFlagsRecord:(id)arg0 ;
-(void)handleFetchedWorkflowRecord:(id)arg0 ;
-(void)handleNameConflictsForFetchedWorkflowRecord:(id)arg0 identifier:(id)arg1 shouldMarkFetchedRecordAsTombstone:(*BOOL)arg2 ;
-(void)handleSavedFolderRecord:(id)arg0 ;
-(void)handleSavedSyncFlagsRecord:(id)arg0 ;
-(void)handleSavedWorkflowOrderingRecord:(id)arg0 ;
-(void)handleSavedWorkflowRecord:(id)arg0 ;
-(void)handleSendFolderConflictWithClientRecord:(id)arg0 serverRecord:(id)arg1 ancestorRecord:(id)arg2 ;
-(void)handleSendSyncFlagsConflictWithClientRecord:(id)arg0 serverRecord:(id)arg1 ancestorRecord:(id)arg2 ;
-(void)handleSendWorkflowConflictWithClientRecord:(id)arg0 serverRecord:(id)arg1 ancestorRecord:(id)arg2 ;
-(void)handleSendWorkflowOrderingConflictWithClientRecord:(id)arg0 serverRecord:(id)arg1 ancestorRecord:(id)arg2 ;
-(void)handleServerRecordChangedError:(id)arg0 ;
-(void)handleUnknownItemErrorForRecord:(id)arg0 ;
-(void)modifyPendingChangesInShortcutsZoneWithCompletion:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)sendChangedFolders;
-(void)sendChangedWorkflows;
-(void)sendSyncFlagsIfNeeded;
-(void)sendWorkflowOrderingsIfNeeded;
-(void)start;
-(void)startObservingUserDefaults;
-(void)stopObservingUserDefaults;
-(void)syncEngine:(id)arg0 didDeleteRecordWithID:(id)arg1 ;
-(void)syncEngine:(id)arg0 didDeleteRecordZoneWithID:(id)arg1 ;
-(void)syncEngine:(id)arg0 didFetchRecord:(id)arg1 ;
-(void)syncEngine:(id)arg0 didReceiveDatabaseNotification:(id)arg1 ;
-(void)syncEngine:(id)arg0 didSaveRecord:(id)arg1 ;
-(void)syncEngine:(id)arg0 didSaveRecordZone:(id)arg1 ;
-(void)syncEngine:(id)arg0 didUpdateMetadata:(id)arg1 ;
-(void)syncEngine:(id)arg0 failedToDeleteRecordWithID:(id)arg1 error:(id)arg2 ;
-(void)syncEngine:(id)arg0 failedToDeleteRecordZoneWithID:(id)arg1 error:(id)arg2 ;
-(void)syncEngine:(id)arg0 failedToSaveRecord:(id)arg1 error:(id)arg2 ;
-(void)syncEngine:(id)arg0 failedToSaveRecordZone:(id)arg1 error:(id)arg2 ;
-(void)syncEngine:(id)arg0 recordWithIDWasDeleted:(id)arg1 recordType:(id)arg2 ;
-(void)syncEngine:(id)arg0 zoneWithIDChanged:(id)arg1 ;
-(void)syncEngine:(id)arg0 zoneWithIDWasDeleted:(id)arg1 ;
-(void)syncEngine:(id)arg0 zoneWithIDWasPurged:(id)arg1 ;
-(void)updateSyncTokenInDatabaseWithBlock:(id)arg0 ;


@end


#endif