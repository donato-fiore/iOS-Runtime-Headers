// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSNDARRAYGRIDSAMPLE_H
#define MPSNDARRAYGRIDSAMPLE_H



#import "MPSNDArrayBinaryKernel.h"

@interface MPSNDArrayGridSample : MPSNDArrayBinaryKernel

@property (nonatomic) CGFloat constantValue; // ivar: _constantValue
@property (nonatomic) BOOL normalizeCoordinates; // ivar: _normalizeCoordinates
@property (nonatomic) int paddingMode; // ivar: _paddingMode
@property (nonatomic) BOOL relativeCoordinates; // ivar: _relativeCoordinates
@property (nonatomic) unsigned int samplingMode; // ivar: _samplingMode


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(BOOL)supportsGradientForSourceIndex:(NSUInteger)arg0 ;
-(NSUInteger)kernelDimensionalityForSourceArrays:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)destinationArrayDescriptorForSourceArrays:(id)arg0 sourceState:(id)arg1 ;
-(id)dimensionsToBeRetained;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif