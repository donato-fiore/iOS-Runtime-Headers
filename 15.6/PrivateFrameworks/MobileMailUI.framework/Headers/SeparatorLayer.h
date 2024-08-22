// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEPARATORLAYER_H
#define SEPARATORLAYER_H

@class UIView, UIColor;



@interface SeparatorLayer : UIView

@property (nonatomic) NSUInteger axis; // ivar: _axis
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor


+(CGFloat)separatorHeight;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;


@end


#endif