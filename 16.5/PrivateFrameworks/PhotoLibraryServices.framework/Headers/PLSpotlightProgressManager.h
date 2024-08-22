// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLSPOTLIGHTPROGRESSMANAGER_H
#define PLSPOTLIGHTPROGRESSMANAGER_H


#import <Foundation/Foundation.h>


@interface PLSpotlightProgressManager : NSObject



+(BOOL)_addSearchableItemIdentifiers:(id)arg0 operationType:(NSUInteger)arg1 forPhotoLibraryPathManager:(id)arg2 isRetry:(BOOL)arg3 ;
+(BOOL)_shouldRetryReindexWithScheduledDateOf:(id)arg0 ;
+(BOOL)_shouldRetryRequestWithMostRecentAttemptOf:(id)arg0 ;
+(BOOL)_writeProgressToDisk:(id)arg0 forPhotoLibraryPathManager:(id)arg1 ;
+(BOOL)addSearchableItemIdentifiers:(id)arg0 forOperationType:(NSUInteger)arg1 forPhotoLibraryPathManager:(id)arg2 ;
+(BOOL)deleteSpotlightProgressForPhotoLibraryPathManager:(id)arg0 ;
+(BOOL)didPreviouslySetSpotlightNeedsIndexRebuild;
+(BOOL)removeSearchableItemIdentifiers:(id)arg0 forPhotoLibraryPathManager:(id)arg1 ;
+(BOOL)setSpotlightIndexNeedsReindexing:(BOOL)arg0 forPhotoLibraryPathManager:(id)arg1 ;
+(BOOL)shouldPerformSpotlightOperationOfType:(NSUInteger)arg0 withSearchableItemIdentifiers:(id)arg1 photoLibraryPathManager:(id)arg2 ;
+(BOOL)shouldPerformSpotlightOperationsWithPhotoLibraryPathManager:(id)arg0 ;
+(BOOL)shouldReindexSpotlightIndexForPhotoLibraryPathManager:(id)arg0 ;
+(BOOL)shouldRetrySpotlightIndexDropForUniversalSearchEligibilityChange;
+(BOOL)spotlightOperationCompletedForOperationType:(NSUInteger)arg0 withSearchableIdentifiers:(id)arg1 forPhotoLibraryPathManager:(id)arg2 success:(BOOL)arg3 ;
+(BOOL)spotlightResetOperationCompletedForPhotoLibraryPathManager:(id)arg0 success:(BOOL)arg1 ;
+(BOOL)universalSearchEligibilityDidChangeForSPLWithDatabaseUUID:(id)arg0 currentSPLPath:(id)arg1 currentEligibility:(BOOL)arg2 ;
+(id)_minimumScheduledDateForNextReindexRetry;
+(id)_progressFilePathForPhotoLibraryPathManager:(id)arg0 ;
+(id)_readProgressFromDiskForPhotoLibraryPathManager:(id)arg0 ;
+(id)_storageKeyForOperationType:(NSUInteger)arg0 ;
+(id)_updateFailureCountsForSearchableItemIdentifiers:(id)arg0 shouldIncrementCounts:(BOOL)arg1 forPhotoLibraryPathManager:(id)arg2 ;
+(id)lastKnownSystemPhotoLibraryPath;
+(void)setUniversalSearchEligibility:(BOOL)arg0 systemPhotoLibraryPath:(id)arg1 systemPhotoLibraryDatabaseUUID:(id)arg2 needsSpotlightIndexDrop:(BOOL)arg3 needsSpotlightIndexRebuild:(BOOL)arg4 ;
+(void)spotlightProgressForPhotoLibraryPathManager:(id)arg0 completion:(id)arg1 ;


@end


#endif