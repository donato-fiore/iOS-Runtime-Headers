// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIPREVIEWINTERACTIONSTATERECOGNIZER_H
#define _UIPREVIEWINTERACTIONSTATERECOGNIZER_H


#import <Foundation/Foundation.h>


@interface _UIPreviewInteractionStateRecognizer : NSObject {
    NSUInteger _deepPressCount;
    CGFloat _smoothedForce;
    CGFloat _maximumForce;
    CGFloat _previousEffectiveTouchForce;
    CGFloat _timeMark;
    CGFloat _currentTime;
    CGFloat _previousTime;
    CGFloat _popOffsetInitial;
    CGFloat _popOffsetLongterm;
    CGFloat _popOffsetDecayAlpha;
    CGFloat _lowpassForceAlpha;
    CGFloat _popDecayingOffset;
    CGFloat _popReductionForce;
    CGFloat _progressToStrongThreshold;
    BOOL _allowsPopOffsetDecay;
    CGFloat _popForceReductionThreshold;
    CGFloat _popAlwaysThreshold;
    CGFloat _highPopThreshold;
    CGFloat _previousPopThreshold;
    CGFloat _saturationForce;
    CGFloat _revealThreshold;
    CGFloat _standardThreshold;
    CGFloat _strongThreshold;
    CGFloat _hintAndPeekInterval;
    CGFloat _hintReductionForce;
    CGFloat _actualHintForce;
    CGFloat _actualPeekForce;
    CGFloat _actualPopForce;
    CGFloat _actualHintTime;
    CGFloat _actualPeekTime;
    CGFloat _actualPopTime;
}


@property (nonatomic) NSInteger currentState; // ivar: _currentState
@property (nonatomic) CGFloat currentTouchForce; // ivar: _currentTouchForce
@property (nonatomic) CGFloat minimumPreviewDuration; // ivar: _minimumPreviewDuration
@property (nonatomic) BOOL shouldDelayReveal; // ivar: _shouldDelayReveal
@property (readonly, nonatomic) CGFloat velocity;


-(CGFloat)_denormalizedTouchForceValue:(CGFloat)arg0 ;
-(CGFloat)_normalizedTouchForceValue:(CGFloat)arg0 ;
-(CGFloat)_thresholdForForceLevel:(NSInteger)arg0 ;
-(CGFloat)currentProgressToState:(NSInteger)arg0 ;
-(id)description;
-(id)init;
-(void)_accessibilityForceSensitivityChanged:(id)arg0 ;
-(void)dealloc;
-(void)evaluateWithTouchForce:(CGFloat)arg0 atTimestamp:(CGFloat)arg1 withCentroidAtLocation:(struct CGPoint )arg2 ;
-(void)reset;


@end


#endif