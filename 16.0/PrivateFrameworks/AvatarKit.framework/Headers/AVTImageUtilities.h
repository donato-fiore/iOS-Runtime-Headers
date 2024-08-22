// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTIMAGEUTILITIES_H
#define AVTIMAGEUTILITIES_H


#import <Foundation/Foundation.h>


@interface AVTImageUtilities : NSObject



+(id)trimmedImageByTrimmingTransparentPixelsFromImage:(id)arg0 ;
+(id)trimmedImageByTrimmingTransparentPixelsFromImage:(id)arg0 requiringFullOpacity:(BOOL)arg1 ;
+(struct UIEdgeInsets )transparencyInsetsForImage:(struct CGImage *)arg0 requiringFullOpacity:(BOOL)arg1 ;
+(void)cropImageWhitespace:(struct CGImage *)arg0 outsideRect:(struct CGRect )arg1 insideRect:(struct CGRect )arg2 resultBlock:(id)arg3 ;


@end


#endif