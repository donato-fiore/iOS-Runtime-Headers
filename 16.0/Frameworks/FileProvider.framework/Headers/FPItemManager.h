// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPITEMMANAGER_H
#define FPITEMMANAGER_H

@class NSOperationQueue, NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FPItemManager : NSObject {
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_completionQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSMutableSet *_activeCollections;
}




+(BOOL)isAnyDocumentRecentlyUsed:(id)arg0 excludedFileTypes:(id)arg1 allowedFileProviderIdentifiers:(id)arg2 ;
+(id)defaultManager;
+(void)_promoteItemToAppLibraryIfNeeded:(id)arg0 ;
-(BOOL)_isValidDestination:(id)arg0 ;
-(BOOL)_itemIsOfArchiveType:(id)arg0 ;
-(BOOL)isItemInTrash:(id)arg0 ;
-(id)__itemForURLWithBuggyNullability:(id)arg0 error:(*id)arg1 ;
-(id)appLibraryCollectionForProviderDomain:(id)arg0 ;
-(id)collectionForFolderItem:(id)arg0 ;
-(id)collectionForFolderItem:(id)arg0 fileTypes:(id)arg1 ;
-(id)collectionWithIdentifier:(id)arg0 domainIdentifier:(id)arg1 providerIdentifier:(id)arg2 fileTypes:(id)arg3 ;
-(id)collectionWithIdentifier:(id)arg0 domainIdentifier:(id)arg1 providerIdentifier:(id)arg2 sortDescriptors:(id)arg3 ;
-(id)collectionWithIdentifier:(id)arg0 providerIdentifier:(id)arg1 fileTypes:(id)arg2 ;
-(id)eligibleActionsForDroppingItems:(id)arg0 underItem:(id)arg1 ;
-(id)eligibleActionsForDroppingUTIs:(id)arg0 underItem:(id)arg1 ;
-(id)eligibleActionsForItems:(id)arg0 ;
-(id)eligibleActionsForItems:(id)arg0 allowCachedDomain:(BOOL)arg1 ;
-(id)eligibleActionsForItems:(id)arg0 providerDomain:(id)arg1 ;
-(id)evictItemAtURL:(id)arg0 completionHandler:(id)arg1 ;
-(id)init;
-(id)itemForURL:(id)arg0 error:(*id)arg1 ;
-(id)newCollectionForProvider:(id)arg0 ;
-(id)newCollectionForTag:(id)arg0 ;
-(id)newCollectionWithItemID:(id)arg0 ;
-(id)newEvictableCollection;
-(id)newFavoritesCollection;
-(id)newNonAutoEvictableCollection;
-(id)newRecentsCollection;
-(id)newSearchCollection;
-(id)newSearchTrashCollection;
-(id)newSharedItemsCollection;
-(id)newTagCollection;
-(id)newTrashCollection;
-(id)operationForAction:(id)arg0 items:(id)arg1 ;
-(id)rootCollectionForProvider:(id)arg0 ;
-(id)rootCollectionForProvider:(id)arg0 fileTypes:(id)arg1 ;
-(id)rootCollectionForProviderDomain:(id)arg0 ;
-(id)servicesForItemAtURL:(id)arg0 error:(*id)arg1 ;
-(id)thumbnailsFetchOperationForItems:(id)arg0 withSize:(struct CGSize )arg1 scale:(CGFloat)arg2 ;
-(id)trashCollectionForProviderDomain:(id)arg0 ;
-(void)_fetchHierarchyForItemID:(id)arg0 recursively:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_fetchHierarchyForItemID:(id)arg0 recursively:(BOOL)arg1 depth:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)_fetchItemForURL:(id)arg0 synchronously:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_fetchItemForURL:(id)arg0 synchronously:(BOOL)arg1 skipURLValidation:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)_fetchParentsForItemID:(id)arg0 recursively:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_fetchURLForItemID:(id)arg0 creatingPlaceholderIfMissing:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)addOperation:(id)arg0 ;
-(void)extendBookmarkForItem:(id)arg0 receivingBundleID:(id)arg1 completionHandler:(id)arg2 ;
-(void)fetchAllParentsForItem:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchDefaultLocationForApplication:(id)arg0 defaultProviderDomain:(id)arg1 completionHandler:(id)arg2 ;
-(void)fetchDefaultLocationForApplicationRecord:(id)arg0 defaultProviderDomain:(id)arg1 completionHandler:(id)arg2 ;
-(void)fetchFSItemsForItemIdentifiers:(id)arg0 providerIdentifier:(id)arg1 domainIdentifier:(id)arg2 materializingIfNeeded:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)fetchIndexPropertiesForItemAtURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchItemForItemID:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchItemForURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchOperationServiceForProviderDomainID:(id)arg0 handler:(id)arg1 ;
-(void)fetchParentForItem:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchParentsForItemID:(id)arg0 recursively:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)fetchRemoteDomainForProviderDomainID:(id)arg0 handler:(id)arg1 ;
-(void)fetchRootItemForProvider:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchRootItemForProviderDomain:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchServicesWithName:(id)arg0 itemAtURL:(id)arg1 synchronously:(BOOL)arg2 handler:(id)arg3 ;
-(void)fetchURLForItem:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchURLForItem:(id)arg0 creatingPlaceholderIfMissing:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)fetchURLForItemID:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchVendorServiceForProviderDomainID:(id)arg0 handler:(id)arg1 ;
-(void)recursivelyExportItem:(id)arg0 toURL:(id)arg1 completionHandler:(id)arg2 ;
-(void)scheduleAction:(id)arg0 ;


@end


#endif