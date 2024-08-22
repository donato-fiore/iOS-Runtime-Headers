// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKTRAFFICFEATURE_H
#define VKTRAFFICFEATURE_H

@class GEOFeatureStyleAttributes, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VKTrafficFeature : NSObject <NSCopying>

 {
    Matrix<double, 3, 1> _worldPoint;
    CGFloat _approachingDistanceInMeters;
}


@property (readonly, nonatomic) PolylineCoordinate approachingRouteOffset; // ivar: _approachingRouteOffset
@property ? attributes;
@property (readonly, nonatomic) unsigned char collisionPriority; // ivar: _collisionPriority
@property (readonly, nonatomic) CGFloat facingAzimuth; // ivar: _facingAzimuth
@property (readonly, nonatomic) int groupIdentifier; // ivar: _groupIdentifier
@property (readonly, nonatomic) unsigned int groupItemHorizontalDisplayOrder; // ivar: _groupItemHorizontalDisplayOrder
@property (readonly, nonatomic) unsigned int groupItemVerticalDisplayOrder; // ivar: _groupItemVerticalDisplayOrder
@property (readonly, nonatomic) float maxZoom; // ivar: _maxZoom
@property (readonly, nonatomic) Mercator3<double> mercatorPoint;
@property (readonly, nonatomic) float minZoom; // ivar: _minZoom
@property (nonatomic) NSInteger navigationState; // ivar: _state
@property (readonly, nonatomic) ? position; // ivar: _position
@property (nonatomic) optional<gss::RouteLegWhen> routeLegWhen; // ivar: _routeLegWhen
@property (readonly, nonatomic) PolylineCoordinate routeOffset; // ivar: _routeOffset
@property (readonly, nonatomic) CGFloat routeOffsetInMeters; // ivar: _routeOffsetInMeters
@property (nonatomic) BOOL shouldUpdateStyle; // ivar: _shouldUpdateStyle
@property (readonly, nonatomic) GEOFeatureStyleAttributes *styleAttributes;
@property (readonly, nonatomic) NSInteger trafficFeatureType; // ivar: _trafficFeatureType
@property (readonly, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier


+(id)newTrafficFeatureForEnrouteNotice:(id)arg0 onRoute:(id)arg1 ;
+(id)stringForFeatureType:(NSInteger)arg0 ;
+(id)stringForNavState:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithEnrouteNotice:(id)arg0 onRoute:(id)arg1 ;
-(id)initWithFeatureType:(NSInteger)arg0 uniqueIdentifier:(id)arg1 position:(struct ? )arg2 onRoute:(id)arg3 ;
-(void)populateDebugNode:(*void)arg0 ;


@end


#endif