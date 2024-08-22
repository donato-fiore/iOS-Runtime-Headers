// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSQLITEJOINPREDICATE_H
#define HDSQLITEJOINPREDICATE_H

@class NSSet;
@protocol NSCopying;


#import "HDSQLiteTruePredicate.h"

@interface HDSQLiteJoinPredicate : HDSQLiteTruePredicate <NSCopying>



@property (readonly, copy, nonatomic) NSSet *joinClauses; // ivar: _joinClauses


+(id)predicateWithJoinClauses:(id)arg0 ;
-(id)SQLJoinClausesForEntityClass:(Class)arg0 ;


@end


#endif