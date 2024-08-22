// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDMETALCONTEXT_H
#define TSDMETALCONTEXT_H

@class MTLRenderPassDescriptor, NSMutableSet;
@protocol MTLCommandBuffer, MTLCommandQueue, MTLDevice, MTLRenderCommandEncoder;

#import <Foundation/Foundation.h>

#import "TSDMetalShader.h"

@interface TSDMetalContext : NSObject

@property (weak, nonatomic) NSObject<MTLCommandBuffer> *commandBuffer; // ivar: _commandBuffer
@property (weak, nonatomic) NSObject<MTLCommandQueue> *commandQueue; // ivar: _commandQueue
@property (nonatomic) NSUInteger currentBuffer; // ivar: _currentBuffer
@property (nonatomic) *CGColorSpace destinationColorSpace; // ivar: _destinationColorSpace
@property (weak, nonatomic) NSObject<MTLDevice> *device; // ivar: _device
@property (nonatomic) CGSize layerSize; // ivar: _layerSize
@property (weak, nonatomic) MTLRenderPassDescriptor *passDescriptor; // ivar: _passDescriptor
@property (nonatomic) NSUInteger pixelFormat; // ivar: _pixelFormat
@property (weak, nonatomic) NSObject<MTLRenderCommandEncoder> *renderEncoder; // ivar: _renderEncoder
@property (retain, nonatomic) NSMutableSet *retainedObjects; // ivar: _retainedObjects
@property (weak, nonatomic) TSDMetalShader *shader; // ivar: _shader
@property (nonatomic) ? timingInfo; // ivar: _timingInfo


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)retainObject:(id)arg0 ;


@end


#endif