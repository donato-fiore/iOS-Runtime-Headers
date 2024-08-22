// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUFORCEINTERPOLATEDPRESSGESTURERECOGNIZER_H
#define HUFORCEINTERPOLATEDPRESSGESTURERECOGNIZER_H

@class UILongPressGestureRecognizer, NSMutableSet;



@interface HUForceInterpolatedPressGestureRecognizer : UILongPressGestureRecognizer

@property (readonly, nonatomic) CGFloat currentForceMultiplier;
@property (nonatomic) CGFloat currentSampleForceMultiplier; // ivar: _currentSampleForceMultiplier
@property (nonatomic) CGFloat currentSampleTimestamp; // ivar: _currentSampleTimestamp
@property (readonly, nonatomic) NSMutableSet *hu_activeTouches; // ivar: _hu_activeTouches
@property (readonly, nonatomic) CGFloat overallForceMultiplier;
@property (nonatomic) CGFloat overallForceMultiplierExcludingCurrentSample; // ivar: _overallForceMultiplierExcludingCurrentSample
@property (nonatomic) CGFloat touchStartTime; // ivar: _touchStartTime


-(CGFloat)_forceMultiplierIncludingCurrentSample;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)_logForceMultiplierSample;
-(void)_resetForceSamples;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif