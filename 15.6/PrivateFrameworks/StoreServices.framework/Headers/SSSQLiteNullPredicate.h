// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSSQLITENULLPREDICATE_H
#define SSSQLITENULLPREDICATE_H

@protocol NSCopying;


#import "SSSQLitePropertyPredicate.h"

@interface SSSQLiteNullPredicate : SSSQLitePropertyPredicate <NSCopying>



@property (readonly, nonatomic) BOOL matchesNull; // ivar: _matchesNull


+(id)isNotNullPredicateWithProperty:(id)arg0 ;
+(id)isNullPredicateWithProperty:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)SQLForEntityClass:(Class)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif