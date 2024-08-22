// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FPDXPCSERVICER_H
#define FPDXPCSERVICER_H

@class NSHashTable, NSXPCConnection;
@protocol FPDDaemon, OS_dispatch_queue, OS_os_log;

#import <Foundation/Foundation.h>

#import "FPDServer.h"

@interface FPDXPCServicer : NSObject <FPDDaemon>

 {
    NSHashTable *_providerServicers;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_os_log> *_log;
}


@property (weak, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (weak, nonatomic) FPDServer *server; // ivar: _server


-(BOOL)_isNonSandboxedConnection;
-(BOOL)clientHasSandboxAccessToFile:(id)arg0 ;
-(BOOL)writeMetadata:(id)arg0 onURL:(id)arg1 error:(*id)arg2 ;
-(id)_providerForIdentifier:(id)arg0 enumerateEntitlementRequired:(BOOL)arg1 error:(*id)arg2 ;
-(id)createDomainServicerForProviderDomainID:(id)arg0 enumerateEntitlementRequired:(BOOL)arg1 error:(*id)arg2 ;
-(id)defaultProviderForCurrentConnection:(*id)arg0 ;
-(id)description;
-(id)evictItemAtURL:(id)arg0 evenIfEnumeratingFP:(BOOL)arg1 andClearACLForConsumer:(id)arg2 completionHandler:(id)arg3 ;
-(id)init;
-(id)providerForIdentifier:(id)arg0 enumerateEntitlementRequired:(BOOL)arg1 error:(*id)arg2 ;
-(id)providersForCurrentConnection;
-(id)stageLocation;
-(int)pid;
-(void)_forceIngestionForItemID:(id)arg0 completionHandler:(id)arg1 ;
-(void)_test_callFileProviderManagerAPIs:(id)arg0 ;
-(void)_test_callRemoveTrashedItemsOlderThanDate:(id)arg0 completionHandler:(id)arg1 ;
-(void)_test_getCountersArray:(id)arg0 completionHandler:(id)arg1 ;
-(void)_test_resetCounters:(id)arg0 completionHandler:(id)arg1 ;
-(void)_test_retrieveItemWithName:(id)arg0 completionHandler:(id)arg1 ;
-(void)_test_setDocIDResolutionPolicy:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)_test_simulateInstallOfBundleID:(id)arg0 completionHandler:(id)arg1 ;
-(void)_test_simulateUninstallOfBundleID:(id)arg0 completionHandler:(id)arg1 ;
-(void)addDomain:(id)arg0 forProviderIdentifier:(id)arg1 byImportingDirectoryAtURL:(id)arg2 completionHandler:(id)arg3 ;
-(void)backUpUserURL:(id)arg0 outputUserURL:(id)arg1 completionHandler:(id)arg2 ;
-(void)bookmarkableStringFromDocumentURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)copyDatabaseForFPCKStartingAtPath:(id)arg0 completionHandler:(id)arg1 ;
-(void)createDatabaseCopyOutputPathForDomain:(id)arg0 completionHandler:(id)arg1 ;
-(void)createItemBasedOnTemplate:(id)arg0 fields:(NSUInteger)arg1 urlWrapper:(id)arg2 options:(NSUInteger)arg3 bounceOnCollision:(BOOL)arg4 completionHandler:(id)arg5 ;
-(void)didUpdateAlternateContentsDocumentForDocumentAtURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)documentURLFromBookmarkableString:(id)arg0 creatingPlaceholderIfMissing:(BOOL)arg1 ignoreAlternateContentsURL:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)documentURLFromItemID:(id)arg0 creatingPlaceholderIfMissing:(BOOL)arg1 ignoreAlternateContentsURL:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)dumpStateTo:(id)arg0 limitNumberOfItems:(BOOL)arg1 providerFilter:(id)arg2 completionHandler:(id)arg3 ;
-(void)evictItemWithID:(id)arg0 completionHandler:(id)arg1 ;
-(void)extendBookmarkForFileURL:(id)arg0 toConsumerID:(id)arg1 completionHandler:(id)arg2 ;
-(void)extendBookmarkForItemID:(id)arg0 consumerID:(id)arg1 completionHandler:(id)arg2 ;
-(void)extendSandboxForFileURL:(id)arg0 fromProviderID:(id)arg1 toConsumerID:(id)arg2 completionHandler:(id)arg3 ;
-(void)fetchAccessServicer:(id)arg0 ;
-(void)fetchAlternateContentsURLForDocumentURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchDaemonOperationIDsWithCompletionHandler:(id)arg0 ;
-(void)fetchDaemonOperationWithID:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchDomainServicerForProviderDomainID:(id)arg0 handler:(id)arg1 ;
-(void)fetchFSItemsForItemIdentifiers:(id)arg0 providerIdentifier:(id)arg1 domainIdentifier:(id)arg2 materializingIfNeeded:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)fetchIndexPropertiesForItemAtURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchListOfMonitoredApps:(id)arg0 ;
-(void)forceIndexingInForeground:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)forceIngestionForItemID:(id)arg0 completionHandler:(id)arg1 ;
-(void)forceIngestionForItemIDs:(id)arg0 completionHandler:(id)arg1 ;
-(void)getDomainsForProviderIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)getPersonaForProvider:(id)arg0 completionHandler:(id)arg1 ;
-(void)getSyncedRootsURLs:(id)arg0 ;
-(void)getURLForContainerWithItemID:(id)arg0 inDataScopeDomainWithIdentifier:(id)arg1 documentsScopeDomainIdentifier:(id)arg2 documentsFolderItemIdentifier:(id)arg3 completionHandler:(id)arg4 ;
-(void)invalidate;
-(void)itemForURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)makeTopologicallySortedItemsOnDisk:(id)arg0 completionHandler:(id)arg1 ;
-(void)materializeURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)noteURLBecameFrontmost:(id)arg0 inWindow:(id)arg1 completionHandler:(id)arg2 ;
-(void)pinItemWithID:(id)arg0 completionHandler:(id)arg1 ;
-(void)preventDiskImportSchedulerFromRunning:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)providerDomainForIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)providerDomainForURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)providerDomainsCompletionHandler:(id)arg0 ;
-(void)reimportItemsBelowItemWithID:(id)arg0 removeCachedItems:(BOOL)arg1 markItemDataless:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)reindexAllSearchableItemsForBundleIDs:(id)arg0 acknowledgementHandler:(id)arg1 ;
-(void)reindexAllSearchableItemsWithAcknowledgementHandler:(id)arg0 ;
-(void)removeAllDomainsForProviderIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeDomain:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeDomain:(id)arg0 mode:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)removeDomainAndPreserveDataWithID:(id)arg0 mode:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)removeDomainWithID:(id)arg0 mode:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)restoreUserURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)scheduleActionOperationWithInfo:(id)arg0 completionHandler:(id)arg1 ;
-(void)setAlternateContentsURL:(id)arg0 onDocumentURL:(id)arg1 completionHandler:(id)arg2 ;
-(void)setEnabled:(BOOL)arg0 forDomainIdentifier:(id)arg1 providerIdentifier:(id)arg2 completionHandler:(id)arg3 ;
-(void)startAccessingExtensionForProviderDomainID:(id)arg0 handler:(id)arg1 ;
-(void)startAccessingOperationServiceForProviderDomainID:(id)arg0 handler:(id)arg1 ;
-(void)startAccessingServiceForItemID:(id)arg0 completionHandler:(id)arg1 ;
-(void)startAccessingServiceWithName:(id)arg0 itemID:(id)arg1 connection:(id)arg2 enumerateEntitlementRequired:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)startAccessingServiceWithName:(id)arg0 itemURL:(id)arg1 completionHandler:(id)arg2 ;
-(void)startDownloadingItemAtURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)startOperation:(id)arg0 toFetchIconsForAppBundleIDs:(id)arg1 requestedSize:(struct CGSize )arg2 scale:(CGFloat)arg3 completionHandler:(id)arg4 ;
-(void)startProvidingItemAtURL:(id)arg0 fromProviderID:(id)arg1 forConsumerID:(id)arg2 completionHandler:(id)arg3 ;
-(void)trashItemAtURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)unpinItemWithID:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateBlockedProcessNamesForProvider:(id)arg0 processNames:(id)arg1 completionHandler:(id)arg2 ;
-(void)updateLastUsedDate:(id)arg0 completionHandler:(id)arg1 ;
-(void)valuesForAttributes:(id)arg0 forItemAtURL:(id)arg1 completionHandler:(id)arg2 ;
-(void)waitForChangesOnItemsBelowItemWithID:(id)arg0 completionHandler:(id)arg1 ;
-(void)waitForStabilizationOfDomainWithID:(id)arg0 completionHandler:(id)arg1 ;
-(void)wakeUpForURL:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif