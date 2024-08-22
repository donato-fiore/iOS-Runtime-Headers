// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSQLITERAWPREDICATE_H
#define HDSQLITERAWPREDICATE_H

@class NSString, NSArray;
@protocol NSCopying;


#import "HDSQLitePredicate.h"

@interface HDSQLiteRawPredicate : HDSQLitePredicate <NSCopying>

 {
    NSString *_sql;
    NSArray *_properties;
    NSArray *_values;
}




+(id)predicateWithSQL:(id)arg0 overProperties:(id)arg1 values:(id)arg2 ;
-(BOOL)isCompatibleWithPredicate:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)SQLForEntityClass:(Class)arg0 ;
-(id)SQLJoinClausesForEntityClass:(Class)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(void)bindToStatement:(struct sqlite3_stmt *)arg0 bindingIndex:(*int)arg1 ;


@end


#endif