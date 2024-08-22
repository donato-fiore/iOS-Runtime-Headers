// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CTLCROPSUPPORT_H
#define CTLCROPSUPPORT_H


#import <Foundation/Foundation.h>


@interface CTLCropSupport : NSObject



+(BOOL)createImageFileWithAsset:(id)arg0 fileType:(id)arg1 normalizedSourceRect:(struct CGRect )arg2 destinationSize:(struct CGSize )arg3 scale:(CGFloat)arg4 url:(id)arg5 error:(*id)arg6 ;
+(BOOL)createImageFileWithAsset:(id)arg0 fileType:(id)arg1 scale:(CGFloat)arg2 rects:(id)arg3 url:(id)arg4 error:(*id)arg5 ;
+(BOOL)writeImage:(struct CGImage *)arg0 toURL:(id)arg1 fileType:(id)arg2 ;
+(id)fetchNewCGImageForAsset:(id)arg0 size:(struct CGSize )arg1 ;
+(id)rectAndColorStringFromRect:(struct CGRect )arg0 colorIndex:(NSInteger)arg1 ;
+(id)sourceImageForAsset:(id)arg0 ;
+(struct CGImage *)createCGImageWithSourceCGImage:(id)arg0 normalizedSourceRect:(struct CGRect )arg1 destinationSize:(struct CGSize )arg2 ;
+(struct CGImage *)createScaledImageForImage:(struct CGImage *)arg0 scale:(CGFloat)arg1 ;
+(struct CGImage *)createScaledImageForImage:(struct CGImage *)arg0 scale:(CGFloat)arg1 rectAndColors:(id)arg2 ;
+(struct CGImage *)croppedImageForAsset:(id)arg0 normalizedSourceRect:(struct CGRect )arg1 destinationSize:(struct CGSize )arg2 ;
+(struct CGRect )calculateCropRectWithAsset:(id)arg0 aspectRatio:(CGFloat)arg1 destinationSize:(struct CGSize )arg2 cropMethodType:(NSInteger)arg3 ;
+(struct CGRect )calculateSuggestedCropRectWithAsset:(id)arg0 aspectRatio:(CGFloat)arg1 destinationSize:(struct CGSize )arg2 ;
+(struct CGSize )playbackSizeForAsset:(id)arg0 ;


@end


#endif