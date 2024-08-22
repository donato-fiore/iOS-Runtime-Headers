// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCRCGESTUREFACTORY_H
#define SCRCGESTUREFACTORY_H

@protocol SCRCGestureFactoryCallback;

#import <Foundation/Foundation.h>

#import "SCRCTargetSelectorTimer.h"
#import "SCRCGestureFactory.h"

@interface SCRCGestureFactory : NSObject {
    CGFloat _stallDistance;
    CGFloat _maxDimension;
    CGFloat _thumbRegion;
    NSInteger _orientation;
    NSInteger _directions;
    ? _axisFlipper;
    CGFloat _scaledTrackingDistance;
    BOOL _setTrackingTimer;
    CGFloat _flickVelocityThreshold;
    CGFloat _tapVelocityThreshold;
    CGFloat _echoWaitTime;
    CGRect _tapSpeedRegion;
    CGFloat _tapVelocityThresholdForRegion;
    NSInteger _tapSpeedFingerCount;
    BOOL _inTapSpeedRegionForDownEvent;
    CGRect _mainFrame;
    CGRect _gutterFrame;
    CGFloat _lastTime;
    CGFloat _lastDownTime;
    CGFloat _lastGutterDownTime;
    CGFloat _lastDegrees;
    CGFloat _startDegrees;
    CGFloat _startDistance;
    CGFloat _potentialTrackingStartTimestamp;
    BOOL _requireUp;
    NSInteger _state;
    NSInteger _direction;
    CGFloat _directionalSlope;
    SCRCFingerState _finger;
    NSUInteger _absoluteFingerCount;
    unsigned short _fingerCount;
    unsigned short _lastFingerCount;
    CGFloat _distance;
    NSUInteger _tapCount;
    CGRect _tapFrame;
    CGRect _tapMultiFrame;
    id<SCRCGestureFactoryCallback> *_trackDelegate;
    id<SCRCGestureFactoryCallback> *_tapDelegate;
    id<SCRCGestureFactoryCallback> *_gutterUpDelegate;
    id<SCRCGestureFactoryCallback> *_splitTapDelegate;
    id<SCRCGestureFactoryCallback> *_canSplitTapDelegate;
    id<SCRCGestureFactoryCallback> *_didBeginSplitGestureDelegate;
    SCRCTargetSelectorTimer *_trackingTimer;
    ? _tap;
    SCRCTargetSelectorTimer *_tapTimer;
    SCRCTargetSelectorTimer *_gutterUpTimer;
    SCRCGestureFactory *_splitFactory;
    ? _split;
}


@property (nonatomic) BOOL thumbRejectionEnabled; // ivar: _thumbRejectionEnabled


-(BOOL)_handleSplitEvent:(id)arg0 ;
-(BOOL)_handleSplitTap;
-(BOOL)tapIsDown;
-(CGFloat)directionalSlope;
-(CGFloat)distance;
-(CGFloat)firstFingerAltitude;
-(CGFloat)firstFingerAzimuth;
-(CGFloat)firstFingerPressure;
-(CGFloat)flickSpeed;
-(CGFloat)tapInterval;
-(CGFloat)tapSpeed;
-(CGFloat)vector;
-(CGFloat)velocity;
-(NSInteger)direction;
-(NSInteger)gestureState;
-(NSInteger)orientation;
-(NSUInteger)absoluteFingerCount;
-(NSUInteger)fingerCount;
-(NSUInteger)tapCount;
-(id)gestureStateString;
-(id)initWithSize:(struct CGSize )arg0 delegate:(id)arg1 ;
-(id)initWithSize:(struct CGSize )arg0 delegate:(id)arg1 threadKey:(id)arg2 ;
-(struct ? )captureCurrentState;
-(struct ? )handleGestureEvent:(id)arg0 ;
-(struct CGPoint )endLocation;
-(struct CGPoint )rawAverageLocation;
-(struct CGPoint )rawLocation;
-(struct CGPoint )startLocation;
-(struct CGPoint )tapPoint;
-(struct CGPoint )tapPointWeightedToSides;
-(struct CGRect )_currentTapRect;
-(struct CGRect )mainFrame;
-(struct CGRect )multiTapFrame;
-(struct CGRect )tapFrame;
-(void)_down:(id)arg0 ;
-(void)_drag:(id)arg0 ;
-(void)_enterTrackingMode:(id)arg0 ;
-(void)_handleGutterUp;
-(void)_handleTap;
-(void)_processUpAndPost:(BOOL)arg0 ;
-(void)_resetSplit;
-(void)_up;
-(void)_updateMultiTapFrame;
-(void)_updateStartWithPoint:(struct CGPoint )arg0 time:(CGFloat)arg1 ;
-(void)_updateTapState;
-(void)dealloc;
-(void)reset;
-(void)setFlickSpeed:(CGFloat)arg0 ;
-(void)setOrientation:(NSInteger)arg0 ;
-(void)setTapSpeed:(CGFloat)arg0 ;
-(void)setTapSpeedTimeThreshold:(CGFloat)arg0 forRegion:(struct CGRect )arg1 fingerCount:(NSInteger)arg2 ;


@end


#endif