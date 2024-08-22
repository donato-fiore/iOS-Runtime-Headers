// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EVALUATIONDATASOURCE_H
#define EVALUATIONDATASOURCE_H

@class NSString, NSArray, NSDictionary;
@protocol EvaluatorDataSource;

#import <Foundation/Foundation.h>


@interface EvaluationDataSource : NSObject <EvaluatorDataSource>



@property (readonly, nonatomic) int batchSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL doDummyDataFilter;
@property (readonly, nonatomic) NSString *freezeComponents;
@property (readonly, nonatomic) float gradNormFactor;
@property (readonly, nonatomic) NSString *gradNormType;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) float l2NormBound;
@property (readonly, nonatomic) int labelKeyName;
@property (readonly, nonatomic) NSArray *layersToTrain;
@property (readonly, nonatomic) float learningRate;
@property (readonly, nonatomic) float learningRateDecay;
@property (readonly, nonatomic) int minBatchSize;
@property (readonly, nonatomic) int minDaemonVersion;
@property (readonly, nonatomic) int minsUntil;
@property (readonly, nonatomic) NSString *modelFeatures;
@property (readonly, nonatomic) NSString *modelInputSchemaInputName;
@property (readonly, nonatomic) NSString *modelInputSchemaLabelName;
@property (readonly, nonatomic) NSString *modelOutputName;
@property (readonly, nonatomic) float negativeSamplingRate;
@property (readonly, nonatomic) int numLocalIterations;
@property (readonly, nonatomic) NSString *objectiveFunction;
@property (copy, nonatomic) NSDictionary *recipe; // ivar: _recipe
@property (retain, nonatomic) NSArray *recordDatas; // ivar: _recordDatas
@property (retain, nonatomic) NSArray *recordInfos; // ivar: _recordInfos
@property (retain, nonatomic) NSArray *records; // ivar: _records
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL useNewTrainingAPI;


+(id)defaultRecipeParams;
+(void)initialize;
-(BOOL)allNegativeSamples;
-(NSInteger)classificationForRecord:(NSUInteger)arg0 ;
-(NSUInteger)recordCount;
-(id)dataForRecord:(NSUInteger)arg0 ;
-(id)extractFeatureDataForRecord:(NSUInteger)arg0 ;
-(id)extractFullFeatureListForRecord:(NSUInteger)arg0 ;
-(id)getRecordInfo:(NSUInteger)arg0 ;
-(id)initWithRecipe:(id)arg0 infos:(id)arg1 datas:(id)arg2 error:(*id)arg3 ;
-(id)vectorForClassification:(NSInteger)arg0 ;
-(void)filterInMatchedLabelData:(id)arg0 ;
-(void)filteringOperation;
-(void)filteroutDummyData;
-(void)performDownSampling;
-(void)selectDaemonVersion:(int)arg0 ;
-(void)validateRecordInfo:(id)arg0 ;


@end


#endif