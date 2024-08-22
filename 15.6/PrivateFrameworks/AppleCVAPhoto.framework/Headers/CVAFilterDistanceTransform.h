// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CVAFILTERDISTANCETRANSFORM_H
#define CVAFILTERDISTANCETRANSFORM_H

@class NSString;
@protocol MTLDeviceSPI, MTLLibrary, MTLPipelineLibrarySPI, MTLTexture, MTLResourceGroupSPI, MTLComputePipelineState;

#import <Foundation/Foundation.h>


@interface CVAFilterDistanceTransform : NSObject {
    id<MTLDeviceSPI> *_device;
    id<MTLLibrary> *_library;
    id<MTLPipelineLibrarySPI> *_pipelineLibrary;
    id<MTLTexture> *_closestSites;
    id<MTLResourceGroupSPI> *_intermediateTexturesResourceGroup;
    id<MTLComputePipelineState> *_closestSitesKernel;
    id<MTLComputePipelineState> *_distanceTransformKernel;
}


@property (readonly) NSString *label; // ivar: _label


-(id)initWithDevice:(id)arg0 library:(id)arg1 pipelineLibrary:(id)arg2 textureSize:(struct ? )arg3 error:(*id)arg4 ;
-(void)encodeToCommandBuffer:(id)arg0 sourceTexture:(id)arg1 destinationTexture:(id)arg2 ;


@end


#endif