// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSQLITEPROPERTYPREDICATE_H
#define HDSQLITEPROPERTYPREDICATE_H

@class NSString;
@protocol NSCopying;


#import "HDSQLitePredicate.h"

@interface HDSQLitePropertyPredicate : HDSQLitePredicate <NSCopying>



@property (readonly, nonatomic) NSString *property; // ivar: _property


-(BOOL)isCompatibleWithPredicate:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)SQLJoinClausesForEntityClass:(Class)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif