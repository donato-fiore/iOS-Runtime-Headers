// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLLIBRARYSCOPERULE_H
#define PLLIBRARYSCOPERULE_H

@class NSMutableArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PLLibraryScopeConditionDateRange.h"
#import "PLLibraryScopeConditionPerson.h"

@interface PLLibraryScopeRule : NSObject <NSCopying>



@property (readonly, nonatomic) PLLibraryScopeConditionDateRange *dateRangeCondition; // ivar: _dateRangeCondition
@property (readonly, nonatomic) PLLibraryScopeConditionPerson *personCondition; // ivar: _personCondition
@property (readonly, nonatomic) NSMutableArray *unknownConditions; // ivar: _unknownConditions


+(id)_dictionaryOfArrayOfSingleQueriesToCriteriaFromRuleQuery:(id)arg0 parentQuery:(id)arg1 ;
+(id)_knownConditionClasses;
+(id)_rulesFromQuery:(id)arg0 ;
+(id)dataForLibraryScopeRules:(id)arg0 ;
+(id)libraryScopeRulesForLibraryScopeRulesData:(id)arg0 ;
+(id)queryForLibraryScopeRules:(id)arg0 ;
-(id)allConditions;
-(id)backingPredicateInPhotoLibrary:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithQuery:(id)arg0 ;
-(id)query;
-(void)addCondition:(id)arg0 ;
-(void)removeConditionOfType:(Class)arg0 ;


@end


#endif