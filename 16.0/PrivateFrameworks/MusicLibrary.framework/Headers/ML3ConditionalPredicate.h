// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ML3CONDITIONALPREDICATE_H
#define ML3CONDITIONALPREDICATE_H



#import "ML3Predicate.h"

@interface ML3ConditionalPredicate : ML3Predicate

@property (readonly, copy, nonatomic) ML3Predicate *conditionPredicate; // ivar: _conditionPredicate
@property (readonly, copy, nonatomic) ML3Predicate *elsePredicate; // ivar: _elsePredicate
@property (readonly, copy, nonatomic) ML3Predicate *thenPredicate; // ivar: _thenPredicate


+(BOOL)supportsSecureCoding;
+(id)predicateWithConditionPredicate:(id)arg0 thenPredicate:(id)arg1 elsePredicate:(id)arg2 ;
-(BOOL)isDynamicForEntityClass:(Class)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)SQLJoinClausesForClass:(Class)arg0 ;
-(id)databaseStatementParameters;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConditionPredicate:(id)arg0 thenPredicate:(id)arg1 elsePredicate:(id)arg2 ;
-(id)spotlightPredicate;
-(void)appendSQLToMutableString:(id)arg0 entityClass:(Class)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif