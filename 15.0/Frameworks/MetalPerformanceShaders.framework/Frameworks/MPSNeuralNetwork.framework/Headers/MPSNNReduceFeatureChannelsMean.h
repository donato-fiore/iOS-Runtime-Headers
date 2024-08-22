// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSNNREDUCEFEATURECHANNELSMEAN_H
#define MPSNNREDUCEFEATURECHANNELSMEAN_H



#import "MPSNNReduceUnary.h"

@interface MPSNNReduceFeatureChannelsMean : MPSNNReduceUnary



-(id)destinationImageDescriptorForSourceImages:(id)arg0 sourceStates:(id)arg1 paddingMethod:(NSUInteger)arg2 sourceOffset:(struct ? *)arg3 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;


@end


#endif