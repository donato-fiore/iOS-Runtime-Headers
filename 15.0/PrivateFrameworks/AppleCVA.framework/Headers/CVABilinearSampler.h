// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CVABILINEARSAMPLER_H
#define CVABILINEARSAMPLER_H

@class MTLRenderPassDescriptor, MTLRenderPipelineDescriptor;
@protocol MTLDevice, MTLRenderPipelineState;

#import <Foundation/Foundation.h>


@interface CVABilinearSampler : NSObject {
    id<MTLDevice> *_device;
    MTLRenderPassDescriptor *_renderPassDescriptor;
    MTLRenderPipelineDescriptor *_renderPipelineDescriptor;
    id<MTLRenderPipelineState> *_renderPipelineState;
    ? _vertexData;
}


@property ? sourceQuad; // ivar: _sourceQuad


-(id)initWithDevice:(id)arg0 ;
-(void)encodeToCommandBuffer:(id)arg0 sourceTexture:(id)arg1 destinationTexture:(id)arg2 ;


@end


#endif