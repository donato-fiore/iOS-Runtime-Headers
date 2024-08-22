// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSNNMULTIARYGRADIENTSTATE_H
#define MPSNNMULTIARYGRADIENTSTATE_H

@class MPSState;
@protocol MPSNNPadding;



@interface MPSNNMultiaryGradientState : MPSState {
    NSUInteger _srcCount;
    *NNKernelSourceParams _srcInfo;
    *? _srcSizes;
    ? _clipRect;
    ? _destSize;
    NSUInteger _destFeatureChannels;
    NSUInteger _destinationFeatureChannelOffset;
    id<MPSNNPadding> *_padding;
    NSUInteger _maxBatchSize;
    BOOL _isBackwards;
    BOOL _initOnce;
    unsigned int _provenance;
}




-(id)initWithSourceCount:(NSUInteger)arg0 ;
-(void)dealloc;


@end


#endif