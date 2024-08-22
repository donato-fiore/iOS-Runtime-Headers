// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPXEXTENSIONCONTEXT_H
#define FPXEXTENSIONCONTEXT_H

@class NSExtensionContext, NSMutableSet, NSHashTable, NSMutableDictionary, NSUserDefaults, NSString;
@protocol FPSpotlightIndexerDelegate, FPXVendor, OS_dispatch_queue, FPDDomainServicing><FPXPCAutomaticErrorProxy, OS_os_log;


#import "FPXDomainContext.h"
#import "FPProviderDomain.h"

@interface FPXExtensionContext : NSExtensionContext <FPSpotlightIndexerDelegate, FPXVendor>

 {
    NSMutableSet *_listenerDelegates;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSObject<OS_dispatch_queue> *_instanceQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_runningEnumerators;
    NSMutableDictionary *_alternateContentsURLDictionary;
    NSUserDefaults *_userDefaults;
    id<FPDDomainServicing><FPXPCAutomaticErrorProxy> *_domainServicer;
    NSObject<OS_os_log> *_log;
    FPXDomainContext *_domainContext;
    BOOL _isBeingDeallocated;
    FPProviderDomain *_providerDomain;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *providerIdentifier; // ivar: _providerIdentifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL usesFPFS; // ivar: _usesFPFS


+(Class)principalClass;
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
+(void)setPrincipalClass:(Class)arg0 ;
-(BOOL)_inlineSymlinkTarget:(id)arg0 url:(*id)arg1 error:(*id)arg2 ;
-(id)_createItemBasedOnTemplate:(id)arg0 fields:(NSUInteger)arg1 contents:(id)arg2 options:(NSUInteger)arg3 request:(id)arg4 bounce:(BOOL)arg5 bounceCollidingItem:(BOOL)arg6 bounceNumber:(id)arg7 completionHandler:(id)arg8 ;
-(id)_proxyWithCancellationHandler:(id)arg0 forClientOperation:(id)arg1 ;
-(id)additionalServiceSourcesForItemID:(id)arg0 domain:(id)arg1 extension:(id)arg2 ;
-(id)alternateContentsURLWrapperForItemID:(id)arg0 ;
-(id)createItemBasedOnTemplate:(id)arg0 fields:(NSUInteger)arg1 contents:(id)arg2 options:(NSUInteger)arg3 request:(id)arg4 bounce:(BOOL)arg5 completionHandler:(id)arg6 ;
-(id)createUserInteractionSuppressingWithDomainIdentifier:(id)arg0 withPurpose:(id)arg1 ;
-(id)deleteItemWithID:(id)arg0 baseVersion:(id)arg1 options:(NSUInteger)arg2 request:(id)arg3 completionHandler:(id)arg4 ;
-(id)disconnectDomainID:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(id)domainContextForIdentifier:(id)arg0 ;
-(id)domainContextForItemID:(id)arg0 ;
-(id)domainContextForItemIDs:(id)arg0 ;
-(id)domainContextForURL:(id)arg0 ;
-(id)fetchContentsForItemWithID:(id)arg0 version:(id)arg1 request:(id)arg2 extent:(id)arg3 alignment:(NSUInteger)arg4 options:(NSUInteger)arg5 shouldForwardVersion:(BOOL)arg6 completionHandler:(id)arg7 ;
-(id)fetchContentsForItemWithID:(id)arg0 version:(id)arg1 usingExistingContentsAtURL:(id)arg2 existingVersion:(id)arg3 request:(id)arg4 completionHandler:(id)arg5 ;
-(id)fetchPublishingURLForItemID:(id)arg0 completionHandler:(id)arg1 ;
-(id)initWithInputItems:(id)arg0 listenerEndpoint:(id)arg1 contextUUID:(id)arg2 ;
-(id)instanceForDomainIdentifier:(id)arg0 ;
-(id)instanceForItemID:(id)arg0 ;
-(id)instanceForItemIDs:(id)arg0 ;
-(id)instanceForURL:(id)arg0 ;
-(id)instanceWithPrivateSelector:(SEL)arg0 ;
-(id)modifyItem:(id)arg0 baseVersion:(id)arg1 changedFields:(NSUInteger)arg2 contents:(id)arg3 options:(NSUInteger)arg4 request:(id)arg5 completionHandler:(id)arg6 ;
-(id)performActionWithIdentifier:(id)arg0 onItemsWithIdentifiers:(id)arg1 domainIdentifier:(id)arg2 completionHandler:(id)arg3 ;
-(id)v2Instance;
-(void)URLForItemID:(id)arg0 creatingPlaceholderIfMissing:(BOOL)arg1 ignoreAlternateContentsURL:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)_deleteIndexInDomainContexts:(id)arg0 completionHandler:(id)arg1 ;
-(void)_fetchHierarchyForItemID:(id)arg0 into:(id)arg1 maxDepth:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)_freeSlotHeldByItem:(id)arg0 request:(id)arg1 bounceIndex:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)_indexOutOfBandUpdatedItems:(id)arg0 deletedItems:(id)arg1 completionHandler:(id)arg2 ;
-(void)_persistedDocumentURLForURL:(id)arg0 itemID:(id)arg1 extension:(id)arg2 creatingPlaceholderIfMissing:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)_setTransaction:(id)arg0 ;
-(void)_setupItemForTrashing:(id)arg0 usesFPFS:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_singleItemChange:(id)arg0 changedFields:(NSUInteger)arg1 bounce:(BOOL)arg2 bounceIndex:(NSUInteger)arg3 request:(id)arg4 completionHandler:(id)arg5 ;
-(void)_test_callFileProviderManagerAPIs:(id)arg0 ;
-(void)_waitForExtensionStabilizationWithCompletionHandler:(id)arg0 ;
-(void)addListenerDelegate:(id)arg0 ;
-(void)applyFieldChangesToItem:(id)arg0 baseVersion:(id)arg1 changedFields:(NSUInteger)arg2 contents:(id)arg3 lastKnownVendorItem:(id)arg4 extensionInstance:(id)arg5 completionHandler:(id)arg6 ;
-(void)applyItemChange:(id)arg0 baseVersion:(id)arg1 contents:(id)arg2 completionHandler:(id)arg3 ;
-(void)attemptRecoveryFromError:(id)arg0 optionIndex:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)beginRequestWithDomain:(id)arg0 alternateContentsDictionary:(id)arg1 domainServicer:(id)arg2 providerDomain:(id)arg3 domainVersion:(id)arg4 completionHandler:(id)arg5 ;
-(void)bulkEvictItemsWithItemIDs:(id)arg0 completionHandler:(id)arg1 ;
-(void)bulkItemChanges:(id)arg0 changedFields:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)dealloc;
-(void)deleteItemsWithIDs:(id)arg0 baseVersions:(id)arg1 options:(NSUInteger)arg2 reply:(id)arg3 ;
-(void)deleteSearchableItemsWithSpotlightDomainIdentifiers:(id)arg0 domainIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)didChangeItemID:(id)arg0 completionHandler:(id)arg1 ;
-(void)didUpdateAlternateContentsDocumentForDocumentWithItemID:(id)arg0 completionHandler:(id)arg1 ;
-(void)dropDomainWithCompletionHandler:(id)arg0 ;
-(void)dropIndexForDomain:(id)arg0 completionHandler:(id)arg1 ;
-(void)dumpIndexStateForDomain:(id)arg0 toFileHandler:(id)arg1 completionHandler:(id)arg2 ;
-(void)dumpInternalStateToTermDumper:(id)arg0 domainIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)enumeratorWasInvalidated:(id)arg0 ;
-(void)evictItemAtURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchAndStartEnumeratingWithSettings:(id)arg0 observer:(id)arg1 request:(id)arg2 completionHandler:(id)arg3 ;
-(void)fetchCustomPushTopicsWithCompletionHandler:(id)arg0 ;
-(void)fetchDefaultContainerForBundleIdentifier:(id)arg0 defaultName:(id)arg1 inDomainIdentifier:(id)arg2 reply:(id)arg3 ;
-(void)fetchHierarchyForItemID:(id)arg0 recursively:(BOOL)arg1 reply:(id)arg2 ;
-(void)fetchItemID:(id)arg0 reply:(id)arg1 ;
-(void)fetchOperationServiceEndpoint:(id)arg0 ;
-(void)fetchServicesForItemID:(id)arg0 allowRestrictedSources:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)fetchTrashIdentifiersWithCompletionHandler:(id)arg0 ;
-(void)fetchVendorEndpoint:(id)arg0 ;
-(void)fpx_invalidate;
-(void)identifierForItemAtURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)importDidFinishWithCompletionHandler:(id)arg0 ;
-(void)importDocumentAtURL:(id)arg0 intoFolderWithIdentifier:(id)arg1 originalName:(id)arg2 extensionInstance:(id)arg3 reply:(id)arg4 ;
-(void)indexOneBatchInDomain:(id)arg0 completionHandler:(id)arg1 ;
-(void)itemChangedAtURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)itemForItemID:(id)arg0 request:(id)arg1 completionHandler:(id)arg2 ;
-(void)itemForURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)movingItemAtURL:(id)arg0 requiresProvidingWithDestinationURL:(id)arg1 completionHandler:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)preflightReparentItemIDs:(id)arg0 underParentID:(id)arg1 reply:(id)arg2 ;
-(void)preflightTrashItemIDs:(id)arg0 completionHandler:(id)arg1 ;
-(void)providePlaceholderAtURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeListenerDelegate:(id)arg0 ;
-(void)removeTrashedItemsOlderThanDate:(id)arg0 domainIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)sendBlockedProcessNamesUpdate;
-(void)setAlternateContentsURL:(id)arg0 forDocumentWithItemID:(id)arg1 completionHandler:(id)arg2 ;
-(void)signalEnumeratorForMaterializedItemsWithCompletionHandler:(id)arg0 ;
-(void)signalEnumeratorForPendingItemsWithCompletionHandler:(id)arg0 ;
-(void)singleItemChange:(id)arg0 changedFields:(NSUInteger)arg1 bounce:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)spotlightIndexerDidReindexAllSearchableItems:(id)arg0 ;
-(void)startOperation:(id)arg0 toFetchThumbnailsForItemIdentifiers:(id)arg1 size:(struct CGSize )arg2 completionHandler:(id)arg3 ;
-(void)startProvidingItemAtURL:(id)arg0 readingOptions:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)trashItemAtURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateIgnoreStateOfItemWithIdentifiers:(id)arg0 ignoreState:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)userCheckedSuppressionCheckboxForUserInteractionIdentifier:(id)arg0 domainIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)userInteractionErrorsForPerformingAction:(id)arg0 sourceItems:(id)arg1 destinationItem:(id)arg2 fpProviderDomainId:(id)arg3 sourceItemKeysAllowList:(id)arg4 destinationItemKeysAllowList:(id)arg5 completionHandler:(id)arg6 ;
-(void)valuesForAttributes:(id)arg0 forItemID:(id)arg1 completionHandler:(id)arg2 ;
-(void)waitForStabilizationWithCompletionHandler:(id)arg0 ;
-(void)wakeForPushWithCompletionHandler:(id)arg0 ;
-(void)wakeForSessionIdentifier:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif