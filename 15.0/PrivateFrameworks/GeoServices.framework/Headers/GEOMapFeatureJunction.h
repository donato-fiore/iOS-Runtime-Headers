// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
}


@property (readonly, nonatomic) *GeoCodecsConnectivityJunction connectivityJunction;
@property (readonly, nonatomic) ? coordinate;
@property (readonly, nonatomic) BOOL isOnTileBorder;
@property (readonly, nonatomic) GEOVectorTile *tile;
@property (readonly, nonatomic) ? tilePoint;


+(BOOL)_isPointOnTileBorder:(struct GeoCodecsVectorTilePoint )arg0 ;
+(id)junctionForRoadFeature:(id)arg0 startJunction:(BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif