// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PVHGBITMAPIMAGEBUFFERIMPL_H
#define PVHGBITMAPIMAGEBUFFERIMPL_H

@class NSString;
@protocol PVImageBufferImpl;

#import <Foundation/Foundation.h>


@interface PVHGBitmapImageBufferImpl : NSObject <PVImageBufferImpl>

 {
    HGRef<HGBitmap> _bitmap;
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
-(id)initWithHGBitmap:(struct HGRef<HGBitmap> )arg0 ;
-(struct CGImage *)cgImage;
-(struct CGSize )size;
-(struct HGRef<HGBitmap> )hgBitmapWithColorSpace:(id)arg0 ;
-(struct HGRef<HGCVPixelBuffer> )cvPixelBufferWithColorSpace:(id)arg0 ;
-(void)dealloc;


@end


#endif