// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOMAPFEATUREJUNCTION_H
#define GEOMAPFEATUREJUNCTION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "GEOVectorTile.h"

@interface GEOMapFeatureJunction : NSObject <NSCopying>

 {
    ? _coordinate;
    ? _tilePoint;
    GEOVectorTile *_tile;
    *GeoCodecsConnectivityJunction _connectivityJunction;
}


@property (readonly, nonatomic) *GeoCodecsConnectivityJunction connectivityJunction;
@property (readonly, nonatomic) ? coordinate;
@property (readonly, nonatomic) BOOL isOnTileBorder; // ivar: _isOnTileBorder
@property (readonly, nonatomic) NSUInteger junctionIndex;
@property (readonly, nonatomic) NSUInteger primaryID;
@property (readonly, nonatomic) NSUInteger secondaryID;
@property (readonly, nonatomic) GEOVectorTile *tile;
@property (readonly, nonatomic) ? tilePoint;


+(BOOL)isPointOnTileBorder:(struct GeoCodecsVectorTilePoint *)arg0 ;
+(id)junctionForRoadFeature:(id)arg0 startJunction:(BOOL)arg1 ;
+(struct GeoCodecsConnectivityJunction *)connectivityJunctionForRoadFeature:(id)arg0 startJunction:(BOOL)arg1 outError:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif