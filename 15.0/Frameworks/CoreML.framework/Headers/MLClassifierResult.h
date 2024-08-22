// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLCLASSIFIERRESULT_H
#define MLCLASSIFIERRESULT_H

@class NSDictionary;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>

#import "MLFeatureValue.h"

@interface MLClassifierResult : NSObject

@property (readonly) NSObject<MLFeatureProvider> *additionalFeatures; // ivar: _additionalFeatures
@property (readonly) NSDictionary *classProbability; // ivar: _classProbability
@property (readonly) MLFeatureValue *predictedClass; // ivar: _predictedClass
@property (readonly) NSInteger predictedClassFeatureType; // ivar: _predictedClassFeatureType


+(id)resultWithClassProbability:(id)arg0 additionalFeatures:(id)arg1 classLabelOfMaxProbability:(id)arg2 ;
+(id)resultWithIntClassProbability:(id)arg0 ;
+(id)resultWithIntClassProbability:(id)arg0 additionalFeatures:(id)arg1 ;
+(id)resultWithStringClassProbability:(id)arg0 ;
+(id)resultWithStringClassProbability:(id)arg0 additionalFeatures:(id)arg1 ;
-(id)asFeatureDictionaryWithPredictedClassDescription:(id)arg0 classProbabilityDescription:(id)arg1 ;
-(id)initWithClassProbability:(id)arg0 additionalFeatures:(id)arg1 classLabelOfMaxProbability:(id)arg2 ;
-(id)initWithIntClassProbability:(id)arg0 classFeatureType:(NSInteger)arg1 additionalFeatures:(id)arg2 ;
-(id)initWithStringClassProbability:(id)arg0 classFeatureType:(NSInteger)arg1 additionalFeatures:(id)arg2 ;


@end


#endif