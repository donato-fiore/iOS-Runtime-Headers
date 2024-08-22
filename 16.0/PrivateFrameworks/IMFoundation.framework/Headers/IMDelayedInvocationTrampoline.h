// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMDELAYEDINVOCATIONTRAMPOLINE_H
#define IMDELAYEDINVOCATIONTRAMPOLINE_H

@class NSArray;


#import "IMInvocationTrampoline.h"

@interface IMDelayedInvocationTrampoline : IMInvocationTrampoline {
    NSArray *_modes;
    CGFloat _delay;
}




-(id)initWithTarget:(id)arg0 delay:(CGFloat)arg1 modes:(id)arg2 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif