// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DELAYEDINVOCATIONTRAMPOLINE_H
#define DELAYEDINVOCATIONTRAMPOLINE_H



#import "InvocationTrampoline.h"

@interface DelayedInvocationTrampoline : InvocationTrampoline {
    CGFloat _delay;
}




-(id)initWithTarget:(id)arg0 delay:(CGFloat)arg1 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif