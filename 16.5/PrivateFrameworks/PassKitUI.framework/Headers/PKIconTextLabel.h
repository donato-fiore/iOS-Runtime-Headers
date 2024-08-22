// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKICONTEXTLABEL_H
#define PKICONTEXTLABEL_H

@class UIView, UILabel, UIImageView, UIImage, NSAttributedString, UIColor, UIFont;



@interface PKIconTextLabel : UIView {
    UILabel *_textLabel;
    UIImageView *_iconView;
}


@property (retain, nonatomic) UIImage *icon; // ivar: _icon
@property (nonatomic) NSUInteger iconAlignment; // ivar: _iconAlignment
@property (copy, nonatomic) NSAttributedString *text; // ivar: _text
@property (retain, nonatomic) UIColor *textColor; // ivar: _textColor
@property (retain, nonatomic) UIFont *textFont; // ivar: _textFont


-(BOOL)hasContent;
-(id)init;
-(id)initFrame:(struct CGRect )arg0 ;
-(id)initWithAttributedText:(id)arg0 icon:(id)arg1 ;
-(id)initWithText:(id)arg0 icon:(id)arg1 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 isTemplateLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateView;
-(void)layoutSubviews;


@end


#endif