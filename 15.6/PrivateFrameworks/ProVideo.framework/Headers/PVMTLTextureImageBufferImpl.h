// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PVMTLTEXTUREIMAGEBUFFERIMPL_H
#define PVMTLTEXTUREIMAGEBUFFERIMPL_H

@class NSString;
@protocol PVImageBufferImpl, MTLTexture;

#import <Foundation/Foundation.h>


@interface PVMTLTextureImageBufferImpl : NSObject <PVImageBufferImpl>

 {
    id<MTLTexture> *_mtlTexture;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canCreateCVPixelBuffer;
-(BOOL)canCreateHGBitmap;
-(BOOL)cvPixelBufferRequiresCopy;
-(id)initWithMTLTexture:(id)arg0 ;
-(struct CGImage *)cgImage;
-(struct CGSize )size;
-(struct HGRef<HGBitmap> )hgBitmapWithColorSpace:(id)arg0 ;
-(struct HGRef<HGCVPixelBuffer> )cvPixelBufferWithColorSpace:(id)arg0 ;


@end


#endif