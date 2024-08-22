// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKMESSAGEENTRYWAVEFORMVIEW_H
#define CKMESSAGEENTRYWAVEFORMVIEW_H

@class UIView, UIImageView, UIVisualEffectView, NSMutableArray, UILabel;



@interface CKMessageEntryWaveformView : UIView

@property (retain, nonatomic) UIImageView *balloonImageView; // ivar: _balloonImageView
@property (retain, nonatomic) UIVisualEffectView *blurView; // ivar: _blurView
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) NSUInteger maxPowerLevelsCount; // ivar: _maxPowerLevelsCount
@property (nonatomic) CGFloat minTimeLabelWidth; // ivar: _minTimeLabelWidth
@property (retain, nonatomic) NSMutableArray *powerLevels; // ivar: _powerLevels
@property (retain, nonatomic) UILabel *timeLabel; // ivar: _timeLabel
@property (retain, nonatomic) UIImageView *waveformImageView; // ivar: _waveformImageView


+(id)waveformCurveTransform;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)appendPowerLevel:(CGFloat)arg0 ;
-(void)clearPowerLevels;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)updateWaveform;


@end


#endif