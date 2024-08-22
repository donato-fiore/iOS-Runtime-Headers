// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RESCRIPTASTNODE_H
#define RESCRIPTASTNODE_H

@class NSSet;

#import <Foundation/Foundation.h>

#import "REScriptToken.h"

@interface REScriptASTNode : NSObject

@property (readonly, nonatomic) NSSet *dependencies;
@property (readonly, nonatomic) REScriptToken *token; // ivar: _token


+(id)parseBuffer:(id)arg0 error:(*id)arg1 ;
-(id)initWithToken:(id)arg0 ;


@end


#endif