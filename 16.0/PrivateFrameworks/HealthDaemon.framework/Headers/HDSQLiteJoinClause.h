// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSQLITEJOINCLAUSE_H
#define HDSQLITEJOINCLAUSE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface HDSQLiteJoinClause : NSObject {
    NSString *_joinAsName;
}


@property (readonly, copy, nonatomic) NSString *additionalPredicate; // ivar: _additionalPredicate
@property (readonly, copy, nonatomic) NSString *joinAsName;
@property (readonly, nonatomic) NSInteger joinType; // ivar: _joinType
@property (readonly, copy, nonatomic) NSString *localReferenceProperty; // ivar: _localReferenceProperty
@property (readonly, copy, nonatomic) NSString *localTable; // ivar: _localTable
@property (readonly, nonatomic) Class targetEntityClass; // ivar: _targetEntityClass
@property (readonly, copy, nonatomic) NSString *targetKeyProperty; // ivar: _targetKeyProperty


+(id)innerJoinClauseFromTable:(id)arg0 toTargetEntity:(Class)arg1 as:(id)arg2 localReference:(id)arg3 targetKey:(id)arg4 ;
+(id)leftJoinClauseFromTable:(id)arg0 toTargetEntity:(Class)arg1 as:(id)arg2 localReference:(id)arg3 targetKey:(id)arg4 ;
+(id)leftJoinClauseFromTable:(id)arg0 toTargetEntity:(Class)arg1 as:(id)arg2 localReference:(id)arg3 targetKey:(id)arg4 additionalPredicate:(id)arg5 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)SQLJoinClause;
-(id)copyWithJoinType:(NSInteger)arg0 ;
-(id)description;


@end


#endif