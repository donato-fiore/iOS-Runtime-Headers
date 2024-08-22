// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHPALETTE_H
#define SHPALETTE_H


#import <Foundation/Foundation.h>


@interface SHPalette : NSObject



+(CGFloat)contentsScale;
+(id)default;
+(struct CGColor *)sh_colorNamed:(id)arg0 ;
-(struct CGColor *)R:(CGFloat)arg0 G:(CGFloat)arg1 B:(CGFloat)arg2 A:(CGFloat)arg3 ;
-(struct CGColor *)alternateTintColor;
-(struct CGColor *)appTintColor;
-(struct CGColor *)blackColor;
-(struct CGColor *)clearColor;
-(struct CGColor *)listeningButtonBackgroundColor;
-(struct CGColor *)listeningButtonBackgroundTransparentColor;
-(struct CGColor *)listeningButtonShazamShapeColor;
-(struct CGColor *)listeningButtonTopBorderColor;
-(struct CGColor *)listeningCircleColor;
-(struct CGColor *)shadowColor;
-(struct CGColor *)shazamColorNearBlack;


@end


#endif