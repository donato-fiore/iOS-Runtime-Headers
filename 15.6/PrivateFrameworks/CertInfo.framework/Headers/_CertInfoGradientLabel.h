// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CERTINFOGRADIENTLABEL_H
#define _CERTINFOGRADIENTLABEL_H

@class UIView, NSString, UIFont, UIImage;



@interface _CertInfoGradientLabel : UIView {
    NSString *_text;
    UIFont *_font;
    UIImage *_checkImage;
    *CGColor _patternColor;
}




-(id)initWithTrusted:(BOOL)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)dealloc;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif