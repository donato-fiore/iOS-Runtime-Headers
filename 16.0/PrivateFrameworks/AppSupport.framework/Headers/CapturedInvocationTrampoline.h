// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAPTUREDINVOCATIONTRAMPOLINE_H
#define CAPTUREDINVOCATIONTRAMPOLINE_H



#import "InvocationTrampoline.h"

@interface CapturedInvocationTrampoline : InvocationTrampoline {
    *id _outInvocation;
}




-(id)initWithTarget:(id)arg0 outInvocation:(*id)arg1 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif