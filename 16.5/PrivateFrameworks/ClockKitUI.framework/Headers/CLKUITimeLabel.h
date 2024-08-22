// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLKUITIMELABEL_H
#define CLKUITIMELABEL_H

@class UIView, NSString, NSAttributedString, CLKDevice, UIFont, UIColor, CLKTimeFormatter;
@protocol CLKTimeFormatterObserver, CLKTimeFormatterDelegate, CLKUILabel, _CLKUITimeLabelManager;


#import "CLKUITimeLabelStyle.h"

@interface CLKUITimeLabel : UIView <CLKTimeFormatterObserver, CLKTimeFormatterDelegate, CLKUILabel>

 {
    id<_CLKUITimeLabelManager> *_labelManager;
    BOOL _styleTransitioning;
    CGFloat _styleTransitionFraction;
    CGRect _styleTransitionEndFrame;
    CLKUITimeLabelStyle *_fromStyle;
    id<_CLKUITimeLabelManager> *_fromLabelManager;
    CGFloat _fadeStart;
    CGFloat _fadeEnd;
    BOOL _ignoresWindowPauseReason;
    NSString *_timeText;
}


@property (readonly, nonatomic) CGFloat _lastLineBaseline;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CLKDevice *device; // ivar: _device
@property (copy, nonatomic) id *didResizeHandler; // ivar: _didResizeHandler
@property (retain, nonatomic) UIFont *font;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGSize intrinsicSize;
@property (nonatomic) CGFloat maxWidth; // ivar: _maxWidth
@property (readonly, nonatomic) UIEdgeInsets opticalInsets;
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (nonatomic) BOOL paused; // ivar: _paused
@property (nonatomic) BOOL showSeconds; // ivar: _showSeconds
@property (nonatomic) BOOL showsDesignator; // ivar: _showsDesignator
@property (copy, nonatomic) CLKUITimeLabelStyle *style; // ivar: _style
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) NSInteger textAlignment;
@property (retain, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) CLKTimeFormatter *timeFormatter; // ivar: _timeFormatter


+(id)labelWithOptions:(NSUInteger)arg0 ;
+(id)labelWithOptions:(NSUInteger)arg0 forDevice:(id)arg1 ;
-(id)_newLabelManager;
-(id)_newUnderlyingLabel:(BOOL)arg0 ;
-(id)identifyingInfoForTimeFormatter:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 forDevice:(id)arg1 ;
-(id)initWithTimeLabelOptions:(NSUInteger)arg0 ;
-(id)initWithTimeLabelOptions:(NSUInteger)arg0 forDevice:(id)arg1 ;
-(id)initWithTimeLabelOptions:(NSUInteger)arg0 forDevice:(id)arg1 clockTimer:(id)arg2 ;
-(id)labelManagerContentView;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_cancelAnimation;
-(void)_enumerateUnderlyingLabelsWithBlock:(id)arg0 ;
-(void)_fadeTransitionLabels;
-(void)_resizeIfNecessary;
-(void)_scaleTransitionLabels;
-(void)cleanupAfterStyleTransition;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)prepareToTransitionToStyle:(id)arg0 ;
-(void)setBlinkingPaused:(BOOL)arg0 ;
-(void)setHidden:(BOOL)arg0 ;
-(void)setOverrideDate:(id)arg0 duration:(CGFloat)arg1 ;
-(void)setThreeDigitFont:(id)arg0 fourDigitFont:(id)arg1 designatorFont:(id)arg2 ;
-(void)setTimeFont:(id)arg0 designatorFont:(id)arg1 ;
-(void)setTimeOffset:(CGFloat)arg0 ;
-(void)sizeToFit;
-(void)timeFormatterTextDidChange:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif