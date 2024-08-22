// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PIPARALLAXRENDERCACHEENTRY_H
#define _PIPARALLAXRENDERCACHEENTRY_H

@class NUCVPixelBuffer, CIImage, NUColorSpace, NUPixelFormat, CIRenderInfo, CIRenderTask;

#import <Foundation/Foundation.h>


@interface _PIParallaxRenderCacheEntry : NSObject {
    NUCVPixelBuffer *_pixelBuffer;
}


@property (readonly, nonatomic) CIImage *cachedImage; // ivar: _cachedImage
@property (readonly, nonatomic) NUColorSpace *colorSpace; // ivar: _colorSpace
@property (readonly, nonatomic) CIImage *image; // ivar: _image
@property (readonly, nonatomic) NUPixelFormat *pixelFormat; // ivar: _pixelFormat
@property (readonly, nonatomic) CIRenderInfo *renderInfo; // ivar: _renderInfo
@property (readonly, nonatomic) CIRenderTask *renderTask; // ivar: _renderTask
@property (readonly, nonatomic) NSUInteger sizeInBytes;


-(BOOL)render:(id)arg0 error:(*id)arg1 ;
-(BOOL)waitForRender:(*id)arg0 ;
-(id)initWithImage:(id)arg0 format:(id)arg1 colorSpace:(id)arg2 ;


@end


#endif