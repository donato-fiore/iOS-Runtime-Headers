// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHAPRIVATEFEDERATEDLEARNINGMODELTRAINER_H
#define PHAPRIVATEFEDERATEDLEARNINGMODELTRAINER_H

@class NSURL, NSString, NSArray, ETLossDefinition, ETOptimizerDefinition;
@protocol ETDataProvider;

#import <Foundation/Foundation.h>


@interface PHAPrivateFederatedLearningModelTrainer : NSObject

@property (readonly, nonatomic) NSURL *espressoFileURL; // ivar: _espressoFileURL
@property (retain, nonatomic) NSString *inputName; // ivar: _inputName
@property (retain, nonatomic) NSString *labelName; // ivar: _labelName
@property (readonly, nonatomic) NSArray *layersToTrain; // ivar: _layersToTrain
@property (retain, nonatomic) ETLossDefinition *lossDefinition; // ivar: _lossDefinition
@property (retain, nonatomic) NSString *lossName; // ivar: _lossName
@property (retain, nonatomic) NSString *modelInferenceOutputName; // ivar: _modelInferenceOutputName
@property (retain, nonatomic) NSString *modelOutputName; // ivar: _modelOutputName
@property (retain, nonatomic) ETOptimizerDefinition *optimizerDefinition; // ivar: _optimizerDefinition
@property (retain, nonatomic) NSString *optimizerName; // ivar: _optimizerName
@property (readonly, nonatomic) NSObject<ETDataProvider> *trainingData; // ivar: _trainingData


+(BOOL)_generateError:(*id)arg0 errorCode:(NSInteger)arg1 message:(id)arg2 underlyingError:(id)arg3 ;
-(BOOL)_trueLabelTensor:(id)arg0 isEqualToPredictionTensor:(id)arg1 ;
-(id)_averageLossAndAccuracyForBatchResults:(id)arg0 error:(*id)arg1 ;
-(id)_getParamsFromTask:(id)arg0 forLayers:(id)arg1 error:(*id)arg2 ;
-(id)initWithTrainingData:(id)arg0 espressoFileURL:(id)arg1 learningRate:(id)arg2 modelInputName:(id)arg3 modelOutputName:(id)arg4 lossName:(id)arg5 optimizerName:(id)arg6 error:(*id)arg7 ;
-(id)trainForNumberOfEpochs:(NSUInteger)arg0 layersToTrain:(id)arg1 verbose:(BOOL)arg2 error:(*id)arg3 ;
-(int)_argmax:(*float)arg0 size:(int)arg1 ;


@end


#endif