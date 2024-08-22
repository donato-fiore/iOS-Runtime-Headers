// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKALTERNATEROUTEINFO_H
#define VKALTERNATEROUTEINFO_H



#import "VKRouteInfo.h"

@interface VKAlternateRouteInfo : VKRouteInfo

@property (readonly, nonatomic) PolylineCoordinate convergenceCoordinate; // ivar: _convergenceCoordinate
@property (readonly, nonatomic) PolylineCoordinate divergenceCoordinate; // ivar: _divergenceCoordinate
@property (nonatomic) unsigned char etaComparisionToMain; // ivar: _etaComparisonToMain


-(id)initWithComposedRoute:(id)arg0 etaDescription:(id)arg1 divergenceRouteCoordinate:(struct PolylineCoordinate )arg2 convergenceRouteCoordinate:(struct PolylineCoordinate )arg3 ;
-(id)initWithComposedRoute:(id)arg0 etaText:(id)arg1 divergenceRouteCoordinate:(struct PolylineCoordinate )arg2 convergenceRouteCoordinate:(struct PolylineCoordinate )arg3 ;


@end


#endif