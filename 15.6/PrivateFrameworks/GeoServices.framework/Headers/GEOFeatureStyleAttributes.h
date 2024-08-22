// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOFEATURESTYLEATTRIBUTES_H
#define GEOFEATURESTYLEATTRIBUTES_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GEOFeatureStyleAttributes : NSObject <NSCopying, NSSecureCoding>

 {
    ? _attributes;
}


@property (readonly, nonatomic) int bikeLaneSide;
@property (readonly, nonatomic) int bikeableSide;
@property (readonly, nonatomic) unsigned char countAttrs;
@property (readonly, nonatomic) unsigned char countExtAttrs;
@property (readonly, nonatomic) int drivingSide;
@property (readonly, nonatomic) *GeoCodecsFeatureStylePairExt extAttrs;
@property (readonly, nonatomic) char featureType;
@property (readonly, nonatomic) BOOL hasDrivingSide;
@property (readonly, nonatomic) BOOL isBorder;
@property (readonly, nonatomic) BOOL isBridge;
@property (readonly, nonatomic) BOOL isDrivable;
@property (readonly, nonatomic) BOOL isFreeway;
@property (readonly, nonatomic) BOOL isRailway;
@property (readonly, nonatomic) BOOL isRamp;
@property (readonly, nonatomic) BOOL isRoadPedestrianNavigable;
@property (readonly, nonatomic) BOOL isTunnel;
@property (readonly, nonatomic) BOOL isWalkable;
@property (readonly, nonatomic) unsigned int lineType;
@property (readonly, nonatomic) unsigned char rampDirection;
@property (readonly, nonatomic) int rampType;
@property (readonly, nonatomic) BOOL shouldSuppress3DBuildingStrokes;
@property (readonly, nonatomic) int sidewalkSide;
@property (readonly, nonatomic) *GeoCodecsFeatureStylePair v;
@property (readonly, nonatomic) int walkableSide;


+(BOOL)supportsSecureCoding;
+(id)addressMarkerStyleAttributes;
+(id)airportStyleAttributes;
+(id)carRentalStyleAttributes;
+(id)frequentLocationStyleAttributes;
+(id)gasStationStyleAttributes;
+(id)homeStyleAttributes;
+(id)hotelStyleAttributes;
+(id)nearbyTransitStyleAttributes;
+(id)parkedCarStyleAttributes;
+(id)restaurantStyleAttributes;
+(id)schoolStyleAttributes;
+(id)searchResultStyleAttributes;
+(id)styleAttributesForPlace:(id)arg0 ;
+(id)transitStationStyleAttributes;
+(id)workStyleAttributes;
-(*void)featureStyleAttributes;
-(BOOL)hasAttributes;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isLabelPOI;
-(BOOL)isLandmarkPOI;
-(BOOL)isSearchResult;
-(BOOL)isTransit;
-(id)_initWithSharedStyleAttributes:(*void)arg0 extAttributes:(struct GeoCodecsFeatureStylePairExt *)arg1 extAttributeCount:(unsigned char)arg2 ;
-(id)copyWithAirportStyleAttributes;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithAttributes:(unsigned int)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFeatureStyleAttributesPtr:(*void)arg0 ;
-(id)initWithGEOStyleAttributes:(id)arg0 ;
-(id)initWithPlaceDataStyleAttributes:(id)arg0 ;
-(id)initWithPlaceStyleAttributes:(id)arg0 ;
-(id)initWithStyleAttributes:(*void)arg0 ;
-(int)poiType;
-(struct shared_ptr<FeatureStyleAttributes> )featureStyleAttributesPtr;
-(struct shared_ptr<const FeatureStyleAttributes> )_sharedAttributes;
-(void)encodeWithCoder:(id)arg0 ;
-(void)replaceAttributes:(struct GeoCodecsFeatureStylePair *)arg0 count:(unsigned int)arg1 ;
-(void)setExtAttributes:(struct GeoCodecsFeatureStylePairExt *)arg0 count:(unsigned int)arg1 ;
-(void)sort;


@end


#endif