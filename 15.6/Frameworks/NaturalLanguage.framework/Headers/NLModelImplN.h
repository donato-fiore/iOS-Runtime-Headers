// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NLMODELIMPLN_H
#define NLMODELIMPLN_H

@class NSDictionary;


#import "NLModelImpl.h"
#import "NLModelConfiguration.h"

@interface NLModelImplN : NLModelImpl {
    *void _nlModel;
    *void _modelContainer;
    NLModelConfiguration *_configuration;
    NSDictionary *_labelMap;
    NSUInteger _numberOfTrainingInstances;
}




-(NSUInteger)numberOfTrainingInstances;
-(id)configuration;
-(id)initWithModelContainer:(*void)arg0 configuration:(id)arg1 labelMap:(id)arg2 vocabularyMap:(id)arg3 documentFrequencyMap:(id)arg4 customEmbeddingData:(id)arg5 trainingInfo:(id)arg6 ;
-(id)initWithModelData:(id)arg0 configuration:(id)arg1 labelMap:(id)arg2 vocabularyMap:(id)arg3 documentFrequencyMap:(id)arg4 customEmbeddingData:(id)arg5 trainingInfo:(id)arg6 error:(*id)arg7 ;
-(id)initWithModelTrainer:(id)arg0 error:(*id)arg1 ;
-(id)labelMap;
-(id)modelData;
-(id)predictedLabelForString:(id)arg0 ;
-(id)predictedLabelHypothesesDictionaryForString:(id)arg0 maximumCount:(NSUInteger)arg1 ;
-(id)predictedLabelHypothesesForString:(id)arg0 maximumCount:(NSUInteger)arg1 ;
-(id)predictedLabelHypothesesForTokens:(id)arg0 maximumCount:(NSUInteger)arg1 ;
-(id)predictedLabelsDictionaryForString:(id)arg0 ;
-(id)predictedLabelsForTokens:(id)arg0 ;
-(void)dealloc;


@end


#endif