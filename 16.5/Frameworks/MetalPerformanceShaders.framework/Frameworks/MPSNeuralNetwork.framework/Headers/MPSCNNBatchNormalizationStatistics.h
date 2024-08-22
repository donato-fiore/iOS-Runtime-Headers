// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSCNNBATCHNORMALIZATIONSTATISTICS_H
#define MPSCNNBATCHNORMALIZATIONSTATISTICS_H



#import "MPSCNNKernel.h"

@interface MPSCNNBatchNormalizationStatistics : MPSCNNKernel



+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(BOOL)appendBatchBarrier;
-(BOOL)isResultStateReusedAcrossBatch;
-(NSUInteger)maxBatchSize;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(void)encodeBatchToCommandBuffer:(id)arg0 sourceImages:(id)arg1 batchNormalizationState:(id)arg2 ;


@end


#endif