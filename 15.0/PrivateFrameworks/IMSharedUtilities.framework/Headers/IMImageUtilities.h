// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMIMAGEUTILITIES_H
#define IMIMAGEUTILITIES_H


#import <Foundation/Foundation.h>


@interface IMImageUtilities : NSObject



+(BOOL)persistCPBitmapWithImage:(struct CGImage *)arg0 url:(id)arg1 ;
+(BOOL)persistPreviewToDiskCache:(struct CGImage *)arg0 previewURL:(id)arg1 error:(*id)arg2 ;
+(CGFloat)scaleFactorForThumbnailWithSize:(struct CGSize )arg0 constraints:(struct IMPreviewConstraints )arg1 targetPxSize:(struct CGSize )arg2 shouldScaleUpPreview:(BOOL)arg3 maxUpScale:(CGFloat)arg4 ;
+(struct CGImage *)newThumbnailForTargetSize:(struct CGSize )arg0 imageSize:(struct CGSize )arg1 imageSource:(struct CGImageSource *)arg2 atIndex:(NSUInteger)arg3 mode:(NSInteger)arg4 scale:(CGFloat)arg5 ;
+(struct CGImage *)newThumbnailForTargetSize:(struct CGSize )arg0 imageSize:(struct CGSize )arg1 imageSource:(struct CGImageSource *)arg2 mode:(NSInteger)arg3 scale:(CGFloat)arg4 ;
+(struct CGSize )imageRefPxSize:(struct CGImage *)arg0 ;
+(struct CGSize )imageSourcePxSize:(struct CGImageSource *)arg0 ;
+(void)sampleImageEdges:(char *)arg0 usingRect:(struct CGRect )arg1 forMostlyWhitePixels:(*NSUInteger)arg2 otherPixels:(*NSUInteger)arg3 bytesPerRow:(NSInteger)arg4 ;


@end


#endif