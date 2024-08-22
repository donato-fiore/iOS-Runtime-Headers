// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSCNNGROUPNORMALIZATIONGRADIENTSTATE_H
#define MPSCNNGROUPNORMALIZATIONGRADIENTSTATE_H

@protocol MTLBuffer;


#import "MPSNNGradientState.h"
#import "MPSCNNGroupNormalization.h"

@interface MPSCNNGroupNormalizationGradientState : MPSNNGradientState {
    NSUInteger _numberOfFeatureChannels;
    NSUInteger _numberOfGroups;
}


@property (readonly, nonatomic) NSObject<MTLBuffer> *beta;
@property (readonly, nonatomic) NSObject<MTLBuffer> *gamma;
@property (readonly, nonatomic) NSObject<MTLBuffer> *gradientForBeta;
@property (readonly, nonatomic) NSObject<MTLBuffer> *gradientForGamma;
@property (readonly, retain, nonatomic) MPSCNNGroupNormalization *groupNormalization; // ivar: _groupNormalization


+(id)temporaryStateWithCommandBuffer:(id)arg0 numberOfFeatureChannels:(NSUInteger)arg1 groupNormalization:(id)arg2 ;
-(id)debugDescription;
-(id)initWithDevice:(id)arg0 numberOfFeatureChannels:(NSUInteger)arg1 groupNormalization:(id)arg2 ;
-(void)dealloc;


@end


#endif