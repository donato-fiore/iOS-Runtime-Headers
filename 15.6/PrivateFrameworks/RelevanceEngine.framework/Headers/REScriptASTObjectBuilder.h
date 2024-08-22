// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RESCRIPTASTOBJECTBUILDER_H
#define RESCRIPTASTOBJECTBUILDER_H


#import <Foundation/Foundation.h>

#import "REScriptSymbolTable.h"

@interface REScriptASTObjectBuilder : NSObject

@property (readonly, nonatomic) REScriptSymbolTable *table; // ivar: _table


-(id)_errorForUnsupportedNode:(id)arg0 ;
-(id)buildObjectWithBinaryExpressionListNode:(id)arg0 previousExpression:(id)arg1 error:(*id)arg2 ;
-(id)buildObjectWithBinaryExpressionNode:(id)arg0 previousExpression:(id)arg1 error:(*id)arg2 ;
-(id)buildObjectWithExpressionNode:(id)arg0 error:(*id)arg1 ;
-(id)buildObjectWithFunctionNode:(id)arg0 error:(*id)arg1 ;
-(id)buildObjectWithIdentifierNode:(id)arg0 error:(*id)arg1 ;
-(id)buildObjectWithLiteralNode:(id)arg0 error:(*id)arg1 ;
-(id)buildObjectWithMemberExpressionNode:(id)arg0 error:(*id)arg1 ;
-(id)buildObjectWithNode:(id)arg0 error:(*id)arg1 ;
-(id)buildObjectWithPrefixExpressionNode:(id)arg0 error:(*id)arg1 ;
-(id)buildObjectWithSubscriptExpressionNode:(id)arg0 error:(*id)arg1 ;
-(id)buildObjectWithTopLevelBinaryExpression:(id)arg0 error:(*id)arg1 ;
-(id)buildObjectWithTopLevelBinaryExpressionListNode:(id)arg0 error:(*id)arg1 ;
-(id)initWithTable:(id)arg0 ;
-(id)objectTypeErrorDescription;


@end


#endif