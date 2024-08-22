// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HDSQLITETWOPROPERTYCOMPARISONPREDICATE_H
#define _HDSQLITETWOPROPERTYCOMPARISONPREDICATE_H

@class NSString;


#import "HDSQLiteComparisonPredicate.h"

@interface _HDSQLiteTwoPropertyComparisonPredicate : HDSQLiteComparisonPredicate

@property (readonly, copy, nonatomic) NSString *otherProperty;


-(id)SQLForEntityClass:(Class)arg0 ;
-(id)description;
-(id)initWithProperty:(id)arg0 comparisonType:(NSInteger)arg1 otherProperty:(id)arg2 ;
-(void)bindToStatement:(struct sqlite3_stmt *)arg0 bindingIndex:(*int)arg1 ;


@end


#endif