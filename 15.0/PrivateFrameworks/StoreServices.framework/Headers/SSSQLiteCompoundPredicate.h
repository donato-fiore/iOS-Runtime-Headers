// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSSQLITECOMPOUNDPREDICATE_H
#define SSSQLITECOMPOUNDPREDICATE_H

@class NSString, NSArray;
@protocol NSCopying;


#import "SSSQLitePredicate.h"

@interface SSSQLiteCompoundPredicate : SSSQLitePredicate <NSCopying>

 {
    NSString *_combinationOperation;
}


@property (readonly, nonatomic) NSArray *predicates; // ivar: _predicates


+(id)predicateMatchingAllPredicates:(id)arg0 ;
+(id)predicateMatchingAnyPredicates:(id)arg0 ;
+(id)predicateWithProperty:(id)arg0 values:(id)arg1 comparisonType:(NSInteger)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)SQLForEntityClass:(Class)arg0 ;
-(id)SQLJoinClausesForEntityClass:(Class)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)bindToStatement:(struct sqlite3_stmt *)arg0 bindingIndex:(*int)arg1 ;
-(void)dealloc;


@end


#endif