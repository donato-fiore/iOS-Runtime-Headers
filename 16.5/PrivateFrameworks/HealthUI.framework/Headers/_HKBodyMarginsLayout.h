// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKBODYMARGINSLAYOUT_H
#define _HKBODYMARGINSLAYOUT_H

@class UIView;



@interface _HKBodyMarginsLayout : UIView

@property (retain, nonatomic) UIView *bodyView; // ivar: _bodyView
@property (retain, nonatomic) UIView *leftMarginView; // ivar: _leftMarginView
@property (retain, nonatomic) UIView *rightMarginView; // ivar: _rightMarginView


-(CGFloat)_maximumViewHeight;
-(CGFloat)_totalViewWidth;
-(id)init;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_invalidateLayout;
-(void)layoutSubviews;


@end


#endif