// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PVCVPIXELBUFFERIMAGEBUFFERIMPL_H
#define PVCVPIXELBUFFERIMAGEBUFFERIMPL_H

@class NSString;
@protocol PVImageBufferImpl;

#import <Foundation/Foundation.h>


@interface PVCVPixelBufferImageBufferImpl : NSObject <PVImageBufferImpl>

 {
    HGRef<HGCVPixelBuffer> _pixelBuffer;
    *CGImage _generatedCGImage;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canCreateCVPixelBuffer;
-(BOOL)canCreateHGBitmap;
-(BOOL)cvPixelBufferRequiresCopy;
-(BOOL)cvPixelBufferRequiresRender;
-(id)initWithCVPixelBuffer:(struct __CVBuffer *)arg0 ;
-(id)initWithHGCVPixelBuffer:(struct HGRef<HGCVPixelBuffer> )arg0 ;
-(struct CGImage *)cgImage;
-(struct CGSize )size;
-(struct HGRef<HGBitmap> )hgBitmapWithColorSpace:(id)arg0 ;
-(struct HGRef<HGCVPixelBuffer> )cvPixelBufferWithColorSpace:(id)arg0 ;
-(void)dealloc;


@end


#endif