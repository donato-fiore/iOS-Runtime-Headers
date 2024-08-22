// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CCVEGAJSCOLOR_H
#define CCVEGAJSCOLOR_H


#import <Foundation/Foundation.h>


@interface CCVegaJSColor : NSObject



+(struct CGColor *)newColorBlack;
+(struct CGColor *)newColorFromCSSString:(id)arg0 ;
+(struct CGColor *)newColorFromCSSString:(id)arg0 alpha:(CGFloat)arg1 ;
+(struct CGColor *)newColorFromR:(CGFloat)arg0 G:(CGFloat)arg1 B:(CGFloat)arg2 A:(CGFloat)arg3 ;
+(struct CGColor *)newColorTransparent;
+(struct CGColor *)newColorWhite;


@end


#endif