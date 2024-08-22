// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOMAPFEATUREROAD_H
#define GEOMAPFEATUREROAD_H

@class NSString;
@protocol NSCopying;


#import "GEOMapFeatureLine.h"
#import "GEOMultiSectionFeature.h"
#import "GEOMapFeatureJunction.h"
#import "GEOVectorTile.h"

@interface GEOMapFeatureRoad : GEOMapFeatureLine <NSCopying>

 {
    GEOMultiSectionFeature *_feature;
    ? _roadKey;
    GEOMapFeatureJunction *_junctionA;
    GEOMapFeatureJunction *_junctionB;
    BOOL _checkedJunctionA;
    BOOL _checkedJunctionB;
    GEOVectorTile *_tile;
}


@property (readonly, nonatomic) int bikeLaneSide;
@property (readonly, nonatomic) int bikeableSide;
@property (nonatomic, getter=_geo_degenerateBearing, setter=_geo_setDegenerateBearing:) CGFloat degenerateBearing;
@property (readonly, nonatomic) GEOMultiSectionFeature *endFeature;
@property (readonly, nonatomic) GEOMapFeatureJunction *endJunction;
@property (readonly, nonatomic) GEOMultiSectionFeature *feature;
@property (readonly, nonatomic) NSUInteger featureIndex;
@property (readonly, nonatomic) int formOfWay;
@property (readonly, nonatomic) NSString *internalRoadName;
@property (readonly, nonatomic) BOOL isBridge;
@property (readonly, nonatomic) BOOL isDrivable;
@property (readonly, nonatomic) BOOL isFlipped;
@property (readonly, nonatomic) BOOL isRail;
@property (readonly, nonatomic) BOOL isRoadPedestrianNavigable;
@property (readonly, nonatomic) BOOL isTunnel;
@property (readonly, nonatomic) BOOL isValidTravelDirection;
@property (readonly, nonatomic) BOOL isWalkable;
@property (readonly, nonatomic) NSInteger laneCount;
@property (readonly, nonatomic) NSUInteger muid;
@property (readonly, nonatomic) int rampType;
@property (readonly, nonatomic) int roadClass;
@property (readonly, nonatomic) NSUInteger roadID;
@property (readonly, nonatomic) CGFloat roadWidth;
@property (readonly, nonatomic) int sidewalkSide;
@property (readonly, nonatomic) NSUInteger speedLimit;
@property (readonly, nonatomic) BOOL speedLimitIsMPH;
@property (readonly, nonatomic) GEOMultiSectionFeature *startFeature;
@property (readonly, nonatomic) GEOMapFeatureJunction *startJunction;
@property (readonly, nonatomic) _GEOTileKey tileKey;
@property (readonly, nonatomic) int travelDirection;
@property (readonly, nonatomic) int walkableSide;


-(*float)_elevationsForSection:(NSUInteger)arg0 outCount:(*NSUInteger)arg1 ;
-(id)_attributes;
-(id)_containingTile;
-(id)_formattedProtobufEnum:(id)arg0 ;
-(id)_junctionA;
-(id)_junctionB;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)flippedCopy;
-(id)initWithFeature:(id)arg0 ;
-(id)localizedRoadName:(*id)arg0 ;
-(int)_flippedBikeLaneSideFor:(int)arg0 ;
-(int)_flippedBikeableSideFor:(int)arg0 ;
-(int)_flippedSidewalkSideFor:(int)arg0 ;
-(int)_flippedWalkableSideFor:(int)arg0 ;
-(struct GeoCodecsVectorTilePoint *)_tilePointsForSection:(NSUInteger)arg0 outCount:(*NSUInteger)arg1 ;
-(void)flip;
-(void)updateForDesiredRoadDirectionality:(NSUInteger)arg0 isOutboundRoad:(BOOL)arg1 ;


@end


#endif