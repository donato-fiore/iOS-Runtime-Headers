// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLHIERARCHICALCLUSTERING_H
#define PLHIERARCHICALCLUSTERING_H



#import "PLDataClustering.h"

@interface PLHierarchicalClustering : PLDataClustering

@property (nonatomic) NSUInteger k; // ivar: _k
@property (nonatomic) NSUInteger linkage; // ivar: _linkage
@property (nonatomic) BOOL reportsProgressInDistancesMatrixCalculation; // ivar: _reportsProgressInDistancesMatrixCalculation
@property (nonatomic) CGFloat threshold; // ivar: _threshold
@property (nonatomic) BOOL usesSortedDataRelativeDistanceCache; // ivar: _usesSortedDataRelativeDistanceCache


-(*CGFloat)_createRelativeDistanceCacheForDataset:(id)arg0 ;
-(NSUInteger)_clustroidIndexForClusters:(*NSUInteger)arg0 numberOfObjects:(NSUInteger)arg1 distances:(**CGFloat)arg2 relativeDistanceCache:(*CGFloat)arg3 ;
-(id)init;
-(id)performWithDataset:(id)arg0 progressBlock:(id)arg1 ;


@end


#endif