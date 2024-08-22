// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSNNLOSSGRADIENT_H
#define MPSNNLOSSGRADIENT_H

@class MPSMatrix;
@protocol MPSNNLossCallback, MTLTexture;


#import "MPSCNNBinaryKernel.h"

@interface MPSNNLossGradient : MPSCNNBinaryKernel {
    id<MPSNNLossCallback> *_propertyCallback;
    MPSMatrix *_reductionBuffer;
    id<MTLTexture> *_firstLossGradientImage;
}


@property (nonatomic) BOOL computeLabelGradients; // ivar: _computeLabelGradients
@property (nonatomic) float delta; // ivar: _delta
@property (nonatomic) float epsilon; // ivar: _epsilon
@property (nonatomic) float labelSmoothing; // ivar: _labelSmoothing
@property (readonly, nonatomic) unsigned int lossType; // ivar: _lossType
@property (readonly, nonatomic) NSUInteger numberOfClasses; // ivar: _numberOfClasses
@property (readonly, nonatomic) BOOL reduceAcrossBatch; // ivar: _reduceAcrossBatch
@property (readonly, nonatomic) int reductionType; // ivar: _reductionType
@property (nonatomic) float weight; // ivar: _weight


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(NSUInteger)maxBatchSize;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)destinationImageDescriptorForSourceImages:(id)arg0 sourceStates:(id)arg1 ;
-(id)encodeBatchToCommandBuffer:(id)arg0 sourceGradients:(id)arg1 sourceImages:(id)arg2 labels:(id)arg3 weights:(id)arg4 sourceStates:(id)arg5 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 lossDescriptor:(id)arg1 ;
-(void)dealloc;
-(void)encodeBatchToCommandBuffer:(id)arg0 sourceGradients:(id)arg1 sourceImages:(id)arg2 labels:(id)arg3 weights:(id)arg4 sourceStates:(id)arg5 destinationGradients:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif