// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSMATRIXFULLYCONNECTEDGRADIENT_H
#define MPSMATRIXFULLYCONNECTEDGRADIENT_H

@class MPSMatrixBinaryKernel;



@interface MPSMatrixFullyConnectedGradient : MPSMatrixBinaryKernel

@property (nonatomic) CGFloat alpha; // ivar: _alpha
@property (nonatomic) NSUInteger sourceInputFeatureChannels; // ivar: _sourceInputFeatureChannels
@property (nonatomic) NSUInteger sourceNumberOfFeatureVectors; // ivar: _sourceNumberOfFeatureVectors
@property (nonatomic) NSUInteger sourceOutputFeatureChannels; // ivar: _sourceOutputFeatureChannels


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(void)encodeGradientForDataToCommandBuffer:(id)arg0 gradientMatrix:(id)arg1 weightMatrix:(id)arg2 resultGradientForDataMatrix:(id)arg3 ;
-(void)encodeGradientForWeightsAndBiasToCommandBuffer:(id)arg0 gradientMatrix:(id)arg1 inputMatrix:(id)arg2 resultGradientForWeightMatrix:(id)arg3 resultGradientForBiasVector:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif