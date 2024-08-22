// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef XMATTINGBOXTENSORFILTER_H
#define XMATTINGBOXTENSORFILTER_H

@class MPSImageBox;
@protocol MTLDevice, MTLLibrary, MTLTexture, MTLComputePipelineState;

#import <Foundation/Foundation.h>


@interface XMattingBoxTensorFilter : NSObject {
    id<MTLDevice> *_device;
    id<MTLLibrary> *_library;
    MPSImageBox *_boxfilter;
    unsigned int _radius;
    unsigned int _depthRadius;
    BOOL _supportsReadWriteTextures;
    id<MTLTexture> *_tmpTexture;
    id<MTLComputePipelineState> *_depthFilterSeparableSlidingStacks_arrayKernel;
    id<MTLComputePipelineState> *_renormalizeFromMPSImageEdgeModeZeroKernel;
}




+(id)supportedPixelFormats;
-(id)initWithDevice:(id)arg0 library:(id)arg1 ;
-(int)_compileShadersWithLibrary:(id)arg0 ;
-(int)allocateResources:(struct ? )arg0 ;
-(int)encodeOnCommandBuffer:(id)arg0 sourceTexture:(id)arg1 destinationTexture:(id)arg2 ;
-(int)encodeSeparableSlidingStackOnCommandBuffer:(id)arg0 sourceTexture:(id)arg1 destinationTexture:(id)arg2 ;
-(void)releaseResources;


@end


#endif