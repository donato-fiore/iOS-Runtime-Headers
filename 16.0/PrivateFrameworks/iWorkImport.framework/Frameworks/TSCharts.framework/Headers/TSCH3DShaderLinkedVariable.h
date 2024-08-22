// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DSHADERLINKEDVARIABLE_H
#define TSCH3DSHADERLINKEDVARIABLE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "TSCH3DShaderVariable.h"

@interface TSCH3DShaderLinkedVariable : NSObject

@property (retain, nonatomic) NSString *name; // ivar: name
@property (nonatomic) TSCH3DShaderVariableScopeType scope; // ivar: scope
@property (retain, nonatomic) TSCH3DShaderVariable *variable; // ivar: variable


+(id)linkedVariable;
-(BOOL)isAttribute;
-(id)description;
-(id)inputVariableName;


@end


#endif