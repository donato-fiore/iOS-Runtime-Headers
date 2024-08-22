// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLASSETSDDEBUGSERVICE_H
#define PLASSETSDDEBUGSERVICE_H

@class NSString;
@protocol PLAssetsdDebugServiceProtocol;


#import "PLAbstractLibraryServicesManagerService.h"
#import "PLAssetsdCPLResourceDownloader.h"
#import "PLPhotoLibraryBundleController.h"

@interface PLAssetsdDebugService : PLAbstractLibraryServicesManagerService <PLAssetsdDebugServiceProtocol>

 {
    PLAssetsdCPLResourceDownloader *_resourceDownloader;
    PLPhotoLibraryBundleController *_bundleController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_persistentStoreCoordinator;
-(id)initWithLibraryServicesManager:(id)arg0 resourceDownloader:(id)arg1 bundleController:(id)arg2 ;
-(void)asynchronousUnloadImageFilesForAssetWithObjectURI:(id)arg0 minimumFormat:(unsigned short)arg1 reply:(id)arg2 ;
-(void)cleanupEmptyHighlightsWithReply:(id)arg0 ;
-(void)clearPrefetchState;
-(void)coalesceJournalsForPayloadClassIDs:(id)arg0 withChangeJournalOverThreshold:(float)arg1 reply:(id)arg2 ;
-(void)debugSidecarURLsWithObjectURI:(id)arg0 reply:(id)arg1 ;
-(void)deferredLogDumpWithFormat:(id)arg0 reply:(id)arg1 ;
-(void)dropSearchIndexWithReply:(id)arg0 ;
-(void)dumpMetadataForMomentsToPath:(id)arg0 reply:(id)arg1 ;
-(void)dumpMomentsMetadataToPath:(id)arg0 reply:(id)arg1 ;
-(void)enqueuePrefetch;
-(void)getCPLStateForDebug:(BOOL)arg0 withReply:(id)arg1 ;
-(void)getXPCTransactionStatusWithReply:(id)arg0 ;
-(void)identifyAssetsWithInconsistentCloudState;
-(void)invalidateHighlightSubtitlesAndRegenerateHighlightTitlesWithCompletionBlock:(id)arg0 ;
-(void)momentGenerationStatusWithReply:(id)arg0 ;
-(void)prefetchResourcesForHighlights:(id)arg0 reply:(id)arg1 ;
-(void)prefetchResourcesForMemories:(id)arg0 reply:(id)arg1 ;
-(void)prefetchResourcesWithMode:(NSInteger)arg0 reply:(id)arg1 ;
-(void)privateDownloadCloudPhotoLibraryAsset:(id)arg0 resourceType:(NSUInteger)arg1 highPriority:(BOOL)arg2 reply:(id)arg3 ;
-(void)processRecentHighlightsWithReply:(id)arg0 ;
-(void)processUnprocessedMomentLocationsWithReply:(id)arg0 ;
-(void)pruneAssetsWithUUID:(id)arg0 resourceTypes:(id)arg1 reply:(id)arg2 ;
-(void)rebuildAllThumbnails;
-(void)rebuildCloudFeedWithReply:(id)arg0 ;
-(void)rebuildHighlightsDeletingExistingHighlights:(BOOL)arg0 reply:(id)arg1 ;
-(void)rebuildMomentsDeletingExistingMoments:(BOOL)arg0 reply:(id)arg1 ;
-(void)rebuildSearchIndexWithReply:(id)arg0 ;
-(void)rebuildTableThumbsWithReply:(id)arg0 ;
-(void)recoverAssetsInInconsistentCloudState;
-(void)resetDupesAnalysis;
-(void)revertToOriginalWithObjectURI:(id)arg0 reply:(id)arg1 ;
-(void)setSearchIndexPaused:(BOOL)arg0 reason:(id)arg1 reply:(id)arg2 ;
-(void)snapshotJournalsForPayloadClassIDs:(id)arg0 reply:(id)arg1 ;
-(void)statusWithReply:(id)arg0 ;
-(void)updateHighlightTitlesWithReply:(id)arg0 ;
-(void)updateSiriVocabulary;


@end


#endif