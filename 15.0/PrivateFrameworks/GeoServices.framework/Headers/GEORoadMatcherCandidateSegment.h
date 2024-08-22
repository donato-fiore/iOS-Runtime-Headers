// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOROADMATCHERCANDIDATESEGMENT_H
#define GEOROADMATCHERCANDIDATESEGMENT_H


#import <Foundation/Foundation.h>

#import "GEOMapFeatureJunction.h"
#import "GEOMapFeatureRoad.h"

@interface GEORoadMatcherCandidateSegment : NSObject

@property (readonly, nonatomic) ? coordinateOnSegment; // ivar: _coordinateOnSegment
@property (readonly, nonatomic) CGFloat distanceFromJunction; // ivar: _distanceInMetersFromJunction
@property (readonly, nonatomic) CGFloat distanceFromSegment; // ivar: _distanceFromSegment
@property (readonly, nonatomic) GEOMapFeatureJunction *junction; // ivar: _junction
@property (readonly, nonatomic) GEOMapFeatureRoad *road; // ivar: _road
@property (readonly, nonatomic) CGFloat score; // ivar: _score
@property (readonly, nonatomic) CGFloat segmentAngle; // ivar: _segmentAngle


-(id)initWithCoordinate:(struct ? )arg0 angle:(CGFloat)arg1 road:(id)arg2 startCoordinate:(struct ? )arg3 endCoordinate:(struct ? )arg4 ;


@end


#endif