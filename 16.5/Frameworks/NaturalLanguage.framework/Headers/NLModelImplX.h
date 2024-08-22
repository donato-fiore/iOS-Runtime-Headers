// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NLMODELIMPLX_H
#define NLMODELIMPLX_H

@class NSData, NSDictionary, NSString;


#import "NLModelImpl.h"
#import "NLModelConfiguration.h"
#import "NLEmbedding.h"

@interface NLModelImplX : NLModelImpl {
    *MontrealNeuralNetwork _montrealModel;
    NLModelConfiguration *_configuration;
    NLEmbedding *_embedding;
    NSData *_customEmbeddingData;
    NSDictionary *_labelMap;
    NSUInteger _numberOfTrainingInstances;
    NSString *_trainingLanguage;
    NSString *_trainingEmbeddingType;
    NSData *_modelData;
}




-(*float)outputForString:(id)arg0 ;
-(NSUInteger)numberOfTrainingInstances;
-(NSUInteger)systemVersion;
-(id)configuration;
-(id)customEmbeddingData;
-(id)initWithModelData:(id)arg0 configuration:(id)arg1 labelMap:(id)arg2 vocabularyMap:(id)arg3 documentFrequencyMap:(id)arg4 customEmbeddingData:(id)arg5 trainingInfo:(id)arg6 error:(*id)arg7 ;
-(id)initWithModelTrainer:(id)arg0 error:(*id)arg1 ;
-(id)labelMap;
-(id)modelData;
-(id)predictedLabelForString:(id)arg0 ;
-(id)predictedLabelHypothesesForString:(id)arg0 maximumCount:(NSUInteger)arg1 ;
-(id)predictedLabelHypothesesForTokens:(id)arg0 maximumCount:(NSUInteger)arg1 ;
-(id)predictedLabelsForTokens:(id)arg0 ;
-(id)trainingInfo;
-(void)dealloc;


@end


#endif