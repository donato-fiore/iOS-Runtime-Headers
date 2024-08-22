// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RESCRIPTASTRULENODE_H
#define RESCRIPTASTRULENODE_H

@class NSDictionary;


#import "REScriptASTNode.h"
#import "REScriptToken.h"

@interface REScriptASTRuleNode : REScriptASTNode

@property (readonly, nonatomic) REScriptASTNode *expression; // ivar: _expression
@property (readonly, nonatomic) REScriptToken *name; // ivar: _name
@property (readonly, nonatomic) NSDictionary *options; // ivar: _options
@property (readonly, nonatomic) REScriptToken *type; // ivar: _type


+(id)parseBuffer:(id)arg0 error:(*id)arg1 ;
-(id)dependencies;
-(id)initWithType:(id)arg0 options:(id)arg1 name:(id)arg2 expression:(id)arg3 ;


@end


#endif