// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
    GEOComposedRouteEVChargingStationInfo *_chargingInfo;
}




+(BOOL)supportsSecureCoding;
-(NSUInteger)muid;
-(id)artwork;
-(id)chargingInfo;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGeoWaypointInfo:(id)arg0 ;
-(id)name;
-(struct ? )coordinate;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif