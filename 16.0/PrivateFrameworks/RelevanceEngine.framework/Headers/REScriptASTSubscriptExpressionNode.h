// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RESCRIPTASTSUBSCRIPTEXPRESSIONNODE_H
#define RESCRIPTASTSUBSCRIPTEXPRESSIONNODE_H



#import "REScriptASTNode.h"

@interface REScriptASTSubscriptExpressionNode : REScriptASTNode

@property (readonly, nonatomic) REScriptASTNode *endIndex; // ivar: _endIndex
@property (readonly, nonatomic) REScriptASTNode *expression; // ivar: _expression
@property (readonly, nonatomic) REScriptASTNode *startIndex; // ivar: _startIndex


+(id)parseBuffer:(id)arg0 error:(*id)arg1 ;
-(id)dependencies;
-(id)initWithExpression:(id)arg0 startIndex:(id)arg1 endIndex:(id)arg2 ;


@end


#endif