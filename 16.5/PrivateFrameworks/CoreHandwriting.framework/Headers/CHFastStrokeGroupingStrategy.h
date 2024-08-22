// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHFASTSTROKEGROUPINGSTRATEGY_H
#define CHFASTSTROKEGROUPINGSTRATEGY_H

@class NSArray;


#import "CHStrokeGroupingStrategy.h"
#import "CHStrokeClutterFilter.h"

@interface CHFastStrokeGroupingStrategy : CHStrokeGroupingStrategy {
    NSArray *_locales;
    CHStrokeClutterFilter *_clutterFilter;
}




-(?)_wordClustersForInitialClusters;
-(?)clustersForStrokesshouldMakeSingleCluster;
-(float)_maxDistanceThresholdForTokenizationLevel:(NSInteger)arg0 ;
-(id)_strokeIdentifiersForContextStrokes:(id)arg0 clusters:(*void)arg1 clusteredStrokes:(id)arg2 tokenizationLevel:(NSInteger)arg3 fastGroupingResult:(id)arg4 ;
-(id)fastGroupingResultWithFastGroupingClusters:(*void)arg0 clusteredStrokes:(id)arg1 ;
-(id)groupingResultForContextStrokes:(id)arg0 clusteredStrokes:(id)arg1 fastGroupingResult:(id)arg2 point:(struct CGPoint )arg3 tokenizationLevel:(NSInteger)arg4 ;
-(id)groupingResultUsingStrokes:(id)arg0 distanceMetric:(int)arg1 mergingDistanceThreshold:(CGFloat)arg2 shouldCancel:(id)arg3 ;
-(id)initWithStrokeProvider:(id)arg0 locales:(id)arg1 clutterFilter:(id)arg2 ;
-(id)lineGroupingResultUsingStrokes:(id)arg0 shouldCancel:(id)arg1 ;
-(id)strategyIdentifier;
-(struct vector<CHFastGroupingCluster, std::allocator<CHFastGroupingCluster>> )_agglomerativeClusteringUsingInitialClusters:(*void)arg0 distanceMetric:(int)arg1 maxDistanceThreshold:(float)arg2 shouldCancel:(id)arg3 ;
-(void)_filterClusters:(*void)arg0 usingContextStrokes:(id)arg1 clusteredStrokes:(id)arg2 ;


@end


#endif