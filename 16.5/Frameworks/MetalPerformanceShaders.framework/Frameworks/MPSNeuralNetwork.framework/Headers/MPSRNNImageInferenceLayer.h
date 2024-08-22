// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSRNNIMAGEINFERENCELAYER_H
#define MPSRNNIMAGEINFERENCELAYER_H



#import "MPSCNNKernel.h"

@interface MPSRNNImageInferenceLayer : MPSCNNKernel {
    *int layerTypes;
    **void layers;
    **void forwardLayers;
    *int forwardLayerTypes;
    NSUInteger nForwardLayers;
    **void backwardLayers;
    *int backwardLayerTypes;
    NSUInteger nBackwardLayers;
}


@property (nonatomic) NSUInteger bidirectionalCombineMode; // ivar: _bidirectionalCombineMode
@property (readonly, nonatomic) NSUInteger inputFeatureChannels; // ivar: _inputFeatureChannels
@property (readonly, nonatomic) NSUInteger numberOfLayers; // ivar: _numberOfLayers
@property (readonly, nonatomic) NSUInteger outputFeatureChannels; // ivar: _outputFeatureChannels
@property (nonatomic) BOOL recurrentOutputIsTemporary; // ivar: _recurrentOutputIsTemporary
@property (nonatomic) BOOL storeAllIntermediateStates; // ivar: _storeAllIntermediateStates


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 rnnDescriptor:(id)arg1 ;
-(id)initWithDevice:(id)arg0 rnnDescriptors:(id)arg1 ;
-(void)dealloc;
-(void)encodeBidirectionalSequenceToCommandBuffer:(id)arg0 sourceSequence:(id)arg1 destinationForwardImages:(id)arg2 destinationBackwardImages:(id)arg3 ;
-(void)encodeSequenceToCommandBuffer:(id)arg0 sourceImages:(id)arg1 destinationImages:(id)arg2 recurrentInputState:(id)arg3 recurrentOutputStates:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif