// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLREGIONSDENSITYCLUSTERING_H
#define PLREGIONSDENSITYCLUSTERING_H



#import "PLRegionsClustering.h"

@interface PLRegionsDensityClustering : PLRegionsClustering

@property (nonatomic) NSUInteger algorithm; // ivar: _algorithm
@property (nonatomic) CGFloat definiteClusterMaximumDistanceUnit; // ivar: _definiteClusterMaximumDistanceUnit
@property (nonatomic) NSUInteger definiteClusterMinimumNumberOfObjects; // ivar: _definiteClusterMinimumNumberOfObjects
@property (nonatomic) CGFloat definiteClusterMinimumNumberOfObjectsPercent; // ivar: _definiteClusterMinimumNumberOfObjectsPercent
@property (nonatomic) CGFloat definiteClusterTimeIntervalDistance; // ivar: _definiteClusterTimeIntervalDistance
@property (nonatomic) CGFloat extensiveClusterMaximumDistanceUnit; // ivar: _extensiveClusterMaximumDistanceUnit
@property (nonatomic) NSUInteger extensiveClusterMinimumNumberOfObjects; // ivar: _extensiveClusterMinimumNumberOfObjects
@property (nonatomic) CGFloat extensiveClusterMinimumNumberOfObjectsPercent; // ivar: _extensiveClusterMinimumNumberOfObjectsPercent
@property (nonatomic) CGFloat extensiveClusterTimeIntervalDistance; // ivar: _extensiveClusterTimeIntervalDistance
@property (nonatomic) BOOL includeDefiniteClusters; // ivar: _includeDefiniteClusters
@property (nonatomic) BOOL includeExtensiveClusters; // ivar: _includeExtensiveClusters
@property (nonatomic) BOOL removeDefiniteClustersObjectsFromDataset; // ivar: _removeDefiniteClustersObjectsFromDataset
@property (nonatomic) BOOL removeExtensiveClustersContainingDefiniteClusters; // ivar: _removeExtensiveClustersContainingDefiniteClusters
@property (nonatomic) BOOL removeExtensiveClustersObjectsFromDataset; // ivar: _removeExtensiveClustersObjectsFromDataset


-(id)_locationBasedClusteringBlock:(SEL)arg0 ;
-(id)_timeAndLocationBasedClusteringBlockWithTimeIntervalDistance:(SEL)arg0 ;
-(id)init;
-(id)performWithDataset:(id)arg0 progressBlock:(id)arg1 ;


@end


#endif