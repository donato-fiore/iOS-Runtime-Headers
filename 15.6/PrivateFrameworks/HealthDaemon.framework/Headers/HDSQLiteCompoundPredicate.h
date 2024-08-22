// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSQLITECOMPOUNDPREDICATE_H
#define HDSQLITECOMPOUNDPREDICATE_H

@class NSString, NSArray;
@protocol NSCopying;


#import "HDSQLitePredicate.h"

@interface HDSQLiteCompoundPredicate : HDSQLitePredicate <NSCopying>

 {
    BOOL _unary;
    BOOL _trueIfNoPredicates;
    NSString *_combinationOperation;
}


@property (readonly, nonatomic) NSArray *predicates; // ivar: _predicates


+(id)negatedPredicate:(id)arg0 ;
+(id)predicateMatchingAllPredicates:(id)arg0 ;
+(id)predicateMatchingAnyPredicates:(id)arg0 ;
+(id)predicateWithProperty:(id)arg0 equalToValues:(id)arg1 ;
+(id)predicateWithProperty:(id)arg0 notEqualToValues:(id)arg1 ;
+(id)predicateWithProperty:(id)arg0 values:(id)arg1 comparisonType:(NSInteger)arg2 ;
-(BOOL)isCompatibleWithPredicate:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)SQLForEntityClass:(Class)arg0 ;
-(id)SQLJoinClausesForEntityClass:(Class)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(void)bindToStatement:(struct sqlite3_stmt *)arg0 bindingIndex:(*int)arg1 ;


@end


#endif