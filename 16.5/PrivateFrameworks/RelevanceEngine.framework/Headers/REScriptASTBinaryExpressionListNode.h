// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RESCRIPTASTBINARYEXPRESSIONLISTNODE_H
#define RESCRIPTASTBINARYEXPRESSIONLISTNODE_H

@class NSArray;


#import "REScriptASTNode.h"

@interface REScriptASTBinaryExpressionListNode : REScriptASTNode

@property (readonly, nonatomic) NSArray *expressions; // ivar: _expressions


+(id)parseBuffer:(id)arg0 error:(*id)arg1 ;
-(id)dependencies;
-(id)initWithExpressions:(id)arg0 ;


@end


#endif