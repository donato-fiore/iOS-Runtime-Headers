// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLPLAYER_H
#define MLPLAYER_H

@class MPSKernel, NSString;

#import <Foundation/Foundation.h>

#import "MLPNetwork.h"
#import "MLPLayer.h"
#import "MontrealNNModelNode.h"

@interface MLPLayer : NSObject

@property (retain) MPSKernel *forwardKernel; // ivar: _forwardKernel
@property NSUInteger inputChannels; // ivar: _inputChannels
@property NSUInteger inputLength; // ivar: _inputLength
@property (readonly) NSUInteger layerType; // ivar: _layerType
@property (readonly) NSString *name; // ivar: _name
@property (weak) MLPNetwork *network; // ivar: _network
@property (readonly) float neuronA; // ivar: _neuronA
@property (readonly) float neuronB; // ivar: _neuronB
@property (readonly) float neuronC; // ivar: _neuronC
@property (readonly) int neuronType; // ivar: _neuronType
@property (weak) MLPLayer *nextLayer; // ivar: _nextLayer
@property (retain) MontrealNNModelNode *node; // ivar: _node
@property NSUInteger outputChannels; // ivar: _outputChannels
@property NSUInteger outputLength; // ivar: _outputLength
@property (weak) MLPLayer *previousLayer; // ivar: _previousLayer
@property (retain) MPSKernel *primaryGradientKernel; // ivar: _primaryGradientKernel
@property (retain) MPSKernel *secondaryForwardKernel; // ivar: _secondaryForwardKernel
@property (retain) MPSKernel *secondaryGradientKernel; // ivar: _secondaryGradientKernel


+(id)layerWithMontrealNode:(id)arg0 modelContainer:(*void)arg1 ;
-(NSInteger)montrealTypeFromMPSNeuronType:(int)arg0 ;
-(id)backward:(id)arg0 inputGradient:(id)arg1 ;
-(id)forward:(id)arg0 input:(id)arg1 labels:(id)arg2 runInference:(BOOL)arg3 ;
-(id)generateNode:(id)arg0 model:(id)arg1 weightIter:(*NSUInteger)arg2 ;
-(id)generateNode:(id)arg0 model:(id)arg1 weightIter:(*NSUInteger)arg2 params:(struct ? *)arg3 inputChunks:(id)arg4 outputChunks:(id)arg5 ;
-(id)initWithLayerType:(NSUInteger)arg0 name:(id)arg1 neuronType:(int)arg2 neuronParams:(id)arg3 ;
-(id)initWithLayerType:(NSUInteger)arg0 name:(id)arg1 parameters:(struct ? *)arg2 ;
-(id)initWithName:(id)arg0 parameters:(struct ? *)arg1 ;
-(id)seqBackward:(id)arg0 dataBatch:(id)arg1 inputGradient:(id)arg2 ;
-(id)seqForward:(id)arg0 input:(id)arg1 dataBatch:(id)arg2 runInference:(BOOL)arg3 ;
-(int)mpsNeuronTypeFromMontrealType:(NSInteger)arg0 ;
-(void)createKernel;
-(void)printMatrix:(id)arg0 name:(id)arg1 cmdBuf:(id)arg2 ;
-(void)updatePreviousLayer:(id)arg0 nextLayer:(id)arg1 network:(id)arg2 ;


@end


#endif