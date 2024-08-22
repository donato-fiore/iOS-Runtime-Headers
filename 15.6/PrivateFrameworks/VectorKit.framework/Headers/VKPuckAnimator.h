// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
    Matrix<double, 3, 1> _lastProjectedPosition;
    *RouteOverlayCache _routeOverlayCache;
}


@property (nonatomic) NSUInteger behavior; // ivar: _behavior
@property ? currentSnappedSegment;
@property (nonatomic) NSObject<VKPuckAnimatorDelegate> *delegate; // ivar: _delegate
@property ? lastProjectedPosition;
@property (retain, nonatomic) NSObject<VKPuckAnimatorTarget> *target; // ivar: _target
@property (nonatomic) CGFloat tracePlaybackSpeedMultiplier; // ivar: _tracePlaybackSpeedMultiplier


-(void)updateLocation:(id)arg0 routeMatch:(id)arg1 ;
-(void)updateVehicleHeading:(CGFloat)arg0 ;


@end


#endif