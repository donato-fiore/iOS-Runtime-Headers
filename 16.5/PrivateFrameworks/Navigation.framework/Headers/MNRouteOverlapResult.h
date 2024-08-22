// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MNROUTEOVERLAPRESULT_H
#define MNROUTEOVERLAPRESULT_H

@class GEOPolylineCoordinateRangeArray, NSUUID;

#import <Foundation/Foundation.h>


@interface MNRouteOverlapResult : NSObject

@property (retain, nonatomic) GEOPolylineCoordinateRangeArray *overlapRanges; // ivar: _overlapRanges
@property (retain, nonatomic) NSUUID *routeID; // ivar: _routeID
@property (nonatomic) GEOPolylineCoordinateRange routeRange; // ivar: _routeRange
@property (retain, nonatomic) GEOPolylineCoordinateRangeArray *uniqueRanges; // ivar: _uniqueRanges


-(id)description;


@end


#endif