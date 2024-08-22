// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EFSQLSELECTSTATEMENT_H
#define EFSQLSELECTSTATEMENT_H

@class NSString, NSArray, NSMutableArray;
@protocol EFSQLValueCollectionExpressable, EFSQLSelectComponent, EFSQLValueExpressable;

#import <Foundation/Foundation.h>


@interface EFSQLSelectStatement : NSObject <EFSQLValueCollectionExpressable, EFSQLSelectComponent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL distinct; // ivar: _distinct
@property (readonly, copy, nonatomic) NSString *ef_SQLExpression;
@property (retain, nonatomic) NSArray *groupExpressions; // ivar: _groupExpressions
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableArray *joinExpressions; // ivar: _joinExpressions
@property (nonatomic) NSUInteger limit; // ivar: _limit
@property (readonly, nonatomic) NSMutableArray *orderExpressions; // ivar: _orderExpressions
@property (readonly, copy, nonatomic) NSString *queryString;
@property (readonly, nonatomic) NSMutableArray *results; // ivar: _results
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *tableName; // ivar: _tableName
@property (retain, nonatomic) NSObject<EFSQLValueExpressable> *where; // ivar: _where


-(id)ef_SQLIsolatedExpression;
-(id)initWithResult:(id)arg0 ;
-(id)initWithResult:(id)arg0 table:(id)arg1 ;
-(id)initWithResultColumn:(id)arg0 ;
-(id)initWithResultColumn:(id)arg0 table:(id)arg1 ;
-(id)join:(id)arg0 alias:(id)arg1 on:(id)arg2 ;
-(id)join:(id)arg0 alias:(id)arg1 sourceColumn:(id)arg2 targetColumn:(id)arg3 ;
-(id)join:(id)arg0 on:(id)arg1 ;
-(id)join:(id)arg0 sourceColumn:(id)arg1 targetColumn:(id)arg2 ;
-(id)leftOuterJoin:(id)arg0 alias:(id)arg1 on:(id)arg2 ;
-(id)leftOuterJoin:(id)arg0 alias:(id)arg1 sourceColumn:(id)arg2 targetColumn:(id)arg3 ;
-(id)leftOuterJoin:(id)arg0 on:(id)arg1 ;
-(id)leftOuterJoin:(id)arg0 sourceColumn:(id)arg1 targetColumn:(id)arg2 ;
-(void)addResult:(id)arg0 alias:(id)arg1 ;
-(void)addResultColumn:(id)arg0 ;
-(void)addResultColumn:(id)arg0 fromTable:(id)arg1 ;
-(void)ef_renderSQLExpressionInto:(id)arg0 ;
-(void)ef_renderSQLExpressionInto:(id)arg0 conjoiner:(id)arg1 ;
-(void)groupBy:(id)arg0 ;
-(void)groupByColumn:(id)arg0 ;
-(void)groupByColumn:(id)arg0 fromTable:(id)arg1 ;
-(void)orderBy:(id)arg0 ascending:(BOOL)arg1 ;
-(void)orderByColumn:(id)arg0 ascending:(BOOL)arg1 ;
-(void)orderByColumn:(id)arg0 fromTable:(id)arg1 ascending:(BOOL)arg2 ;


@end


#endif