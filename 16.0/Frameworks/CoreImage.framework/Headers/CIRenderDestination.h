// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIRENDERDESTINATION_H
#define CIRENDERDESTINATION_H


#import <Foundation/Foundation.h>

#import "CIBlendKernel.h"

@interface CIRenderDestination : NSObject {
    *void _priv;
}


@property NSUInteger alphaMode;
@property (retain, nonatomic) CIBlendKernel *blendKernel;
@property BOOL blendsInDestinationColorSpace;
@property (getter=isClamped) BOOL clamped;
@property (nonatomic) *CGColorSpace colorSpace;
@property (getter=isDithered) BOOL dithered;
@property (getter=isFlipped) BOOL flipped;
@property (readonly) NSUInteger height;
@property (readonly) NSUInteger width;


+(int)_crashed_because_nonaddressable_memory_was_passed_to_initWithBitmapData:(*void)arg0 width:(NSUInteger)arg1 height:(NSUInteger)arg2 bytesPerRow:(NSUInteger)arg3 format:(int)arg4 ;
-(*void)_internalRenderDestination;
-(*void)_render:(*void)arg0 withContext:(*void)arg1 ;
-(BOOL)isCompressed;
-(id)_initWithInternalRenderDestination:(*void)arg0 width:(NSUInteger)arg1 height:(NSUInteger)arg2 format:(int)arg3 colorspace:(struct CGColorSpace *)arg4 ;
-(id)debugDescription;
-(id)description;
-(id)imageRepresentation;
-(id)init;
-(id)initWithBitmapData:(*void)arg0 width:(NSUInteger)arg1 height:(NSUInteger)arg2 bytesPerRow:(NSUInteger)arg3 format:(int)arg4 ;
-(id)initWithGLTexture:(unsigned int)arg0 target:(unsigned int)arg1 width:(NSUInteger)arg2 height:(NSUInteger)arg3 ;
-(id)initWithIOSurface:(id)arg0 ;
-(id)initWithMTLTexture:(id)arg0 commandBuffer:(id)arg1 ;
-(id)initWithPixelBuffer:(struct __CVBuffer *)arg0 ;
-(id)initWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 pixelFormat:(NSUInteger)arg2 commandBuffer:(id)arg3 mtlTextureProvider:(id)arg4 ;
-(id)initWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 pixelFormat:(unsigned int)arg2 colorSpace:(struct CGColorSpace *)arg3 pixelBufferProvider:(id)arg4 ;
-(id)initWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 pixelFormat:(unsigned int)arg2 colorSpace:(struct CGColorSpace *)arg3 surfaceProvider:(id)arg4 ;
-(id)label;
-(id)surface;
-(int)ditherDepth;
-(int)format;
-(struct CIRenderDestinationInternal *)_internalRepresentation;
-(void)_set_YCC_matrix:(int)arg0 fullRange:(BOOL)arg1 deep:(BOOL)arg2 isFloat:(float)arg3 ;
-(void)dealloc;
-(void)setCompressed:(BOOL)arg0 ;
-(void)setLabel:(id)arg0 ;


@end


#endif