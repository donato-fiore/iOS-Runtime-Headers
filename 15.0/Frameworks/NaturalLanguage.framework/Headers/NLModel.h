// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NLMODEL_H
#define NLMODEL_H

@class NSDictionary, NSData, MLModel;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NLModelConfiguration.h"
#import "NLModelImpl.h"

@interface NLModel : NSObject {
    NLModelConfiguration *_configuration;
    NSDictionary *_infoDictionary;
    NLModelImpl *_modelImpl;
    NSData *_data;
    MLModel *_mlModel;
    *void _container;
    NSObject<OS_dispatch_queue> *_clientQueue;
}


@property (readonly, copy) NLModelConfiguration *configuration;


+(id)modelWithContentsOfURL:(id)arg0 error:(*id)arg1 ;
+(id)modelWithData:(id)arg0 error:(*id)arg1 ;
+(id)modelWithMLModel:(id)arg0 error:(*id)arg1 ;
-(BOOL)writeMLModelToURL:(id)arg0 atomically:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)writeMLModelToURL:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(BOOL)writeToURL:(id)arg0 atomically:(BOOL)arg1 error:(*id)arg2 ;
-(NSUInteger)systemVersion;
-(id)classifierTestResultsWithDataProvider:(id)arg0 ;
-(id)data;
-(id)documentFrequencyMap;
-(id)embedding;
-(id)embeddingData;
-(id)gazetteer;
-(id)initWithClassifierMLModel:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 modelImpl:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(id)initWithData:(id)arg0 mlModel:(id)arg1 error:(*id)arg2 ;
-(id)initWithMLModel:(id)arg0 error:(*id)arg1 ;
-(id)labelArray;
-(id)labelMap;
-(id)mlModel;
-(id)predictedLabelArraysForTokenArrays:(id)arg0 ;
-(id)predictedLabelForString:(id)arg0 ;
-(id)predictedLabelHypothesesForString:(id)arg0 maximumCount:(NSUInteger)arg1 ;
-(id)predictedLabelHypothesesForTokens:(id)arg0 maximumCount:(NSUInteger)arg1 ;
-(id)predictedLabelsForTokens:(id)arg0 ;
-(id)sequenceTestResultsWithDataProvider:(id)arg0 ;
-(id)testResultsWithDataProvider:(id)arg0 ;
-(id)testResultsWithDataSet:(id)arg0 ;
-(id)vocabularyMap;
-(void)dealloc;


@end


#endif