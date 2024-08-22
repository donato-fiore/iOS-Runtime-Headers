// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLCOMPOUNDPROPERTYVALIDATIONRULE_H
#define PLCOMPOUNDPROPERTYVALIDATIONRULE_H

@class NSArray;


#import "PLPropertyValidationRule.h"

@interface PLCompoundPropertyValidationRule : PLPropertyValidationRule

@property (nonatomic) NSInteger compoundType; // ivar: _compoundType
@property (retain, nonatomic) NSArray *rules; // ivar: _rules


+(id)andCompoundPropertyValidationRuleWithRules:(id)arg0 ;
+(id)orCompoundPropertyValidationRuleWithRules:(id)arg0 ;
-(id)currentValuesOfObject:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 rules:(id)arg1 ;
-(id)keyPaths;
-(id)predicate;


@end


#endif