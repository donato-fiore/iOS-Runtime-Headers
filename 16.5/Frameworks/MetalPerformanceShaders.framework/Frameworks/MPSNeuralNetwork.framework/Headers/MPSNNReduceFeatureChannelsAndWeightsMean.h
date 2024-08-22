// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSNNREDUCEFEATURECHANNELSANDWEIGHTSMEAN_H
#define MPSNNREDUCEFEATURECHANNELSANDWEIGHTSMEAN_H



#import "MPSNNReduceBinary.h"

@interface MPSNNReduceFeatureChannelsAndWeightsMean : MPSNNReduceBinary



-(id)destinationImageDescriptorForSourceImages:(id)arg0 sourceStates:(id)arg1 paddingMethod:(NSUInteger)arg2 primaryOffset:(struct ? *)arg3 secondaryOffset:(struct ? *)arg4 kernelOffset:(struct ? *)arg5 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;


@end


#endif