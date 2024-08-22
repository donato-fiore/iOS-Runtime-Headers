// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MNROUTECOORDINATEWITHTYPE_H
#define MNROUTECOORDINATEWITHTYPE_H


#import <Foundation/Foundation.h>


@interface MNRouteCoordinateWithType : NSObject

@property (nonatomic) PolylineCoordinate routeCoordinate; // ivar: _routeCoordinate
@property (nonatomic) NSUInteger significanceType; // ivar: _significanceType


+(id)convergenceCoordinate:(struct PolylineCoordinate )arg0 ;
+(id)divergenceCoordinate:(struct PolylineCoordinate )arg0 ;
-(id)description;


@end


#endif