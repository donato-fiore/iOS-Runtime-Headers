// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDSWATCHCACHE_H
#define TSDSWATCHCACHE_H

@class NSOperationQueue;

#import <Foundation/Foundation.h>


@interface TSDSwatchCache : NSObject {
    NSOperationQueue *mOperationQueue;
}




+(id)swatchCache;
-(id)imageForImagePreset:(id)arg0 imageSize:(struct CGSize )arg1 imageScale:(CGFloat)arg2 imageInfo:(id)arg3 shouldClipVertically:(BOOL)arg4 documentRoot:(id)arg5 ;
-(id)imageForImagePreset:(id)arg0 imageSize:(struct CGSize )arg1 imageScale:(CGFloat)arg2 swatchFrame:(struct CGRect )arg3 imageInfo:(id)arg4 shouldClipVertically:(BOOL)arg5 documentRoot:(id)arg6 ;
-(id)imageForMoviePreset:(id)arg0 imageSize:(struct CGSize )arg1 imageScale:(CGFloat)arg2 movieInfo:(id)arg3 shouldClipVertically:(BOOL)arg4 documentRoot:(id)arg5 ;
-(id)imageForMoviePreset:(id)arg0 imageSize:(struct CGSize )arg1 imageScale:(CGFloat)arg2 swatchFrame:(struct CGRect )arg3 movieInfo:(id)arg4 shouldClipVertically:(BOOL)arg5 documentRoot:(id)arg6 ;
-(id)imageForShapePreset:(id)arg0 imageSize:(struct CGSize )arg1 imageScale:(CGFloat)arg2 shapeType:(int)arg3 angle:(CGFloat)arg4 documentRoot:(id)arg5 ;
-(id)imageForShapePreset:(id)arg0 imageSize:(struct CGSize )arg1 imageScale:(CGFloat)arg2 swatchFrame:(struct CGRect )arg3 shapeType:(int)arg4 angle:(CGFloat)arg5 documentRoot:(id)arg6 ;
-(id)init;
-(id)p_maskInfoForMovieInfo:(id)arg0 context:(id)arg1 ;
-(id)p_thumbnailImageDataForImageData:(id)arg0 ;
-(struct CGImage *)p_newImageWithConnectionLineKnobsForShape:(id)arg0 atScale:(CGFloat)arg1 ofSize:(struct CGSize )arg2 overImage:(struct CGImage *)arg3 ;
-(struct CGSize )imageSizeForPreset:(id)arg0 swatchSize:(struct CGSize )arg1 ;
-(struct CGSize )shapeSwatchInset;
-(void)applyFakeShadowForWhitePresetsIfNecessary:(id)arg0 documentRoot:(id)arg1 ;
-(void)dealloc;
-(void)warmStyle:(id)arg0 withFillProperty:(int)arg1 documentRoot:(id)arg2 ;


@end


#endif