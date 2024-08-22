// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RESCRIPTASTEXPRESSIONNODE_H
#define RESCRIPTASTEXPRESSIONNODE_H



#import "REScriptASTNode.h"

@interface REScriptASTExpressionNode : REScriptASTNode

@property (readonly, nonatomic) REScriptASTNode *binaryExpressions; // ivar: _binaryExpressions
@property (readonly, nonatomic) REScriptASTNode *prefixExpression; // ivar: _prefixExpression


+(id)parseBuffer:(id)arg0 error:(*id)arg1 ;
-(id)dependencies;
-(id)initWithPrefixExpression:(id)arg0 binaryExpression:(id)arg1 ;


@end


#endif