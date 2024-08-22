// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHLEGACYLOCATIONHELPER_H
#define PGGRAPHLEGACYLOCATIONHELPER_H



#import "PGGraphLocationHelper.h"

@interface PGGraphLegacyLocationHelper : PGGraphLocationHelper



-(BOOL)_locationNodesRepresentSameCity:(id)arg0 ;
-(BOOL)locationIsInSupersetCategoryForLocationNode:(id)arg0 ;
// -(id)_closestLocationNodeFromLocationNode:(id)arg0 withDimension:(NSUInteger)arg1 remapMatchingDimensionBlock:(id)arg2 reverse:(unk)arg3  ;
-(id)_commonNodeForLocationNode:(id)arg0 andLocationNode:(id)arg1 ;
-(id)_mostVisitedLocationNodeForLocationNodes:(id)arg0 ;
-(id)_validLocationNodeForLocationNode:(id)arg0 withLocationMask:(NSUInteger)arg1 ;
-(id)cityNodeFromAddressNode:(id)arg0 ;
-(id)closestLocationNodeFromLocationNode:(id)arg0 withDimension:(NSUInteger)arg1 remapMatchingDimensionBlock:(id)arg2 ;
-(id)closestLocationNodeFromLocationNode:(id)arg0 withDimension:(NSUInteger)arg1 reverse:(BOOL)arg2 ;
-(id)commonLocationNodeForRelevantLocationNodes:(id)arg0 locationMask:(NSUInteger)arg1 ;
-(id)countryNodeFromAddressNode:(id)arg0 ;
-(id)countyNodeFromCityNode:(id)arg0 ;
-(id)densestCloseLocationNodeFromLocationNode:(id)arg0 withDateInterval:(id)arg1 locationMask:(NSUInteger)arg2 ;
-(id)districtNodeFromAddressNode:(id)arg0 ;
-(id)locationNodeWithDimension:(NSUInteger)arg0 rootNode:(id)arg1 ;
-(id)relevantAddressNodesForMomentNodes:(id)arg0 applyDensestCloseLocationNode:(BOOL)arg1 ;
-(id)relevantLocationNodesForMomentNodes:(id)arg0 applyDensestCloseLocationNode:(BOOL)arg1 ;
-(struct CLLocationCoordinate2D )_approximateCoordinateForLocationNode:(id)arg0 ;


@end


#endif