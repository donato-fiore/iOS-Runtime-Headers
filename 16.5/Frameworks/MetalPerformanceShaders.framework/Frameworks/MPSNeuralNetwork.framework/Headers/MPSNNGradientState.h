// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSNNGRADIENTSTATE_H
#define MPSNNGRADIENTSTATE_H

@class MPSState;
@protocol MPSNNPadding;



@interface MPSNNGradientState : MPSState {
    ? _offset;
    ? _clipRect;
    ? _destSize;
    NSUInteger _destFeatureChannels;
    NSUInteger _destinationFeatureChannelOffset;
    NSUInteger _sourceFeatureChannelOffset;
    NSUInteger _kernelWidth;
    NSUInteger _kernelHeight;
    NSUInteger _strideInPixelsX;
    NSUInteger _strideInPixelsY;
    NSUInteger _dilationRateX;
    NSUInteger _dilationRateY;
    id<MPSNNPadding> *_padding;
    NSUInteger _maxBatchSize;
    BOOL _isBackwards;
    NSUInteger _edgeMode;
    ? _srcSize;
    NSUInteger _sourceFeatureChannels;
    BOOL _initOnce;
    unsigned int _provenance;
}




-(id)debugDescription;
-(id)destinationImageDescriptorForSourceImages:(id)arg0 sourceStates:(id)arg1 forKernel:(id)arg2 suggestedDescriptor:(id)arg3 ;
-(void)dealloc;


@end


#endif