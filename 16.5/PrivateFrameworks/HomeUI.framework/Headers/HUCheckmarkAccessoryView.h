// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUCHECKMARKACCESSORYVIEW_H
#define HUCHECKMARKACCESSORYVIEW_H

@class UIView, UIImageView;



@interface HUCheckmarkAccessoryView : UIView

@property (nonatomic) BOOL checked; // ivar: _checked
@property (retain, nonatomic) UIImageView *checkmarkImageView; // ivar: _checkmarkImageView
@property (nonatomic) BOOL disabled; // ivar: _disabled


+(CGFloat)borderWidth;
+(id)grayBorderColor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateColors;
-(void)layoutSubviews;
-(void)tintColorDidChange;


@end


#endif