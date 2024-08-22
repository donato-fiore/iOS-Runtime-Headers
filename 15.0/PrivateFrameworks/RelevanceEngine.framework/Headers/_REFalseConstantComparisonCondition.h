// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _REFALSECONSTANTCOMPARISONCONDITION_H
#define _REFALSECONSTANTCOMPARISONCONDITION_H



#import "REComparisonCondition.h"

@interface _REFalseConstantComparisonCondition : REComparisonCondition



+(id)sharedInstance;
-(BOOL)_acceptsLeftFeatureMap:(id)arg0 rightFeatureMap:(id)arg1 ;
-(BOOL)_validForRanking;
-(id)_inflectionFeatureValuePairs;
-(id)_notCondition;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif