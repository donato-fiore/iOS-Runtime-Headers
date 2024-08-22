// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSQLITENULLPREDICATE_H
#define HDSQLITENULLPREDICATE_H

@protocol NSCopying;


#import "HDSQLitePropertyPredicate.h"

@interface HDSQLiteNullPredicate : HDSQLitePropertyPredicate <NSCopying>



@property (readonly, nonatomic) BOOL matchesNull; // ivar: _matchesNull


+(id)isNotNullPredicateWithProperty:(id)arg0 ;
+(id)isNullPredicateWithProperty:(id)arg0 ;
-(BOOL)isCompatibleWithPredicate:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)SQLForEntityClass:(Class)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif