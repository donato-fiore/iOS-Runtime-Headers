// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ABGROUPMEMBERSHIPPREDICATE_H
#define ABGROUPMEMBERSHIPPREDICATE_H

@class NSString;


#import "ABPredicate.h"

@interface ABGroupMembershipPredicate : ABPredicate {
    *void _group;
    *void _store;
}


@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (nonatomic) *void group;
@property (nonatomic) *void store;


-(BOOL)isValid;
-(id)description;
-(id)queryWhereStringForPredicateIdentifier:(int)arg0 ;
-(void)ab_bindWhereClauseComponentOfStatement:(struct CPSqliteStatement *)arg0 withBindingOffset:(*int)arg1 predicateIdentifier:(int)arg2 ;
-(void)dealloc;


@end


#endif