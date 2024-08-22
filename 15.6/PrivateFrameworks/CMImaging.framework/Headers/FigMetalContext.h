// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIGMETALCONTEXT_H
#define FIGMETALCONTEXT_H

@class MTLVertexDescriptor;
@protocol MTLCommandBuffer, MTLCommandQueue, MTLDevice, MTLBuffer, MTLLibrary, MTLPipelineLibrarySPI;

#import <Foundation/Foundation.h>

#import "FigMetalAllocator.h"
#import "FigMetalExecutionStatus.h"

@interface FigMetalContext : NSObject

@property (retain, nonatomic) FigMetalAllocator *allocator; // ivar: _allocator
@property (nonatomic) BOOL allowCommandBufferCommitsOnlyByForceCommit; // ivar: _allowCommandBufferCommitsOnlyByForceCommit
@property (retain, nonatomic) NSObject<MTLCommandBuffer> *commandBuffer; // ivar: _commandBuffer
@property (retain, nonatomic) NSObject<MTLCommandQueue> *commandQueue; // ivar: _commandQueue
@property (retain, nonatomic) NSObject<MTLDevice> *device; // ivar: _device
@property (retain, nonatomic) FigMetalExecutionStatus *executionStatus;
@property (retain, nonatomic) NSObject<MTLBuffer> *fullRangeVertexBuf; // ivar: _fullRangeVertexBuf
@property (retain, nonatomic) MTLVertexDescriptor *fullRangeVertexDesc; // ivar: _fullRangeVertexDesc
@property (retain, nonatomic) NSObject<MTLLibrary> *library; // ivar: _library
@property (retain, nonatomic) NSObject<MTLPipelineLibrarySPI> *pipelineLibrary; // ivar: _pipelineLibrary


+(id)createMetalDevice;
-(BOOL)ReadMetalTextureFromFile:(char *)arg0 texture:(id)arg1 ;
-(BOOL)ReadMetalTextureFromFile:(char *)arg0 texture:(id)arg1 mipmapLevel:(int)arg2 ;
-(BOOL)WriteMetalTextureToFile:(char *)arg0 texture:(id)arg1 ;
-(BOOL)WriteMetalTextureToFile:(char *)arg0 texture:(id)arg1 mipmapLevel:(int)arg2 ;
-(NSUInteger)getPixelSizeInBytes:(NSUInteger)arg0 ;
-(id)CreateMetalTextureFromFile:(char *)arg0 pixelFormat:(NSUInteger)arg1 usage:(NSUInteger)arg2 width:(NSUInteger)arg3 height:(NSUInteger)arg4 ;
-(id)bindIOSurfaceToMTL2DTexture:(struct __IOSurface *)arg0 pixelFormat:(NSUInteger)arg1 usage:(NSUInteger)arg2 width:(NSUInteger)arg3 height:(NSUInteger)arg4 plane:(NSUInteger)arg5 ;
-(id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer *)arg0 pixelFormat:(NSUInteger)arg1 usage:(NSUInteger)arg2 plane:(NSUInteger)arg3 ;
-(id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer *)arg0 pixelFormat:(NSUInteger)arg1 usage:(NSUInteger)arg2 plane:(NSUInteger)arg3 alignmentFactor:(NSUInteger)arg4 ;
-(id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer *)arg0 pixelFormat:(NSUInteger)arg1 usage:(NSUInteger)arg2 textureSize:(struct CGSize )arg3 plane:(NSUInteger)arg4 ;
-(id)computePipelineStateFor:(id)arg0 constants:(id)arg1 ;
-(id)create2DTextureFromBuffer:(id)arg0 offset:(NSUInteger)arg1 width:(int)arg2 height:(int)arg3 format:(NSUInteger)arg4 usage:(NSUInteger)arg5 ;
-(id)init;
-(id)initWithLibraryData:(char *)arg0 ofSize:(NSUInteger)arg1 andOptionalCommandQueue:(id)arg2 ;
-(id)initWithbundle:(id)arg0 andOptionalCommandQueue:(id)arg1 ;
-(id)rebindTex:(id)arg0 format:(NSUInteger)arg1 usage:(NSUInteger)arg2 plane:(int)arg3 xFactor:(int)arg4 ;
-(int)commonInitWithOptionalCommandQueue:(id)arg0 ;
-(int)initRangeVertex;
-(int)setQueuePriority:(int)arg0 ;
-(void)commit;
-(void)commitAndWait;
-(void)forceCommit;
-(void)insertDebugCaptureBoundary;
-(void)prewarmInternalMetalShadersForFormatsList:(id)arg0 ;
-(void)waitForIdle;
-(void)waitForSchedule;


@end


#endif