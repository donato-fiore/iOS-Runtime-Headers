// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPTSQLITENULLPREDICATE_H
#define PPTSQLITENULLPREDICATE_H

@protocol NSCopying;


#import "PPTSQLitePropertyPredicate.h"

@interface PPTSQLiteNullPredicate : PPTSQLitePropertyPredicate <NSCopying>



@property (readonly, nonatomic) BOOL matchesNull; // ivar: _matchesNull


+(id)isNotNullPredicateWithProperty:(id)arg0 ;
+(id)isNullPredicateWithProperty:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)sqlForEntity:(id)arg0 ;


@end


#endif