// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSSQLITEPROPERTYPREDICATE_H
#define AMSSQLITEPROPERTYPREDICATE_H

@class NSString;
@protocol NSCopying;


#import "AMSSQLitePredicate.h"

@interface AMSSQLitePropertyPredicate : AMSSQLitePredicate <NSCopying>



@property (readonly, nonatomic) NSString *property; // ivar: _property


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)SQLJoinClausesForEntityClass:(Class)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif