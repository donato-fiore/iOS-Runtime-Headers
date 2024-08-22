// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TMLMETHODCALL_H
#define TMLMETHODCALL_H

@class NSInvocation, NSArray, NSString;

#import <Foundation/Foundation.h>

#import "TMLMethodDescriptor.h"

@interface TMLMethodCall : NSObject {
    TMLMethodDescriptor *_methodDescriptor;
    SEL _selector;
    id *_block;
    NSInvocation *_invocation;
    NSArray *_argTypes;
}


@property (readonly, nonatomic) BOOL classMethod; // ivar: _classSelector
@property (readonly, nonatomic) NSString *methodName;


-(id)_callWithArguments:(id)arg0 ;
-(id)callWithArguments:(id)arg0 ;
-(id)initWithMethodDescriptor:(id)arg0 forClass:(Class)arg1 ;


@end


#endif