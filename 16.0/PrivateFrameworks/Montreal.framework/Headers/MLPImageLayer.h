// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLPIMAGELAYER_H
#define MLPIMAGELAYER_H

@class NSMutableDictionary, NSArray;


#import "MLPLayer.h"

@interface MLPImageLayer : MLPLayer

@property (readonly) NSMutableDictionary *inputImagesToFirstKernel; // ivar: _inputImagesToFirstKernel
@property (readonly) NSMutableDictionary *inputImagesToSecondKernel; // ivar: _inputImagesToSecondKernel
@property (readonly) NSArray *inputToFirstKernel;
@property (readonly) NSArray *inputToSecondKernel;
@property (readonly) NSArray *primaryCurrentState;
@property (readonly) NSMutableDictionary *primaryCurrentStates; // ivar: _primaryCurrentStates
@property (readonly) NSArray *secondaryCurrentState;
@property (readonly) NSMutableDictionary *secondaryCurrentStates; // ivar: _secondaryCurrentStates


-(id)generateNode:(id)arg0 model:(id)arg1 weightIter:(*NSUInteger)arg2 params:(struct ? *)arg3 ;
-(id)initWithLayerType:(NSUInteger)arg0 name:(id)arg1 neuronType:(int)arg2 neuronParams:(id)arg3 ;
-(id)initWithLayerType:(NSUInteger)arg0 name:(id)arg1 parameters:(struct ? *)arg2 ;
-(void)allocateInputDictionaries;
-(void)updateInputToFirstKernel:(id)arg0 index:(id)arg1 inference:(BOOL)arg2 ;
-(void)updateInputToFirstKernel:(id)arg0 inference:(BOOL)arg1 ;
-(void)updateInputToSecondKernel:(id)arg0 index:(id)arg1 inference:(BOOL)arg2 ;
-(void)updateInputToSecondKernel:(id)arg0 inference:(BOOL)arg1 ;
-(void)updatePrimaryCurrentState:(id)arg0 index:(id)arg1 inference:(BOOL)arg2 ;
-(void)updatePrimaryCurrentState:(id)arg0 inference:(BOOL)arg1 ;
-(void)updateSecondaryCurrentState:(id)arg0 index:(id)arg1 inference:(BOOL)arg2 ;
-(void)updateSecondaryCurrentState:(id)arg0 inference:(BOOL)arg1 ;


@end


#endif