// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKMARKUPBUTTONCONTAINERVIEW_H
#define AKMARKUPBUTTONCONTAINERVIEW_H

@class UIView, UIButton;



@interface AKMarkupButtonContainerView : UIView

@property (retain, nonatomic) UIButton *button; // ivar: _button
@property (nonatomic) BOOL selected; // ivar: _selected


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)updateForMiniBarState:(BOOL)arg0 ;


@end


#endif