// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGDEJUNKERDEDUPER_H
#define PGDEJUNKERDEDUPER_H

@class CLSSimilarStacker, PLKMeansClustering;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface PGDejunkerDeduper : NSObject {
    CLSSimilarStacker *_similarStacker;
    PLKMeansClustering *_kMeanTimeClusterer;
}


@property (retain, nonatomic) NSObject<OS_os_log> *loggingConnection; // ivar: _loggingConnection


-(BOOL)isJunkForItem:(id)arg0 ;
-(BOOL)shouldPerformIdenticalDedupingForItemFeature:(id)arg0 options:(id)arg1 ;
-(BOOL)shouldPerformSemanticalDedupingForItemFeature:(id)arg0 options:(id)arg1 ;
-(CGFloat)identicalDedupingSimilarityForItemFeature:(id)arg0 options:(id)arg1 ;
-(CGFloat)identicalDedupingTimeIntervalForItemFeature:(id)arg0 options:(id)arg1 ;
-(CGFloat)semanticalDedupingSimilarityForItemFeature:(id)arg0 options:(id)arg1 ;
-(CGFloat)semanticalDedupingTimeIntervalForItemFeature:(id)arg0 options:(id)arg1 ;
-(id)bestItemGroupsBasedOnFaceprintsWithItemGroups:(id)arg0 options:(id)arg1 ;
-(id)bestItemGroupsBasedOnSceneprintsWithItemGroups:(id)arg0 options:(id)arg1 ;
-(id)bestItemsInItems:(id)arg0 options:(id)arg1 ;
-(id)debugPersonStringForItem:(id)arg0 ;
-(id)dejunkedDedupedItemsInItems:(id)arg0 options:(id)arg1 debugInfo:(id)arg2 progressBlock:(id)arg3 ;
-(id)dejunkedItemsWithItems:(id)arg0 options:(id)arg1 debugInfo:(id)arg2 progressBlock:(id)arg3 ;
-(id)faceprintByPersonLocalIdentifierByItemIdentifierWithItems:(id)arg0 ;
-(id)featureWithItem:(id)arg0 ;
-(id)finalItemsWithItems:(id)arg0 options:(id)arg1 debugInfo:(id)arg2 progressBlock:(id)arg3 ;
-(id)identicallyDedupedItemsInItems:(id)arg0 options:(id)arg1 debugInfo:(id)arg2 progressBlock:(id)arg3 ;
-(id)init;
-(id)itemsByFeatureWithItems:(id)arg0 ;
-(id)itemsSortedByScoreWithItems:(id)arg0 options:(id)arg1 ;
-(id)requiredItemsInItems:(id)arg0 options:(id)arg1 containStronglyRequiredItems:(*BOOL)arg2 ;
-(id)semanticallyDedupedItemsInItems:(id)arg0 options:(id)arg1 debugInfo:(id)arg2 progressBlock:(id)arg3 ;
-(id)splitItemGroupsWithItemGroups:(id)arg0 maximumNumberOfItemsPerGroup:(NSUInteger)arg1 debugInfo:(id)arg2 ;
-(id)splitItemGroupsWithTimeSortedItems:(id)arg0 numberOfBuckets:(NSUInteger)arg1 ;
-(id)timeGroupsOfTimeSortedItemsWithTimeSortedItems:(id)arg0 timeInterval:(CGFloat)arg1 maximumTimeGroupExtension:(CGFloat)arg2 ;
-(id)timeSortedItemsWithItems:(id)arg0 ;


@end


#endif