// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOMAPFEATUREINTERSECTIONJUNCTION_H
#define GEOMAPFEATUREINTERSECTIONJUNCTION_H



#import "GEOMapFeatureJunction.h"

@interface GEOMapFeatureIntersectionJunction : GEOMapFeatureJunction {
    *GeoCodecsConnectivityJunction _connectivityJunction;
}




-(NSUInteger)junctionIndex;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithConnectivityJunction:(struct GeoCodecsConnectivityJunction *)arg0 tile:(id)arg1 ;
-(struct GeoCodecsConnectivityJunction *)connectivityJunction;


@end


#endif