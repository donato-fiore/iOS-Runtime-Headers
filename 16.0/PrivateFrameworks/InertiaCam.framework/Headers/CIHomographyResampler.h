// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIHOMOGRAPHYRESAMPLER_H
#define CIHOMOGRAPHYRESAMPLER_H

@class CIContext, CIImage;


#import "ImageHomographyResampler.h"

@interface CIHomographyResampler : ImageHomographyResampler {
    CIContext *_ctx;
    CIImage *_fillImage;
    CGRect _lastFillRect;
}


@property CGRect hightlightRect; // ivar: hightlightRect


-(id)init;
-(short)ResampleCVPixels:(struct __CVBuffer *)arg0 clipToRect:(struct CGRect )arg1 outputSize:(struct CGSize )arg2 toPixelBuffer:(struct __CVBuffer *)arg3 ;
-(struct __CVBuffer *)ResampleCVPixels:(struct __CVBuffer *)arg0 clipToRect:(struct CGRect )arg1 outputSize:(struct CGSize )arg2 ;
-(struct __CVBuffer *)ResampleCVPixels:(struct __CVBuffer *)arg0 clipToRect:(struct CGRect )arg1 outputSize:(struct CGSize )arg2 pixelBufferPool:(struct __CVPixelBufferPool *)arg3 ;
-(void)updateBackgroundFill:(struct CGRect )arg0 ;


@end


#endif