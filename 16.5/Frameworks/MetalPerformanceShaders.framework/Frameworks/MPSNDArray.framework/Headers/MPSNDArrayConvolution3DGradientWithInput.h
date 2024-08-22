// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSNDARRAYCONVOLUTION3DGRADIENTWITHINPUT_H
#define MPSNDARRAYCONVOLUTION3DGRADIENTWITHINPUT_H



#import "MPSNDArrayBinaryPrimaryGradientKernel.h"

@interface MPSNDArrayConvolution3DGradientWithInput : MPSNDArrayBinaryPrimaryGradientKernel {
    MPSNDArrayConv3dSizes_s _strideInPixels;
    MPSNDArrayConv3dSizes_s _dilationRates;
    MPSNDArrayConv3dOffsets_s _offsets;
    MPSNDArrayConv3dOffsets_s _kernelOffsets;
}


@property (nonatomic) unsigned int dataFormat; // ivar: _dataFormat
@property (nonatomic) MPSNDArrayConv3dSizes_s dilationRates;
@property (nonatomic) NSUInteger groups; // ivar: _groups
@property (nonatomic) MPSNDArrayConv3dOffsets_s kernelOffsets;
@property (nonatomic) MPSNDArrayConv3dOffsets_s offsets;
@property (nonatomic) MPSNDArrayConv3dSizes_s strideInPixels;
@property (nonatomic) unsigned int weightsFormat; // ivar: _weightsFormat


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(NSUInteger)kernelDimensionalityForSourceArrays:(id)arg0 ;
-(id)destinationStrides;
-(id)dimensionsNotToBeBroadcast;
-(id)dimensionsToBeRetained;
-(id)initWithDevice:(id)arg0 ;
-(id)stridesAtSourceIndex;
-(id)workloadStatisticsForSourceArrays:(id)arg0 destArrays:(id)arg1 kernel:(id)arg2 kernelDAGObject:(id)arg3 sourceState:(id)arg4 ;
-(void)dealloc;


@end


#endif