// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRESOURCEFACTORY_H
#define SIRESOURCEFACTORY_H

@protocol MTLLibrary, MTLCommandQueue, MTLDevice;

#import <Foundation/Foundation.h>


@interface SIResourceFactory : NSObject {
    id<MTLLibrary> *_library;
    id<MTLCommandQueue> *_commandQueue;
}


@property (readonly) NSObject<MTLDevice> *device; // ivar: _device
@property (readonly, nonatomic) NSObject<MTLLibrary> *library;


-(id)commandBuffer;
-(id)dictionaryFromTexture:(id)arg0 ;
-(id)initWithDevice:(id)arg0 ;
-(id)newComputePipelineStateWithName:(id)arg0 ;
-(id)newComputePipelineStateWithName:(id)arg0 constantValues:(id)arg1 error:(*id)arg2 ;
-(id)newCubemapWithFormat:(struct SIImageFormat_struct )arg0 ;
-(id)newFunctionWithName:(id)arg0 ;
-(id)newFunctionWithName:(id)arg0 constantValues:(id)arg1 error:(*id)arg2 ;
-(id)newIOSurfaceBackedTextureWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 pixelFormat:(unsigned int)arg2 ;
-(id)newTextureFromIOSurface:(struct __IOSurface *)arg0 ;
-(id)newTextureFromPixelBuffer:(struct __CVBuffer *)arg0 ;
-(id)newTextureWithFormat:(struct SIImageFormat_struct )arg0 ;
-(id)newTextureWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 pixelFormat:(unsigned int)arg2 ;


@end


#endif