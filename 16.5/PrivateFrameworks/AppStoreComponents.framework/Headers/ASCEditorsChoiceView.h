// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCEDITORSCHOICEVIEW_H
#define ASCEDITORSCHOICEVIEW_H

@class UIView, UIColor, UILabel;



@interface ASCEditorsChoiceView : UIView

@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(CGFloat)laurelPadding;
+(id)editorsChoiceFont;
+(id)editorsChoiceText;
+(id)leftLaurel;
+(id)rightLaurel;
-(id)accessibilityLabel;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif