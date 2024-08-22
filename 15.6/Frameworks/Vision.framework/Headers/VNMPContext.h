// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNMPCONTEXT_H
#define VNMPCONTEXT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface VNMPContext : NSObject

@property int clusterSplitDistanceType; // ivar: _clusterSplitDistanceType
@property int debugMode; // ivar: _debugMode
@property float inliersRatioThreshold; // ivar: _inliersRatioThreshold
@property float naturalClusteringDistanceThreshold; // ivar: _naturalClusteringDistanceThreshold
@property int numberOfKeypointsToConsider; // ivar: _numberOfKeypointsToConsider
@property BOOL performClustersPostprocessing; // ivar: _performClustersPostprocessing
@property BOOL performSceneClassification; // ivar: _performSceneClassification
@property (retain) NSArray *qualityCriteriaList; // ivar: _qualityCriteriaList
@property float roiAreaThreshold; // ivar: _roiAreaThreshold
@property int timerMode; // ivar: _timerMode
@property BOOL useTimestampAdjustedDistances; // ivar: _useTimestampAdjustedDistances




@end


#endif