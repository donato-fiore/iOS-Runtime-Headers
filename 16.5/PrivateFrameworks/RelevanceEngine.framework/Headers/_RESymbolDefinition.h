// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _RESYMBOLDEFINITION_H
#define _RESYMBOLDEFINITION_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>

#import "REScriptToken.h"
#import "REScriptASTNode.h"

@interface _RESymbolDefinition : NSObject

@property (readonly, nonatomic) NSString *name;
@property (retain, nonatomic) id *objectValue; // ivar: _objectValue
@property (readonly, nonatomic) NSDictionary *options; // ivar: _options
@property (readonly, nonatomic) REScriptToken *token; // ivar: _token
@property (readonly, nonatomic) NSUInteger type; // ivar: _type
@property (retain, nonatomic) REScriptASTNode *value; // ivar: _value


-(id)initWithToken:(id)arg0 type:(NSUInteger)arg1 options:(id)arg2 ;


@end


#endif