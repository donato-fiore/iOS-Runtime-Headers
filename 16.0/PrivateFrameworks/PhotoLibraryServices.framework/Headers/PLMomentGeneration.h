// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLMOMENTGENERATION_H
#define PLMOMENTGENERATION_H

@class NSMutableOrderedSet, NSMutableDictionary, NSMutableArray;
@protocol OS_dispatch_queue, PLMomentGenerationDataManagement><PLHighlightItemModelReader;

#import <Foundation/Foundation.h>

#import "PLFrequentLocationManager.h"
#import "PLLocalCreationDateCreator.h"
#import "PLMomentGenerationThrottle.h"
#import "PLPhotoLibraryBundle.h"
#import "PLDateRangeTitleGenerator.h"

@interface PLMomentGeneration : NSObject {
    NSUInteger _inProgressCount;
    NSMutableOrderedSet *_pendingInsertsAndUpdates;
    NSMutableDictionary *_pendingDeletes;
    NSMutableOrderedSet *_pendingUpdatesForHighlights;
    NSMutableOrderedSet *_pendingMomentUpdatesForHighlights;
    NSMutableDictionary *_pendingSharedAssetContainerIncrementalChanges;
    NSMutableArray *_pendingCompletionBlocks;
    NSObject<OS_dispatch_queue> *_incrementalGenerationStateQueue;
    PLFrequentLocationManager *_frequentLocationManager;
    PLLocalCreationDateCreator *_localCreationDateCreator;
    PLMomentGenerationThrottle *_incrementalMomentGenThrottle;
    PLPhotoLibraryBundle *_libraryBundle;
    PLDateRangeTitleGenerator *_dateRangeTitleGenerator;
}


@property (readonly, weak, nonatomic) NSObject<PLMomentGenerationDataManagement><PLHighlightItemModelReader> *momentGenerationDataManager; // ivar: _momentGenerationDataManager


+(id)dateIntervalsAroundSortedDates:(id)arg0 minimumIntervalDuration:(CGFloat)arg1 ;
-(BOOL)_hasWorkWorkRemainingWithCompletionBlocks:(*id)arg0 ;
-(BOOL)_isAsset:(id)arg0 identicalToAssetForMoments:(id)arg1 ;
-(BOOL)_writeDetails:(id)arg0 toFilepath:(id)arg1 withDefaultFilename:(id)arg2 ;
-(BOOL)isGenerationPassInProgress;
-(BOOL)rebuildAllMomentsWithManager:(id)arg0 error:(*id)arg1 ;
-(BOOL)regenerateMonthHighlightTitlesWithManager:(id)arg0 error:(*id)arg1 ;
-(id)_detailsForAsset:(id)arg0 simpleOnly:(BOOL)arg1 ;
-(id)_detailsForMoment:(id)arg0 ;
-(id)_highlightGenerator;
-(id)_logEntryForAssets:(id)arg0 isBatchUpdate:(BOOL)arg1 ;
-(id)_newPublicGlobalUUIDsToAssetsMappingWithAssets:(id)arg0 ;
-(id)allAssetMetadataWriteToFile:(id)arg0 ;
-(id)allMomentsMetadataWriteToFile:(id)arg0 ;
-(id)frequentLocationManager;
-(id)initWithMomentGenerationDataManager:(id)arg0 bundle:(id)arg1 ;
-(id)initWithMomentGenerationDataManager:(id)arg0 bundle:(id)arg1 locale:(id)arg2 ;
-(id)localCreationDateCreator;
-(id)momentGenerationStatus;
-(void)_appendAssetsToReplayLog:(id)arg0 forBatchUpdate:(BOOL)arg1 ;
-(void)_clearReplayLog;
-(void)_runIncrementalGenerationPassWithCompletionHandler:(id)arg0 ;
-(void)_runIncrementalMomentGenerationIfItemsArePendingWithCompletion:(id)arg0 ;
-(void)_runMomentAndHighlightGenerationForAssets:(id)arg0 hiddenAssets:(id)arg1 updatedAssetIDsForHighlights:(id)arg2 updatedMomentIDsForHighlights:(id)arg3 affectedMoments:(id)arg4 highlightsWithDeletedMoments:(id)arg5 sharedAssetContainerIncrementalChanges:(id)arg6 insertedOrUpdatedMoments:(*id)arg7 ;
-(void)_updateIncrementalMomentGeneration;
-(void)cleanupEmptyHighlightsWithCompletionBlock:(id)arg0 ;
-(void)generateWithAssetInsertsAndUpdates:(id)arg0 assetDeletes:(id)arg1 assetUpdatesForHighlights:(id)arg2 momentUpdatesForHighlights:(id)arg3 completionHandler:(id)arg4 ;
-(void)generateWithIncrementalDataCompletionHandler:(id)arg0 ;
-(void)invalidateHighlightSubtitlesAndRegenerateHighlightTitlesWithCompletionBlock:(id)arg0 ;
-(void)invalidateHighlightSubtitlesAndRegenerateHighlightTitlesWithForceUpdateLocale:(BOOL)arg0 completionBlock:(id)arg1 ;
-(void)processRecentHighlightsWithCompletionBlock:(id)arg0 ;
-(void)processUnprocessedMomentLocationsWithCompletionBlock:(id)arg0 ;
-(void)rebuildAllHighlightsWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)rebuildAllMomentsWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)releaseMemoryIntensiveObjects;
-(void)saveChangesForAssetInsertsAndUpdates:(id)arg0 assetDeletes:(id)arg1 assetUpdatesForHighlights:(id)arg2 momentUpdatesForHighlights:(id)arg3 sharedAssetContainerIncrementalChangesByAssetID:(id)arg4 ;
-(void)updateHighlightTitlesWithCompletionBlock:(id)arg0 ;
-(void)validateLibraryWithCompletionBlock:(id)arg0 ;


@end


#endif