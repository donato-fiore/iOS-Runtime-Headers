// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPDDOMAINEXTENSIONBACKEND_H
#define FPDDOMAINEXTENSIONBACKEND_H

@class NSMutableDictionary, NSData, NSString, NSFileProviderDomainVersion, NSArray;
@protocol FPDDomainBackend, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "FPDDomain.h"

@interface FPDDomainExtensionBackend : NSObject <FPDDomainBackend>

 {
    FPDDomain *_domain;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _invalidated;
    NSMutableDictionary *_provideFileCompletionsByURL;
}


@property (readonly, nonatomic) BOOL backgroundActivityIsPaused;
@property (readonly, nonatomic) NSData *backingStoreIdentity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSFileProviderDomainVersion *domainVersion;
@property (readonly, nonatomic) NSInteger errorGenerationCount;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSArray *rootURLs;
@property (readonly) Class superclass;


-(BOOL)isProviderForURL:(id)arg0 ;
-(BOOL)needsRootsCreation;
-(BOOL)start;
-(BOOL)updateRootAfterDomainChangeWithError:(*id)arg0 ;
-(id)createIndexerWithExtension:(id)arg0 enabled:(BOOL)arg1 error:(*id)arg2 ;
-(id)createRootByImportingURL:(id)arg0 error:(*id)arg1 ;
-(id)evictItemAtURL:(id)arg0 request:(id)arg1 completionHandler:(id)arg2 ;
-(id)initWithDomain:(id)arg0 ;
-(id)newFileProviderProxyWithRequest:(id)arg0 ;
-(id)newFileProviderProxyWithTimeoutValue:(CGFloat)arg0 request:(id)arg1 ;
-(id)nsfpRequest:(id)arg0 ;
-(id)startProvidingItemAtURL:(id)arg0 readerID:(id)arg1 readingOptions:(NSUInteger)arg2 request:(id)arg3 completionHandler:(id)arg4 ;
-(void)URLForItemID:(id)arg0 creatingPlaceholderIfMissing:(BOOL)arg1 ignoreAlternateContentsURL:(BOOL)arg2 request:(id)arg3 completionHandler:(id)arg4 ;
-(void)_cancelProvidingItemAtURL:(id)arg0 withKey:(id)arg1 request:(id)arg2 ;
-(void)bulkItemChanges:(id)arg0 changedFields:(NSUInteger)arg1 request:(id)arg2 completionHandler:(id)arg3 ;
-(void)copyDatabaseToURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)createItemBasedOnTemplate:(id)arg0 fields:(NSUInteger)arg1 urlWrapper:(id)arg2 options:(NSUInteger)arg3 bounceOnCollision:(BOOL)arg4 request:(id)arg5 completionHandler:(id)arg6 ;
-(void)currentMaterializedSetSyncAnchorWithCompletionHandler:(id)arg0 ;
-(void)currentPendingSetSyncAnchorWithCompletionHandler:(id)arg0 ;
-(void)didIndexOneBatchWithError:(id)arg0 updatedItems:(id)arg1 deletedIDs:(id)arg2 anchor:(id)arg3 ;
-(void)dumpStateTo:(id)arg0 limitNumberOfItems:(BOOL)arg1 ;
-(void)enumerateMaterializedSetFromSyncAnchor:(id)arg0 suggestedBatchSize:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)enumeratePendingSetFromSyncAnchor:(id)arg0 suggestedBatchSize:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)enumerateWithSettings:(id)arg0 lifetimeExtender:(id)arg1 observer:(id)arg2 completionHandler:(id)arg3 ;
-(void)evictItemWithID:(id)arg0 request:(id)arg1 completionHandler:(id)arg2 ;
-(void)fetchFSItemsForItemIdentifiers:(id)arg0 materializingIfNeeded:(BOOL)arg1 request:(id)arg2 completionHandler:(id)arg3 ;
-(void)fetchOperationServiceOrEndpointWithRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchServicesForItemID:(id)arg0 allowRestrictedSources:(BOOL)arg1 request:(id)arg2 completionHandler:(id)arg3 ;
-(void)fetchVendorEndpointWithRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)hasNonUploadedFilesWithCompletionHandler:(id)arg0 ;
-(void)invalidate;
-(void)itemChangedAtURL:(id)arg0 request:(id)arg1 ;
-(void)itemForItemID:(id)arg0 request:(id)arg1 completionHandler:(id)arg2 ;
-(void)itemForURL:(id)arg0 request:(id)arg1 completionHandler:(id)arg2 ;
-(void)itemIDForURL:(id)arg0 request:(id)arg1 completionHandler:(id)arg2 ;
-(void)materializeItemWithID:(id)arg0 requestedRange:(struct _NSRange )arg1 request:(id)arg2 completionHandler:(id)arg3 ;
-(void)movingItemAtURL:(id)arg0 requiresProvidingWithDestinationURL:(id)arg1 completionHandler:(id)arg2 ;
-(void)reimportItemsBelowItemWithID:(id)arg0 removeCachedItems:(BOOL)arg1 markItemDataless:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)resolveConflictAtURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)stateWithCompletionHandler:(id)arg0 ;
-(void)trashItemAtURL:(id)arg0 request:(id)arg1 completionHandler:(id)arg2 ;
-(void)valuesForAttributes:(id)arg0 forURL:(id)arg1 request:(id)arg2 completionHandler:(id)arg3 ;
-(void)waitForStabilizationForRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)wakeForPushWithCompletionHandler:(id)arg0 ;
-(void)workingSetDidChangeWithCompletionHandler:(id)arg0 ;


@end


#endif