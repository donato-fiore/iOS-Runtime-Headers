// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CERTINFOGRADIENTLABEL_H
#define CERTINFOGRADIENTLABEL_H

@class UIView, UIFont, UIImage, NSString;



@interface CertInfoGradientLabel : UIView {
    *CGColor _patternColor;
}


@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (retain, nonatomic) UIImage *gradient; // ivar: _gradient
@property (retain, nonatomic) NSString *text; // ivar: _text


-(struct CGColor *)_patternColor;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)dealloc;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif