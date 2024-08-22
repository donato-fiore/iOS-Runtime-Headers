// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIASYNCINVOCATION_H
#define _UIASYNCINVOCATION_H


#import <Foundation/Foundation.h>


@interface _UIAsyncInvocation : NSObject {
    uint8_t _observer;
    id *_invocationBlock;
    uint8_t _invocationBlockHasBeenCalled;
    uint8_t _invokeCallCount;
}




+(id)emptyInvocation;
+(id)invocationWithBlock:(id)arg0 ;
-(id)invoke;
-(void)dealloc;


@end


#endif