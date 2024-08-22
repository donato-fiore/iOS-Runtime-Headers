// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PREFERENCESDELETEBUTTONVIEW_H
#define PREFERENCESDELETEBUTTONVIEW_H

@class UIView, UIButton;



@interface PreferencesDeleteButtonView : UIView {
    UIButton *_button;
}


@property (readonly, retain, nonatomic) UIButton *button;


-(id)initWithTitle:(id)arg0 target:(id)arg1 action:(SEL)arg2 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif