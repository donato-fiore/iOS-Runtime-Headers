// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSNNBINARYGRADIENTSTATE_H
#define MPSNNBINARYGRADIENTSTATE_H

@class MPSState;
@protocol MPSNNPadding;



@interface MPSNNBinaryGradientState : MPSState {
    ? _primaryOffset;
    ? _secondaryOffset;
    ? _clipRect;
    ? _destSize;
    NSUInteger _destFeatureChannels;
    NSUInteger _destinationFeatureChannelOffset;
    NSUInteger _primarySourceFeatureChannelOffset;
    NSUInteger _secondarySourceFeatureChannelOffset;
    NSUInteger _primarySourceFeatureChannelMaxCount;
    NSUInteger _secondarySourceFeatureChannelMaxCount;
    NSUInteger _primaryKernelWidth;
    NSUInteger _primaryKernelHeight;
    NSUInteger _secondaryKernelWidth;
    NSUInteger _secondaryKernelHeight;
    NSUInteger _primaryStrideInPixelsX;
    NSUInteger _primaryStrideInPixelsY;
    NSUInteger _secondaryStrideInPixelsX;
    NSUInteger _secondaryStrideInPixelsY;
    NSUInteger _primaryDilationRateX;
    NSUInteger _primaryDilationRateY;
    NSUInteger _secondaryDilationRateX;
    NSUInteger _secondaryDilationRateY;
    id<MPSNNPadding> *_padding;
    NSUInteger _maxBatchSize;
    BOOL _isBackwards;
    NSUInteger _primaryEdgeMode;
    NSUInteger _secondaryEdgeMode;
    ? _primarySrcSize;
    NSUInteger _primarySourceFeatureChannels;
    ? _secondarySrcSize;
    NSUInteger _secondarySourceFeatureChannels;
    BOOL _initOnce;
    unsigned int _provenance;
}




-(id)destinationImageDescriptorForSourceImages:(id)arg0 sourceStates:(id)arg1 forKernel:(id)arg2 suggestedDescriptor:(id)arg3 ;
-(void)dealloc;


@end


#endif