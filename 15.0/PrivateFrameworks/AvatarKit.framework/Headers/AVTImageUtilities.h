// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTIMAGEUTILITIES_H
#define AVTIMAGEUTILITIES_H


#import <Foundation/Foundation.h>


@interface AVTImageUtilities : NSObject



+(CGFloat)scaleFromImage:(id)arg0 ;
+(id)cropImage:(id)arg0 toRect:(struct CGRect )arg1 ;
+(id)imageFromCGImage:(struct CGImage *)arg0 scale:(CGFloat)arg1 ;
+(id)trimmedImageByTrimmingTransparentPixelsFromImage:(id)arg0 ;
+(id)trimmedImageByTrimmingTransparentPixelsFromImage:(id)arg0 requiringFullOpacity:(BOOL)arg1 ;
+(struct CGImage *)CGImageFromImage:(id)arg0 ;
+(struct UIEdgeInsets )transparencyInsetsForImage:(id)arg0 requiringFullOpacity:(BOOL)arg1 ;
+(void)cropImageWhitespace:(id)arg0 upToRect:(struct CGRect )arg1 resultBlock:(id)arg2 ;


@end


#endif