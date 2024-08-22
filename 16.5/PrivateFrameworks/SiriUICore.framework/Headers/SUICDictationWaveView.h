// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUICDICTATIONWAVEVIEW_H
#define SUICDICTATIONWAVEVIEW_H

@class UIView, UIColor, CADisplayLink, NSMutableArray;
@protocol SUICAudioPowerLevelDataSource;


#import "SUICAudioLevelSmoother.h"

@interface SUICDictationWaveView : UIView {
    UIColor *_pipColor;
    float _linearPowerLevel;
    float _runningVolumeSum;
    float _framesPerSecond;
    id<SUICAudioPowerLevelDataSource> *_audioPowerLevelDataSource;
    CADisplayLink *_displayLink;
    float _numberOfFrames;
    float _initialOffset;
    SUICAudioLevelSmoother *_smoother;
    NSMutableArray *_pipLayers;
    CGRect _cachedFrame;
}


@property (nonatomic) float powerLevel; // ivar: _powerLevel


-(CGFloat)_heightForIntroAnimationPips;
-(CGFloat)_intervalForEachPipAnimation;
-(CGFloat)_leftMargin;
-(CGFloat)_maximumPipHeight;
-(CGFloat)_minimumPipHeight;
-(CGFloat)_originXForPipAtIndex:(NSUInteger)arg0 ;
-(CGFloat)_pipWidth;
-(NSUInteger)_numberOfPips;
-(float)_heightMultiplierForPipIndex:(NSUInteger)arg0 ;
-(float)_noiseForPipIndex:(NSUInteger)arg0 ;
-(float)_sinusoidalTaperForPipIndex:(NSUInteger)arg0 ;
-(float)_smoothStepTaperForPipIndex:(NSUInteger)arg0 ;
-(float)_smoothStepWithLowerBound:(float)arg0 upperBound:(float)arg1 innerValue:(float)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_startingFrameForPipAtIndex:(NSUInteger)arg0 ;
-(void)_addNewPips;
-(void)_animateInPipsBetweenLeftIndex:(NSUInteger)arg0 rightIndex:(NSUInteger)arg1 ;
-(void)_introAnimationTick;
-(void)_removeAllPips;
-(void)_resetPips;
-(void)_showPipsWithoutIntroAnimation;
-(void)_startIntroAnimation;
-(void)_tick:(id)arg0 ;
-(void)_updatePipColor;
-(void)_updatePipHeightAtIndex:(NSUInteger)arg0 withHeight:(CGFloat)arg1 ;
-(void)_updatePipHeights;
-(void)animateIn;
-(void)layoutSubviews;
-(void)setAudioPowerLevelDataSource:(id)arg0 ;
-(void)setPipColor:(id)arg0 ;


@end


#endif