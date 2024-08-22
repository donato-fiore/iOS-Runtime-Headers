// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLRACINGROUTEPARAMETERS_H
#define CLRACINGROUTEPARAMETERS_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CLRacingRouteState.h"
#import "CLRacingRouteVariables.h"
#import "CLRouteBoundingBox.h"

@interface CLRacingRouteParameters : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) CLRacingRouteState *lastOnRouteDataPoint; // ivar: _lastOnRouteDataPoint
@property (readonly, copy, nonatomic) CLRacingRouteState *lastProjectedDataPoint; // ivar: _lastProjectedDataPoint
@property (readonly, copy, nonatomic) CLRacingRouteVariables *racingRouteVariables; // ivar: _racingRouteVariables
@property (readonly, copy, nonatomic) CLRouteBoundingBox *routeBoundingBox; // ivar: _routeBoundingBox
@property (readonly, copy, nonatomic) NSArray *routeMatrixIndexVec; // ivar: _routeMatrixIndexVec
@property (readonly, copy, nonatomic) CLRacingRouteState *startPointOnCurrentRoute; // ivar: _startPointOnCurrentRoute
@property (readonly, copy, nonatomic) CLRacingRouteState *startPointOnReferenceRoute; // ivar: _startPointOnReferenceRoute


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRouteMatrixIndexVec:(id)arg0 racingRouteVariables:(id)arg1 startPointOnCurrentRoute:(id)arg2 startPointOnReferenceRoute:(id)arg3 lastOnRouteDataPoint:(id)arg4 lastProjectedDataPoint:(id)arg5 routeBoundingBox:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif