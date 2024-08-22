// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLPMATRIXLAYER_H
#define MLPMATRIXLAYER_H

@class NSMutableDictionary;


#import "MLPLayer.h"

@interface MLPMatrixLayer : MLPLayer

@property (retain) NSMutableDictionary *inputMatrixToFirstKernel; // ivar: _inputMatrixToFirstKernel
@property (retain) NSMutableDictionary *inputMatrixToSecondKernel; // ivar: _inputMatrixToSecondKernel
@property NSUInteger numInputs; // ivar: _numInputs
@property NSUInteger numOutputs; // ivar: _numOutputs


-(id)initWithLayerType:(NSUInteger)arg0 name:(id)arg1 neuronType:(int)arg2 neuronParams:(id)arg3 ;
-(id)initWithLayerType:(NSUInteger)arg0 name:(id)arg1 parameters:(struct ? *)arg2 ;
-(void)allocateInputDictionaries;
-(void)updateInputMatrixToFirstKernel:(id)arg0 index:(id)arg1 inference:(BOOL)arg2 ;
-(void)updateInputMatrixToSecondKernel:(id)arg0 index:(id)arg1 inference:(BOOL)arg2 ;


@end


#endif