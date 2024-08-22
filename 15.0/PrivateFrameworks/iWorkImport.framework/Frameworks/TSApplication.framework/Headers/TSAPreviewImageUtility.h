// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSAPREVIEWIMAGEUTILITY_H
#define TSAPREVIEWIMAGEUTILITY_H


#import <Foundation/Foundation.h>


@interface TSAPreviewImageUtility : NSObject



+(BOOL)imageIsOpaque:(struct CGImage *)arg0 ;
+(id)scaleImage:(struct CGImage *)arg0 toSize:(struct CGSize )arg1 scale:(CGFloat)arg2 ;
+(struct CGImage *)newPrerenderedImageFromImage:(struct CGImage *)arg0 ;
+(struct CGImage *)newPrerenderedImageFromImage:(struct CGImage *)arg0 preserveAlpha:(BOOL)arg1 ;
+(void)drawInContext:(struct CGContext *)arg0 bounds:(struct CGRect )arg1 image:(struct CGImage *)arg2 imageSize:(struct CGSize )arg3 scaledSize:(struct CGSize )arg4 scale:(CGFloat)arg5 flip:(BOOL)arg6 ;


@end


#endif