// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RESCRIPTASTFUNCTIONCALLNODE_H
#define RESCRIPTASTFUNCTIONCALLNODE_H

@class NSArray;


#import "REScriptASTNode.h"
#import "REScriptToken.h"

@interface REScriptASTFunctionCallNode : REScriptASTNode

@property (readonly, nonatomic) NSArray *arguments; // ivar: _arguments
@property (readonly, nonatomic) REScriptToken *functionIdentifier; // ivar: _functionIdentifier


+(id)parseBuffer:(id)arg0 error:(*id)arg1 ;
-(id)dependencies;
-(id)initWithFunctionName:(id)arg0 arguments:(id)arg1 ;


@end


#endif