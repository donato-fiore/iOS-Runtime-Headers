// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHLOCATIONHELPER_H
#define PGGRAPHLOCATIONHELPER_H

@class MABinaryAdjacency;

#import <Foundation/Foundation.h>

#import "PGGraph.h"

@interface PGGraphLocationHelper : NSObject {
    PGGraph *_graph;
    os_unfair_lock_s _locationHelperLock;
    MABinaryAdjacency *_countryAdjacency;
    MABinaryAdjacency *_stateAdjacency;
    MABinaryAdjacency *_countyAdjacency;
    MABinaryAdjacency *_cityAdjacency;
    MABinaryAdjacency *_districtAdjacency;
    MABinaryAdjacency *_streetAdjacency;
    MABinaryAdjacency *_numberAdjacency;
}




+(id)inefficientLocationHelper;
-(BOOL)_locationNodesRepresentSameCity:(id)arg0 ;
-(BOOL)locationIsInSupersetCategoryForLocationNode:(id)arg0 ;
// -(id)_closestLocationNodeFromLocationNode:(id)arg0 withDimension:(NSUInteger)arg1 remapMatchingDimensionBlock:(id)arg2 reverse:(unk)arg3  ;
-(id)_commonNodeForLocationNode:(id)arg0 andLocationNode:(id)arg1 ;
-(id)_mostVisitedLocationNodeForLocationNodes:(id)arg0 ;
-(id)_parentLocationNodeWithDimension:(NSUInteger)arg0 ofLocationNode:(id)arg1 ;
-(id)_validLocationNodeForLocationNode:(id)arg0 withLocationMask:(NSUInteger)arg1 ;
-(id)cityAdjacency;
-(id)cityNodeFromAddressNode:(id)arg0 ;
-(id)closestLocationNodeFromLocationNode:(id)arg0 withDimension:(NSUInteger)arg1 remapMatchingDimensionBlock:(id)arg2 ;
-(id)closestLocationNodeFromLocationNode:(id)arg0 withDimension:(NSUInteger)arg1 reverse:(BOOL)arg2 ;
-(id)commonLocationNodeForRelevantLocationNodes:(id)arg0 locationMask:(NSUInteger)arg1 ;
-(id)countryAdjacency;
-(id)countryNodeFromAddressNode:(id)arg0 ;
-(id)countyAdjacency;
-(id)countyNodeFromCityNode:(id)arg0 ;
-(id)densestCloseLocationNodeFromLocationNode:(id)arg0 withDateInterval:(id)arg1 locationMask:(NSUInteger)arg2 ;
-(id)districtAdjacency;
-(id)districtNodeFromAddressNode:(id)arg0 ;
-(id)initWithGraph:(id)arg0 ;
-(id)numberAdjacency;
-(id)relevantAddressNodesForMomentNodes:(id)arg0 applyDensestCloseLocationNode:(BOOL)arg1 ;
-(id)relevantLocationNodesForMomentNodes:(id)arg0 applyDensestCloseLocationNode:(BOOL)arg1 ;
-(id)stateAdjacency;
-(id)streetAdjacency;
-(struct CLLocationCoordinate2D )_approximateCoordinateForLocationNode:(id)arg0 ;


@end


#endif