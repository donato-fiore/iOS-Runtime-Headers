// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSQLITECOMPARISONPREDICATE_H
#define HDSQLITECOMPARISONPREDICATE_H

@protocol NSCopying;


#import "HDSQLitePropertyPredicate.h"

@interface HDSQLiteComparisonPredicate : HDSQLitePropertyPredicate <NSCopying>

 {
    BOOL _influenceIndexUsage;
}


@property (readonly, nonatomic) NSInteger comparisonType; // ivar: _comparisonType
@property (readonly, nonatomic) id *value; // ivar: _value


+(id)predicateWithCoalescedProperties:(id)arg0 value:(id)arg1 comparisonType:(NSInteger)arg2 ;
+(id)predicateWithProperty:(id)arg0 beginsWithString:(id)arg1 ;
+(id)predicateWithProperty:(id)arg0 comparisonType:(NSInteger)arg1 otherProperty:(id)arg2 ;
+(id)predicateWithProperty:(id)arg0 comparisonType:(NSInteger)arg1 subqueryDescriptor:(id)arg2 subqueryProperties:(id)arg3 ;
+(id)predicateWithProperty:(id)arg0 containsString:(id)arg1 ;
+(id)predicateWithProperty:(id)arg0 endsWithString:(id)arg1 ;
+(id)predicateWithProperty:(id)arg0 equalToValue:(id)arg1 ;
+(id)predicateWithProperty:(id)arg0 greaterThanOrEqualToValue:(id)arg1 ;
+(id)predicateWithProperty:(id)arg0 greaterThanValue:(id)arg1 ;
+(id)predicateWithProperty:(id)arg0 ifNullValue:(id)arg1 value:(id)arg2 comparisonType:(NSInteger)arg3 ;
+(id)predicateWithProperty:(id)arg0 lessThanOrEqualToValue:(id)arg1 ;
+(id)predicateWithProperty:(id)arg0 lessThanValue:(id)arg1 ;
+(id)predicateWithProperty:(id)arg0 likePattern:(id)arg1 ;
+(id)predicateWithProperty:(id)arg0 likeValue:(id)arg1 ;
+(id)predicateWithProperty:(id)arg0 likeValue:(id)arg1 escapeCharacter:(id)arg2 ;
+(id)predicateWithProperty:(id)arg0 notEqualToValue:(id)arg1 ;
+(id)predicateWithProperty:(id)arg0 value:(id)arg1 comparisonType:(NSInteger)arg2 ;
+(id)predicateWithProperty:(id)arg0 value:(id)arg1 comparisonType:(NSInteger)arg2 influenceIndexUsage:(BOOL)arg3 ;
-(BOOL)isCompatibleWithPredicate:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)SQLForEntityClass:(Class)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithProperty:(id)arg0 value:(id)arg1 comparisonType:(NSInteger)arg2 ;
-(id)initWithProperty:(id)arg0 value:(id)arg1 comparisonType:(NSInteger)arg2 influenceIndexUsage:(BOOL)arg3 ;
-(void)bindToStatement:(struct sqlite3_stmt *)arg0 bindingIndex:(*int)arg1 ;


@end


#endif