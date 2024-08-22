// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLTABLETHUMBNAILENCODER_H
#define PLTABLETHUMBNAILENCODER_H


#import <Foundation/Foundation.h>


@interface PLTableThumbnailEncoder : NSObject



+(id)_encodeDownscaledImage:(struct CGImage *)arg0 toFormat:(id)arg1 withUUID:(id)arg2 error:(*id)arg3 ;
+(id)encodeThumbnailImage:(struct CGImage *)arg0 toFormat:(id)arg1 withUUID:(id)arg2 error:(*id)arg3 ;
+(id)encodeThumbnailImage:(struct CGImage *)arg0 toFormats:(id)arg1 withUUID:(id)arg2 error:(*id)arg3 ;
+(id)encodeThumbnailSource:(struct CGImageSource *)arg0 toFormat:(id)arg1 withUUID:(id)arg2 error:(*id)arg3 ;
+(id)encodeThumbnailSource:(struct CGImageSource *)arg0 toFormats:(id)arg1 withUUID:(id)arg2 error:(*id)arg3 ;
+(struct CGImage *)_createDownscaledImageFromSource:(struct CGImageSource *)arg0 toSize:(struct CGSize )arg1 cropped:(BOOL)arg2 ;
+(struct CGImage *)_createDownscaledImageFromSourceImage:(struct CGImage *)arg0 toSize:(struct CGSize )arg1 cropped:(BOOL)arg2 ;
+(struct CGImage *)createCascadeSeedImageFromSourceImage:(struct CGImage *)arg0 toFormats:(id)arg1 ;
+(struct CGSize )smallestSizeThatFitsSourceSize:(struct CGSize )arg0 withinFitFormat:(id)arg1 andLargerSquareFormat:(id)arg2 ;


@end


#endif