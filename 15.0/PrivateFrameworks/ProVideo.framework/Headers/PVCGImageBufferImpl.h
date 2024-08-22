// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PVCGIMAGEBUFFERIMPL_H
#define PVCGIMAGEBUFFERIMPL_H

@class NSString;
@protocol PVImageBufferImpl;

#import <Foundation/Foundation.h>


@interface PVCGImageBufferImpl : NSObject <PVImageBufferImpl>

 {
    *CGImage _image;
    HGRef<HGCVPixelBuffer> _generatedPixelBuffer;
    HGRef<HGBitmap> _generatedBitmap;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canCreateCVPixelBuffer;
-(BOOL)canCreateHGBitmap;
-(BOOL)cvPixelBufferRequiresCopy;
-(id)initWithCGImage:(struct CGImage *)arg0 ;
-(struct CGImage *)cgImage;
-(struct CGSize )size;
-(struct HGRef<HGBitmap> )hgBitmapWithColorSpace:(id)arg0 ;
-(struct HGRef<HGCVPixelBuffer> )cvPixelBufferWithColorSpace:(id)arg0 ;
-(void)dealloc;


@end


#endif