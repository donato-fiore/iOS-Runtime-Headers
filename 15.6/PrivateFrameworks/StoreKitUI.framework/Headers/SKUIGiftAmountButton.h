// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIGIFTAMOUNTBUTTON_H
#define SKUIGIFTAMOUNTBUTTON_H

@class UIButton, UIView;



@interface SKUIGiftAmountButton : UIButton {
    UIView *_borderView;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_reloadBorderView;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif