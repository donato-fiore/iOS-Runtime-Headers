// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKPUCKANIMATORLOCATIONPROJECTOR_H
#define VKPUCKANIMATORLOCATIONPROJECTOR_H

@class GEORouteMatch;

#import <Foundation/Foundation.h>


@interface VKPuckAnimatorLocationProjector : NSObject {
    Matrix<double, 3, 1> _projectedPosition;
}


@property (readonly, nonatomic) CGFloat elevationInProjectedPostion; // ivar: _elevationInProjectedPosition
@property (readonly, nonatomic) CGFloat projectedCourse; // ivar: _projectedCourse
@property (readonly, nonatomic) ? projectedLocation;
@property (readonly, nonatomic) BOOL projectedLocationOnRoute;
@property ? projectedPosition;
@property (retain, nonatomic) GEORouteMatch *projectedRouteMatch; // ivar: _projectedRouteMatch
@property (retain, nonatomic) GEORouteMatch *routeMatch; // ivar: _routeMatch


-(void)projectFromLocation:(id)arg0 routeMatch:(id)arg1 speedMultiplier:(CGFloat)arg2 ;


@end


#endif