// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASVTURNTABLEGESTURERECOGNIZER_H
#define ASVTURNTABLEGESTURERECOGNIZER_H

@class NSString;
@protocol ASVTurntableSingleFingerGestureDelegate, ASVTurntableTwoFingerGestureDelegate, ASVTurntableGestureRecognizerDelegate;


#import "ASVUnifiedGestureRecognizer.h"
#import "ASVDeceleration.h"
#import "ASVVelocitySample2D.h"
#import "ASVRubberBand.h"

@interface ASVTurntableGestureRecognizer : ASVUnifiedGestureRecognizer <ASVTurntableSingleFingerGestureDelegate, ASVTurntableTwoFingerGestureDelegate>

 {
    ? _initialPanLocation;
    ? _lastPanLocation;
    ? _yawThresholdLocation;
    ? _pitchThresholdLocation;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) float decelerationPitchDelta;
@property (readonly, nonatomic) float decelerationYawDelta;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) float initialAssetPitch; // ivar: _initialAssetPitch
@property ? initialPanLocation;
@property (nonatomic) float lastOverallDeltaX; // ivar: _lastOverallDeltaX
@property ? lastPanLocation;
@property (nonatomic) CGFloat lastPanTime; // ivar: _lastPanTime
@property (nonatomic) float lastRubberBandedPitch; // ivar: _lastRubberBandedPitch
@property (readonly, nonatomic) float maximumObjectScale;
@property (readonly, nonatomic) float minimumObjectScale;
@property (nonatomic) BOOL panThresholdPassed; // ivar: _panThresholdPassed
@property (retain, nonatomic) ASVDeceleration *pitchDeceleration; // ivar: _pitchDeceleration
@property ? pitchThresholdLocation;
@property (nonatomic) BOOL pitchThresholdPassed; // ivar: _pitchThresholdPassed
@property (retain, nonatomic) ASVVelocitySample2D *previousVelocitySample; // ivar: _previousVelocitySample
@property (retain, nonatomic) ASVRubberBand *rubberBand; // ivar: _rubberBand
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<ASVTurntableGestureRecognizerDelegate> *turntableDelegate; // ivar: _turntableDelegate
@property (retain, nonatomic) ASVVelocitySample2D *velocitySample; // ivar: _velocitySample
@property (retain, nonatomic) ASVDeceleration *yawDeceleration; // ivar: _yawDeceleration
@property ? yawThresholdLocation;
@property (nonatomic) BOOL yawThresholdPassed; // ivar: _yawThresholdPassed


-(float)clampedScaleForScale:(float)arg0 ;
-(id)initWithTurntableDelegate:(id)arg0 feedbackGenerator:(id)arg1 ;
-(id)singleFingerGestureForTouch:(id)arg0 dataSource:(id)arg1 enabledGestureTypes:(NSUInteger)arg2 ;
-(id)twoFingerGestureForFirstTouch:(id)arg0 secondTouch:(id)arg1 dataSource:(id)arg2 ;
-(void)gesture:(id)arg0 beganPanningAtScreenPoint;
-(void)gesture:(id)arg0 pannedToScreenPoint;
-(void)gestureEndedPanning:(id)arg0 ;
-(void)pitchRangeWithMinPitch:(*float)arg0 maxPitch:(*float)arg1 ;
-(void)startSpinningPitchWithInitialVelocity:(float)arg0 ;
-(void)startSpinningYawWithInitialVelocity:(float)arg0 ;


@end


#endif