// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLASSETSDLIBRARYINTERNALCLIENT_H
#define PLASSETSDLIBRARYINTERNALCLIENT_H



#import "PLAssetsdBaseClient.h"

@interface PLAssetsdLibraryInternalClient : PLAssetsdBaseClient



-(BOOL)backgroundJobServiceRemoveAllBundleRecordsFromProcessingSet:(*id)arg0 ;
-(BOOL)invalidateBehavioralScoreOnAllAssetsWithError:(*id)arg0 ;
-(BOOL)invalidateReverseLocationDataOnAllAssetsWithError:(*id)arg0 ;
-(BOOL)registerBackgroundJobServiceIfNecessaryOnLibraryPath:(id)arg0 error:(*id)arg1 ;
-(BOOL)repairMemoriesWithUUIDs:(id)arg0 error:(*id)arg1 ;
-(BOOL)setKeywords:(id)arg0 forAssetWithUUID:(id)arg1 ;
-(BOOL)synchronouslyCheckAssetsArePendingForDuplicateMergeProcessing:(id)arg0 ;
-(BOOL)synchronouslyGetLibrarySizesFromDB:(BOOL)arg0 sizes:(*id)arg1 error:(*id)arg2 ;
-(BOOL)synchronouslyGetSizeOfResourcesToUploadByCPL:(*NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)synchronouslyMarkPersonAsNeedingKeyFace:(id)arg0 error:(*id)arg1 ;
-(BOOL)synchronouslyProcessIdenticalDuplicatesWithProcessingType:(NSUInteger)arg0 error:(*id)arg1 ;
-(NSUInteger)getBackgroundJobServiceStateWithError:(*id)arg0 ;
-(id)getBackgroundJobServiceBundlesInQueueDictionaryWithError:(*id)arg0 ;
-(id)getBackgroundJobServiceStatusCenterDumpWithError:(*id)arg0 ;
-(id)metricsForLibraryAtURL:(id)arg0 syncedAssetCount:(*NSUInteger)arg1 nonSyncedAssetCount:(*NSUInteger)arg2 error:(*id)arg3 ;
-(void)applySearchIndexGraphUpdates:(id)arg0 supportingData:(id)arg1 completionHandler:(id)arg2 ;
-(void)applySearchIndexUpdates:(id)arg0 completionHandler:(id)arg1 ;
-(void)coreAnalyticsLibrarySummaryDataWithCompletionHandler:(id)arg0 ;
-(void)deleteiTunesSyncedContentWithCompletionHandler:(id)arg0 ;
-(void)forceRunBackgroundJobsOnLibraryPath:(id)arg0 criteriaShortCode:(id)arg1 completionHandler:(id)arg2 ;
-(void)getAssetCountsWithReply:(id)arg0 ;
-(void)getLibrarySizesFromDB:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)getSearchIndexProgress:(id)arg0 ;
-(void)getSearchIndexRebuildInfo:(id)arg0 ;
-(void)markPersonAsNeedingKeyFace:(id)arg0 completionHandler:(id)arg1 ;
-(void)mergeDuplicateAssetUuidSelection:(id)arg0 completionHandler:(id)arg1 ;
-(void)reloadMomentGenerationOptions;
-(void)resetLimitedLibraryAccessForApplication:(id)arg0 completionHandler:(id)arg1 ;
-(void)setFetchFilterWithAssets:(id)arg0 forApplication:(id)arg1 withAuditToken:(struct ? )arg2 completionHandler:(id)arg3 ;
-(void)setWidgetTimelineGeneratedForDisplaySize:(struct CGSize )arg0 completionHandler:(id)arg1 ;
-(void)updateAssetLocationDataWithUUID:(id)arg0 completionHandler:(id)arg1 ;
-(void)waitForSearchIndexExistence:(id)arg0 ;


@end


#endif