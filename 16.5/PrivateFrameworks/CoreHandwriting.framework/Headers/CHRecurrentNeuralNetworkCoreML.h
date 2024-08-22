// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHRECURRENTNEURALNETWORKCOREML_H
#define CHRECURRENTNEURALNETWORKCOREML_H

@class NSDictionary, NSArray, NSString;


#import "CHRecurrentNeuralNetwork.h"
#import "CHSingletonMLModel.h"

@interface CHRecurrentNeuralNetworkCoreML : CHRecurrentNeuralNetwork

@property (readonly, nonatomic) NSDictionary *classCounts; // ivar: _classCounts
@property (readonly, nonatomic) NSDictionary *featureCounts; // ivar: _featureCounts
@property (readonly, nonatomic) NSArray *inputNames; // ivar: _inputNames
@property (readonly, nonatomic) CHSingletonMLModel *model; // ivar: _model
@property (readonly, nonatomic) NSArray *outputNames; // ivar: _outputNames
@property (readonly, nonatomic) NSString *resourcePath; // ivar: _resourcePath


-(id)initWithModelName:(id)arg0 ;
-(id)initWithModelName:(id)arg0 featureIndex:(NSInteger)arg1 ;
-(void)dealloc;


@end


#endif