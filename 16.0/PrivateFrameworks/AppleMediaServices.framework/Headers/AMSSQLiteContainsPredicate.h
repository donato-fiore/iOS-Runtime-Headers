// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSSQLITECONTAINSPREDICATE_H
#define AMSSQLITECONTAINSPREDICATE_H

@class NSString, NSArray;
@protocol NSCopying;


#import "AMSSQLitePropertyPredicate.h"
#import "AMSSQLiteQuery.h"

@interface AMSSQLiteContainsPredicate : AMSSQLitePropertyPredicate <NSCopying>



@property (readonly, nonatomic, getter=isNegative) BOOL negative; // ivar: _negative
@property (readonly, nonatomic) AMSSQLiteQuery *query; // ivar: _query
@property (readonly, nonatomic) NSString *queryProperty; // ivar: _queryProperty
@property (readonly, nonatomic) NSArray *values; // ivar: _values


+(id)containsPredicateWithProperty:(id)arg0 query:(id)arg1 queryProperty:(id)arg2 ;
+(id)containsPredicateWithProperty:(id)arg0 values:(id)arg1 ;
+(id)doesNotContainPredicateWithProperty:(id)arg0 values:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)SQLForEntityClass:(Class)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)applyBinding:(id)arg0 atIndex:(*int)arg1 ;


@end


#endif