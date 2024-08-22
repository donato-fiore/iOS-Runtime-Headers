// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSNNLOSSGRADIENTNODE_H
#define MPSNNLOSSGRADIENTNODE_H

@protocol MPSNNLossCallback;


#import "MPSNNGradientFilterNode.h"
#import "MPSCNNLossDescriptor.h"

@interface MPSNNLossGradientNode : MPSNNGradientFilterNode {
    MPSCNNLossDescriptor *_descriptor;
}


@property (readonly, nonatomic) float delta; // ivar: _delta
@property (readonly, nonatomic) float epsilon; // ivar: _epsilon
@property (readonly, nonatomic) BOOL isLabelsGradientFilter; // ivar: _isLabelsGradientFilter
@property (readonly, nonatomic) float labelSmoothing; // ivar: _labelSmoothing
@property (readonly, nonatomic) unsigned int lossType; // ivar: _lossType
@property (readonly, nonatomic) NSUInteger numberOfClasses; // ivar: _numberOfClasses
@property (retain, nonatomic) NSObject<MPSNNLossCallback> *propertyCallBack; // ivar: _propertyCallBack
@property (readonly, nonatomic) BOOL reduceAcrossBatch; // ivar: _reduceAcrossBatch
@property (readonly, nonatomic) int reductionType; // ivar: _reductionType
@property (readonly, nonatomic) float weight; // ivar: _weight


+(id)nodeWithSourceGradient:(id)arg0 sourceImage:(id)arg1 labels:(id)arg2 gradientState:(id)arg3 lossDescriptor:(id)arg4 isLabelsGradientFilter:(BOOL)arg5 ;
+(id)nodeWithSourceGradient:(id)arg0 sourceImage:(id)arg1 labels:(id)arg2 weights:(id)arg3 gradientState:(id)arg4 lossDescriptor:(id)arg5 isLabelsGradientFilter:(BOOL)arg6 ;
+(id)nodeWithSources:(id)arg0 gradientState:(id)arg1 lossDescriptor:(id)arg2 isLabelsGradientFilter:(BOOL)arg3 ;
-(*void)newFilterNode;
-(id)gradientFilterWithSources:(id)arg0 ;
-(id)initWithSourceGradient:(id)arg0 sourceImage:(id)arg1 labels:(id)arg2 gradientState:(id)arg3 lossDescriptor:(id)arg4 isLabelsGradientFilter:(BOOL)arg5 ;
-(id)initWithSourceGradient:(id)arg0 sourceImage:(id)arg1 labels:(id)arg2 weights:(id)arg3 gradientState:(id)arg4 lossDescriptor:(id)arg5 isLabelsGradientFilter:(BOOL)arg6 ;
-(id)initWithSources:(id)arg0 gradientState:(id)arg1 lossDescriptor:(id)arg2 isLabelsGradientFilter:(BOOL)arg3 ;
-(void)dealloc;


@end


#endif