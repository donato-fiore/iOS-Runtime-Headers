// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSCNNSOFTMAXGRADIENT_H
#define MPSCNNSOFTMAXGRADIENT_H



#import "MPSCNNGradientKernel.h"
#import "MPSNNReduceFeatureChannelsAndWeightsSum.h"

@interface MPSCNNSoftMaxGradient : MPSCNNGradientKernel {
    MPSNNReduceFeatureChannelsAndWeightsSum *_reductionKernel;
}




+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(NSUInteger)maxBatchSize;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif