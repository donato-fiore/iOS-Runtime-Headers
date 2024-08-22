// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NLMODELIMPLL_H
#define NLMODELIMPLL_H

@class NSDictionary;


#import "NLModelImpl.h"
#import "NLModelConfiguration.h"

@interface NLModelImplL : NLModelImpl {
    *void _maxEntModel;
    NLModelConfiguration *_configuration;
    NSDictionary *_labelMap;
    NSDictionary *_vocabularyMap;
    NSDictionary *_documentFrequencyMap;
    NSUInteger _numberOfTrainingInstances;
}




-(NSUInteger)numberOfTrainingInstances;
-(id)configuration;
-(id)documentFrequencyMap;
-(id)initWithModelData:(id)arg0 configuration:(id)arg1 labelMap:(id)arg2 vocabularyMap:(id)arg3 documentFrequencyMap:(id)arg4 customEmbeddingData:(id)arg5 trainingInfo:(id)arg6 error:(*id)arg7 ;
-(id)initWithModelTrainer:(id)arg0 error:(*id)arg1 ;
-(id)initWithOwnedModelObject:(*void)arg0 configuration:(id)arg1 labelMap:(id)arg2 vocabularyMap:(id)arg3 documentFrequencyMap:(id)arg4 numberOfTrainingInstances:(NSUInteger)arg5 ;
-(id)labelMap;
-(id)modelData;
-(id)predictedLabelForString:(id)arg0 ;
-(id)predictedLabelHypothesesForString:(id)arg0 maximumCount:(NSUInteger)arg1 ;
-(id)predictedLabelHypothesesForTokens:(id)arg0 maximumCount:(NSUInteger)arg1 ;
-(id)predictedLabelsForTokens:(id)arg0 ;
-(id)vocabularyMap;
-(void)dealloc;


@end


#endif