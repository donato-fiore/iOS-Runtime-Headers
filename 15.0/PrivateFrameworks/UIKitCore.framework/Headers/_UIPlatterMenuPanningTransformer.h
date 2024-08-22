// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIPLATTERMENUPANNINGTRANSFORMER_H
#define _UIPLATTERMENUPANNINGTRANSFORMER_H

@class NSDate;
@protocol _UIPlatterMenuPanningTransformerDelegate;

#import <Foundation/Foundation.h>

#import "_UIVelocityIntegrator.h"

@interface _UIPlatterMenuPanningTransformer : NSObject

@property (nonatomic) NSUInteger axisLock; // ivar: _axisLock
@property (weak, nonatomic) NSObject<_UIPlatterMenuPanningTransformerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) CGFloat lastAxisLockTime; // ivar: _lastAxisLockTime
@property (nonatomic) CGPoint lastDirectionChangeTouchPosition; // ivar: _lastDirectionChangeTouchPosition
@property (nonatomic) CGVector lastOffset; // ivar: _lastOffset
@property (nonatomic) CGPoint lastTouchPosition; // ivar: _lastTouchPosition
@property (nonatomic) CGPoint lastTransformedPoint; // ivar: _lastTransformedPoint
@property (nonatomic) CGFloat minimumXVelocityForAxisLock; // ivar: _minimumXVelocityForAxisLock
@property (readonly, nonatomic) CGVector offset;
@property (nonatomic) NSUInteger overrideLockAxis; // ivar: _overrideLockAxis
@property (retain, nonatomic) NSDate *panBeginTime; // ivar: _panBeginTime
@property (nonatomic) CGPoint panBeginTouchPosition; // ivar: _panBeginTouchPosition
@property (retain, nonatomic) NSDate *timeForLastDirectionalChange; // ivar: _timeForLastDirectionalChange
@property (nonatomic) CGPoint transitionZonePosition; // ivar: _transitionZonePosition
@property (nonatomic) CGRect transitionZoneRect; // ivar: _transitionZoneRect
@property (nonatomic) CGSize transitionZoneSize; // ivar: _transitionZoneSize
@property (readonly, nonatomic) CGVector velocity;
@property (retain, nonatomic) _UIVelocityIntegrator *velocityIntegrator; // ivar: _velocityIntegrator


+(id)transformerWithAxisTransitionZonePosition:(struct CGPoint )arg0 axisTransitionZoneSize:(struct CGSize )arg1 ;
-(CGFloat)timeIntervalSinceLastDirectionChange;
-(id)initWithAxisTransitionZonePosition:(struct CGPoint )arg0 axisTransitionZoneSize:(struct CGSize )arg1 ;
-(void)_enterYLockedState;
-(void)didBeginPanningWithTouchPosition:(struct CGPoint )arg0 currentTransformedPosition:(struct CGPoint )arg1 ;
-(void)didEndPanningWithTouchPosition:(struct CGPoint )arg0 currentTransformedPosition:(struct CGPoint )arg1 ;
-(void)didPanWithTouchPosition:(struct CGPoint )arg0 currentTransformedPosition:(struct CGPoint )arg1 ;
-(void)lockIntoYAxis;


@end


#endif