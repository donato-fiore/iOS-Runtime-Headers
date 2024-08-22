// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EFSQLJOINEXPRESSION_H
#define _EFSQLJOINEXPRESSION_H

@class NSString;
@protocol EFSQLExpressable, EFSQLSelectComponent;

#import <Foundation/Foundation.h>

#import "EFSQLSelectStatement.h"

@interface _EFSQLJoinExpression : NSObject <EFSQLExpressable, EFSQLSelectComponent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *ef_SQLExpression;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isLeftOuter; // ivar: _isLeftOuter
@property (readonly, nonatomic) NSObject<EFSQLExpressable> *joinConstraint; // ivar: _joinConstraint
@property (readonly, weak, nonatomic) EFSQLSelectStatement *select; // ivar: _select
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *tableAlias; // ivar: _tableAlias
@property (readonly, copy, nonatomic) NSString *tableName; // ivar: _tableName


-(id)initWithSelect:(id)arg0 tableName:(id)arg1 tableAlias:(id)arg2 joinConstraint:(id)arg3 isLeftOuter:(BOOL)arg4 ;
-(id)join:(id)arg0 alias:(id)arg1 on:(id)arg2 ;
-(id)join:(id)arg0 alias:(id)arg1 sourceColumn:(id)arg2 targetColumn:(id)arg3 ;
-(id)join:(id)arg0 on:(id)arg1 ;
-(id)join:(id)arg0 sourceColumn:(id)arg1 targetColumn:(id)arg2 ;
-(id)leftOuterJoin:(id)arg0 alias:(id)arg1 on:(id)arg2 ;
-(id)leftOuterJoin:(id)arg0 alias:(id)arg1 sourceColumn:(id)arg2 targetColumn:(id)arg3 ;
-(id)leftOuterJoin:(id)arg0 on:(id)arg1 ;
-(id)leftOuterJoin:(id)arg0 sourceColumn:(id)arg1 targetColumn:(id)arg2 ;
-(void)addResultColumn:(id)arg0 ;
-(void)addResultColumn:(id)arg0 alias:(id)arg1 ;
-(void)ef_renderSQLExpressionInto:(id)arg0 ;
-(void)groupByColumn:(id)arg0 ;
-(void)orderByColumn:(id)arg0 ascending:(BOOL)arg1 ;


@end


#endif