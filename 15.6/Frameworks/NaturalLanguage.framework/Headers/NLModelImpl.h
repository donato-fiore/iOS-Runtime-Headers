// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NLMODELIMPL_H
#define NLMODELIMPL_H

@class NSData, NSDictionary;

#import <Foundation/Foundation.h>

#import "NLModelConfiguration.h"
#import "NLEmbedding.h"
#import "NLGazetteer.h"

@interface NLModelImpl : NSObject

@property (readonly, copy) NLModelConfiguration *configuration;
@property (readonly, copy) NSData *customEmbeddingData;
@property (readonly, copy) NSDictionary *documentFrequencyMap;
@property (readonly, copy) NLEmbedding *embedding;
@property (readonly, copy) NSData *embeddingData;
@property (readonly, copy) NLGazetteer *gazetteer;
@property (readonly, copy) NSDictionary *labelMap;
@property (readonly) NSUInteger numberOfTrainingInstances;
@property (readonly) NSUInteger systemVersion;
@property (readonly, copy) NSDictionary *trainingInfo;
@property (readonly, copy) NSDictionary *vocabularyMap;


-(id)initWithModelData:(id)arg0 configuration:(id)arg1 labelMap:(id)arg2 vocabularyMap:(id)arg3 documentFrequencyMap:(id)arg4 customEmbeddingData:(id)arg5 trainingInfo:(id)arg6 error:(*id)arg7 ;
-(id)initWithModelTrainer:(id)arg0 error:(*id)arg1 ;
-(id)modelData;
-(id)predictedLabelArraysForTokenArrays:(id)arg0 ;
-(id)predictedLabelForString:(id)arg0 ;
-(id)predictedLabelHypothesesForString:(id)arg0 maximumCount:(NSUInteger)arg1 ;
-(id)predictedLabelHypothesesForTokens:(id)arg0 maximumCount:(NSUInteger)arg1 ;
-(id)predictedLabelsForTokens:(id)arg0 ;


@end


#endif