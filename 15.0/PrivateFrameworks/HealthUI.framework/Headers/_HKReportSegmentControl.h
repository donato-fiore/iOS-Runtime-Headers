// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKREPORTSEGMENTCONTROL_H
#define _HKREPORTSEGMENTCONTROL_H

@class UIView, UIControl, UISegmentedControl;



@interface _HKReportSegmentControl : UIView

@property (readonly, nonatomic) UIView *dividerView; // ivar: _dividerView
@property (readonly, nonatomic) UIControl *rightControl; // ivar: _rightControl
@property (readonly, nonatomic) UISegmentedControl *segmentControl; // ivar: _segmentControl


-(BOOL)isOpaque;
-(id)initWithFrame:(struct CGRect )arg0 backgroundColor:(id)arg1 dividerColor:(id)arg2 rightControl:(id)arg3 ;
-(struct CGSize )intrinsicContentSize;
-(void)layoutSubviews;


@end


#endif