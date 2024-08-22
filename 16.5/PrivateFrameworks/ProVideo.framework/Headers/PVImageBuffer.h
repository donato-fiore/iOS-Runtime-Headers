// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PVIMAGEBUFFER_H
#define PVIMAGEBUFFER_H

@protocol PVImageBufferImpl;

#import <Foundation/Foundation.h>


@interface PVImageBuffer : NSObject {
    id<PVImageBufferImpl> *_imageBufferImpl;
    *HGSynchronizable _lock;
}




+(id)imageWithCGImage:(struct CGImage *)arg0 ;
+(id)imageWithCGImage:(struct CGImage *)arg0 withGainMap:(struct CGImage *)arg1 ;
+(id)imageWithCVPixelBuffer:(struct __CVBuffer *)arg0 ;
+(id)imageWithHGBitmap:(struct HGRef<HGBitmap> )arg0 ;
+(id)imageWithHGCVPixelBuffer:(struct HGRef<HGCVPixelBuffer> )arg0 ;
+(id)imageWithMTLTexture:(id)arg0 ;
+(id)imageWithUIImage:(id)arg0 ;
-(BOOL)canCreateCVPixelBuffer;
-(BOOL)canCreateHGBitmap;
-(BOOL)cvPixelBufferRequiresCopy;
-(BOOL)cvPixelBufferRequiresRender;
-(id)debugQuickLookObject;
-(id)description;
-(id)initWithImageBufferImpl:(id)arg0 ;
-(id)uiImage;
-(struct CGImage *)cgImage;
-(struct CGSize )size;
-(struct HGRef<HGBitmap> )hgBitmap;
-(struct HGRef<HGBitmap> )hgBitmapWithColorSpace:(id)arg0 ;
-(struct __CVBuffer *)cvPixelBuffer;
-(struct __CVBuffer *)cvPixelBufferWithColorSpace:(id)arg0 ;
-(void)dealloc;


@end


#endif