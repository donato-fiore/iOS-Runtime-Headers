// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGGRAPHLOCATIONHELPER_H
#define PGGRAPHLOCATIONHELPER_H

@class MABinaryAdjacency;

#import <Foundation/Foundation.h>

#import "PGGraph.h"
#import "PGGraphAddressNodeCollection.h"

@interface PGGraphLocationHelper : NSObject {
    PGGraph *_graph;
    os_unfair_lock_s _locationHelperLock;
    MABinaryAdjacency *_countryNodesByLocationNode;
    MABinaryAdjacency *_stateNodesByLocationNode;
    MABinaryAdjacency *_countyNodesByLocationNode;
    MABinaryAdjacency *_cityNodesByLocationNode;
    MABinaryAdjacency *_districtNodesByLocationNode;
    MABinaryAdjacency *_streetNodesByLocationNode;
    MABinaryAdjacency *_numberNodesByLocationNode;
    MABinaryAdjacency *_locationNodesByCountryNode;
    MABinaryAdjacency *_locationNodesByStateNode;
    MABinaryAdjacency *_locationNodesByCountyNode;
    MABinaryAdjacency *_locationNodesByCityNode;
    MABinaryAdjacency *_locationNodesByDistrictNode;
    MABinaryAdjacency *_locationNodesByStreetNode;
    MABinaryAdjacency *_locationNodesByNumberNode;
    MABinaryAdjacency *_addressNodesByAreaNode;
    MABinaryAdjacency *_momentNodesByAddressNode;
    PGGraphAddressNodeCollection *_addressNodes;
}




+(id)inefficientLocationHelper;
-(BOOL)_locationNodesRepresentSameCity:(id)arg0 ;
-(BOOL)locationIsInSupersetCategoryForLocationNode:(id)arg0 ;
// -(id)_closestLocationNodeFromLocationNode:(id)arg0 withDimension:(NSUInteger)arg1 remapMatchingDimensionBlock:(id)arg2 reverse:(unk)arg3  ;
-(id)_commonNodeForLocationNode:(id)arg0 andLocationNode:(id)arg1 ;
-(id)_mostVisitedLocationNodeForLocationNodes:(id)arg0 ;
-(id)_parentLocationNodeWithDimension:(NSUInteger)arg0 ofLocationNode:(id)arg1 ;
-(id)_parentLocationNodeWithDimension:(NSUInteger)arg0 ofLocationNodeAsCollection:(id)arg1 ;
-(id)_parentLocationNodeWithDimension:(NSUInteger)arg0 sourceLocationNodeAsCollection:(id)arg1 sourceLabel:(id)arg2 ;
-(id)_validLocationNodeForLocationNode:(id)arg0 withLocationMask:(NSUInteger)arg1 ;
-(id)addressNodes;
-(id)addressNodesByAreaNode;
-(id)addressNodesFromAreaNodes:(id)arg0 ;
-(id)addressNodesFromLocationNodes:(id)arg0 ;
-(id)cityNodeFromAddressNode:(id)arg0 ;
-(id)cityNodesByLocationNode;
-(id)closestLocationNodeFromLocationNode:(id)arg0 withDimension:(NSUInteger)arg1 remapMatchingDimensionBlock:(id)arg2 ;
-(id)closestLocationNodeFromLocationNode:(id)arg0 withDimension:(NSUInteger)arg1 reverse:(BOOL)arg2 ;
-(id)commonLocationNodeForRelevantLocationNodes:(id)arg0 locationMask:(NSUInteger)arg1 ;
-(id)countryNodeFromAddressNode:(id)arg0 ;
-(id)countryNodeFromAddressNodeAsCollection:(id)arg0 ;
-(id)countryNodesByLocationNode;
-(id)countyNodeFromCityNode:(id)arg0 ;
-(id)countyNodesByLocationNode;
-(id)densestCloseLocationNodeFromLocationNode:(id)arg0 withDateInterval:(id)arg1 locationMask:(NSUInteger)arg2 ;
-(id)districtNodeFromAddressNode:(id)arg0 ;
-(id)districtNodesByLocationNode;
-(id)initWithGraph:(id)arg0 ;
-(id)locationNodesByCityNode;
-(id)locationNodesByCountryNode;
-(id)locationNodesByCountyNode;
-(id)locationNodesByDistrictNode;
-(id)locationNodesByNumberNode;
-(id)locationNodesByStateNode;
-(id)locationNodesByStreetNode;
-(id)momentNodesByAddressNode;
-(id)momentNodesByAddressNodeIntersectingAddressNodes:(id)arg0 ;
-(id)numberNodesByLocationNode;
-(id)relevantAddressNodesForMomentNodes:(id)arg0 applyDensestCloseLocationNode:(BOOL)arg1 ;
-(id)relevantLocationNodesForMomentNodes:(id)arg0 applyDensestCloseLocationNode:(BOOL)arg1 ;
-(id)stateNodesByLocationNode;
-(id)streetNodesByLocationNode;
-(struct CLLocationCoordinate2D )_approximateCoordinateForLocationNode:(id)arg0 ;
-(void)_fetchAddressNodes;
-(void)_fetchLocationNodesByCityNode;
-(void)_fetchLocationNodesByCountryNode;
-(void)_fetchLocationNodesByCountyNode;
-(void)_fetchLocationNodesByDistrictNode;
-(void)_fetchLocationNodesByNumberNode;
-(void)_fetchLocationNodesByStateNode;
-(void)_fetchLocationNodesByStreetNode;


@end


#endif