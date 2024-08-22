// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHACURARESHADOWEVALUATIONEVALUATIONRESULT_H
#define PHACURARESHADOWEVALUATIONEVALUATIONRESULT_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface PHACurareShadowEvaluationEvaluationResult : NSObject

@property BOOL isPositiveData; // ivar: _isPositiveData
@property (retain, nonatomic) NSNumber *meanPredictionValue; // ivar: _meanPredictionValue
@property (retain, nonatomic) NSString *modelName; // ivar: _modelName
@property (retain, nonatomic) NSNumber *numberOfCorrectSamples; // ivar: _numberOfCorrectSamples
@property (retain, nonatomic) NSNumber *numberOfTotalSamples; // ivar: _numberOfTotalSamples
@property (retain, nonatomic) NSNumber *stddevPredictionValue; // ivar: _stddevPredictionValue


-(id)initWithModelPath:(id)arg0 isPositiveData:(BOOL)arg1 numberOfTotalSamples:(id)arg2 numberOfCorrectSamples:(id)arg3 meanPredictionValue:(id)arg4 stddevPredictionValue:(id)arg5 ;


@end


#endif