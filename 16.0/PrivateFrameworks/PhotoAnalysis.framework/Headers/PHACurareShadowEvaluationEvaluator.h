// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHACURARESHADOWEVALUATIONEVALUATOR_H
#define PHACURARESHADOWEVALUATIONEVALUATOR_H

@class NSString, ETLossDefinition, ETOptimizerDefinition;

#import <Foundation/Foundation.h>


@interface PHACurareShadowEvaluationEvaluator : NSObject

@property (retain, nonatomic) NSString *labelName; // ivar: _labelName
@property (retain, nonatomic) ETLossDefinition *lossDefinition; // ivar: _lossDefinition
@property (retain, nonatomic) NSString *lossName; // ivar: _lossName
@property (retain, nonatomic) NSString *modelInputName; // ivar: _modelInputName
@property (retain, nonatomic) NSString *modelOutputName; // ivar: _modelOutputName
@property (retain, nonatomic) ETOptimizerDefinition *optimizerDefinition; // ivar: _optimizerDefinition


+(id)evaluatorLog;
-(id)evaluateModelAtPath:(id)arg0 labelIndex:(int)arg1 labelOperatingPoint:(float)arg2 isPositiveData:(BOOL)arg3 evaluationData:(id)arg4 error:(*id)arg5 ;
-(id)evaluateModelAtPath:(id)arg0 labelIndex:(int)arg1 labelOperatingPoint:(float)arg2 positiveEvaluationData:(id)arg3 negativeEvaluationData:(id)arg4 error:(*id)arg5 ;
-(id)initWithModelInputName:(id)arg0 modelOutputName:(id)arg1 lossName:(id)arg2 ;
-(int)accuracyForLabel:(id)arg0 withProbability:(struct ? *)arg1 atIndex:(int)arg2 andOperatingPoint:(float)arg3 ;
-(struct vector<unsigned long, std::allocator<unsigned long>> )getEspressoBufferShapeWithBuffer:(struct ? *)arg0 ;


@end


#endif