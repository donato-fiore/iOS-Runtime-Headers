// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMEXPOSUREBIASSLIDER_H
#define CAMEXPOSUREBIASSLIDER_H

@class UIView;


#import "CAMExposureBiasSliderThumb.h"

@interface CAMExposureBiasSlider : UIView

@property (readonly, nonatomic) CGFloat _lastInteractionTime; // ivar: __lastInteractionTime
@property (readonly, retain, nonatomic) UIView *_maxTrackMaskView; // ivar: __maxTrackMaskView
@property (readonly, retain, nonatomic) UIView *_maxTrackView; // ivar: __maxTrackView
@property (readonly, retain, nonatomic) UIView *_minTrackMaskView; // ivar: __minTrackMaskView
@property (readonly, retain, nonatomic) UIView *_minTrackView; // ivar: __minTrackView
@property (readonly, retain, nonatomic) CAMExposureBiasSliderThumb *_thumbView; // ivar: __thumbView
@property (nonatomic) float exposureBiasMax; // ivar: _exposureBiasMax
@property (nonatomic) float exposureBiasMin; // ivar: _exposureBiasMin
@property (nonatomic) float exposureBiasValue; // ivar: _exposureBiasValue
@property (nonatomic) BOOL suspendTrackFadeOut; // ivar: _suspendTrackFadeOut
@property (readonly, nonatomic) CGFloat thumbMaxExtension;


-(CGFloat)_trackAlpha;
-(float)_normalizedExposureValue;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGPoint )_sunCenterForNormalizedValue:(float)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_animateTrackAlpha:(CGFloat)arg0 withDuration:(CGFloat)arg1 ;
-(void)_cancelDelayedDim;
-(void)_dimTrackForInactivity;
-(void)_scheduleDelayedDim;
-(void)_updateForChangedNormalizedExposureValue;
-(void)forceTrackDimmed;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(void)updateLastInteractionTime;


@end


#endif