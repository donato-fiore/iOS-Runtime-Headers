// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUTABLETEXTFOOTERVIEW_H
#define SUTABLETEXTFOOTERVIEW_H

@class UIView, UIFont, UIColor, NSArray;



@interface SUTableTextFooterView : UIView

@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (retain, nonatomic) UIColor *shadowColor; // ivar: _shadowColor
@property (nonatomic) NSInteger textAlignment; // ivar: _textAlignment
@property (retain, nonatomic) UIColor *textColor; // ivar: _textColor
@property (retain, nonatomic) NSArray *textLines; // ivar: _textLines


-(void)dealloc;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)sizeToFit;


@end


#endif