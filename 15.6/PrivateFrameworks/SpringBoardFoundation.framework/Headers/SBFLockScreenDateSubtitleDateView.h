// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFLOCKSCREENDATESUBTITLEDATEVIEW_H
#define SBFLOCKSCREENDATESUBTITLEDATEVIEW_H

@class NSTimeZone, NSDate;


#import "SBFLockScreenDateSubtitleView.h"
#import "SBFLockScreenAlternateDateLabel.h"

@interface SBFLockScreenDateSubtitleDateView : SBFLockScreenDateSubtitleView {
    NSTimeZone *_timeZone;
}


@property (nonatomic) CGFloat alignmentPercent; // ivar: _alignmentPercent
@property (retain, nonatomic) SBFLockScreenAlternateDateLabel *alternateDateLabel; // ivar: _alternateDateLabel
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (nonatomic) BOOL useCompactDateFormat; // ivar: _useCompactDateFormat


+(CGFloat)scaledFontSize:(CGFloat)arg0 withMaximumFontSizeCategory:(id)arg1 ;
+(CGFloat)subtitleLabelToLunarDateLabelBaselineDifferenceY;
-(CGFloat)_lunarDateLabelYOffsetFromDateLabel;
-(id)initWithDate:(id)arg0 ;
-(struct CGRect )subtitleLabelFrame;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_overlayCalendarDidChange;
-(void)_setupAlternateDateLabel;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setLegibilitySettings:(id)arg0 ;
-(void)setStrength:(CGFloat)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif