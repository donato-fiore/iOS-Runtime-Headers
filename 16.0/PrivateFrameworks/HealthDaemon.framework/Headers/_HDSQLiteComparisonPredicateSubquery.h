// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HDSQLITECOMPARISONPREDICATESUBQUERY_H
#define _HDSQLITECOMPARISONPREDICATESUBQUERY_H

@class NSArray;


#import "HDSQLiteComparisonPredicate.h"
#import "HDSQLiteQueryDescriptor.h"

@interface _HDSQLiteComparisonPredicateSubquery : HDSQLiteComparisonPredicate

@property (readonly, copy, nonatomic) HDSQLiteQueryDescriptor *subqueryDescriptor; // ivar: _subqueryDescriptor
@property (readonly, copy, nonatomic) NSArray *subqueryProperties; // ivar: _subqueryProperties


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)SQLForEntityClass:(Class)arg0 ;
-(id)description;
-(id)initWithProperty:(id)arg0 comparisonType:(NSInteger)arg1 subqueryDescriptor:(id)arg2 subqueryProperties:(id)arg3 ;
-(void)bindToStatement:(struct sqlite3_stmt *)arg0 bindingIndex:(*int)arg1 ;


@end


#endif