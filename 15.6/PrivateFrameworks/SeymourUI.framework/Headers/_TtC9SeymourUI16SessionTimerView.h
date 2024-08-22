// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC9SEYMOURUI16SESSIONTIMERVIEW_H
#define _TTC9SEYMOURUI16SESSIONTIMERVIEW_H

@class UIView;



@interface _TtC9SeymourUI16SessionTimerView : UIView {
    ? presenter;
    ? metricBuilder;
    ? circle;
    ? label;
    ? animator;
}


@property (nonatomic, readonly) CGSize intrinsicContentSize;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)updateDuration:(CGFloat)arg0 ;


@end


#endif