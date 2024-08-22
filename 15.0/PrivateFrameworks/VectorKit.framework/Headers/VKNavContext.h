// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKNAVCONTEXT_H
#define VKNAVCONTEXT_H

@class NSHashTable, NSArray, GEOComposedRoute, GEORouteMatch;

#import <Foundation/Foundation.h>


@interface VKNavContext : NSObject {
    vector<AdditionalPointInfo, std::allocator<AdditionalPointInfo>> _pointsToFrame;
    NSHashTable *_observers;
    NSUInteger _navCameraHeadingOverride;
    vector<AdditionalRouteInfo, std::allocator<AdditionalRouteInfo>> _additionalRoutesToFrame;
}


@property (nonatomic) NSUInteger currentStepIndex; // ivar: _currentStepIndex
@property (readonly, nonatomic) NSUInteger groupedManeuverCount;
@property (copy, nonatomic) NSArray *groupedManeuverCounts; // ivar: _groupedManeuverCounts
@property (nonatomic) NSUInteger navigationCameraHeadingOverride; // ivar: _navigationCameraHeadingOverride
@property (readonly, nonatomic) GEOComposedRoute *route; // ivar: _route
@property (retain, nonatomic) GEORouteMatch *routeMatch; // ivar: _routeMatch


-(id)init;
-(void)_notifyObserversStateChanged;
-(void)addObserver:(id)arg0 ;
-(void)addPointToFrame:(struct ? )arg0 ofType:(NSUInteger)arg1 ;
-(void)addRouteToFrame:(id)arg0 divergenceCoord:(struct PolylineCoordinate )arg1 convergenceCoord:(struct PolylineCoordinate )arg2 ;
-(void)clearAdditionalRoutesToFrame;
-(void)clearPointsToFrame;
-(void)clearPointsToFrameOfType:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)enumerateAdditionalRoutesToFrameUsingBlock:(id)arg0 ;
-(void)enumeratePointsToFrameOfType:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)enumeratePointsToFrameUsingBlock:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)updateWithNewRoute:(id)arg0 currentStepIndex:(NSUInteger)arg1 ;


@end


#endif