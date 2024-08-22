// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOCOMPOSEDROUTESECTION_H
#define GEOCOMPOSEDROUTESECTION_H


#import <Foundation/Foundation.h>

#import "GEOComposedRouteSegment.h"
#import "GEOComposedRouteStep.h"

@interface GEOComposedRouteSection : NSObject {
    ? _overlayBounds;
}


@property (readonly, nonatomic) ? bounds; // ivar: _bounds
@property (readonly, weak, nonatomic) GEOComposedRouteSegment *composedRouteSegment; // ivar: _composedRouteSegment
@property (readonly, nonatomic) NSUInteger composedRouteSegmentIndex; // ivar: _composedRouteSegmentIndex
@property (readonly, weak, nonatomic) GEOComposedRouteStep *composedRouteStep; // ivar: _composedRouteStep
@property (readonly, nonatomic) unsigned int endPointIndex;
@property (readonly, nonatomic) NSUInteger finalStepIndex; // ivar: _finalStepIndex
@property (nonatomic) CGFloat lengthScaleFactor; // ivar: _lengthScaleFactor
@property (readonly, nonatomic) unsigned int pointCount; // ivar: _pointCount
@property (readonly, nonatomic) *GeoCodecsVectorTilePoint3D points; // ivar: _points
@property (readonly, nonatomic) CGFloat startDistance; // ivar: _startDistance
@property (readonly, nonatomic) unsigned int startPointIndex; // ivar: _startPointIndex
@property (readonly, nonatomic) int transportType; // ivar: _transportType


-(BOOL)_MapsCarPlay_isEqual:(id)arg0 ;
-(BOOL)isTransfer;
-(id)description;
-(id)initWithCoordinates:(id)arg0 segment:(id)arg1 segmentIndex:(NSUInteger)arg2 steps:(id)arg3 startCoordinateIndex:(unsigned int)arg4 coordinateCount:(unsigned int)arg5 bounds:(struct ? )arg6 transportType:(int)arg7 finalStepIndex:(NSUInteger)arg8 startDistance:(CGFloat)arg9 lengthScaleFactor:(CGFloat)arg10 ;
-(id)initWithCoordinates:(id)arg0 segment:(id)arg1 segmentIndex:(NSUInteger)arg2 steps:(id)arg3 startCoordinateIndex:(unsigned int)arg4 coordinateCount:(unsigned int)arg5 transportType:(int)arg6 finalStepIndex:(NSUInteger)arg7 fallbackStartCoordinate:(struct ? )arg8 fallbackEndCoordinate:(struct ? )arg9 startDistance:(CGFloat)arg10 lengthScaleFactor:(CGFloat)arg11 ;
-(id)stringForCoordinates;
-(id)stringForPoints;
-(void)_initialStepInSteps:(id)arg0 ;
-(void)dealloc;


@end


#endif