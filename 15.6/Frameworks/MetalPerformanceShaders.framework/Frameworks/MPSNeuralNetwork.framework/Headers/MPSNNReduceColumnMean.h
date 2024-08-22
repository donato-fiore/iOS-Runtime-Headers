// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSNNREDUCECOLUMNMEAN_H
#define MPSNNREDUCECOLUMNMEAN_H



#import "MPSNNReduceUnary.h"

@interface MPSNNReduceColumnMean : MPSNNReduceUnary



-(id)destinationImageDescriptorForSourceImages:(id)arg0 sourceStates:(id)arg1 paddingMethod:(NSUInteger)arg2 sourceOffset:(struct ? *)arg3 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;


@end


#endif