// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSCNNARITHMETICGRADIENT_H
#define MPSCNNARITHMETICGRADIENT_H



#import "MPSCNNGradientKernel.h"
#import "MPSNNReduceUnary.h"

@interface MPSCNNArithmeticGradient : MPSCNNGradientKernel {
    int _arithmeticType;
    MPSNNReduceUnary *_reduceRows;
    MPSNNReduceUnary *_reduceColumns;
    MPSNNReduceUnary *_reduceFeatureChannels;
}


@property (nonatomic) float bias; // ivar: _bias
@property (readonly, nonatomic) BOOL isSecondarySourceFilter; // ivar: _isSecondarySourceFilter
@property (nonatomic) float maximumValue; // ivar: _maximumValue
@property (nonatomic) float minimumValue; // ivar: _minimumValue
@property (nonatomic) float primaryScale; // ivar: _primaryScale
@property (nonatomic) float secondaryScale; // ivar: _secondaryScale
@property (nonatomic) NSUInteger secondaryStrideInFeatureChannels; // ivar: _secondaryStrideInFeatureChannels


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(NSUInteger)maxBatchSize;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)destinationImageDescriptorForSourceImages:(id)arg0 sourceStates:(id)arg1 paddingMethod:(NSUInteger)arg2 primaryOffset:(struct ? *)arg3 secondaryOffset:(struct ? *)arg4 kernelOffset:(struct ? *)arg5 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 arithmeticType:(int)arg1 isSecondarySourceFilter:(BOOL)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setSecondaryStrideInPixelsX:(NSUInteger)arg0 ;
-(void)setSecondaryStrideInPixelsY:(NSUInteger)arg0 ;


@end


#endif