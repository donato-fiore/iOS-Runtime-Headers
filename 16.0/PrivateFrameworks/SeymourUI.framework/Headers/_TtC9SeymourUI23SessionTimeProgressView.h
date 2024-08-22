// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9SEYMOURUI23SESSIONTIMEPROGRESSVIEW_H
#define _TTC9SEYMOURUI23SESSIONTIMEPROGRESSVIEW_H

@class UIView;



@interface _TtC9SeymourUI23SessionTimeProgressView : UIView {
    ? presenter;
    ? label;
    ? ringGroup;
    ? ringsView;
    ? formatter;
    ? behavior;
}


@property (nonatomic, readonly) CGSize intrinsicContentSize;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif