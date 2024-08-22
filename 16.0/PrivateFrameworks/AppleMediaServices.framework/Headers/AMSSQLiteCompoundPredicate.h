// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSSQLITECOMPOUNDPREDICATE_H
#define AMSSQLITECOMPOUNDPREDICATE_H

@class NSString, NSArray;
@protocol NSCopying;


#import "AMSSQLitePredicate.h"

@interface AMSSQLiteCompoundPredicate : AMSSQLitePredicate <NSCopying>

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
-(void)applyBinding:(id)arg0 atIndex:(*int)arg1 ;


@end


#endif