// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ML3COMPOUNDPREDICATE_H
#define ML3COMPOUNDPREDICATE_H

@class NSString, NSArray;


#import "ML3Predicate.h"

@interface ML3CompoundPredicate : ML3Predicate

@property (readonly, copy, nonatomic) NSString *compoundOperatorJoiner;
@property (retain, nonatomic) NSArray *predicates; // ivar: _predicates


+(BOOL)supportsSecureCoding;
+(id)predicateMatchingPredicates:(id)arg0 ;
-(BOOL)containsPropertyPredicate:(id)arg0 matchingValue:(id)arg1 usingComparison:(int)arg2 ;
-(BOOL)isDynamicForEntityClass:(Class)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)SQLJoinClausesForClass:(Class)arg0 ;
-(id)databaseStatementParameters;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPredicates:(id)arg0 ;
-(id)spotlightPredicate;
-(void)appendSQLToMutableString:(id)arg0 entityClass:(Class)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif