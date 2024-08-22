// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKINLINEINKPICKERITEM_H
#define PKINLINEINKPICKERITEM_H

@class UIView, UIButton;



@interface PKInlineInkPickerItem : UIView

@property (retain, nonatomic) UIButton *button; // ivar: _button
@property (nonatomic) CGFloat yOffset; // ivar: _yOffset


-(id)initWithButton:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif