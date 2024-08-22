// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TKVIBRATIONRECORDERRIPPLEVIEW_H
#define TKVIBRATIONRECORDERRIPPLEVIEW_H

@class UIView, NSMutableArray, NSMutableDictionary, CAAnimation, NSString;
@protocol CAAnimationDelegate, TKVibrationRecorderStyleProvider, NSCopying;



@interface TKVibrationRecorderRippleView : UIView <CAAnimationDelegate>

 {
    id<TKVibrationRecorderStyleProvider> *_styleProvider;
    CGPoint _currentTouchLocation;
    CGFloat _currentTouchStartTime;
    NSUInteger _numberOfRipplesForCurrentTouch;
    BOOL _isTrackingTouch;
    NSMutableArray *_recentTouchesContextQueue;
    NSMutableArray *_reusableTouchContexts;
    CGFloat _currentSpeedCoefficient;
    BOOL _needsCurrentSpeedRefresh;
    BOOL _isAnimating;
    id<NSCopying> *_displayLinkManagerObserverToken;
    NSMutableArray *_ringLayersQueue;
    NSMutableArray *_reusableRingLayers;
    NSMutableDictionary *_ringLayersByIdentifiers;
    NSUInteger _lastRingLayerIdentifier;
    CAAnimation *_ringEnlargementAnimation;
}


@property (readonly, nonatomic, getter=_isTouchDown) BOOL _touchDown;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat fadeOutRadius; // ivar: _fadeOutRadius
@property (nonatomic) CGFloat fingerMovingSpeed; // ivar: _fingerMovingSpeed
@property (nonatomic) CGFloat fingerStillSpeed; // ivar: _fingerStillSpeed
@property (nonatomic) CGFloat firstRippleInitialRadius; // ivar: _firstRippleInitialRadius
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)_currentSpeed;
-(id)_reusableRingLayer;
-(id)_reusableTouchContextObject;
-(id)init;
-(id)initWithStyleProvider:(id)arg0 ;
-(void)_enqueueReusableRingLayer:(id)arg0 ;
-(void)_enqueueReusableTouchContextObject:(id)arg0 ;
-(void)_enqueueRingLayerWithTimeIntervalSinceCreation:(CGFloat)arg0 normalizedLocation:(struct CGPoint )arg1 speed:(CGFloat)arg2 ;
-(void)_refresh:(id)arg0 ;
-(void)_startAnimation;
-(void)_stopAnimation;
-(void)_touchBeganAtLocation:(struct CGPoint )arg0 ;
-(void)_touchEndedAtLocation:(struct CGPoint )arg0 ;
-(void)_touchMovedToLocation:(struct CGPoint )arg0 ;
-(void)_updateRingEnlargementAnimation;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif