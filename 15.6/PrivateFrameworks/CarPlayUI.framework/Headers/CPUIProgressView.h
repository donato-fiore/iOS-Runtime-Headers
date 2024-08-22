// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
}


@property (nonatomic) ? durationSnapshot; // ivar: _durationSnapshot
@property (nonatomic) BOOL showsProgressLabels; // ivar: _showsProgressLabels


-(id)initWithFrame:(struct CGRect )arg0 ;
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