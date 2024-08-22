// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RESCRIPTASTIDENTIFIERNODE_H
#define RESCRIPTASTIDENTIFIERNODE_H

@class NSString;


#import "REScriptASTNode.h"

@interface REScriptASTIdentifierNode : REScriptASTNode

@property (readonly, nonatomic) NSString *name;


+(id)parseBuffer:(id)arg0 error:(*id)arg1 ;
-(id)dependencies;


@end


#endif