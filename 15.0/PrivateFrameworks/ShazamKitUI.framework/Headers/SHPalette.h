// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SHPALETTE_H
#define SHPALETTE_H


#import <Foundation/Foundation.h>


@interface SHPalette : NSObject



+(CGFloat)contentsScale;
+(id)defaultPalette;
+(struct CGColor *)sh_colorNamed:(id)arg0 ;
-(struct CGColor *)R:(CGFloat)arg0 G:(CGFloat)arg1 B:(CGFloat)arg2 A:(CGFloat)arg3 ;
-(struct CGColor *)alternateTintColor;
-(struct CGColor *)appTintColor;
-(struct CGColor *)blackColor;
-(struct CGColor *)clearColor;
-(struct CGColor *)shadowColor;
-(struct CGColor *)shazamColorNearBlack;
-(struct CGColor *)tagButtonBackgroundColor;
-(struct CGColor *)tagButtonBackgroundTransparentColor;
-(struct CGColor *)tagButtonShazamShapeColor;
-(struct CGColor *)tagButtonTopBorderColor;
-(struct CGColor *)taggingCircleColor;


@end


#endif