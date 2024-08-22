// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLASSETSDDEBUGCLIENT_H
#define PLASSETSDDEBUGCLIENT_H



#import "PLAssetsdBaseClient.h"

@interface PLAssetsdDebugClient : PLAssetsdBaseClient



-(BOOL)allMomentsMetadataWithOutputPath:(id)arg0 metadataDictionary:(*id)arg1 error:(*id)arg2 ;
-(BOOL)archiveComputeCacheWithError:(*id)arg0 ;
-(BOOL)cleanupEmptyHighlightsWithError:(*id)arg0 ;
-(BOOL)debugSidecarFileURLsForAsset:(id)arg0 debugSidecarFileURLs:(*id)arg1 error:(*id)arg2 ;
-(BOOL)dumpMetadataForMomentsWithOutputPath:(id)arg0 metadataDirectory:(*id)arg1 error:(*id)arg2 ;
-(BOOL)invalidateHighlightSubtitlesAndRegenerateHighlightTitlesWithError:(*id)arg0 ;
-(BOOL)processRecentHighlightsWithError:(*id)arg0 ;
-(BOOL)processUnprocessedMomentLocationsWithError:(*id)arg0 ;
-(BOOL)rebuildHighlightsDeletingExistingHighlights:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)rebuildMomentsDeletingExistingMoments:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)rebuildSearchIndexWithError:(*id)arg0 ;
-(BOOL)resetComputeCacheWithError:(*id)arg0 ;
-(BOOL)restoreComputeCacheWithError:(*id)arg0 ;
-(BOOL)revertToOriginalForAsset:(id)arg0 error:(*id)arg1 ;
-(BOOL)synchronouslySetSearchIndexPaused:(BOOL)arg0 reason:(id)arg1 error:(*id)arg2 ;
-(BOOL)updateHighlightTitlesWithError:(*id)arg0 ;
-(NSInteger)removeAllThumbnailsForDryRun:(BOOL)arg0 count:(*NSUInteger)arg1 ;
-(id)computeCacheStatusWithError:(*id)arg0 ;
-(id)deferredLogDumpWithFormat:(id)arg0 ;
-(id)getCPLStateForDebug:(BOOL)arg0 ;
-(id)getStatus;
-(id)getTaskConstraintStatus;
-(id)getXPCTransactionStatus;
-(id)momentGenerationStatus;
-(id)syndicationIngestMutexStateDescriptionWithError:(*id)arg0 ;
-(void)clearPrefetchState;
-(void)coalesceJournalsForManagerName:(id)arg0 payloadClassIDs:(id)arg1 withChangeJournalOverThreshold:(float)arg2 completionHandler:(id)arg3 ;
-(void)dropSearchIndexWithCompletionHandler:(id)arg0 ;
-(void)enqueuePrefetch;
-(void)identifyAssetsWithInconsistentCloudState;
-(void)prefetchResourcesForHighlights:(id)arg0 ;
-(void)prefetchResourcesForMemories:(id)arg0 ;
-(void)prefetchResourcesWithMode:(NSInteger)arg0 ;
-(void)privateDownloadCloudPhotoLibraryAsset:(id)arg0 resourceType:(NSUInteger)arg1 highPriority:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)pruneAssets:(id)arg0 resourceTypes:(id)arg1 ;
-(void)rebuildAllThumbnails;
-(void)rebuildCloudFeed;
-(void)rebuildTableThumbs;
-(void)recoverAssetsInInconsistentCloudState;
-(void)resetDupesAnalysis;
-(void)setSearchIndexPaused:(BOOL)arg0 reason:(id)arg1 completionHandler:(id)arg2 ;
-(void)snapshotJournalsForManagerName:(id)arg0 payloadClassIDs:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)unloadImageFilesForAsset:(id)arg0 minimumFormat:(int)arg1 completionHandler:(id)arg2 ;
-(void)updateSiriVocabulary;
-(void)waitForMomentGeneration;


@end


#endif