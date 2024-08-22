// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRUNOWPLAYINGTIMECONTROLSVIEW_H
#define MRUNOWPLAYINGTIMECONTROLSVIEW_H

@class UIView, NSString, CADisplayLink, AVTimeFormatter, UILabel, CAGradientLayer;
@protocol MRUVisualStylingProviderObserver;


#import "MRUSlider.h"
#import "MRUVisualStylingProvider.h"
#import "MRUTimeControls.h"

@interface MRUNowPlayingTimeControlsView : UIView <MRUVisualStylingProviderObserver>



@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL debugPreviousDisplayLinkPaused; // ivar: _debugPreviousDisplayLinkPaused
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDimmed) BOOL dimmed; // ivar: _dimmed
@property (retain, nonatomic) CADisplayLink *displayLink; // ivar: _displayLink
@property (retain, nonatomic) AVTimeFormatter *elapsedTimeFormatter; // ivar: _elapsedTimeFormatter
@property (retain, nonatomic) UILabel *elapsedTimeLabel; // ivar: _elapsedTimeLabel
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger layout; // ivar: _layout
@property (nonatomic) BOOL leftAlignLive; // ivar: _leftAlignLive
@property (retain, nonatomic) UIView *liveBackground; // ivar: _liveBackground
@property (retain, nonatomic) CAGradientLayer *liveBackgroundMask; // ivar: _liveBackgroundMask
@property (retain, nonatomic) UILabel *liveLabel; // ivar: _liveLabel
@property (nonatomic, getter=isOnScreen) BOOL onScreen; // ivar: _onScreen
@property (retain, nonatomic) AVTimeFormatter *remainingTimeFormatter; // ivar: _remainingTimeFormatter
@property (retain, nonatomic) UILabel *remainingTimeLabel; // ivar: _remainingTimeLabel
@property (retain, nonatomic) MRUSlider *slider; // ivar: _slider
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider
@property (readonly) Class superclass;
@property (retain, nonatomic) MRUTimeControls *timeControls; // ivar: _timeControls


-(CGFloat)accessibilityElapsedDuration;
-(CGFloat)accessibilityTotalDuration;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)sliderTouchCancel:(id)arg0 ;
-(void)sliderTouchDown:(id)arg0 ;
-(void)sliderValueChanged:(id)arg0 ;
-(void)updateBackgroundMask;
-(void)updateContentSizeCategory;
-(void)updateDisplayLink;
-(void)updateDisplayLinkPaused;
-(void)updateElapsedTime;
-(void)updateElapsedTimeForDate:(id)arg0 ;
-(void)updateElapsedTimeOnDisplayLinkTick:(id)arg0 ;
-(void)updateElapsedTimeWithElapsedTime:(CGFloat)arg0 ;
-(void)updateVisibility;
-(void)updateVisualStyling;
-(void)visualStylingProviderDidChange:(id)arg0 ;


@end


#endif