// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ABANYVALUEPREDICATE_H
#define ABANYVALUEPREDICATE_H



#import "ABPredicate.h"

@interface ABAnyValuePredicate : ABPredicate

@property (nonatomic) int property; // ivar: _property


-(BOOL)isValid;
-(id)init;
-(id)queryGroupByProperties;
-(id)queryJoinsInCompound:(BOOL)arg0 predicateIdentifier:(int)arg1 ;
-(id)queryWhereStringForPredicateIdentifier:(int)arg0 ;
-(void)ab_bindWhereClauseComponentOfStatement:(struct CPSqliteStatement *)arg0 withBindingOffset:(*int)arg1 predicateIdentifier:(int)arg2 ;


@end


#endif