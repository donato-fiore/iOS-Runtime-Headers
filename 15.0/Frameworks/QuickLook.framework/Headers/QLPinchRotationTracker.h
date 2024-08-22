// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLPINCHROTATIONTRACKER_H
#define QLPINCHROTATIONTRACKER_H

@class NSString;
@protocol QLDismissGestureTracking;

#import <Foundation/Foundation.h>


@interface QLPinchRotationTracker : NSObject <QLDismissGestureTracking>

 {
    CGFloat _trackedScale;
    CGFloat _rotation;
    CGFloat _previousScale;
    CGRect _initialBounds;
    CGPoint _initialTrackingCenter;
    CGPoint _initialGestureLocation;
    CGPoint _location;
    CGPoint _anchorLocationOffset;
}


@property (readonly, nonatomic) CGPoint anchorPoint; // ivar: _anchorPoint
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat dismissalProgress; // ivar: _dismissalProgress
@property (readonly, nonatomic) CGFloat finalAnimationDuration;
@property (readonly, nonatomic) CGFloat finalAnimationSpringDamping;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat minimumZoomForDismissal; // ivar: _minimumZoomForDismissal
@property (readonly, nonatomic) BOOL shouldFinishDismissal; // ivar: _shouldFinishDismissal
@property (readonly) Class superclass;
@property (nonatomic) CGFloat targetZoom; // ivar: _targetZoom
@property (readonly, nonatomic) CGRect trackedBounds;
@property (readonly, nonatomic) CGPoint trackedCenter; // ivar: _trackedCenter
@property (readonly, nonatomic) CGAffineTransform trackedTransform; // ivar: _trackedTransform
@property (readonly, nonatomic) _QLDismissGestureTrackingVelocity trackedVelocity;


-(id)init;
-(void)startTrackingCenter:(struct CGPoint )arg0 bounds:(struct CGRect )arg1 transform:(struct CGAffineTransform )arg2 withInitialGestureLocation:(struct CGPoint )arg3 ;
-(void)trackGestureLocation:(struct CGPoint )arg0 ;
-(void)trackRotation:(CGFloat)arg0 ;
-(void)trackScale:(CGFloat)arg0 ;
-(void)update;


@end


#endif