// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPTSQLITECONTAINSPREDICATE_H
#define PPTSQLITECONTAINSPREDICATE_H

@class NSArray;
@protocol NSCopying;


#import "PPTSQLitePropertyPredicate.h"

@interface PPTSQLiteContainsPredicate : PPTSQLitePropertyPredicate <NSCopying>



@property (readonly, nonatomic) BOOL isNegative; // ivar: _isNegative
@property (readonly, copy, nonatomic) NSArray *values; // ivar: _values


+(id)_arrayFromValues:(id)arg0 ;
+(id)_containsPredicateWithProperty:(id)arg0 values:(id)arg1 isNegative:(BOOL)arg2 ;
+(id)containsPredicateWithProperty:(id)arg0 values:(id)arg1 ;
+(id)doesNotContainPredicateWithProperty:(id)arg0 values:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithProperty:(id)arg0 values:(id)arg1 isNegative:(BOOL)arg2 ;
-(id)sqlForEntity:(id)arg0 ;
-(void)bindToStatement:(struct sqlite3_stmt *)arg0 bindingIndex:(*int)arg1 ;


@end


#endif