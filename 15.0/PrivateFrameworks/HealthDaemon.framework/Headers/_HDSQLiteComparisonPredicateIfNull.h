// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HDSQLITECOMPARISONPREDICATEIFNULL_H
#define _HDSQLITECOMPARISONPREDICATEIFNULL_H

@protocol NSObject;


#import "HDSQLiteComparisonPredicate.h"

@interface _HDSQLiteComparisonPredicateIfNull : HDSQLiteComparisonPredicate

@property (readonly, copy, nonatomic) NSObject<NSObject> *ifPropertyIsNullValue; // ivar: _ifPropertyIsNullValue


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)SQLForEntityClass:(Class)arg0 ;
-(id)description;
-(id)initWithProperty:(id)arg0 ifPropertyIsNullValue:(id)arg1 value:(id)arg2 comparisonType:(NSInteger)arg3 ;
-(void)bindToStatement:(struct sqlite3_stmt *)arg0 bindingIndex:(*int)arg1 ;


@end


#endif