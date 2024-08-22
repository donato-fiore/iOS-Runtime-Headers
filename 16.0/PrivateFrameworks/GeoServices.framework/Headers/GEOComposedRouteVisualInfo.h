// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOCOMPOSEDROUTEVISUALINFO_H
#define GEOCOMPOSEDROUTEVISUALINFO_H

@class NSArray;
@protocol NSSecureCoding, GEOServerFormattedString, GEOTransitArtworkDataSource;

#import <Foundation/Foundation.h>

#import "GEOStyleAttributes.h"

@interface GEOComposedRouteVisualInfo : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSObject<GEOServerFormattedString> *detail; // ivar: _detail
@property (readonly, nonatomic) ? endCoordinate; // ivar: _endCoordinate
@property (readonly, nonatomic) NSObject<GEOTransitArtworkDataSource> *icon; // ivar: _icon
@property (readonly, nonatomic) NSArray *laneChangeInfos; // ivar: _laneChangeInfos
@property (readonly, nonatomic) GEOPolylineCoordinateRange routeCoordinateRange; // ivar: _routeCoordinateRange
@property (readonly, nonatomic) ? startCoordinate; // ivar: _startCoordinate
@property (readonly, nonatomic) GEOStyleAttributes *styleAttributes; // ivar: _styleAttributes
@property (readonly, nonatomic) NSObject<GEOServerFormattedString> *title; // ivar: _title


+(BOOL)supportsSecureCoding;
+(id)_infosForRouteLineStyleInfos:(id)arg0 pathIndex:(NSUInteger)arg1 coordinates:(id)arg2 updateable:(BOOL)arg3 ;
+(id)cameraInfosForGeoWaypointRoute:(id)arg0 coordinates:(id)arg1 updateable:(BOOL)arg2 ;
+(id)cameraInfosForRoute:(id)arg0 etaRoute:(id)arg1 ;
+(id)visualInfosForGeoWaypointRoute:(id)arg0 coordinates:(id)arg1 updateable:(BOOL)arg2 ;
+(id)visualInfosForRoute:(id)arg0 etaRoute:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGeoRouteLineStyleInfo:(id)arg0 pathIndex:(NSUInteger)arg1 coordinates:(id)arg2 distanceOffset:(CGFloat)arg3 ;
-(id)initWithTitle:(id)arg0 detail:(id)arg1 routeCoordinate:(struct ? )arg2 locationCoordinate:(struct ? )arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif