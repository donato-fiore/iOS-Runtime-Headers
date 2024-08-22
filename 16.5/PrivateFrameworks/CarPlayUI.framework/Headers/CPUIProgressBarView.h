// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPUIPROGRESSBARVIEW_H
#define CPUIPROGRESSBARVIEW_H

@class UIView;



@interface CPUIProgressBarView : UIView

@property (retain, nonatomic) UIView *overallBarView; // ivar: _overallBarView
@property (nonatomic) CGFloat progress; // ivar: _progress
@property (retain, nonatomic) UIView *progressBarView; // ivar: _progressBarView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif