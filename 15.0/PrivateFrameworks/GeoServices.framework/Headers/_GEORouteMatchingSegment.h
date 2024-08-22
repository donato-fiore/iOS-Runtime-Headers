// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _GEOROUTEMATCHINGSEGMENT_H
#define _GEOROUTEMATCHINGSEGMENT_H


#import <Foundation/Foundation.h>

#import "GEOComposedRouteStep.h"

@interface _GEORouteMatchingSegment : NSObject

@property (nonatomic) ? endCoordinate; // ivar: _endCoordinate
@property (nonatomic) ? startCoordinate; // ivar: _startCoordinate
@property (nonatomic) unsigned int startPointIndex; // ivar: _startPointIndex
@property (retain, nonatomic) GEOComposedRouteStep *step; // ivar: _step


-(CGFloat)distanceFromCoordinate:(struct ? )arg0 outCoordinateOnSegment:(struct ? *)arg1 outRouteCoordinate:(struct PolylineCoordinate *)arg2 ;
-(id)description;


@end


#endif