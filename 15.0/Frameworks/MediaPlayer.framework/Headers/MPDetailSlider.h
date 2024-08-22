// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPDETAILSLIDER_H
#define MPDETAILSLIDER_H

@class UISlider, UILabel, NSTimer, UIView, UIImageView, AVTimeFormatter, NSString;
@protocol MPDetailedScrubbing, MPDetailScrubControllerDelegate, MPDetailSliderDelegate;


#import "MPDetailScrubController.h"

@interface MPDetailSlider : UISlider <MPDetailedScrubbing, MPDetailScrubControllerDelegate>

 {
    UILabel *_currentTimeInverseLabel;
    UILabel *_currentTimeLabel;
    MPDetailScrubController *_scrubController;
    BOOL _autoscrubActive;
    NSTimer *_autoscrubTimer;
    BOOL _canCommit;
    CGFloat _currentTime;
    UIView *_downloadingTrackOverlay;
    UIImageView *_glowDetailScrubImageView;
    BOOL _isTracking;
    CGFloat _maxTrackWidth;
    CGPoint _previousLocationInView;
    NSInteger _style;
    UIImageView *_thumbImageView;
    CGFloat _trackInset;
    AVTimeFormatter *_formatter;
}


@property (nonatomic) BOOL allowsDetailScrubbing;
@property (nonatomic) BOOL allowsScrubbing; // ivar: _allowsScrubbing
@property (nonatomic) CGFloat availableDuration; // ivar: _availableDuration
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MPDetailSliderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL detailScrubbingAvailableForCurrentDuration;
@property (nonatomic) CGFloat detailScrubbingVerticalRange; // ivar: _detailScrubbingVerticalRange
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *localizedScrubSpeedText;
@property (nonatomic) CGFloat minTimeLabelWidth; // ivar: _minTimeLabelWidth
@property (readonly) Class superclass;
@property (nonatomic) NSInteger timeLabelStyle; // ivar: _timeLabelStyle


+(Class)labelClass;
-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)isTracking;
-(id)_colorSliceImageWithColor:(id)arg0 height:(CGFloat)arg1 ;
-(id)_modernThumbImageWithColor:(id)arg0 height:(CGFloat)arg1 includeShadow:(BOOL)arg2 ;
-(id)_stringForCurrentTime:(CGFloat)arg0 ;
-(id)_stringForInverseCurrentTime:(CGFloat)arg0 ;
-(id)_stringForTime:(CGFloat)arg0 elapsed:(BOOL)arg1 ;
-(id)createThumbView;
-(id)currentThumbImage;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 style:(NSInteger)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 style:(NSInteger)arg1 maxTrackWidth:(CGFloat)arg2 ;
-(id)timeLabelFontForStyle:(NSInteger)arg0 ;
-(id)timeLabelTextColorForStyle:(NSInteger)arg0 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(struct CGRect )thumbHitRect;
-(struct CGRect )thumbRectForBounds:(struct CGRect )arg0 trackRect:(struct CGRect )arg1 value:(float)arg2 ;
-(struct CGRect )trackRectForBounds:(struct CGRect )arg0 ;
-(struct UIEdgeInsets )_thumbHitEdgeInsets;
-(void)_autoscrubTick:(id)arg0 ;
-(void)_commitValue;
-(void)_resetScrubInfo;
-(void)_setValueWhileTracking:(float)arg0 duration:(CGFloat)arg1 ;
-(void)_setupControlsForStyle;
-(void)_updateForAvailableDuraton;
-(void)_updateTimeDisplayForTime:(CGFloat)arg0 ;
-(void)_updateTimeDisplayForTime:(CGFloat)arg0 force:(BOOL)arg1 ;
-(void)_updateTrackInset;
-(void)cancelTracking;
-(void)cancelTrackingWithEvent:(id)arg0 ;
-(void)dealloc;
-(void)detailScrubController:(id)arg0 didChangeScrubSpeed:(NSInteger)arg1 ;
-(void)detailScrubController:(id)arg0 didChangeValue:(float)arg1 ;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setValue:(float)arg0 ;
-(void)setValue:(float)arg0 animated:(BOOL)arg1 ;
-(void)setValue:(float)arg0 duration:(CGFloat)arg1 ;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif