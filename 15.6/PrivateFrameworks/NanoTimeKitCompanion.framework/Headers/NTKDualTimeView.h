// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKDUALTIMEVIEW_H
#define NTKDUALTIMEVIEW_H

@class UIView, NSDate, NSCalendar, CLKClockTimerToken, CAReplicatorLayer, CALayer, NSArray, NSString, CLKDevice;
@protocol NTKTimeView;


#import "NTKFaceColorPalette.h"
#import "NTKAnalogHandsView.h"
#import "NTKDigitalTimeLabel.h"

@interface NTKDualTimeView : UIView <NTKTimeView>

 {
    NSDate *_overrideDate;
    NSCalendar *_calendar;
    CLKClockTimerToken *_clockTimerToken;
    CAReplicatorLayer *_hourTickReplicatorLayer;
    CAReplicatorLayer *_minuteTickReplicatorLayer;
    CALayer *_digitalTicksContainer;
    NSArray *_digitalTicks;
    NTKFaceColorPalette *_blackPalette;
}


@property (retain, nonatomic) UIView *analogContainerView; // ivar: _analogContainerView
@property (retain, nonatomic) NTKAnalogHandsView *analogHandsView; // ivar: _analogHandsView
@property (retain, nonatomic) UIView *analogTickContainerView; // ivar: _analogTickContainerView
@property (retain, nonatomic) NTKFaceColorPalette *colorPalette; // ivar: _colorPalette
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CLKDevice *device; // ivar: _device
@property (retain, nonatomic) UIView *dialBackgroundView; // ivar: _dialBackgroundView
@property (retain, nonatomic) UIView *dialContainerView; // ivar: _dialContainerView
@property (readonly, nonatomic) UIView *digitalContainerView; // ivar: _digitalContainerView
@property (readonly, nonatomic) NTKDigitalTimeLabel *digitalTimeLabel; // ivar: _digitalTimeLabel
@property (nonatomic) BOOL editing; // ivar: _editing
@property (nonatomic, getter=isFrozen) BOOL frozen; // ivar: _frozen
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideActiveTicks; // ivar: _hideActiveTicks
@property (nonatomic) NSUInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (nonatomic) BOOL useMonospacedDigitalNumbers; // ivar: _useMonospacedDigitalNumbers


-(BOOL)shouldUseCustomDialBackground;
-(CGFloat)_analogTickInset;
-(CGFloat)_digitalTickInset;
-(NSUInteger)_hourTickCount;
-(NSUInteger)_minuteTickCount;
-(id)_activeTimeView;
-(id)_customDialBackgroundView;
-(id)_dialColorForColorPalette:(id)arg0 ;
-(id)_digitalLabelFont;
-(id)_digitalStyle;
-(id)_digitalTimeLabelColorForColorPalette:(id)arg0 ;
-(id)_hourMinuteHandFillColorForColorPalette:(id)arg0 ;
-(id)_hourMinuteHandStrokeColorForColorPalette:(id)arg0 ;
-(id)_hourTickColorForColorPalette:(id)arg0 ;
-(id)_minuteTickColorForColorPalette:(id)arg0 ;
-(id)_secondHandColorForColorPalette:(id)arg0 ;
-(id)_secondTickActiveColorForColorPalette:(id)arg0 ;
-(id)_secondTickInactiveColorForColorPalette:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 style:(NSUInteger)arg1 andDevice:(id)arg2 ;
-(struct CGSize )_hourTickSize;
-(struct CGSize )_minuteTickSize;
-(struct CGSize )_secondTickSize;
-(void)_applyColorToAnalogHands;
-(void)_applyColorToDigitalLabelAndTicks;
-(void)_colorizeAnalogTicksWithHourColor:(id)arg0 minuteColor:(id)arg1 ;
-(void)_colorizeDigitalTicksWithActiveColor:(id)arg0 inactiveColor:(id)arg1 now:(id)arg2 secondFraction:(CGFloat)arg3 ;
-(void)_didFinishTimeViewSetup;
-(void)_endDigitalTicksTimer;
-(void)_refreshDigitalTicks;
-(void)_refreshDigitalTicksWithNow:(id)arg0 secondFraction:(CGFloat)arg1 ;
-(void)_setupAnalogHandsView;
-(void)_setupAnalogTicks;
-(void)_setupAnalogTimeViews;
-(void)_setupDial;
-(void)_setupDigitalTicks;
-(void)_setupDigitalTimeViews;
-(void)_startDigitalTicksTimer;
-(void)_tearDownAnalogContainerView;
-(void)_tearDownDigitalContainerView;
-(void)applyTransitionFraction:(CGFloat)arg0 fromColorPalette:(id)arg1 toColorPalette:(id)arg2 ;
-(void)applyTransitionFraction:(CGFloat)arg0 fromColorPalette:(id)arg1 toColorPalette:(id)arg2 ignoreTimeView:(BOOL)arg3 ;
-(void)applyTransitionFraction:(CGFloat)arg0 fromStyle:(NSUInteger)arg1 toStyle:(NSUInteger)arg2 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setOverrideDate:(id)arg0 duration:(CGFloat)arg1 ;
-(void)setSecondsHidden:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setTimeOffset:(CGFloat)arg0 ;
-(void)setupTimeViews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif