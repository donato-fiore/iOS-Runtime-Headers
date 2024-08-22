// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSSPINNERTITLEVIEW_H
#define VSSPINNERTITLEVIEW_H

@class UIView, UILabel, UIActivityIndicatorView;



@interface VSSpinnerTitleView : UIView {
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