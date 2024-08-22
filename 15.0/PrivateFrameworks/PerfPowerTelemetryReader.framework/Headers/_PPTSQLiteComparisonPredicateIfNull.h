// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PPTSQLITECOMPARISONPREDICATEIFNULL_H
#define _PPTSQLITECOMPARISONPREDICATEIFNULL_H



#import "PPTSQLiteComparisonPredicate.h"

@interface _PPTSQLiteComparisonPredicateIfNull : PPTSQLiteComparisonPredicate

@property (readonly, copy, nonatomic) id *ifPropertyIsNullValue; // ivar: _ifPropertyIsNullValue


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithProperty:(id)arg0 ifPropertyIsNullValue:(id)arg1 value:(id)arg2 comparisonType:(NSInteger)arg3 ;
-(id)sqlForEntity:(id)arg0 ;


@end


#endif