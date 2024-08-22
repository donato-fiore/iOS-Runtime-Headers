// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RESCRIPTASTBINARYEXPRESSIONNODE_H
#define RESCRIPTASTBINARYEXPRESSIONNODE_H



#import "REScriptASTNode.h"
#import "REScriptToken.h"

@interface REScriptASTBinaryExpressionNode : REScriptASTNode

@property (readonly, nonatomic) REScriptToken *binaryOperator; // ivar: _binaryOperator
@property (readonly, nonatomic) REScriptASTNode *expression; // ivar: _expression


+(id)parseBuffer:(id)arg0 error:(*id)arg1 ;
-(id)dependencies;
-(id)initWithOperator:(id)arg0 expression:(id)arg1 ;


@end


#endif