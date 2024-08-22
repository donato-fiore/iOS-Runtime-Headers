// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKPUCKANIMATOR_H
#define VKPUCKANIMATOR_H

@protocol VKPuckAnimatorDelegate, VKPuckAnimatorTarget;

#import <Foundation/Foundation.h>

#import "VKTimedAnimation.h"
#import "VKRunningCurve.h"
#import "VKPuckAnimatorLocationProjector.h"

@interface VKPuckAnimator : NSObject {
    VKTimedAnimation *_animation;
    VKRunningCurve *_curve;
    VKPuckAnimatorLocationProjector *_locationProjector;
    CGFloat _vehicleHeading;
    NSInteger _pausedCount;
    BOOL _suspended;
    BOOL _hasElevation;
    Matrix<double, 3, 1> _lastProjectedPosition;
    ? _lastProjectedCoordinate;
    *RouteOverlayCache _routeOverlayCache;
    linear_map<unsigned long long, std::function<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)>, std::equal_to<unsigned long long>, std::allocator<std::pair<unsigned long long, std::function<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)>>>, std::vector<std::pair<unsigned long long, std::function<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)>>>> _locationUpdateSubscriptions;
    Monitorable<md::ConfigValue<GEOConfigKeyDouble, double>> _puckUpdatePointDeltaForAnimation;
    Monitorable<md::ConfigValue<GEOConfigKeyDouble, double>> _puckUpdateDistanceDeltaThreshold;
}


@property (nonatomic) BOOL alwaysUseGoodRouteMatch;
@property (nonatomic) NSUInteger behavior; // ivar: _behavior
@property ? currentSnappedSegment;
@property (weak, nonatomic) NSObject<VKPuckAnimatorDelegate> *delegate; // ivar: _delegate
@property ? lastProjectedPosition;
@property (retain, nonatomic) NSObject<VKPuckAnimatorTarget> *target; // ivar: _target
@property (nonatomic) CGFloat tracePlaybackSpeedMultiplier; // ivar: _tracePlaybackSpeedMultiplier


-(NSUInteger)subscribeToLocationUpdates:(struct function<void (VKPuckAnimator *, CLLocation *, GEORouteMatch *, NSUUID *)> )arg0 ;
-(id)initWithCallbackQueue:(id)arg0 ;
-(void)_publishLocationUpdate:(id)arg0 routeMatch:(id)arg1 uuid:(id)arg2 ;
-(void)unsubscribeFromLocationUpdates:(NSUInteger)arg0 ;
-(void)updateLocation:(id)arg0 routeMatch:(id)arg1 ;
-(void)updateLocation:(id)arg0 routeMatch:(id)arg1 locationUpdateUUID:(id)arg2 ;
-(void)updateVehicleHeading:(CGFloat)arg0 ;
-(void)updatedPosition:(*void)arg0 ;


@end


#endif