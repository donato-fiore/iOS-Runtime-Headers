// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSIMAGECONVOLUTION_H
#define MPSIMAGECONVOLUTION_H

@protocol MTLBuffer;


#import "MPSUnaryImageKernel.h"
#import "MPSImageLaplacian.h"

@interface MPSImageConvolution : MPSUnaryImageKernel {
    id<MTLBuffer> *wtBuffer;
    id<MTLBuffer> *wtBufferh;
    *float kOrigWeights;
    *float wtArray;
    *unsigned short wtArrayh;
    BOOL separable;
    NSUInteger specialFilterType;
    MPSImageLaplacian *_laplacian;
}


@property (nonatomic) float bias; // ivar: _fBias
@property (readonly, nonatomic) NSUInteger kernelHeight; // ivar: _fHeight
@property (readonly, nonatomic) NSUInteger kernelWidth; // ivar: _fWidth


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 kernelWidth:(NSUInteger)arg1 kernelHeight:(NSUInteger)arg2 weights:(*float)arg3 ;
-(id)initWithDevice_private:(id)arg0 ;
-(struct MPSRegion )sourceRegionForDestinationSize:(struct ? )arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)initFilterWithKernelWidth:(NSUInteger)arg0 kernelHeight:(NSUInteger)arg1 weights:(*float)arg2 ;


@end


#endif