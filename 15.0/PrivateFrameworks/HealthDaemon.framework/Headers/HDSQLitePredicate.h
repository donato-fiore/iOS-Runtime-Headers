// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSQLITEPREDICATE_H
#define HDSQLITEPREDICATE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface HDSQLitePredicate : NSObject <NSCopying>





+(id)booleanPredicateWithValue:(BOOL)arg0 ;
+(id)compoundPredicateWithPredicate:(id)arg0 otherPredicate:(id)arg1 ;
+(id)disjunctionWithPredicate:(id)arg0 otherPredicate:(id)arg1 ;
+(id)falsePredicate;
+(id)truePredicate;
-(BOOL)isCompatibleWithPredicate:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)SQLForEntityClass:(Class)arg0 ;
-(id)SQLJoinClausesForEntityClass:(Class)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)bindToStatement:(struct sqlite3_stmt *)arg0 bindingIndex:(*int)arg1 ;


@end


#endif