// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUARTICLENEXTBUTTON_H
#define NUARTICLENEXTBUTTON_H

@class UIButton, UIImageView, UILabel;



@interface NUArticleNextButton : UIButton

@property (readonly, nonatomic) UIImageView *nextArrowImageView; // ivar: _nextArrowImageView
@property (readonly, nonatomic) UILabel *nextTitleLabel; // ivar: _nextTitleLabel


+(id)nextArrowImage;
+(id)titleLabelFont;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setNextLabelTitle:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif