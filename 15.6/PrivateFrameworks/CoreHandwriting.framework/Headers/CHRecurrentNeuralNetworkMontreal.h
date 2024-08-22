// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHRECURRENTNEURALNETWORKMONTREAL_H
#define CHRECURRENTNEURALNETWORKMONTREAL_H

@class NSDictionary, NSArray;


#import "CHRecurrentNeuralNetwork.h"

@interface CHRecurrentNeuralNetworkMontreal : CHRecurrentNeuralNetwork

@property (readonly, nonatomic) *MontrealNeuralNetwork _model; // ivar: __model
@property (readonly, nonatomic) NSDictionary *classCounts; // ivar: _classCounts
@property (readonly, nonatomic) NSDictionary *featureCounts; // ivar: _featureCounts
@property (readonly, nonatomic) NSArray *inputNames; // ivar: _inputNames
@property (readonly, nonatomic) NSArray *outputNames; // ivar: _outputNames


// -(BOOL)_recursivelyPredictProbabilitiesForDrawing:(id)arg0 features:(*void)arg1 pointRange:(struct _NSRange )arg2 modelInputName:(id)arg3 modelOutputNames:(id)arg4 probabilities:(*void)arg5 probabilityPredictionBlock:(id)arg6 error:(unk)arg7 cancellationBlock:(*id)arg8  ;
-(id)initWithModelName:(id)arg0 ;
-(struct vector<float, std::allocator<float>> )_extractFeaturesFromDrawing:(id)arg0 inputName:(id)arg1 interpointDistance:(CGFloat)arg2 error:(*id)arg3 ;
-(void)dealloc;


@end


#endif