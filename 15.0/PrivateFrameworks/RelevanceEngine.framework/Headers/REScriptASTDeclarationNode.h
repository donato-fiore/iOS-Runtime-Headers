// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RESCRIPTASTDECLARATIONNODE_H
#define RESCRIPTASTDECLARATIONNODE_H



#import "REScriptASTNode.h"
#import "REScriptToken.h"

@interface REScriptASTDeclarationNode : REScriptASTNode

@property (readonly, nonatomic) REScriptToken *name; // ivar: _name
@property (readonly, nonatomic) REScriptToken *type; // ivar: _type
@property (readonly, nonatomic) REScriptASTNode *value; // ivar: _value


+(id)parseBuffer:(id)arg0 error:(*id)arg1 ;
-(id)dependencies;
-(id)initWithName:(id)arg0 type:(id)arg1 expression:(id)arg2 ;


@end


#endif