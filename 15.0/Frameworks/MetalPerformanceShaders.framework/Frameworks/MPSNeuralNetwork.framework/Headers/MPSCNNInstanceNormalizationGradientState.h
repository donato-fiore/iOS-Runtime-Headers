// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSCNNINSTANCENORMALIZATIONGRADIENTSTATE_H
#define MPSCNNINSTANCENORMALIZATIONGRADIENTSTATE_H

@protocol MTLBuffer;


#import "MPSNNGradientState.h"
#import "MPSCNNInstanceNormalization.h"

@interface MPSCNNInstanceNormalizationGradientState : MPSNNGradientState {
    NSUInteger _numberOfFeatureChannels;
}


@property (readonly, nonatomic) NSObject<MTLBuffer> *beta;
@property (readonly, nonatomic) NSObject<MTLBuffer> *gamma;
@property (readonly, nonatomic) NSObject<MTLBuffer> *gradientForBeta;
@property (readonly, nonatomic) NSObject<MTLBuffer> *gradientForGamma;
@property (readonly, retain, nonatomic) MPSCNNInstanceNormalization *instanceNormalization; // ivar: _instanceNormalization


+(id)temporaryStateWithCommandBuffer:(id)arg0 numberOfFeatureChannels:(NSUInteger)arg1 instanceNormalization:(id)arg2 ;
-(id)debugDescription;
-(id)initWithDevice:(id)arg0 numberOfFeatureChannels:(NSUInteger)arg1 instanceNormalization:(id)arg2 ;
-(void)dealloc;


@end


#endif