// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RESCRIPTASTFEATURENODE_H
#define RESCRIPTASTFEATURENODE_H

@class NSDictionary;


#import "REScriptASTNode.h"
#import "REScriptToken.h"

@interface REScriptASTFeatureNode : REScriptASTNode

@property (readonly, nonatomic) REScriptToken *name; // ivar: _name
@property (readonly, nonatomic) NSDictionary *options; // ivar: _options
@property (readonly, nonatomic) REScriptASTNode *value; // ivar: _value


+(id)parseBuffer:(id)arg0 error:(*id)arg1 ;
-(id)dependencies;
-(id)initWithName:(id)arg0 options:(id)arg1 expression:(id)arg2 ;


@end


#endif