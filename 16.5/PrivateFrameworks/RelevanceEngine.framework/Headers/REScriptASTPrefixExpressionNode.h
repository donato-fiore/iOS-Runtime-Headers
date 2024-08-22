// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RESCRIPTASTPREFIXEXPRESSIONNODE_H
#define RESCRIPTASTPREFIXEXPRESSIONNODE_H



#import "REScriptASTNode.h"
#import "REScriptToken.h"

@interface REScriptASTPrefixExpressionNode : REScriptASTNode

@property (readonly, nonatomic) REScriptASTNode *node; // ivar: _node
@property (readonly, nonatomic) REScriptToken *prefixOperator; // ivar: _prefixOperator


+(id)parseBuffer:(id)arg0 error:(*id)arg1 ;
-(id)dependencies;
-(id)initWithPrefixOperatorToken:(id)arg0 primaryExpression:(id)arg1 ;


@end


#endif