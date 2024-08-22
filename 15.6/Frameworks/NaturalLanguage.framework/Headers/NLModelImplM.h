// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NLMODELIMPLM_H
#define NLMODELIMPLM_H

@class NSDictionary;


#import "NLModelImpl.h"
#import "NLModelConfiguration.h"

@interface NLModelImplM : NLModelImpl {
    *void _mrlModel;
    NLModelConfiguration *_configuration;
    NSDictionary *_labelMap;
    NSDictionary *_vocabularyMap;
    NSUInteger _numberOfTrainingInstances;
}




-(NSUInteger)numberOfTrainingInstances;
-(id)configuration;
-(id)initWithModelData:(id)arg0 configuration:(id)arg1 labelMap:(id)arg2 vocabularyMap:(id)arg3 documentFrequencyMap:(id)arg4 customEmbeddingData:(id)arg5 trainingInfo:(id)arg6 error:(*id)arg7 ;
-(id)initWithModelTrainer:(id)arg0 error:(*id)arg1 ;
-(id)initWithOwnedModelObject:(*void)arg0 configuration:(id)arg1 labelMap:(id)arg2 vocabularyMap:(id)arg3 numberOfTrainingInstances:(NSUInteger)arg4 ;
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