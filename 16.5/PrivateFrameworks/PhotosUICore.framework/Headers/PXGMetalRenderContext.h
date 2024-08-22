// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXGMETALRENDERCONTEXT_H
#define PXGMETALRENDERCONTEXT_H

@protocol MTLCommandQueue, MTLDevice;

#import <Foundation/Foundation.h>


@interface PXGMetalRenderContext : NSObject

@property (readonly, nonatomic) NSObject<MTLCommandQueue> *commandQueue; // ivar: _commandQueue
@property (readonly, nonatomic) NSObject<MTLDevice> *device; // ivar: _device
@property (readonly, nonatomic) BOOL wantsIOSurfaceTextures; // ivar: _wantsIOSurfaceTextures


+(id)privateContextWithDevice:(id)arg0 ;
+(id)privateContextWithDevice:(id)arg0 commandQueue:(id)arg1 ;
+(id)sharedContextWithDevice:(id)arg0 commandQueue:(id)arg1 ;
-(id)initWithDevice:(id)arg0 commandQueue:(id)arg1 ;
-(id)newMipmappedTextureFromTexture:(id)arg0 ;
-(id)newTextureWithDescriptor:(id)arg0 ;
-(void)_blitFromBuffer:(id)arg0 toTexture:(id)arg1 inRegion:(struct ? )arg2 bytesPerRow:(NSUInteger)arg3 offset:(NSUInteger)arg4 bytesPerImage:(NSUInteger)arg5 ;
-(void)_blitFromTexture:(id)arg0 toTexture:(id)arg1 mipmapped:(BOOL)arg2 ;
-(void)copyBytes:(*void)arg0 toTexture:(id)arg1 inRegion:(struct ? )arg2 length:(NSUInteger)arg3 bytesPerRow:(NSUInteger)arg4 bytesPerImage:(NSUInteger)arg5 ;
-(void)fastCopyBytes:(*void)arg0 toTexture:(id)arg1 inRegion:(struct ? )arg2 length:(NSUInteger)arg3 bytesPerRow:(NSUInteger)arg4 bytesPerImage:(NSUInteger)arg5 ;


@end


#endif