// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLTELEMETRYPARALLELRENDERCOMMANDENCODER_H
#define MTLTELEMETRYPARALLELRENDERCOMMANDENCODER_H

@class MTLRenderPassDescriptor;


#import "MTLToolsParallelRenderCommandEncoder.h"
#import "MTLTelemetryDevice.h"
#import "MTLTelemetryCommandBuffer.h"

@interface MTLTelemetryParallelRenderCommandEncoder : MTLToolsParallelRenderCommandEncoder {
    MTLTelemetryDevice *_telemetryDevice;
    MTLTelemetryCommandBuffer *_telemetryCommandBuffer;
    MTLRenderPassDescriptor *_descriptor;
    unsigned int _encoderCount;
}




-(id)initWithBaseRenderPass:(id)arg0 commandBuffer:(id)arg1 descriptor:(id)arg2 ;
-(id)renderCommandEncoder;
-(void)endEncoding;


@end


#endif