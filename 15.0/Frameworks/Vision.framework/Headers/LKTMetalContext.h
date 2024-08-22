// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LKTMETALCONTEXT_H
#define LKTMETALCONTEXT_H

@protocol MTLCommandQueue, MTLDevice, MTLLibrary;

#import <Foundation/Foundation.h>


@interface LKTMetalContext : NSObject

@property (readonly, nonatomic) NSObject<MTLCommandQueue> *commandQueue; // ivar: _commandQueue
@property (readonly, nonatomic) NSObject<MTLDevice> *device; // ivar: _device
@property (readonly, nonatomic) NSObject<MTLLibrary> *library; // ivar: _library


+(id)metalContextForDevice:(id)arg0 error:(*id)arg1 ;
+(void)makeResourceCoherent:(id)arg0 resource:(id)arg1 ;
-(id)bindIOSurfaceToMTL2DTexture:(struct __IOSurface *)arg0 pixelFormat:(NSUInteger)arg1 width:(NSUInteger)arg2 height:(NSUInteger)arg3 plane:(NSUInteger)arg4 error:(*id)arg5 ;
-(id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer *)arg0 pixelFormat:(NSUInteger)arg1 plane:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer *)arg0 pixelFormat:(NSUInteger)arg1 textureSize:(struct CGSize )arg2 plane:(NSUInteger)arg3 error:(*id)arg4 ;
-(id)initWithDevice:(id)arg0 error:(*id)arg1 ;


@end


#endif