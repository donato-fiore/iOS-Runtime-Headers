// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSSQLITECOMPARISONPREDICATE_H
#define SSSQLITECOMPARISONPREDICATE_H

@protocol NSCopying;


#import "SSSQLitePropertyPredicate.h"

@interface SSSQLiteComparisonPredicate : SSSQLitePropertyPredicate <NSCopying>



@property (readonly, nonatomic) NSInteger comparisonType; // ivar: _comparisonType
@property (readonly, nonatomic) id *value; // ivar: _value


+(id)predicateWithProperty:(id)arg0 equalToLongLong:(NSInteger)arg1 ;
+(id)predicateWithProperty:(id)arg0 equalToValue:(id)arg1 ;
+(id)predicateWithProperty:(id)arg0 value:(id)arg1 comparisonType:(NSInteger)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)SQLForEntityClass:(Class)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)bindToStatement:(struct sqlite3_stmt *)arg0 bindingIndex:(*int)arg1 ;
-(void)dealloc;


@end


#endif