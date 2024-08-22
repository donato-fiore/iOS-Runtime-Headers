// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CCVEGAJSFONT_H
#define CCVEGAJSFONT_H


#import <Foundation/Foundation.h>


@interface CCVegaJSFont : NSObject {
    *__CTFont _font;
}




+(CGFloat)defaultLineHeightForNativeFont:(id)arg0 ;
+(CGFloat)numericWeightFromFontWeight:(id)arg0 ;
+(id)cssFontWeightFromNumericWeight:(CGFloat)arg0 ;
+(id)fontMetricsForFont:(struct __CTFont *)arg0 fontNameOverride:(id)arg1 lineHeightOverride:(CGFloat)arg2 ;
+(id)fontMetricsForTextStyle:(id)arg0 options:(id)arg1 ;
+(id)nativeTextStyleFromTextStyle:(id)arg0 ;
+(id)parseCSSFontFamilyList:(id)arg0 ;
+(id)stringWithTextStyleOptions:(id)arg0 ;
-(CGFloat)defaultLineHeight;
-(id)fontMetrics;
-(id)initWithCSSFontString:(id)arg0 options:(id)arg1 ;
-(id)initWithFontFamily:(id)arg0 fontSize:(CGFloat)arg1 fontWeight:(id)arg2 fontStyle:(id)arg3 fontVariant:(id)arg4 options:(id)arg5 ;
-(struct ? )extendedMeasureText:(id)arg0 ;
-(struct ? )measureText:(id)arg0 ;
-(struct __CTFont *)CTFont;
-(void)dealloc;
-(void)drawText:(id)arg0 x:(CGFloat)arg1 y:(CGFloat)arg2 align:(id)arg3 color:(struct CGColor *)arg4 drawingMode:(int)arg5 inContext:(struct CGContext *)arg6 ;


@end


#endif