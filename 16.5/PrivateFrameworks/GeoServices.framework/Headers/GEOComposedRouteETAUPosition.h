// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOCOMPOSEDROUTEETAUPOSITION_H
#define GEOCOMPOSEDROUTEETAUPOSITION_H


#import <Foundation/Foundation.h>


@interface GEOComposedRouteETAUPosition : NSObject

@property (readonly, nonatomic) ? routeCoordinate; // ivar: _routeCoordinate
@property (readonly, nonatomic) CGFloat timeSinceLastUpdate; // ivar: _timeSinceLastUpdate


-(NSInteger)compare:(id)arg0 ;
-(id)initWithComposedRoute:(id)arg0 andUpdateLocation:(id)arg1 offset:(CGFloat)arg2 ;


@end


#endif