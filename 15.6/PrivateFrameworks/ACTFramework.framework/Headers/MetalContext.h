// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef METALCONTEXT_H
#define METALCONTEXT_H

@protocol MTLCommandQueue, MTLDevice, MTLLibrary;

#import <Foundation/Foundation.h>


@interface MetalContext : NSObject

@property (readonly, nonatomic) NSObject<MTLCommandQueue> *commandQueue; // ivar: _commandQueue
@property (readonly, nonatomic) NSObject<MTLDevice> *device; // ivar: _device
@property (readonly, nonatomic) NSObject<MTLLibrary> *library; // ivar: _library


+(NSUInteger)bytesPerPixelForTextureFormat:(NSUInteger)arg0 ;
+(void)makeBufferCoherent:(id)arg0 buffer:(id)arg1 ;
+(void)makeTextureCoherent:(id)arg0 texture:(id)arg1 ;
-(BOOL)writeMetalTextureToData:(*void)arg0 texture:(id)arg1 mipmapLevel:(int)arg2 ;
-(BOOL)writeMetalTextureToFile:(char *)arg0 texture:(id)arg1 ;
-(BOOL)writeMetalTextureToFile:(char *)arg0 texture:(id)arg1 mipmapLevel:(int)arg2 ;
-(NSUInteger)textureBytesPerRow:(int)arg0 format:(NSUInteger)arg1 ;
-(id)bindIOSurfaceToMTL2DTexture:(struct __IOSurface *)arg0 pixelFormat:(NSUInteger)arg1 width:(NSUInteger)arg2 height:(NSUInteger)arg3 plane:(NSUInteger)arg4 ;
-(id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer *)arg0 pixelFormat:(NSUInteger)arg1 plane:(NSUInteger)arg2 ;
-(id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer *)arg0 pixelFormat:(NSUInteger)arg1 textureSize:(struct CGSize )arg2 plane:(NSUInteger)arg3 ;
-(id)init;
-(id)initWithDevice:(id)arg0 library:(id)arg1 commandQueue:(id)arg2 ;
-(id)newBufferWithPixelFormat:(NSUInteger)arg0 width:(int)arg1 data:(*void)arg2 ;
-(id)newTextureWithPixelFormat:(NSUInteger)arg0 width:(int)arg1 height:(int)arg2 ;
-(id)readBufferFromFile:(char *)arg0 width:(int)arg1 pixelFormat:(NSUInteger)arg2 ;
-(id)readTextureFromFile:(char *)arg0 width:(int)arg1 height:(int)arg2 pixelFormat:(NSUInteger)arg3 ;
-(int)writeMetalBufferToFile:(char *)arg0 buffer:(id)arg1 ;
-(void)copyMTLBufferToMTLTexture:(id)arg0 bytesPerRow:(NSUInteger)arg1 texture:(id)arg2 ;


@end


#endif