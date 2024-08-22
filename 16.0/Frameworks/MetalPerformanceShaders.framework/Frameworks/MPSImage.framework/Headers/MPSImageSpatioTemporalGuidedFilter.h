// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSIMAGESPATIOTEMPORALGUIDEDFILTER_H
#define MPSIMAGESPATIOTEMPORALGUIDEDFILTER_H

@class MPSKernel, NSArray;
@protocol MTLTexture;


#import "MPSImageBox3D.h"
#import "MPSImageBilinearScale.h"

@interface MPSImageSpatioTemporalGuidedFilter : MPSKernel {
    NSUInteger _width;
    NSUInteger _height;
    NSUInteger _arrayLength;
    NSUInteger _kernelSpatialDiameter;
    NSUInteger _kernelTemporalDiameter;
    float _epsilon;
    NSUInteger _sourceChannels;
    NSUInteger _guideChannels;
    BOOL _preallocateIntermediates;
    BOOL _useFloatIntermediates;
    BOOL _supportsReadWriteTextures;
    MPSImageBox3D *_boxFilter;
    MPSImageBilinearScale *_bilinearScaler;
    id<MTLTexture> *_guideStack;
    NSArray *_sourceStackArray;
    id<MTLTexture> *_mean_guideStack;
    id<MTLTexture> *_mean_sourceStack;
    NSArray *_var_I;
    id<MTLTexture> *_constraints;
    NSArray *_coefficientsTextureArray;
}


@property (readonly, nonatomic) NSUInteger preallocatedSize; // ivar: _preallocatedSize


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)allocateIntermediateTextureWithDevice:(id)arg0 textureDescriptor:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 filterDescriptor:(id)arg1 ;
-(id)newTemporaryIntermediate:(id)arg0 texture:(id)arg1 ;
-(void)allocateResourcesWithDevice:(id)arg0 ;
-(void)compileKernels;
-(void)dealloc;
-(void)encodeDownsamplingOn:(id)arg0 inputTexture:(id)arg1 outputTexture:(id)arg2 ;
-(void)encodeReconstructionToCommandBuffer:(id)arg0 guidanceTexture:(id)arg1 coefficientsTextureArray:(id)arg2 destinationTextureArray:(id)arg3 ;
-(void)encodeReconstructionToCommandBuffer:(id)arg0 guidanceTexture:(id)arg1 constraintsTexture:(id)arg2 coefficientsTextureArray:(id)arg3 destinationTexture:(id)arg4 ;
-(void)encodeReconstructionToCommandBuffer:(id)arg0 guidanceTexture:(id)arg1 constraintsTextureArray:(id)arg2 coefficientsTextureArray:(id)arg3 destinationTextureArray:(id)arg4 ;
-(void)encodeRegressionToCommandBuffer:(id)arg0 sourceTextureArray:(id)arg1 guidanceTexture:(id)arg2 constraintsTextureArray:(id)arg3 numberOfIterations:(NSUInteger)arg4 destinationCoefficientsTextureArray:(id)arg5 ;
-(void)encodeShiftOn:(id)arg0 textureArray:(id)arg1 by:(NSUInteger)arg2 ;
-(void)encodeToCommandBuffer:(id)arg0 sourceTextureArray:(id)arg1 guidanceTexture:(id)arg2 constraintsTextureArray:(id)arg3 numberOfIterations:(NSUInteger)arg4 destinationTextureArray:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)validateCoefficientsTextures:(id)arg0 ;


@end


#endif