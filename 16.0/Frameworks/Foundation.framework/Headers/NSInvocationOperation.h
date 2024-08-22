// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSINVOCATIONOPERATION_H
#define NSINVOCATIONOPERATION_H

@class NSInvocation, NSException;


#import "NSOperation.h"

@interface NSInvocationOperation : NSOperation {
    NSInvocation *_inv;
    NSException *_exception;
}


@property (readonly, retain) NSInvocation *invocation;
@property (readonly, retain) id *result;


-(id)init;
-(id)initWithInvocation:(id)arg0 ;
-(id)initWithTarget:(id)arg0 selector:(SEL)arg1 object:(id)arg2 ;
-(void)dealloc;
-(void)main;


@end


#endif