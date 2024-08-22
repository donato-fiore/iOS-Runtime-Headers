// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSQLITECONTAINSPREDICATE_H
#define HDSQLITECONTAINSPREDICATE_H

@class NSArray;
@protocol NSCopying;


#import "HDSQLitePropertyPredicate.h"

@interface HDSQLiteContainsPredicate : HDSQLitePropertyPredicate <NSCopying>



@property (readonly, nonatomic) BOOL contains; // ivar: _contains
@property (readonly, copy, nonatomic) NSArray *values; // ivar: _values


+(id)containsPredicateWithProperty:(id)arg0 values:(id)arg1 ;
+(id)doesNotContainPredicateWithProperty:(id)arg0 values:(id)arg1 ;
-(BOOL)isCompatibleWithPredicate:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)SQLForEntityClass:(Class)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithProperty:(id)arg0 values:(id)arg1 contains:(BOOL)arg2 ;
-(void)bindToStatement:(struct sqlite3_stmt *)arg0 bindingIndex:(*int)arg1 ;


@end


#endif