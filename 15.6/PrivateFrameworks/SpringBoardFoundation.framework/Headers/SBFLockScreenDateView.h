// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFLOCKSCREENDATEVIEW_H
#define SBFLOCKSCREENDATEVIEW_H

@class UIView, SBUILegibilityLabel, NSTimeZone, NSDate, _UILegibilitySettings, UIColor;


#import "SBFLockScreenDateSubtitleDateView.h"
#import "SBFLockScreenDateSubtitleView.h"

@interface SBFLockScreenDateView : UIView {
    SBUILegibilityLabel *_timeLabel;
    CGFloat _timeAlpha;
    CGFloat _subtitleAlpha;
    SBFLockScreenDateSubtitleDateView *_dateSubtitleView;
    NSTimeZone *_timeZone;
}


@property (nonatomic) CGFloat alignmentPercent; // ivar: _alignmentPercent
@property (readonly, nonatomic) CGFloat contentAlpha;
@property (retain, nonatomic) SBFLockScreenDateSubtitleView *customSubtitleView; // ivar: _customSubtitleView
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (nonatomic) CGFloat dateToTimeStretch; // ivar: _dateToTimeStretch
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (nonatomic) CGFloat maximumSubtitleWidth; // ivar: _maximumSubtitleWidth
@property (nonatomic) CGRect restingFrame; // ivar: _restingFrame
@property (readonly, nonatomic) CGFloat subtitleBaselineOffsetFromOrigin;
@property (nonatomic, getter=isSubtitleHidden) BOOL subtitleHidden;
@property (nonatomic) CGFloat subtitleLegibilityStrength; // ivar: _subtitleLegibilityStrength
@property (retain, nonatomic) UIColor *textColor; // ivar: _overrideTextColor
@property (readonly, nonatomic) CGFloat timeBaselineOffsetFromOrigin;
@property (nonatomic) CGFloat timeLegibilityStrength; // ivar: _timeLegibilityStrength
@property (nonatomic) BOOL useCompactDateFormat; // ivar: _useCompactDateFormat


+(CGFloat)defaultHeight;
+(id)timeFont;
+(struct ? )timeFontMetrics;
-(id)_timeLabel;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_subtitleViewFrameForView:(id)arg0 alignmentPercent:(CGFloat)arg1 ;
-(struct CGRect )_timeLabelFrameForAlignmentPercent:(CGFloat)arg0 ;
-(struct CGRect )chargingVisualInformationTimeFrame;
-(struct CGRect )chargingVisualInformationTimeSubtitleFrame;
-(struct CGRect )presentationExtentForAlignmentPercent:(CGFloat)arg0 ;
-(struct UIEdgeInsets )_cachedGlyphInsetsTimeFontForString:(id)arg0 ;
-(struct UIEdgeInsets )_timeLabelInsetsForTimeString:(id)arg0 ;
-(void)_setSubtitleAlpha:(CGFloat)arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif