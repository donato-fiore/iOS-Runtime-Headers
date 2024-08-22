// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSASSETSBEAUTIFIER_H
#define CLSASSETSBEAUTIFIER_H

@class NSSet;
@protocol OS_os_log;

#import <Foundation/Foundation.h>

#import "CLSSimilarStacker.h"

@interface CLSAssetsBeautifier : NSObject {
    CLSSimilarStacker *_similarStacker;
}


@property (nonatomic) BOOL discardNonEligibleClustersInSampling; // ivar: _discardNonEligibleClustersInSampling
@property (nonatomic) BOOL enableFinalNaturalClustering; // ivar: _enableFinalNaturalClustering
@property (nonatomic) BOOL enableFinalTimeClustering; // ivar: _enableFinalTimeClustering
@property (nonatomic) BOOL enableIntermediateNaturalClustering; // ivar: _enableIntermediateNaturalClustering
@property (nonatomic) BOOL enableNetworkAccess; // ivar: _enableNetworkAccess
@property (nonatomic) BOOL enableStatisticalSampling; // ivar: _enableStatisticalSampling
@property (copy, nonatomic) NSSet *identifiersOfEligibleItems; // ivar: _identifiersOfEligibleItems
@property (copy, nonatomic) NSSet *identifiersOfRequiredItems; // ivar: _identifiersOfRequiredItems
@property (retain, nonatomic) NSObject<OS_os_log> *loggingConnection; // ivar: _loggingConnection
@property (nonatomic) BOOL usesKMeans; // ivar: _usesKMeans


+(id)beautifier;
-(BOOL)itemIsRequired:(id)arg0 ;
-(id)_clustersBySplittingZeroDiameterClustersInClusters:(id)arg0 targetingNumberOfClusters:(NSUInteger)arg1 ;
-(id)_naturalClusteringBestItemInItems:(id)arg0 ;
-(id)_naturalClusteringWithItems:(id)arg0 withSimilarity:(NSInteger)arg1 timestampSupport:(BOOL)arg2 debugInfo:(id)arg3 ;
-(id)bestItemInItems:(id)arg0 ;
-(id)deduplicateItems:(id)arg0 debugInfo:(id)arg1 ;
-(id)deduplicateItems:(id)arg0 withDuration:(CGFloat)arg1 andSimilarity:(NSInteger)arg2 debugInfo:(id)arg3 ;
-(id)hierarchicalClusteringDistanceBlock:(SEL)arg0 ;
-(id)init;
-(id)performWithItems:(id)arg0 maximumNumberOfItemsToChoose:(NSUInteger)arg1 debugInfo:(id)arg2 progressBlock:(id)arg3 ;
-(id)performWithItems:(id)arg0 maximumNumberOfItemsToChoose:(NSUInteger)arg1 progressBlock:(id)arg2 ;
-(id)rankSimilarItems:(id)arg0 ;
-(id)requiredItemsInItems:(id)arg0 ;
-(id)sampledItemsInSortedItems:(id)arg0 maximumNumberOfItemsToChoose:(NSUInteger)arg1 debugInfo:(id)arg2 progressBlock:(id)arg3 ;
-(id)sortedItemsWithItems:(id)arg0 ;
-(id)timeClusteringDistanceBlock:(SEL)arg0 ;


@end


#endif