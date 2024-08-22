// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSSITEICONKEYCOLOREXTRACTOR_H
#define WBSSITEICONKEYCOLOREXTRACTOR_H


#import <Foundation/Foundation.h>


@interface WBSSiteIconKeyColorExtractor : NSObject



+(char *)_createRGBAPixelBufferFromImage:(struct CGImage *)arg0 ;
+(id)keyColorForIcon:(id)arg0 ;
+(id)keyColorForIcon:(id)arg0 allowAllColors:(BOOL)arg1 confidence:(*CGFloat)arg2 nonTransparentConfidence:(*CGFloat)arg3 insets:(struct UIEdgeInsets *)arg4 ;


@end


#endif