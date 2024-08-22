// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MRCMETALCONTEXT_H
#define _MRCMETALCONTEXT_H

@protocol MTLCommandQueue, MTLCommandBuffer, MTLDevice, MTLLibrary;

#import <Foundation/Foundation.h>


@interface _MRCMetalContext : NSObject

@property (readonly, nonatomic) NSObject<MTLCommandQueue> *commandQueue; // ivar: _commandQueue
@property (readonly, nonatomic) NSObject<MTLCommandBuffer> *currentCommandBuffer; // ivar: _currentCommandBuffer
@property (readonly, nonatomic) NSObject<MTLDevice> *device; // ivar: _device
@property (readonly, nonatomic) NSObject<MTLLibrary> *library; // ivar: _library


-(id)beginCommandBuffer;
-(id)beginCommandBufferWithError:(*id)arg0 ;
-(id)init;
-(id)initWithDevice:(id)arg0 libraryURL:(id)arg1 error:(*id)arg2 ;
-(id)newComputePipelineStateWithFunctionName:(id)arg0 constantValues:(id)arg1 error:(*id)arg2 ;
-(id)newTextureByBindingIOSurface:(struct __IOSurface *)arg0 pixelFormat:(NSUInteger)arg1 width:(NSUInteger)arg2 height:(NSUInteger)arg3 usage:(NSUInteger)arg4 plane:(NSUInteger)arg5 error:(*id)arg6 ;
-(void)commitCommandBuffer;
-(void)commitCommandBufferShouldWaitUntilCompleted:(BOOL)arg0 ;


@end


#endif