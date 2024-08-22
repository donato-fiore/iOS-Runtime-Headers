// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKEYBOARDINPUTMANAGERCLIENTREQUEST_H
#define UIKEYBOARDINPUTMANAGERCLIENTREQUEST_H

@class NSInvocation;

#import <Foundation/Foundation.h>


@interface UIKeyboardInputManagerClientRequest : NSObject {
    NSInvocation *_invocation;
}


@property (nonatomic) NSUInteger errorCount; // ivar: _errorCount
@property (readonly, nonatomic) NSInvocation *invocation;


+(id)untargetedInvocationWithInvocation:(id)arg0 withCompletion:(BOOL)arg1 ;
-(id)initWithInvocation:(id)arg0 ;
-(void)dealloc;


@end


#endif