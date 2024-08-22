// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NANOWPLAYINGPLAYBACKSCRUBBER_H
#define NANOWPLAYINGPLAYBACKSCRUBBER_H

@class UIView, NSDateComponentsFormatter, UIActivityIndicatorView, NSString, UIVisualEffectView, UILabel;
@protocol IMCustomSliderDelegate, NANowPlayingPlaybackScrubberDelegate;


#import "AEScrubberSlider.h"

@interface NANowPlayingPlaybackScrubber : UIView <IMCustomSliderDelegate>



@property (retain, nonatomic) NSDateComponentsFormatter *accessibilityFormatter; // ivar: _accessibilityFormatter
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator
@property (nonatomic) CGFloat currentTime; // ivar: _currentTime
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NANowPlayingPlaybackScrubberDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableExtenalTimeSpecification; // ivar: _disableExtenalTimeSpecification
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (retain, nonatomic) NSDateComponentsFormatter *formatter; // ivar: _formatter
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIVisualEffectView *lighteningEffectView; // ivar: _lighteningEffectView
@property (retain, nonatomic) UILabel *playedTimeLabel; // ivar: _playedTimeLabel
@property (retain, nonatomic) UILabel *remainingTimeLabel; // ivar: _remainingTimeLabel
@property (retain, nonatomic) AEScrubberSlider *scrubber; // ivar: _scrubber
@property (readonly) Class superclass;


-(BOOL)isAccessibilityElement;
-(NSUInteger)accessibilityTraits;
-(id)_accessibilityStringFromTimeInterval:(CGFloat)arg0 ;
-(id)_stretchableImageOfHalfRoundFacingRight:(BOOL)arg0 size:(struct CGSize )arg1 color:(id)arg2 ;
-(id)_stringFromTimeInterval:(CGFloat)arg0 ;
-(id)_stringFromTimeInterval:(CGFloat)arg0 withFormatter:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)timestampStringAttributes:(BOOL)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateAccessibilityValue;
-(void)accessibilityDecrement;
-(void)accessibilityIncrement;
-(void)beginTracking:(id)arg0 ;
-(void)enableExternalTimeSpecificationAfterPropagationDelay;
-(void)endTracking:(id)arg0 ;
-(void)layoutSubviews;
-(void)scrubberDidChange:(id)arg0 ;
-(void)setIsWaiting:(BOOL)arg0 ;
-(void)sliderValueChanged:(id)arg0 ;


@end


#endif