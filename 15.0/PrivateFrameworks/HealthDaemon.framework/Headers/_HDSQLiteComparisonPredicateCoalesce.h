// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HDSQLITECOMPARISONPREDICATECOALESCE_H
#define _HDSQLITECOMPARISONPREDICATECOALESCE_H

@class NSArray;


#import "HDSQLiteComparisonPredicate.h"

@interface _HDSQLiteComparisonPredicateCoalesce : HDSQLiteComparisonPredicate

@property (readonly, copy, nonatomic) NSArray *properties; // ivar: _properties


-(BOOL)isCompatibleWithPredicate:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)SQLForEntityClass:(Class)arg0 ;
-(id)SQLJoinClausesForEntityClass:(Class)arg0 ;
-(id)description;
-(id)initWithProperties:(id)arg0 value:(id)arg1 comparisonType:(NSInteger)arg2 ;


@end


#endif