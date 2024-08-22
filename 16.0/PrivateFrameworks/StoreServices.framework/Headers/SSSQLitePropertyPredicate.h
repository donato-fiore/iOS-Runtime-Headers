// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSSQLITEPROPERTYPREDICATE_H
#define SSSQLITEPROPERTYPREDICATE_H

@class NSString;
@protocol NSCopying;


#import "SSSQLitePredicate.h"

@interface SSSQLitePropertyPredicate : SSSQLitePredicate <NSCopying>



@property (readonly, nonatomic) NSString *property; // ivar: _property


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)SQLJoinClausesForEntityClass:(Class)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)dealloc;


@end


#endif