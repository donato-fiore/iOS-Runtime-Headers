// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPROBECRUMBS_H
#define GEOPROBECRUMBS_H


#import <Foundation/Foundation.h>

#import "GEOComposedRoute.h"

@interface GEOProbeCrumbs : NSObject {
    NSUInteger _crumbCounter;
    NSUInteger _maxCrumbs;
    GEOComposedRoute *_route;
    int _baseE7Lat;
    int _baseE7Lng;
    NSUInteger _baseTimestamp;
    int _baseDistance;
    deque<_GEOProbeCrumbsLocation, std::allocator<_GEOProbeCrumbsLocation>> _locations;
}


@property (readonly, nonatomic) BOOL enabled; // ivar: _enabled


-(id)_encodedDataForIntegersCount:(unsigned int)arg0 valueCallback:(id)arg1 ;
-(id)init;
-(id)initWithRoute:(id)arg0 ;
-(id)recentLocationHistory;
-(void)addLocation:(struct ? )arg0 polyCoordinate:(struct PolylineCoordinate )arg1 timestamp:(NSUInteger)arg2 ;
-(void)clearCache;
-(void)dealloc;
-(void)resetStateWithRoute:(id)arg0 ;


@end


#endif