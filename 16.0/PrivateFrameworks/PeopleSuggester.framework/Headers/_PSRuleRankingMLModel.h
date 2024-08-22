// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PSRULERANKINGMLMODEL_H
#define _PSRULERANKINGMLMODEL_H

@class MLModelConfiguration, NSString, NSDictionary, MLModel, NSArray;

#import <Foundation/Foundation.h>

#import "_PSBehaviorRuleFeatureExtraction.h"

@interface _PSRuleRankingMLModel : NSObject

@property (retain, nonatomic) MLModelConfiguration *adaptableModelConfiguration; // ivar: _adaptableModelConfiguration
@property (retain) NSString *adaptedModelRecipeVersion; // ivar: _adaptedModelRecipeVersion
@property (retain) _PSBehaviorRuleFeatureExtraction *feaExtHandle; // ivar: _feaExtHandle
@property (nonatomic) BOOL isAdaptedMLModelOK; // ivar: _isAdaptedMLModelOK
@property BOOL isAdaptedModel; // ivar: _isAdaptedModel
@property (retain) NSDictionary *metadata; // ivar: _metadata
@property (retain) MLModel *mlModel; // ivar: _mlModel
@property (retain) NSDictionary *psConfigForAdaptableModel; // ivar: _psConfigForAdaptableModel
@property CGFloat scoreThreshold; // ivar: _scoreThreshold
@property (retain, nonatomic) NSArray *scores; // ivar: _scores


-(id)extractAdaptedModelRecipeID;
-(id)getAdaptedModelVersion;
-(id)giveModelDescription;
-(id)initWithAdaptableModelConfig:(id)arg0 isAdaptedMLModelOK:(BOOL)arg1 scoreThreshold:(CGFloat)arg2 ;
-(id)initWithMLModel:(id)arg0 scoreThreshold:(CGFloat)arg1 isAdaptedModel:(BOOL)arg2 psConfigForAdaptableModel:(id)arg3 isAdaptedMLModelOK:(BOOL)arg4 ;
-(id)rankRules:(id)arg0 contextItems:(id)arg1 ;
-(id)scoresOnRules:(id)arg0 contextItems:(id)arg1 ;
-(void)loadDefaultRuleMinerMLModel;


@end


#endif