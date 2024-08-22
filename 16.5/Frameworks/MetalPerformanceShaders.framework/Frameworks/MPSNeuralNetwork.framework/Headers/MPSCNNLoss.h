// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSCNNLOSS_H
#define MPSCNNLOSS_H

@class MPSMatrix, MPSImage;


#import "MPSCNNKernel.h"

@interface MPSCNNLoss : MPSCNNKernel {
    MPSMatrix *_reductionBuffer;
    MPSImage *_firstLossImage;
}


@property (readonly, nonatomic) float delta; // ivar: _delta
@property (readonly, nonatomic) float epsilon; // ivar: _epsilon
@property (readonly, nonatomic) float labelSmoothing; // ivar: _labelSmoothing
@property (readonly, nonatomic) unsigned int lossType; // ivar: _lossType
@property (readonly, nonatomic) NSUInteger numberOfClasses; // ivar: _numberOfClasses
@property (readonly, nonatomic) BOOL reduceAcrossBatch; // ivar: _reduceAcrossBatch
@property (readonly, nonatomic) int reductionType; // ivar: _reductionType
@property (nonatomic) float weight; // ivar: _weight


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(NSUInteger)maxBatchSize;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)encodeBatchToCommandBuffer:(id)arg0 sourceImages:(id)arg1 labels:(id)arg2 ;
-(id)encodeToCommandBuffer:(id)arg0 sourceImage:(id)arg1 labels:(id)arg2 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 lossDescriptor:(id)arg1 ;
-(id)resultStateForSourceImage:(id)arg0 sourceStates:(id)arg1 ;
-(id)temporaryResultStateForCommandBuffer:(id)arg0 sourceImage:(id)arg1 sourceStates:(id)arg2 ;
-(void)dealloc;
-(void)encodeBatchToCommandBuffer:(id)arg0 sourceImages:(id)arg1 labels:(id)arg2 destinationImages:(id)arg3 ;
-(void)encodeToCommandBuffer:(id)arg0 sourceImage:(id)arg1 labels:(id)arg2 destinationImage:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif