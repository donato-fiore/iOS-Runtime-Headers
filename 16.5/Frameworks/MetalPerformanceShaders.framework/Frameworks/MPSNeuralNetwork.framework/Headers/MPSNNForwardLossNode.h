// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSNNFORWARDLOSSNODE_H
#define MPSNNFORWARDLOSSNODE_H

@protocol MPSNNLossCallback;


#import "MPSNNFilterNode.h"
#import "MPSCNNLossDescriptor.h"

@interface MPSNNForwardLossNode : MPSNNFilterNode {
    MPSCNNLossDescriptor *_descriptor;
}


@property (readonly, nonatomic) float delta; // ivar: _delta
@property (readonly, nonatomic) float epsilon; // ivar: _epsilon
@property (readonly, nonatomic) float labelSmoothing; // ivar: _labelSmoothing
@property (readonly, nonatomic) unsigned int lossType; // ivar: _lossType
@property (readonly, nonatomic) NSUInteger numberOfClasses; // ivar: _numberOfClasses
@property (retain, nonatomic) NSObject<MPSNNLossCallback> *propertyCallBack; // ivar: _propertyCallBack
@property (readonly, nonatomic) BOOL reduceAcrossBatch; // ivar: _reduceAcrossBatch
@property (readonly, nonatomic) int reductionType; // ivar: _reductionType
@property (readonly, nonatomic) float weight; // ivar: _weight


+(id)nodeWithSource:(id)arg0 labels:(id)arg1 lossDescriptor:(id)arg2 ;
+(id)nodeWithSource:(id)arg0 labels:(id)arg1 weights:(id)arg2 lossDescriptor:(id)arg3 ;
+(id)nodeWithSources:(id)arg0 lossDescriptor:(id)arg1 ;
-(*void)newFilterNode;
-(Class)gradientClass;
-(id)gradientFilterWithSource:(id)arg0 ;
-(id)gradientFilterWithSources:(id)arg0 ;
-(id)gradientFiltersWithSource:(id)arg0 ;
-(id)gradientFiltersWithSources:(id)arg0 ;
-(id)initWithSource:(id)arg0 labels:(id)arg1 lossDescriptor:(id)arg2 ;
-(id)initWithSource:(id)arg0 labels:(id)arg1 weights:(id)arg2 lossDescriptor:(id)arg3 ;
-(id)initWithSources:(id)arg0 lossDescriptor:(id)arg1 ;
-(void)dealloc;


@end


#endif