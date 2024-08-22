// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RESCRIPTASTMEMBEREXPRESSIONNODE_H
#define RESCRIPTASTMEMBEREXPRESSIONNODE_H



#import "REScriptASTNode.h"
#import "REScriptToken.h"

@interface REScriptASTMemberExpressionNode : REScriptASTNode

@property (readonly, nonatomic) REScriptASTNode *expression; // ivar: _expression
@property (readonly, nonatomic) REScriptToken *member; // ivar: _member


+(id)parseBuffer:(id)arg0 error:(*id)arg1 ;
-(id)dependencies;
-(id)initWithMember:(id)arg0 expression:(id)arg1 ;


@end


#endif