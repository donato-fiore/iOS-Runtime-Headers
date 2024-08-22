// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRUNOWPLAYINGTIMECONTROLSVIEW_H
#define MRUNOWPLAYINGTIMECONTROLSVIEW_H

@class UIControl, NSString, CADisplayLink, AVTimeFormatter, UILabel, UIView, CAGradientLayer, MPCPlayerResponseItem;
@protocol MRUVisualStylingProviderObserver;


#import "MRUVisualStylingProvider.h"

@interface MRUNowPlayingTimeControlsView : UIControl <MRUVisualStylingProviderObserver>



@property (nonatomic) NSInteger context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL debugPreviousDisplayLinkPaused; // ivar: _debugPreviousDisplayLinkPaused
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CADisplayLink *displayLink; // ivar: _displayLink
@property (nonatomic) ? durationSnapshot; // ivar: _durationSnapshot
@property (nonatomic) CGFloat elapsedTimeFactor; // ivar: _elapsedTimeFactor
@property (retain, nonatomic) AVTimeFormatter *elapsedTimeFormatter; // ivar: _elapsedTimeFormatter
@property (retain, nonatomic) UILabel *elapsedTimeLabel; // ivar: _elapsedTimeLabel
@property (retain, nonatomic) UIView *elapsedTrack; // ivar: _elapsedTrack
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *knobView; // ivar: _knobView
@property (retain, nonatomic) UIView *liveBackground; // ivar: _liveBackground
@property (retain, nonatomic) CAGradientLayer *liveBackgroundMask; // ivar: _liveBackgroundMask
@property (retain, nonatomic) UILabel *liveLabel; // ivar: _liveLabel
@property (nonatomic, getter=isOnScreen) BOOL onScreen; // ivar: _onScreen
@property (retain, nonatomic) MPCPlayerResponseItem *playerResponseItem; // ivar: _playerResponseItem
@property (retain, nonatomic) AVTimeFormatter *remainingTimeFormatter; // ivar: _remainingTimeFormatter
@property (retain, nonatomic) UILabel *remainingTimeLabel; // ivar: _remainingTimeLabel
@property (retain, nonatomic) UIView *remainingTrack; // ivar: _remainingTrack
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider
@property (readonly) Class superclass;


-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(CGFloat)accessibilityElapsedDuration;
-(CGFloat)accessibilityTotalDuration;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)animateLayout;
-(void)cancelTrackingWithEvent:(id)arg0 ;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)layoutSubviews;
-(void)setEnabled:(BOOL)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)updateBackgroundMask;
-(void)updateContentSizeCategory;
-(void)updateDisplayLink;
-(void)updateDisplayLinkPaused;
-(void)updateElapsedTime;
-(void)updateElapsedTimeOnDisplayLinkTick:(id)arg0 ;
-(void)updateElapsedTimeWithElapsedTime:(CGFloat)arg0 ;
-(void)updateVisibility;
-(void)updateVisualStyling;
-(void)visualStylingProviderDidChange:(id)arg0 ;


@end


#endif