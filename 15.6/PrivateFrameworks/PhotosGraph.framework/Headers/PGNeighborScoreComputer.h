// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGNEIGHBORSCORECOMPUTER_H
#define PGNEIGHBORSCORECOMPUTER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PGNeighborScoreComputer : NSObject {
    NSMutableDictionary *_momentNodeCachedValuesByIdentifier;
    NSUInteger _numberOfMomentNodes;
    os_unfair_lock_s _numberOfMomentNodesLock;
}




-(BOOL)_hasAddressNodesForMomentNode:(id)arg0 ;
-(CGFloat)_calculateScoreWithNeighborMomentNodes:(id)arg0 referenceDate:(id)arg1 andDistanceBlock:(id)arg2 ;
-(CGFloat)_calculateScoreWithNeighborMomentNodes:(id)arg0 referenceDate:(id)arg1 referenceDistance:(CGFloat)arg2 andDistanceBlock:(id)arg3 ;
-(CGFloat)_densityScoreWithNeighborMomentNodes:(id)arg0 referenceDate:(id)arg1 andNumberOfAssets:(NSUInteger)arg2 ;
-(CGFloat)_locationScoreWithNeighborMomentNodes:(id)arg0 referenceDate:(id)arg1 andLocationCoordinate:(struct CLLocationCoordinate2D *)arg2 ;
-(CGFloat)_peopleScoreWithNeighborMomentNodes:(id)arg0 referenceDate:(id)arg1 andPersonLocalIdentifiers:(id)arg2 ;
-(CGFloat)maximumNeighborScoreWithMomentNodes:(id)arg0 ;
-(CGFloat)neighborScoreWithHighlightNode:(id)arg0 ;
-(CGFloat)neighborScoreWithMomentNode:(id)arg0 ;
-(id)_momentNodeCachedValuesForIdentifier:(NSUInteger)arg0 ;
-(id)_nextMomentNodeForMomentNode:(id)arg0 ;
-(id)_personLocalIdentifiersForMomentNode:(id)arg0 ;
-(id)_previousMomentNodeForMomentNode:(id)arg0 ;
-(id)init;
-(id)neighborsFromMomentNode:(id)arg0 count:(NSUInteger)arg1 locationRequired:(BOOL)arg2 minDayDuration:(NSUInteger)arg3 maxDayDuration:(NSUInteger)arg4 ;
-(struct CLLocationCoordinate2D )_bestLocationCoordinateForMomentNode:(id)arg0 ;


@end


#endif