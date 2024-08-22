// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACUISPINNERTITLE_H
#define ACUISPINNERTITLE_H

@class UIView, UILabel, UIActivityIndicatorView;



@interface ACUISpinnerTitle : UIView {
    UILabel *_titleView;
    UIActivityIndicatorView *_spinner;
}




-(id)initWithTitle:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;


@end


#endif