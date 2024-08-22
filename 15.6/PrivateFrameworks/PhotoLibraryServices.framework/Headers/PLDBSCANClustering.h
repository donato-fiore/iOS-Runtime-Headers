// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLDBSCANCLUSTERING_H
#define PLDBSCANCLUSTERING_H



#import "PLDataDensityClustering.h"

@interface PLDBSCANClustering : PLDataDensityClustering



-(id)_expandClusterForObject:(id)arg0 dataset:(id)arg1 objectsMappedToCluster:(struct __CFSet *)arg2 visitedObjects:(*NSUInteger)arg3 distancesFlatMatrix:(*CGFloat)arg4 neighbors:(id)arg5 ;
-(id)_neighborsAtIndex:(NSUInteger)arg0 withDistancesFlatMatrix:(*CGFloat)arg1 datasetSize:(NSUInteger)arg2 ;
-(id)performWithDataset:(id)arg0 progressBlock:(id)arg1 ;


@end


#endif