// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLTREEENSEMBLEXGBOOSTCLASSIFIER_H
#define MLTREEENSEMBLEXGBOOSTCLASSIFIER_H

@class NSArray, NSURL, NSString;


#import "MLClassifier.h"

@interface MLTreeEnsembleXGBoostClassifier : MLClassifier

@property (nonatomic) *void booster; // ivar: _booster
@property (retain, nonatomic) NSArray *labelsForDataPoints; // ivar: _labelsForDataPoints
@property (retain, nonatomic) NSURL *modelURL; // ivar: _modelURL
@property (nonatomic) NSUInteger numClasses; // ivar: _numClasses
@property (retain, nonatomic) NSString *objective; // ivar: _objective


-(BOOL)initializeAndvalidateObjectiveAndNumClassesWithConfiguration:(id)arg0 error:(*id)arg1 ;
-(BOOL)initializeBoosterIfOneExists;
-(id)batchProviderFromXGboostResults:(*float)arg0 length:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)featureProviderArrayFromXGBoostResult:(*float)arg0 length:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)featureProviderFromXGboostResults:(*float)arg0 length:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)initWithDescription:(id)arg0 configuration:(id)arg1 indexToStringLabelArray:(struct vector<std::string, std::allocator<std::string>> )arg2 indexToIntLabelArray:(struct vector<long long, std::allocator<long long>> )arg3 modelURL:(id)arg4 error:(*id)arg5 ;
-(id)loadLabelsWithStringLabels:(struct vector<std::string, std::allocator<std::string>> )arg0 intLabels:(struct vector<long long, std::allocator<long long>> )arg1 ;
-(id)packageOutputWithPredictedLabel:(id)arg0 classProbabilities:(id)arg1 ;
-(id)predictionFromFeatures:(id)arg0 error:(*id)arg1 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)predictionsFromBatch:(id)arg0 error:(*id)arg1 ;
-(id)predictionsFromBatch:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(struct ? )xgBoostDataFormatFromBatchProvider:(id)arg0 needLabels:(BOOL)arg1 error:(*id)arg2 ;
-(struct ? )xgBoostDataFormatFromFeatureProvider:(id)arg0 error:(*id)arg1 ;
-(void)dealloc;
-(void)populateXGBoostDataFormat:(*void)arg0 trainingData:(id)arg1 dataIndex:(NSInteger)arg2 inputName:(id)arg3 needLabels:(BOOL)arg4 error:(*id)arg5 ;


@end


#endif