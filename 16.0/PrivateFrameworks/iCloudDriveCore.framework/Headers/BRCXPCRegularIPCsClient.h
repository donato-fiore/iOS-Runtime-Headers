// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCXPCREGULARIPCSCLIENT_H
#define BRCXPCREGULARIPCSCLIENT_H

@class NSString;
@protocol BRProtocolShared, BRCForegroundClient;


#import "BRCXPCClient.h"

@interface BRCXPCRegularIPCsClient : BRCXPCClient <BRProtocolShared, BRCForegroundClient>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) Class superclass;


-(BOOL)_enumerateFoldersWithParent:(id)arg0 depth:(NSUInteger)arg1 session:(id)arg2 db:(id)arg3 handler:(id)arg4 ;
-(BOOL)_isErrorAnExpectedError:(id)arg0 originatorId:(NSUInteger)arg1 ;
-(id)_loggedInUserPropertyValuesForKeys:(id)arg0 error:(*id)arg1 ;
-(id)_overrideSessionForDomainIdentifier:(id)arg0 ;
-(id)_removeSandboxedAttributes:(id)arg0 ;
-(void)_createSharingInfoForLocalItem:(id)arg0 reply:(id)arg1 ;
-(void)_gatherInformationForPath:(id)arg0 session:(id)arg1 reply:(id)arg2 ;
-(void)_getPublishedURLForLocalItem:(id)arg0 forStreaming:(BOOL)arg1 requestedTTL:(NSUInteger)arg2 reply:(id)arg3 ;
-(void)_presentAcceptDialogsWithMetadata:(id)arg0 reply:(id)arg1 ;
-(void)_queueOrCallCompletionBlock:(id)arg0 ;
-(void)_sendPausedFileListBatchToUpdater:(id)arg0 fromRowID:(NSUInteger)arg1 batchSize:(unsigned int)arg2 completion:(id)arg3 ;
-(void)_startOperation:(id)arg0 toCopyParticipantTokenWithLocalItem:(id)arg1 reply:(id)arg2 ;
-(void)_startOperation:(id)arg0 toCopySharingInfoWithLocalItem:(id)arg1 reply:(id)arg2 ;
-(void)_startOperation:(id)arg0 toModifyRecordAccessWithLocalItem:(id)arg1 allowAccess:(BOOL)arg2 reply:(id)arg3 ;
-(void)_startOperation:(id)arg0 toPrepFolderForSharingWithLocalItem:(id)arg1 reply:(id)arg2 ;
-(void)_startOperation:(id)arg0 toProcessSubitemsWithLocalItem:(id)arg1 maxSubsharesFailures:(NSUInteger)arg2 processType:(NSUInteger)arg3 reply:(id)arg4 ;
-(void)_t_extractMetadataForAllContainersWithReply:(id)arg0 ;
-(void)_t_getEntitledContainerIDsForBundleID:(id)arg0 reply:(id)arg1 ;
-(void)_t_getEntitlementsForBundleID:(id)arg0 reply:(id)arg1 ;
-(void)_unregisterPrematurely;
// -(void)accessItemIdentifier:(id)arg0 dbAccessKind:(NSInteger)arg1 synchronouslyIfPossible:(BOOL)arg2 LocalItemHandler:(id)arg3 ServerItemHandler:(unk)arg4  ;
-(void)accessItemIdentifierLocalItem:(id)arg0 dbAccessKind:(NSInteger)arg1 synchronouslyIfPossible:(BOOL)arg2 handler:(id)arg3 ;
-(void)accessItemIdentifierServerItem:(id)arg0 dbAccessKind:(NSInteger)arg1 synchronouslyIfPossible:(BOOL)arg2 handler:(id)arg3 ;
-(void)boostFilePresenterForItemIdentifier:(id)arg0 reply:(id)arg1 ;
-(void)cancelTreeConsistencyCheckWithReply:(id)arg0 ;
-(void)capabilityWhenTryingToReparentItemIdentifier:(id)arg0 toNewParent:(id)arg1 reply:(id)arg2 ;
-(void)checkIfItemIsShareableWithInode:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)checkinAskClientIfUsingUbiquity:(BOOL)arg0 ;
-(void)computePurgeableSpaceForAllUrgenciesWithReply:(id)arg0 ;
-(void)copyBulkShareIDsAtURLs:(id)arg0 reply:(id)arg1 ;
-(void)copyCollaborationIdentifierForFileObjectID:(id)arg0 reply:(id)arg1 ;
-(void)copyCollaborationIdentifierForItemAtURL:(id)arg0 reply:(id)arg1 ;
-(void)copyCurrentUserIdentifierWithReply:(id)arg0 ;
-(void)copyCurrentUserNameAndDisplayHandleWithReply:(id)arg0 ;
-(void)copyCurrentUserNameAndEmailWithReply:(id)arg0 ;
-(void)corruptDatabase:(id)arg0 ;
-(void)createAccountWithACAccountID:(id)arg0 dsid:(id)arg1 reply:(id)arg2 ;
-(void)createContainerWithID:(id)arg0 ownerName:(id)arg1 reply:(id)arg2 ;
-(void)createItemBasedOnTemplate:(id)arg0 fields:(NSUInteger)arg1 contents:(id)arg2 options:(NSUInteger)arg3 additionalItemAttributes:(id)arg4 completionHandler:(id)arg5 ;
-(void)createSharingInfoForItemID:(id)arg0 reply:(id)arg1 ;
-(void)currentNotifRankWithReply:(id)arg0 ;
-(void)deleteAllContentsOfContainerID:(id)arg0 onClient:(BOOL)arg1 onServer:(BOOL)arg2 wait:(BOOL)arg3 reply:(id)arg4 ;
-(void)deleteItemWithIdentifier:(id)arg0 baseVersion:(id)arg1 options:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)didReceiveHandoffRequestForBundleID:(id)arg0 reply:(id)arg1 ;
-(void)dropSpotlightIndexWithReply:(id)arg0 ;
-(void)dumpCoordinationInfoTo:(id)arg0 reply:(id)arg1 ;
-(void)dumpDatabaseTo:(id)arg0 containerID:(id)arg1 personaID:(id)arg2 includeAllItems:(BOOL)arg3 reply:(id)arg4 ;
-(void)enumerateAllFoldersWithSortOrder:(unsigned char)arg0 offset:(NSUInteger)arg1 limit:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)enumerateItemsInFolder:(id)arg0 sortOrder:(unsigned char)arg1 offset:(NSUInteger)arg2 limit:(NSUInteger)arg3 completion:(id)arg4 ;
-(void)enumerateTrashItemsFromRank:(NSUInteger)arg0 limit:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)enumerateWorkingSetChangesFromChangeToken:(id)arg0 limit:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)evictItemAtURL:(id)arg0 options:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)evictOldDocumentsWithReply:(id)arg0 ;
-(void)fetchLatestVersionForFileAtURL:(id)arg0 reply:(id)arg1 ;
-(void)forceConflictForURL:(id)arg0 bookmarkData:(id)arg1 forcedEtag:(id)arg2 reply:(id)arg3 ;
-(void)forceSyncContainerID:(id)arg0 reply:(id)arg1 ;
-(void)forceSyncWithBarrierContainerID:(id)arg0 timeout:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)forceSyncZoneHealthWithBarrierWithTimeout:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)gatherInformationForPath:(id)arg0 reply:(id)arg1 ;
-(void)getApplicationDocumentUsageInfoForBundleID:(id)arg0 withReply:(id)arg1 ;
-(void)getApplicationStatus:(id)arg0 ;
-(void)getApplicationStatusForProcess:(struct ? )arg0 reply:(id)arg1 ;
-(void)getAttributeValues:(id)arg0 forItemIdentifier:(id)arg1 reply:(id)arg2 ;
-(void)getBackReferencingContainerIDsForURLs:(id)arg0 reply:(id)arg1 ;
-(void)getBookmarkDataForItemIdentifier:(id)arg0 onlyAllowItemKnowByServer:(BOOL)arg1 allowAccessByBundleID:(id)arg2 documentID:(id)arg3 isDirectory:(BOOL)arg4 reply:(id)arg5 ;
-(void)getBookmarkDataForURL:(id)arg0 onlyAllowItemKnowByServer:(BOOL)arg1 allowAccessByBundleID:(id)arg2 reply:(id)arg3 ;
-(void)getContainerForMangledID:(id)arg0 personaID:(id)arg1 reply:(id)arg2 ;
-(void)getContainerLastServerUpdateWithID:(id)arg0 reply:(id)arg1 ;
-(void)getContainerStatusWithID:(id)arg0 reply:(id)arg1 ;
-(void)getContainerURLForID:(id)arg0 forProcess:(struct ? )arg1 reply:(id)arg2 ;
-(void)getContainerURLForID:(id)arg0 recreateDocumentsIfNeeded:(BOOL)arg1 reply:(id)arg2 ;
-(void)getContainerURLForID:(id)arg0 reply:(id)arg1 ;
-(void)getContainersByID:(id)arg0 ;
-(void)getContainersNeedingUpload:(id)arg0 ;
-(void)getCreatorNameComponentsForURL:(id)arg0 reply:(id)arg1 ;
-(void)getIsContainerWithIDOverQuota:(id)arg0 reply:(id)arg1 ;
-(void)getItemUpdateSenderWithReceiver:(id)arg0 reply:(id)arg1 ;
-(void)getLastSyncDateWithReply:(id)arg0 ;
-(void)getLocalizedLastSyncWithReply:(id)arg0 ;
-(void)getLoggedInUserPropertyValuesForKeys:(id)arg0 reply:(id)arg1 ;
-(void)getMigrationStatusForPrimaryiCloudAccount:(id)arg0 ;
-(void)getPausedFilesList:(id)arg0 reply:(id)arg1 ;
-(void)getPublishedURLForItemIdentifier:(id)arg0 forStreaming:(BOOL)arg1 requestedTTL:(NSUInteger)arg2 reply:(id)arg3 ;
-(void)getQueryItemForBRFileObjectID:(id)arg0 reply:(id)arg1 ;
-(void)getQueryItemForURL:(id)arg0 reply:(id)arg1 ;
-(void)getShareOptionsOfItemIdentifier:(id)arg0 reply:(id)arg1 ;
-(void)getSyncState:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)getTotalApplicationDocumentUsageWithReply:(id)arg0 ;
-(void)getiWorkNeedsShareMigrateAtURL:(id)arg0 reply:(id)arg1 ;
-(void)getiWorkPublishingBadgingStatusAtURL:(id)arg0 reply:(id)arg1 ;
-(void)getiWorkPublishingInfoAtURL:(id)arg0 reply:(id)arg1 ;
-(void)handleCloudKitShareMetadata:(id)arg0 completionHandler:(id)arg1 ;
-(void)hasOptimizeStorageWithReply:(id)arg0 ;
-(void)healthStatusStringForContainer:(id)arg0 reply:(id)arg1 ;
-(void)iCloudDesktopSettingsChangedWithAttributes:(id)arg0 reply:(id)arg1 ;
-(void)iWorkForceSyncContainerID:(id)arg0 ownedByMe:(BOOL)arg1 reply:(id)arg2 ;
-(void)invalidateAccountCacheWithReply:(id)arg0 ;
-(void)jetsamCloudDocsAppsWithReply:(id)arg0 ;
-(void)launchItemCountMismatchChecksAtURL:(id)arg0 reply:(id)arg1 ;
-(void)launchSyncConsistencyChecksWithReply:(id)arg0 ;
-(void)logoutAccountWithACAccountID:(id)arg0 reply:(id)arg1 ;
-(void)lookupExcludedExtensionsForLogoutWithReply:(id)arg0 ;
-(void)lookupExcludedFilenamesForLogoutWithReply:(id)arg0 ;
-(void)lookupMinFileSizeForThumbnailTransferWithReply:(id)arg0 ;
-(void)modifyItem:(id)arg0 baseVersion:(id)arg1 changedFields:(NSUInteger)arg2 contents:(id)arg3 options:(NSUInteger)arg4 additionalAttrs:(id)arg5 completionHandler:(id)arg6 ;
-(void)notifyReimportCompleted:(id)arg0 ;
-(void)pauseSyncConsistencyWithReply:(id)arg0 ;
-(void)pauseSyncForFileAtURL:(id)arg0 timeout:(CGFloat)arg1 options:(NSInteger)arg2 reply:(id)arg3 ;
-(void)performSelfCheck:(id)arg0 reply:(id)arg1 ;
-(void)presentAcceptDialogsForShareMetadata:(id)arg0 reply:(id)arg1 ;
-(void)presyncContainerWithID:(id)arg0 reply:(id)arg1 ;
-(void)printStatus:(id)arg0 containerID:(id)arg1 reply:(id)arg2 ;
-(void)purgeAmount:(NSInteger)arg0 withUrgency:(int)arg1 reply:(id)arg2 ;
-(void)queryLastCiconiaVersion:(id)arg0 ;
-(void)queryLoggedInAccountDescriptorsWithReply:(id)arg0 ;
-(void)queryPathsForPersona:(id)arg0 reply:(id)arg1 ;
-(void)querySyncedRootURLsForPersona:(id)arg0 reply:(id)arg1 ;
-(void)queryTelemetryEnablement:(id)arg0 ;
-(void)reclaimAmount:(NSInteger)arg0 withUrgency:(int)arg1 reply:(id)arg2 ;
-(void)refreshSharingStateForItemIdentifier:(id)arg0 reply:(id)arg1 ;
-(void)registerInitialSyncBarrierForID:(id)arg0 reply:(id)arg1 ;
-(void)reimport:(id)arg0 ;
-(void)removeItemFromDisk:(id)arg0 reply:(id)arg1 ;
-(void)reportCleanupFailureDuringSilentMigration:(id)arg0 operationType:(id)arg1 uuid:(id)arg2 reply:(id)arg3 ;
-(void)reportFinishedMigration:(id)arg0 uuid:(id)arg1 reply:(id)arg2 ;
-(void)reportItemMismatchDuringSilentMigration:(id)arg0 information:(id)arg1 uuid:(id)arg2 reply:(id)arg3 ;
-(void)reportOverBounceDuringSilentMigration:(id)arg0 total:(NSUInteger)arg1 uuid:(id)arg2 reply:(id)arg3 ;
-(void)resetBudgets:(id)arg0 reply:(id)arg1 ;
-(void)resolveBookmarkDataToURL:(id)arg0 reply:(id)arg1 ;
-(void)resolveConflictWithName:(id)arg0 atURL:(id)arg1 reply:(id)arg2 ;
-(void)resolveFileObjectIDToURL:(id)arg0 reply:(id)arg1 ;
-(void)resolveFileObjectIDsToContentRecordIDs:(id)arg0 reply:(id)arg1 ;
-(void)resumeSyncConsistencyWithReply:(id)arg0 ;
-(void)resumeSyncForFileAtURL:(id)arg0 dropLocalChanges:(BOOL)arg1 reply:(id)arg2 ;
-(void)setMigrationStatus:(char)arg0 forDSID:(id)arg1 shouldUpdateAccount:(BOOL)arg2 reply:(id)arg3 ;
-(void)setStorageOpimizationEnabled:(BOOL)arg0 reply:(id)arg1 ;
-(void)setiWorkPublishingInfoAtURL:(id)arg0 publish:(BOOL)arg1 readonly:(BOOL)arg2 reply:(id)arg3 ;
-(void)setupInstanceWithDict:(id)arg0 reply:(id)arg1 ;
-(void)signalStartOfSilentTelemetry:(id)arg0 uuid:(id)arg1 manual:(BOOL)arg2 version:(NSUInteger)arg3 reply:(id)arg4 ;
-(void)simulateHealthIssueWithContainer:(id)arg0 status:(id)arg1 reply:(id)arg2 ;
-(void)startDownloadFileObject:(id)arg0 options:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)startOperation:(id)arg0 toAcceptShareLink:(id)arg1 skipAcceptDialogs:(BOOL)arg2 reply:(id)arg3 ;
-(void)startOperation:(id)arg0 toCopyAvailableQuotaWithReply:(id)arg1 ;
-(void)startOperation:(id)arg0 toCopyDocumentURLForRecordID:(id)arg1 syncIfNeeded:(BOOL)arg2 reply:(id)arg3 ;
-(void)startOperation:(id)arg0 toCopyParticipantTokenWithItemID:(id)arg1 reply:(id)arg2 ;
-(void)startOperation:(id)arg0 toCopyShareURLForShare:(id)arg1 appName:(id)arg2 reply:(id)arg3 ;
-(void)startOperation:(id)arg0 toCopySharingInfoWithItemID:(id)arg1 reply:(id)arg2 ;
-(void)startOperation:(id)arg0 toCopySharingWebAuthTokenForContainerID:(id)arg1 reply:(id)arg2 ;
-(void)startOperation:(id)arg0 toDownloadItemAtURL:(id)arg1 readingOptions:(NSUInteger)arg2 wantsCurrentVersion:(BOOL)arg3 reply:(id)arg4 ;
-(void)startOperation:(id)arg0 toEvictItemAtURL:(id)arg1 reply:(id)arg2 ;
-(void)startOperation:(id)arg0 toLookupShareParticipants:(id)arg1 reply:(id)arg2 ;
-(void)startOperation:(id)arg0 toModifyRecordAccessWithItemID:(id)arg1 allowAccess:(BOOL)arg2 reply:(id)arg3 ;
-(void)startOperation:(id)arg0 toPrepFolderForSharingWithItemID:(id)arg1 reply:(id)arg2 ;
-(void)startOperation:(id)arg0 toProcessSubitemsWithItemID:(id)arg1 maxSubsharesFailures:(NSUInteger)arg2 processType:(NSUInteger)arg3 reply:(id)arg4 ;
-(void)startOperation:(id)arg0 toSaveSharingInfo:(id)arg1 reply:(id)arg2 ;
-(void)startOperation:(id)arg0 toUnshareShare:(id)arg1 forceDelete:(BOOL)arg2 reply:(id)arg3 ;
-(void)startOperation:(id)arg0 toUploadAllFilesInContainer:(id)arg1 reply:(id)arg2 ;
-(void)thumbnailChangedForItemAtURL:(id)arg0 reply:(id)arg1 ;
-(void)trashItemAtURL:(id)arg0 reply:(id)arg1 ;
-(void)updateAccountDisplayName:(id)arg0 reply:(id)arg1 ;
-(void)updateContainerMetadataForID:(id)arg0 ;
-(void)updateItemFromURL:(id)arg0 reply:(id)arg1 ;
-(void)updatePrivilegesDescriptor;
-(void)waitForFileSystemChangeProcessingWithReply:(id)arg0 ;
-(void)willAcceptShareAtURL:(id)arg0 ;
-(void)zoneNameForContainer:(id)arg0 reply:(id)arg1 ;


@end


#endif