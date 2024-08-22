// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVRUNLOOPCONDITIONRUNLOOPSTATE_H
#define AVRUNLOOPCONDITIONRUNLOOPSTATE_H


#import <Foundation/Foundation.h>


@interface AVRunLoopConditionRunLoopState : NSObject

@property (readonly, nonatomic) *__CFRunLoop runLoop; // ivar: _runLoop
@property (nonatomic) *__CFRunLoopSource signalSource; // ivar: _signalSource
@property (nonatomic) BOOL signaled; // ivar: _signaled


+(id)runLoopStateWithRunLoop:(struct __CFRunLoop *)arg0 ;
-(id)initWithRunLoop:(struct __CFRunLoop *)arg0 ;
-(void)dealloc;


@end


#endif