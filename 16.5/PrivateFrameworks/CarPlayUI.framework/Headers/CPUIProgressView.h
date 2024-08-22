// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPUIPROGRESSVIEW_H
#define CPUIPROGRESSVIEW_H

@class UIView, UILabel, CADisplayLink, NSArray;


#import "CPUIProgressBarView.h"

@interface CPUIProgressView : UIView {
    UILabel *_timeLabel;
    UILabel *_timeRemainingLabel;
    UILabel *_liveLabel;
    CPUIProgressBarView *_progressBarView;
    CADisplayLink *_displayLink;
    CGFloat _lastTargetTimestamp;
    NSArray *_constraints;
    CGFloat _progressBarViewHeight;
    CGFloat _progressLabelHeight;
    NSUInteger _labelStyle;
}


@property (nonatomic) ? durationSnapshot; // ivar: _durationSnapshot
@property (nonatomic) BOOL showsProgressLabels; // ivar: _showsProgressLabels


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 progressBarHeight:(CGFloat)arg1 labelHeight:(CGFloat)arg2 labelStyle:(NSUInteger)arg3 ;
-(struct CGSize )intrinsicContentSize;
-(void)_displayLinkTick:(id)arg0 ;
-(void)_updateLabelsForElapsedTime:(CGFloat)arg0 duration:(CGFloat)arg1 ;
-(void)_updateProgressForElapsedTime:(CGFloat)arg0 duration:(CGFloat)arg1 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)pauseDisplayLinkIfNeeded;
-(void)runUntilNextDisplayLinkEvent;
-(void)setupConstraints;


@end


#endif