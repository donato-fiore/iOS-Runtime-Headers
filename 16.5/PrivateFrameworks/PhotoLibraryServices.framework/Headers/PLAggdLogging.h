// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLAGGDLOGGING_H
#define PLAGGDLOGGING_H


#import <Foundation/Foundation.h>


@interface PLAggdLogging : NSObject



+(id)_analyticsDescriptionForAssetCount:(NSInteger)arg0 ;
+(id)_analyticsDescriptionForMediaAge:(CGFloat)arg0 ;
+(id)_fetchPersistentHistoryStatsWithLibraryPathManager:(id)arg0 ;
+(void)_addDistributionStatisticsOfValues:(id)arg0 withPrefix:(id)arg1 toDictionary:(id)arg2 formatter:(id)arg3 ;
+(void)_addFileSystemStatsToLibrarySummaryEvent:(id)arg0 withLibraryPathManager:(id)arg1 ;
+(void)_addLibrarySummaryDataToCollectionIfPresent:(id)arg0 fromCPLEventData:(id)arg1 forKey:(id)arg2 ;
+(void)_addOrphanedSceneClassificationsCountToLibrarySummaryEvent:(id)arg0 withContext:(id)arg1 ;
+(void)_addPersistentHistoryStatsToLibrarySummaryEvent:(id)arg0 withLibraryPathManager:(id)arg1 ;
+(void)_addPrefix:(id)arg0 toKeysInDictionary:(id)arg1 inPrefixedDictionary:(id)arg2 ;
+(void)_configureEnumeratorForLibrarySummaryLogging:(id)arg0 cloudPhotoLibraryEnabled:(BOOL)arg1 dataForCA:(id)arg2 ;
+(void)_configureEnumeratorForSyndicationLibrarySummaryLogging:(id)arg0 dataForCA:(id)arg1 ;
+(void)configureEnumeratorForHyperionLocalResourcesLogging:(id)arg0 cloudPhotoLibraryEnabled:(BOOL)arg1 dataForCA:(id)arg2 dataForCK:(id)arg3 ;
+(void)configureEnumeratorForLibrarySizeLogging:(id)arg0 cloudPhotoLibraryEnabled:(BOOL)arg1 dataForCA:(id)arg2 dataForCK:(id)arg3 ;
+(void)configureEnumeratorForLibrarySummaryForLibraryEnumerator:(id)arg0 withSyndicationLibraryEnumerator:(id)arg1 cloudPhotoLibraryEnabled:(BOOL)arg2 dataForCA:(id)arg3 ;
+(void)performCMMSummaryLogging:(id)arg0 cloudPhotoLibraryEnabled:(BOOL)arg1 ;
+(void)performLibraryStatisticsLoggingForLibrary:(id)arg0 completionHandler:(id)arg1 ;
+(void)performMomentsStatisticsLogging:(id)arg0 ;
+(void)performSlideshowProjectStatisticsLogging:(id)arg0 ;


@end


#endif