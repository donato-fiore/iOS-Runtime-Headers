// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EFSQLCASEEXPRESSION_H
#define EFSQLCASEEXPRESSION_H

@class NSString, NSMapTable;
@protocol EFSQLValueExpressable;

#import <Foundation/Foundation.h>


@interface EFSQLCaseExpression : NSObject <EFSQLValueExpressable>



@property (readonly, nonatomic) NSObject<EFSQLValueExpressable> *baseExpression; // ivar: _baseExpression
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *ef_SQLExpression;
@property (retain, nonatomic) NSObject<EFSQLValueExpressable> *elseExpression; // ivar: _elseExpression
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMapTable *whenExpressions; // ivar: _whenExpressions


-(id)ef_SQLIsolatedExpression;
-(id)init;
-(id)initWithBaseExpression:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)ef_renderSQLExpressionInto:(id)arg0 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif