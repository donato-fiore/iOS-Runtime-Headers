// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPSCOREINTERPRETERCOREMLMODEL_H
#define PPSCOREINTERPRETERCOREMLMODEL_H

@class NSString, MLModel, NSArray;

#import <Foundation/Foundation.h>


@interface PPScoreInterpreterCoreMLModel : NSObject {
    NSString *_coreMLModelPath;
    MLModel *_coreMLModel;
    NSString *_coreMLModelOutputName;
    NSArray *_coreMLInputFeatures;
}


@property (readonly, nonatomic) NSArray *argumentsToEvaluate; // ivar: _argumentsToEvaluate
@property (readonly, nonatomic) BOOL hasOutputIndexedSubscript; // ivar: _hasOutputIndexedSubscript
@property (readonly, nonatomic) NSUInteger numberOfFeatures;


+(CGFloat)scoreForOutputValue:(id)arg0 outputIndexedSubscript:(NSInteger)arg1 ;
-(CGFloat)predictionForEvaluatedFeatures:(id)arg0 withOutputIndexedSubscript:(NSInteger)arg1 ;
-(id)featureAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithModelPath:(id)arg0 features:(id)arg1 outputSpecification:(id)arg2 ;
-(void)loadCoreMLModelIfNotAlreadyLoaded;
-(void)loadInstanceVariablesFromFeatures:(id)arg0 outputSpecification:(id)arg1 ;


@end


#endif