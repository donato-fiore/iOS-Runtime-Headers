// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMAGEHOMOGRAPHYRESAMPLER_H
#define IMAGEHOMOGRAPHYRESAMPLER_H


#import <Foundation/Foundation.h>


@interface ImageHomographyResampler : NSObject {
    CGFloat homographyMatrix;
}




-(id)init;
-(short)ResampleCVPixels:(struct __CVBuffer *)arg0 clipToRect:(struct CGRect )arg1 outputSize:(struct CGSize )arg2 toPixelBuffer:(struct __CVBuffer *)arg3 ;
-(struct CGImage *)ResampleCGImage:(struct CGImage *)arg0 clipToRect:(struct CGRect )arg1 outputSize:(struct CGSize )arg2 ;
-(struct __CVBuffer *)ResampleCVPixels:(struct __CVBuffer *)arg0 clipToRect:(struct CGRect )arg1 outputSize:(struct CGSize )arg2 ;
-(void)ClearOutOfBoundsPixels:(struct WorkingPixmapRecord *)arg0 ;
-(void)EraseCVPixelBuffer:(struct __CVBuffer *)arg0 ;
-(void)setHomographyMatrix:(*CGFloat)arg0 ;


@end


#endif