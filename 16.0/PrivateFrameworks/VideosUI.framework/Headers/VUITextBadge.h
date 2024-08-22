// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUITEXTBADGE_H
#define VUITEXTBADGE_H

@class UIView, NSAttributedString, UIImage, UIColor, NSString;



@interface VUITextBadge : UIView

@property (copy, nonatomic) NSAttributedString *attributedTitle; // ivar: _attributedTitle
@property (retain, nonatomic) UIImage *backgroundImage; // ivar: _backgroundImage
@property (nonatomic) UIEdgeInsets badgeInsets; // ivar: _badgeInsets
@property (nonatomic) NSUInteger badgeStyle; // ivar: _badgeStyle
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (nonatomic) CGFloat fontSize; // ivar: _fontSize
@property (nonatomic) CGFloat strokeSize; // ivar: _strokeSize
@property (nonatomic) int textBlendMode; // ivar: _textBlendMode
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor
@property (copy, nonatomic) NSString *title; // ivar: _title


+(id)attributedTextFromString:(id)arg0 fontColor:(id)arg1 fontSize:(CGFloat)arg2 ;
-(id)initWithAttributedString:(id)arg0 tintColor:(id)arg1 cornerRadius:(CGFloat)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithTitle:(id)arg0 tintColor:(id)arg1 fontSize:(CGFloat)arg2 cornerRadius:(CGFloat)arg3 ;
-(struct CGSize )_textSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif