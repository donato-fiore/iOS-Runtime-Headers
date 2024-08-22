// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPATHMATCHERROADLOOKUP_H
#define GEOPATHMATCHERROADLOOKUP_H

@class NSCache;

#import <Foundation/Foundation.h>

#import "GEOMapFeatureAccess.h"

@interface GEOPathMatcherRoadLookup : NSObject {
    GEOMapFeatureAccess *_mapFeatureAccess;
    NSCache *_roadsCache;
    NSUInteger _cacheMissCount;
    NSUInteger _mapFeatureRoadsCount;
}




-(id)_roadForKey:(struct GEOPathMatcherRoadKey )arg0 ;
-(id)description;
-(id)findOutgoingRoadsFrom:(struct GEOPathMatcherRoadKey )arg0 ;
-(id)findRoadWithMuid:(NSInteger)arg0 nearCoordinate:(struct ? )arg1 ;
-(id)findRoadsNearCoordinate:(struct ? )arg0 radius:(CGFloat)arg1 ;
-(id)init;
-(id)roadForKey:(struct GEOPathMatcherRoadKey )arg0 ;
-(struct GEOPathMatcherRoadKey )flippedRoad:(struct GEOPathMatcherRoadKey )arg0 ;
-(struct GEOPathMatcherRoadKey )keyForRoad:(id)arg0 ;
-(void)_cacheRoad:(id)arg0 ;
-(void)dealloc;


@end


#endif