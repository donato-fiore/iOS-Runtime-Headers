// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARCOACHINGANIMATIONVIEW_H
#define ARCOACHINGANIMATIONVIEW_H

@class UIView, CAMetalLayer, NSString;
@protocol ARCoachingUpdateManagerDelegate, ARCoachingRenderer;


#import "ARCoachingUpdateManager.h"

@interface ARCoachingAnimationView : UIView <ARCoachingUpdateManagerDelegate>

 {
    CAMetalLayer *_metalLayer;
    ARCoachingUpdateManager *_updateManager;
    id<ARCoachingRenderer> *_renderer;
    ? _lastCameraRight;
    ? _lastCameraTranslation;
    ? _rotationStartCameraRight;
    ? _rotationStartCameraTranslation;
    float _cubeAngle;
    BOOL _isRotating;
    BOOL _wasRotating;
    CGFloat _nextStateTime;
    NSInteger _lastUpdateState;
    NSInteger _currentCoachingGoal;
}


@property (nonatomic) NSInteger animationState; // ivar: _animationState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isDeactivating; // ivar: _isDeactivating
@property (readonly) Class superclass;


-(CGFloat)calcNextAnimationSwitchTime:(CGFloat)arg0 forState:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)clampCubeToQuarterRotation;
-(void)drawInDrawable:(id)arg0 withCommandBuffer:(id)arg1 timeDelta:(CGFloat)arg2 ;
-(void)killCoachingAnimation;
-(void)layoutSubviews;
-(void)orientationChanged;
-(void)resizeForDrawable:(id)arg0 ;
-(void)setupView;
-(void)startCoachingAnimation:(NSInteger)arg0 ;
-(void)updateAlternatingPlanes:(CGFloat)arg0 ;
-(void)updateCubeRotation:(id)arg0 motionTracker:(id)arg1 ;
-(void)updateForCurrentTime:(CGFloat)arg0 timeDelta:(CGFloat)arg1 ;
-(void)updateMetalLayer;
-(void)updateVerticalClamp:(CGFloat)arg0 ;
-(void)updateWithFrame:(id)arg0 motionTracker:(id)arg1 ;


@end


#endif