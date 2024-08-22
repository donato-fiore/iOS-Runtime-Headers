// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOCOMPOSEDWAYPOINTEVSTOP_H
#define GEOCOMPOSEDWAYPOINTEVSTOP_H

@class NSString;
@protocol NSSecureCoding, GEOTransitArtworkDataSource;


#import "GEOComposedWaypoint.h"
#import "GEOComposedRouteEVChargingStationInfo.h"

@interface GEOComposedWaypointEVStop : GEOComposedWaypoint <NSSecureCoding>

 {
    NSString *_name;
    NSUInteger _muid;
    ? _coordinate;
    id<GEOTransitArtworkDataSource> *_artwork;
    BOOL _isServerProvidedWaypoint;
    GEOComposedRouteEVChargingStationInfo *_chargingInfo;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isServerProvidedWaypoint;
-(NSUInteger)muid;
-(id)artwork;
-(id)chargingInfo;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGeoWaypointInfo:(id)arg0 ;
-(id)initWithGeoWaypointInfo:(id)arg0 mapItem:(id)arg1 ;
-(id)name;
-(struct ? )coordinate;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif