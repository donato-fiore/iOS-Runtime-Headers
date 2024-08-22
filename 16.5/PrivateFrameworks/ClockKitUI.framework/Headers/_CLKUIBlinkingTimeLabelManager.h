// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CLKUIBLINKINGTIMELABELMANAGER_H
#define _CLKUIBLINKINGTIMELABELMANAGER_H

@class UIView, CLKTimeFormatter, CLKClockTimerToken, UILabel, NSString, UIColor;
@protocol _CLKUITimeLabelManager, CLKTimeFormatterObserver;


#import "_CLKUIBasicTimeLabelManager.h"

@interface _CLKUIBlinkingTimeLabelManager : UIView <_CLKUITimeLabelManager, CLKTimeFormatterObserver>

 {
    CLKTimeFormatter *_timeFormatter;
    _CLKUIBasicTimeLabelManager *_numbersLabelManager;
    _CLKUIBasicTimeLabelManager *_blinkerLabelManager;
    CLKClockTimerToken *_blinkTimerToken;
    BOOL _usesIsolatedBlinkerLabel;
    UILabel *_minutesBlinkerLabel;
    UILabel *_secondsBlinkerLabel;
}


@property (nonatomic) BOOL animationsPaused; // ivar: _animationsPaused
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGSize intrinsicSize;
@property (readonly, nonatomic) UIEdgeInsets opticalInsets;
@property (nonatomic) BOOL showSeconds; // ivar: _showSeconds
@property (readonly) Class superclass;
@property (retain, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) UIView *view;


-(CGFloat)_lastLineBaseline;
-(id)effectiveAttributedText;
-(id)effectiveFont;
-(id)initWithForDevice:(id)arg0 timeFormatter:(id)arg1 options:(NSUInteger)arg2 labelFactory:(id)arg3 ;
-(struct CGSize )sizeThatFits;
-(void)_startBlinking;
-(void)_startOrStopBlinking;
-(void)_stopBlinking;
-(void)_updateBlinkerAlphaForSecondFraction:(CGFloat)arg0 ;
-(void)dealloc;
-(void)enumerateUnderlyingLabelsWithBlock:(id)arg0 ;
-(void)setMaxWidth:(CGFloat)arg0 ;
-(void)setShowsDesignator:(BOOL)arg0 ;
-(void)setStyle:(id)arg0 ;
-(void)sizeViewToFit;
-(void)timeFormatterReportingLiveTimeDidChange:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateTimeText;


@end


#endif