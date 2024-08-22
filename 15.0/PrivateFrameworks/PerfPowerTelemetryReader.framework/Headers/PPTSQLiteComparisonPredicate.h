// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPTSQLITECOMPARISONPREDICATE_H
#define PPTSQLITECOMPARISONPREDICATE_H

@protocol NSCopying;


#import "PPTSQLitePropertyPredicate.h"

@interface PPTSQLiteComparisonPredicate : PPTSQLitePropertyPredicate <NSCopying>



@property (readonly, nonatomic) NSInteger comparisonType; // ivar: _comparisonType
@property (readonly, nonatomic) id *value; // ivar: _value


+(id)predicateWithProperty:(id)arg0 beginsWithString:(id)arg1 ;
+(id)predicateWithProperty:(id)arg0 containsString:(id)arg1 ;
+(id)predicateWithProperty:(id)arg0 endsWithString:(id)arg1 ;
+(id)predicateWithProperty:(id)arg0 equalToValue:(id)arg1 ;
+(id)predicateWithProperty:(id)arg0 greaterThanOrEqualToValue:(id)arg1 ;
+(id)predicateWithProperty:(id)arg0 greaterThanValue:(id)arg1 ;
+(id)predicateWithProperty:(id)arg0 lessThanOrEqualToValue:(id)arg1 ;
+(id)predicateWithProperty:(id)arg0 lessThanValue:(id)arg1 ;
+(id)predicateWithProperty:(id)arg0 likePattern:(id)arg1 ;
+(id)predicateWithProperty:(id)arg0 likeValue:(id)arg1 ;
+(id)predicateWithProperty:(id)arg0 likeValue:(id)arg1 escapeCharacter:(id)arg2 ;
+(id)predicateWithProperty:(id)arg0 notEqualToValue:(id)arg1 ;
+(id)predicateWithProperty:(id)arg0 value:(id)arg1 comparisonType:(NSInteger)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithProperty:(id)arg0 value:(id)arg1 comparisonType:(NSInteger)arg2 ;
-(id)sqlForEntity:(id)arg0 ;
-(void)bindToStatement:(struct sqlite3_stmt *)arg0 bindingIndex:(*int)arg1 ;


@end


#endif