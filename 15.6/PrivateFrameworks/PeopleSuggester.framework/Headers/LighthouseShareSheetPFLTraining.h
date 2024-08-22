// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LIGHTHOUSESHARESHEETPFLTRAINING_H
#define LIGHTHOUSESHARESHEETPFLTRAINING_H

@class NSString, NSMutableArray, NSMutableDictionary, _DKKnowledgeStore, NSDictionary;

#import <Foundation/Foundation.h>

#import "FidesPHSEvaluatorDataSource.h"

@interface LighthouseShareSheetPFLTraining : NSObject

@property (retain, nonatomic) NSString *configBoltTaskIDSpecification; // ivar: _configBoltTaskIDSpecification
@property (retain, nonatomic) NSString *configDepthSpecification; // ivar: _configDepthSpecification
@property (retain, nonatomic) NSString *configTreeSpecification; // ivar: _configTreeSpecification
@property (retain, nonatomic) FidesPHSEvaluatorDataSource *dataSource; // ivar: _dataSource
@property (retain, nonatomic) NSMutableArray *featureMatricesForAllShareEvents; // ivar: _featureMatricesForAllShareEvents
@property (retain, nonatomic) NSMutableDictionary *featureNameDict; // ivar: _featureNameDict
@property (retain, nonatomic) _DKKnowledgeStore *knowledgeStore; // ivar: _knowledgeStore
@property (retain, nonatomic) NSDictionary *processDataReturnDict; // ivar: _processDataReturnDict
@property (retain, nonatomic) NSDictionary *selectedFeaturesConfig; // ivar: _selectedFeaturesConfig


+(id)processDataForStore:(id)arg0 recipeInfo:(id)arg1 ;
+(id)processDataForStore:(id)arg0 taskParameters:(id)arg1 ;
+(id)taskResultFromDict:(id)arg0 ;
+(void)initialize;
-(float)sigmoid:(float)arg0 ;
-(id)createDataSourceForDodMLRecipe:(id)arg0 error:(*id)arg1 ;
-(id)createDataSourceForRecipe:(id)arg0 error:(*id)arg1 ;
-(id)createMLFeatureProviderArrayFromSingleShareEventData:(id)arg0 ;
-(id)evaluateMetricsWithModelURL:(id)arg0 ;
-(id)generateResultsDictionayWithModelURL:(id)arg0 error:(*id)arg1 ;
-(id)runTask:(id)arg0 knowledgeStore:(id)arg1 error:(*id)arg2 ;
-(id)runWithRecipeInfo:(id)arg0 knowledgeStore:(id)arg1 error:(*id)arg2 ;
-(void)processDataForMetricEvaluationForStore:(id)arg0 ;


@end


#endif