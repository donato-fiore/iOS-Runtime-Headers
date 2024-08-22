// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUWAVEFORMVIEW_H
#define HUWAVEFORMVIEW_H

@class UIView, NSMutableArray, UIColor, NSString, SUICFlamesView, NSArray, UILabel;
@protocol SUICFlamesViewDelegate;



@interface HUWaveformView : UIView <SUICFlamesViewDelegate>



@property (retain, nonatomic) NSMutableArray *audioPowerLevels; // ivar: _audioPowerLevels
@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SUICFlamesView *flamesView; // ivar: _flamesView
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat minTimeLabelWidth; // ivar: _minTimeLabelWidth
@property (readonly, nonatomic) NSArray *powerLevels;
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *timeLabel; // ivar: _timeLabel
@property (retain, nonatomic) UIColor *waveformColor; // ivar: _waveformColor
@property (retain, nonatomic) NSMutableArray *waveformSlices; // ivar: _waveformSlices


-(float)audioLevelForFlamesView:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 waveformColor:(id)arg1 backgroundColor:(id)arg2 ;
-(void)appendPowerLevel:(CGFloat)arg0 ;
-(void)clearPowerLevels;
-(void)layoutSubviews;


@end


#endif