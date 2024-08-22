// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LIPERSONDEPTHWRITER_H
#define LIPERSONDEPTHWRITER_H

@protocol MTLDevice;

#import <Foundation/Foundation.h>


@interface LiPersonDepthWriter : NSObject {
    ? _matteTexCoords;
}


@property (retain, nonatomic) NSObject<MTLDevice> *device; // ivar: _device
@property (nonatomic) NSInteger sampleCount; // ivar: _sampleCount


+(id)sharedDepthStencilStateWithDevice:(id)arg0 ;
+(id)sharedRenderPipelineStateWithDevice:(id)arg0 sampleCount:(NSInteger)arg1 ;
-(id)initWithDevice:(id)arg0 sampleCount:(NSInteger)arg1 ;
-(id)renderPassDescriptorWithColorTexture:(id)arg0 depthTexture:(id)arg1 ;
-(void)computeMatteTexCoordsWithMatteSize:(struct CGSize )arg0 projectSize:(struct CGSize )arg1 videoOrientation:(int)arg2 ;
-(void)dealloc;
-(void)drawWithDepthMap:(id)arg0 matte:(id)arg1 uniforms:(struct PersonDepthUniforms )arg2 windowSize:(struct CGSize )arg3 renderCommandEncoder:(id)arg4 ;
-(void)writeWithDepthMap:(id)arg0 matte:(id)arg1 depthTexture:(id)arg2 colorTexture:(id)arg3 uniforms:(struct PersonDepthUniforms )arg4 windowSize:(struct CGSize )arg5 commandBuffer:(id)arg6 ;


@end


#endif