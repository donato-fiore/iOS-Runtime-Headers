// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLE5ENGINE_H
#define MLE5ENGINE_H

@class NSString;
@protocol MLClassifier, MLRegressor;


#import "MLModel.h"
#import "MLModelMetadata.h"
#import "MLModelDescription.h"
#import "MLE5ExecutionStreamOperationPool.h"
#import "MLE5ExecutionStreamPool.h"

@interface MLE5Engine : MLModel <MLClassifier, MLRegressor>



@property (readonly) id *classLabelsSharedKey; // ivar: _classLabelsSharedKey
@property (readonly) NSString *classProbabilitiesFeatureName; // ivar: _classProbabilitiesFeatureName
@property (readonly) MLModelMetadata *metadata;
@property (retain, nonatomic) MLModelDescription *modelDescription;
@property (readonly) MLE5ExecutionStreamOperationPool *operationPool; // ivar: _operationPool
@property (readonly) MLE5ExecutionStreamPool *streamPool; // ivar: _streamPool


-(id)_classProbabilitiesInOutputFeatures:(id)arg0 error:(*id)arg1 ;
-(id)_classifierResultFromOutputFeatures:(id)arg0 classifyTopK:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)_outputFeaturesByAddingClassifierResultTo:(id)arg0 classifyTopK:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)_predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)_predictionFromFeatures:(id)arg0 options:(id)arg1 usingStream:(id)arg2 operation:(id)arg3 error:(*id)arg4 ;
-(id)_probabilityDictionaryWithMultiArray:(id)arg0 classifyTopK:(NSInteger)arg1 ;
-(id)classLabels;
-(id)classify:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)initWithE5BundleAtURL:(id)arg0 modelDescription:(id)arg1 classProbabilitiesFeatureName:(id)arg2 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)regress:(id)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif