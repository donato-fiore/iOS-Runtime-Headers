// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIONBOARDINGFOOTERVIEW_H
#define SKUIONBOARDINGFOOTERVIEW_H

@class UIView, UIButton;


#import "SKUIOnboardingProgressView.h"

@interface SKUIOnboardingFooterView : UIView {
    UIButton *_leftButton;
    UIButton *_rightButton;
}


@property (readonly, nonatomic) UIButton *leftButton;
@property (retain, nonatomic) SKUIOnboardingProgressView *progressView; // ivar: _progressView
@property (readonly, nonatomic) UIButton *rightButton;


-(id)_newButton;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_hideButton:(id)arg0 withAnimation:(NSInteger)arg1 ;
-(void)_showButton:(id)arg0 withTitle:(id)arg1 animation:(NSInteger)arg2 ;
-(void)hideLeftButtonWithAnimation:(NSInteger)arg0 ;
-(void)hideRightButtonWithAnimation:(NSInteger)arg0 ;
-(void)layoutSubviews;
-(void)showLeftButtonWithTitle:(id)arg0 animation:(NSInteger)arg1 ;
-(void)showRightButtonWithTitle:(id)arg0 animation:(NSInteger)arg1 ;


@end


#endif