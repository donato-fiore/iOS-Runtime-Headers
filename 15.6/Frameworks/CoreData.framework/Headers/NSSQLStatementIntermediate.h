// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSSQLSTATEMENTINTERMEDIATE_H
#define NSSQLSTATEMENTINTERMEDIATE_H

@class NSString;


#import "NSSQLIntermediate.h"
#import "NSSQLEntity.h"
#import "NSSQLWhereIntermediate.h"
#import "NSSQLLimitIntermediate.h"
#import "NSSQLOrderIntermediate.h"

@interface NSSQLStatementIntermediate : NSSQLIntermediate {
    NSSQLEntity *_governingEntity;
    NSString *_governingAlias;
    NSString *_correlationToken;
    NSSQLWhereIntermediate *_whereClause;
    NSSQLLimitIntermediate *_limitClause;
    NSSQLOrderIntermediate *_orderIntermediate;
}




-(BOOL)keypathExpressionIsSafeLHSForIn:(id)arg0 ;
-(id)governingAlias;
-(id)governingAliasForKeypathExpression:(id)arg0 ;
-(id)governingEntity;
-(id)governingEntityForKeypathExpression:(id)arg0 ;
-(id)initWithEntity:(id)arg0 alias:(id)arg1 inScope:(id)arg2 ;
-(void)dealloc;
-(void)setGoverningAlias:(id)arg0 ;
-(void)setGoverningEntity:(id)arg0 ;


@end


#endif