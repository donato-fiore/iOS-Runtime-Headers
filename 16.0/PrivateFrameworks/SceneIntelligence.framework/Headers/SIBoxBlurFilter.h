// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIBOXBLURFILTER_H
#define SIBOXBLURFILTER_H

@protocol MTLTexture, MTLBuffer, MTLComputePipelineState;

#import <Foundation/Foundation.h>


@interface SIBoxBlurFilter : NSObject {
    id<MTLTexture> *_1DBlur;
    id<MTLBuffer> *_configBuffer;
    ? _size;
    ? _executionThreadgroup;
    id<MTLComputePipelineState> *_horizontal;
    id<MTLComputePipelineState> *_vertical;
}


@property (nonatomic) NSUInteger radius; // ivar: _radius


-(id)initWithFactory:(id)arg0 size:(struct ? )arg1 pixelFormat:(NSUInteger)arg2 andRadius:(NSUInteger)arg3 ;
-(void)encodeToCommandBuffer:(id)arg0 sourceTexture:(id)arg1 blurred:(id)arg2 ;


@end


#endif