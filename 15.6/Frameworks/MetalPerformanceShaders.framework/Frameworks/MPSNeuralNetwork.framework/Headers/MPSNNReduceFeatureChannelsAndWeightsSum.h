// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSNNREDUCEFEATURECHANNELSANDWEIGHTSSUM_H
#define MPSNNREDUCEFEATURECHANNELSANDWEIGHTSSUM_H



#import "MPSNNReduceBinary.h"

@interface MPSNNReduceFeatureChannelsAndWeightsSum : MPSNNReduceBinary

@property (readonly, nonatomic) BOOL doWeightedSumByNonZeroWeights;


-(id)destinationImageDescriptorForSourceImages:(id)arg0 sourceStates:(id)arg1 paddingMethod:(NSUInteger)arg2 primaryOffset:(struct ? *)arg3 secondaryOffset:(struct ? *)arg4 kernelOffset:(struct ? *)arg5 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 doWeightedSumByNonZeroWeights:(BOOL)arg1 ;


@end


#endif