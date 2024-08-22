// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RECOMPARISONCONDITION_H
#define RECOMPARISONCONDITION_H



#import "RECondition.h"

@interface REComparisonCondition : RECondition



+(id)conditionForLeftFeature:(id)arg0 relation:(NSInteger)arg1 rightFeature:(id)arg2 ;
+(id)falseCondition;
+(id)trueCondition;
-(BOOL)_validForRanking;
-(id)_inflectionFeatureValuePairs;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif