// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRCXPCREGULARIPCSCLIENT_H
#define BRCXPCREGULARIPCSCLIENT_H

@class NSString;
@protocol BRProtocol, BRCForegroundClient;


#import "BRCXPCClient.h"

@interface BRCXPCRegularIPCsClient : BRCXPCClient <BRProtocol, BRCForegroundClient>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) Class superclass;


-(BOOL)_enumerateFoldersWithParent:(id)arg0 depth:(NSUInteger)arg1 session:(id)arg2 db:(id)arg3 handler:(id)arg4 ;
-(id)_loggedInUserPropertyValuesForKeys:(id)arg0 error:(*id)arg1 ;
-(id)_nonSandboxedAttributesToStrip;
-(void)_addExternalDocumentReferenceTo:(id)arg0 session:(id)arg1 inContainer:(id)arg2 underParent:(id)arg3 reply:(id)arg4 ;
-(void)_enumerateContainersForEnumerationWithDB:(id)arg0 handler:(id)arg1 ;
-(void)_gatherInformationForPath:(id)arg0 session:(id)arg1 reply:(id)arg2 ;
-(void)_getContainerForURL:(id)arg0 session:(id)arg1 reply:(id)arg2 ;
-(void)_presentAcceptDialogsWithMetadata:(id)arg0 reply:(id)arg1 ;
-(void)_readerThrottleBackoffForDocumentAtPath:(id)arg0 session:(id)arg1 containerID:(id)arg2 reply:(id)arg3 ;
-(void)_t_extractMetadataForAllContainersWithReply:(id)arg0 ;
-(void)_t_getEntitledContainerIDsForBundleID:(id)arg0 reply:(id)arg1 ;
-(void)_t_getEntitlementsForBundleID:(id)arg0 reply:(id)arg1 ;
-(void)_unregisterPrematurely;
-(void)_updateDirectoryMtime:(NSInteger)arg0 onDisk:(id)arg1 ;
-(void)addExternalDocumentReferenceTo:(id)arg0 inContainer:(id)arg1 underParent:(id)arg2 reply:(id)arg3 ;
-(void)boostFilePresenterAtURL:(id)arg0 reply:(id)arg1 ;
-(void)cancelTreeConsistencyCheckWithReply:(id)arg0 ;
-(void)capabilityWhenTryingToReparentItemAtURL:(id)arg0 toNewParent:(id)arg1 reply:(id)arg2 ;
-(void)checkIfItemIsShareableWithInode:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)checkinAskClientIfUsingUbiquity:(BOOL)arg0 ;
-(void)computePurgeableSpaceForAllUrgenciesWithReply:(id)arg0 ;
-(void)copyBulkShareIDsAtURLs:(id)arg0 reply:(id)arg1 ;
-(void)copyCurrentUserIdentifierWithReply:(id)arg0 ;
-(void)copyCurrentUserNameAndDisplayHandleWithReply:(id)arg0 ;
-(void)copyCurrentUserNameAndEmailWithReply:(id)arg0 ;
-(void)createAccountWithACAccountID:(id)arg0 dsid:(id)arg1 reply:(id)arg2 ;
-(void)createContainerWithID:(id)arg0 ownerName:(id)arg1 reply:(id)arg2 ;
-(void)createSharingInfoForURL:(id)arg0 reply:(id)arg1 ;
-(void)currentNotifRankWithReply:(id)arg0 ;
-(void)deleteAllContentsOfContainerID:(id)arg0 onClient:(BOOL)arg1 onServer:(BOOL)arg2 wait:(BOOL)arg3 reply:(id)arg4 ;
-(void)didReceiveHandoffRequestForBundleID:(id)arg0 reply:(id)arg1 ;
-(void)dropSpotlightIndexWithReply:(id)arg0 ;
-(void)dumpCoordinationInfoTo:(id)arg0 reply:(id)arg1 ;
-(void)dumpDatabaseTo:(id)arg0 containerID:(id)arg1 includeAllItems:(BOOL)arg2 reply:(id)arg3 ;
-(void)enumerateAllFoldersWithSortOrder:(unsigned char)arg0 offset:(NSUInteger)arg1 limit:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)enumerateItemsInFolder:(id)arg0 sortOrder:(unsigned char)arg1 offset:(NSUInteger)arg2 limit:(NSUInteger)arg3 completion:(id)arg4 ;
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
-(void)getAttributeValues:(id)arg0 forItemAtURL:(id)arg1 reply:(id)arg2 ;
-(void)getBackReferencingContainerIDsForURLs:(id)arg0 reply:(id)arg1 ;
-(void)getBookmarkDataForURL:(id)arg0 onlyAllowItemKnowByServer:(BOOL)arg1 allowAccessByBundleID:(id)arg2 reply:(id)arg3 ;
-(void)getContainerForURL:(id)arg0 reply:(id)arg1 ;
-(void)getContainerLastServerUpdateWithID:(id)arg0 reply:(id)arg1 ;
-(void)getContainerStatusWithID:(id)arg0 reply:(id)arg1 ;
-(void)getContainerURLForID:(id)arg0 forProcess:(struct ? )arg1 reply:(id)arg2 ;
-(void)getContainerURLForID:(id)arg0 recreateDocumentsIfNeeded:(BOOL)arg1 reply:(id)arg2 ;
-(void)getContainerURLForID:(id)arg0 reply:(id)arg1 ;
-(void)getContainersByID:(id)arg0 ;
-(void)getContainersNeedingUpload:(id)arg0 ;
-(void)getCreatorNameComponentsForURL:(id)arg0 reply:(id)arg1 ;
-(void)getEvictableSpaceWithReply:(id)arg0 ;
-(void)getIsContainerWithIDOverQuota:(id)arg0 reply:(id)arg1 ;
-(void)getItemUpdateSenderWithReceiver:(id)arg0 reply:(id)arg1 ;
-(void)getLastSyncDateWithReply:(id)arg0 ;
-(void)getLocalizedLastSyncWithReply:(id)arg0 ;
-(void)getLoggedInUserPropertyValuesForKeys:(id)arg0 reply:(id)arg1 ;
-(void)getMigrationStatusForPrimaryiCloudAccount:(id)arg0 ;
-(void)getNonLocalVersionSenderWithReceiver:(id)arg0 documentURL:(id)arg1 includeCachedVersions:(BOOL)arg2 reply:(id)arg3 ;
-(void)getPausedFilesList:(id)arg0 reply:(id)arg1 ;
-(void)getPublishedURLForItemAtURL:(id)arg0 forStreaming:(BOOL)arg1 requestedTTL:(NSUInteger)arg2 reply:(id)arg3 ;
-(void)getQueryItemForURL:(id)arg0 reply:(id)arg1 ;
-(void)getShareOptionsOfItemIdentifier:(id)arg0 reply:(id)arg1 ;
-(void)getTotalApplicationDocumentUsageWithReply:(id)arg0 ;
-(void)getURLForItemIdentifier:(id)arg0 reply:(id)arg1 ;
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
-(void)moveBRSecurityBookmarkAtURL:(id)arg0 toURL:(id)arg1 reply:(id)arg2 ;
-(void)overwriteAccessTimeForItemAtURL:(id)arg0 atime:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)pauseSyncConsistencyWithReply:(id)arg0 ;
-(void)pauseSyncForFileAtURL:(id)arg0 timeout:(CGFloat)arg1 options:(NSInteger)arg2 appBundle:(id)arg3 reply:(id)arg4 ;
-(void)performSelfCheck:(id)arg0 reply:(id)arg1 ;
-(void)presentAcceptDialogsForShareMetadata:(id)arg0 reply:(id)arg1 ;
-(void)presyncContainerWithID:(id)arg0 reply:(id)arg1 ;
-(void)printStatus:(id)arg0 containerID:(id)arg1 reply:(id)arg2 ;
-(void)purgeAmount:(NSInteger)arg0 withUrgency:(int)arg1 reply:(id)arg2 ;
-(void)queryLoggedInAccountDescriptorsWithReply:(id)arg0 ;
-(void)queryPathsForPersona:(id)arg0 reply:(id)arg1 ;
-(void)querySyncedRootURLsForPersona:(id)arg0 reply:(id)arg1 ;
-(void)readerThrottleBackoffForDocumentAtPath:(id)arg0 containerID:(id)arg1 reply:(id)arg2 ;
-(void)reclaimAmount:(NSInteger)arg0 withUrgency:(int)arg1 reply:(id)arg2 ;
-(void)refreshSharingStateForItemIdentifier:(id)arg0 reply:(id)arg1 ;
-(void)registerInitialSyncBarrierForID:(id)arg0 reply:(id)arg1 ;
-(void)removeItemFromDisk:(id)arg0 reply:(id)arg1 ;
-(void)resetBudgets:(id)arg0 reply:(id)arg1 ;
-(void)resolveBookmarkDataToURL:(id)arg0 reply:(id)arg1 ;
-(void)resolveConflictWithName:(id)arg0 atURL:(id)arg1 reply:(id)arg2 ;
-(void)resolveFileObjectIDToURL:(id)arg0 reply:(id)arg1 ;
-(void)resolveFileObjectIDsToContentRecordIDs:(id)arg0 reply:(id)arg1 ;
-(void)resumeSyncConsistencyWithReply:(id)arg0 ;
-(void)resumeSyncForFileAtURL:(id)arg0 dropLocalChanges:(BOOL)arg1 reply:(id)arg2 ;
-(void)scheduleDeepScanForContainer:(id)arg0 reply:(id)arg1 ;
-(void)setMigrationStatus:(char)arg0 forDSID:(id)arg1 shouldUpdateAccount:(BOOL)arg2 reply:(id)arg3 ;
-(void)setStorageOpimizationEnabled:(BOOL)arg0 reply:(id)arg1 ;
-(void)setiWorkPublishingInfoAtURL:(id)arg0 publish:(BOOL)arg1 readonly:(BOOL)arg2 reply:(id)arg3 ;
-(void)setupInstanceWithDict:(id)arg0 reply:(id)arg1 ;
-(void)simulateHealthIssueWithContainer:(id)arg0 status:(id)arg1 brokenStructure:(BOOL)arg2 reply:(id)arg3 ;
-(void)startDownloadItemsAtURLs:(id)arg0 options:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)startOperation:(id)arg0 toAcceptShareLink:(id)arg1 skipAcceptDialogs:(BOOL)arg2 reply:(id)arg3 ;
-(void)startOperation:(id)arg0 toCopyAvailableQuotaWithReply:(id)arg1 ;
-(void)startOperation:(id)arg0 toCopyDocumentURLForRecordID:(id)arg1 syncIfNeeded:(BOOL)arg2 reply:(id)arg3 ;
-(void)startOperation:(id)arg0 toCopyEtagAtURL:(id)arg1 reply:(id)arg2 ;
-(void)startOperation:(id)arg0 toCopyParticipantTokenAtURL:(id)arg1 reply:(id)arg2 ;
-(void)startOperation:(id)arg0 toCopyShareInfoAtURL:(id)arg1 reply:(id)arg2 ;
-(void)startOperation:(id)arg0 toCopyShareURLForShare:(id)arg1 appName:(id)arg2 reply:(id)arg3 ;
-(void)startOperation:(id)arg0 toCopySharingAccessToken:(id)arg1 reply:(id)arg2 ;
-(void)startOperation:(id)arg0 toCopySharingInfoAtURL:(id)arg1 reply:(id)arg2 ;
-(void)startOperation:(id)arg0 toCopySharingWebAuthTokenForContainerID:(id)arg1 reply:(id)arg2 ;
-(void)startOperation:(id)arg0 toCopyShortTokenAtURL:(id)arg1 reply:(id)arg2 ;
-(void)startOperation:(id)arg0 toDownloadItemAtURL:(id)arg1 readingOptions:(NSUInteger)arg2 wantsCurrentVersion:(BOOL)arg3 reply:(id)arg4 ;
-(void)startOperation:(id)arg0 toEvictItemAtURL:(id)arg1 reply:(id)arg2 ;
-(void)startOperation:(id)arg0 toLookupShareParticipants:(id)arg1 reply:(id)arg2 ;
-(void)startOperation:(id)arg0 toModifyRecordAccessAtURL:(id)arg1 allowAccess:(BOOL)arg2 reply:(id)arg3 ;
-(void)startOperation:(id)arg0 toPrepFolderForSharingAt:(id)arg1 reply:(id)arg2 ;
-(void)startOperation:(id)arg0 toProcessSubitemsAtURL:(id)arg1 maxSubsharesFailures:(NSUInteger)arg2 processType:(NSUInteger)arg3 reply:(id)arg4 ;
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