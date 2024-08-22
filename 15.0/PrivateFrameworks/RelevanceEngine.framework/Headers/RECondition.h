// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RECONDITION_H
#define RECONDITION_H

@protocol REAutomaticExportedInterface, NSCopying;

#import <Foundation/Foundation.h>


@interface RECondition : NSObject <REAutomaticExportedInterface, NSCopying>





+(id)andConditions:(id)arg0 ;
+(id)conditionForFeature:(id)arg0 hasBoolValue:(BOOL)arg1 ;
+(id)conditionForFeature:(id)arg0 hasIntegerValue:(NSInteger)arg1 ;
+(id)conditionForFeature:(id)arg0 hasValue:(id)arg1 ;
+(id)conditionForFeature:(id)arg0 relation:(NSInteger)arg1 feature:(id)arg2 ;
+(id)conditionForFeature:(id)arg0 relation:(NSInteger)arg1 floatValue:(float)arg2 ;
+(id)conditionForFeature:(id)arg0 relation:(NSInteger)arg1 integerValue:(NSInteger)arg2 ;
+(id)conditionForProbabilityForInteraction:(id)arg0 relation:(NSInteger)arg1 feature:(id)arg2 ;
+(id)conditionForProbabilityForInteraction:(id)arg0 relation:(NSInteger)arg1 floatValue:(float)arg2 ;
+(id)conditionForProbabilityWithRelation:(NSInteger)arg0 floatValue:(float)arg1 ;
+(id)conditionHasValueForFeature:(id)arg0 ;
+(id)falseCondition;
+(id)notCondition:(id)arg0 ;
+(id)orConditions:(id)arg0 ;
+(id)trueCondition;
-(BOOL)_acceptsFeatureMap:(id)arg0 predictionSet:(id)arg1 explanation:(*id)arg2 ;
-(BOOL)_acceptsLeftFeatureMap:(id)arg0 rightFeatureMap:(id)arg1 ;
-(BOOL)_needsProbability;
-(BOOL)_requiresTwoFeatures;
-(BOOL)_validForRanking;
-(id)_dependentFeatures;
-(id)_inflectionFeatureValuePairs;
-(id)_notCondition;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif