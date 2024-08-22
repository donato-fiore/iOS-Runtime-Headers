// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSSINGLETHREADDISPATCHQUEUE_H
#define VSSINGLETHREADDISPATCHQUEUE_H

@class NSMutableArray, NSString, NSThread;

#import <Foundation/Foundation.h>


@interface VSSingleThreadDispatchQueue : NSObject

@property (retain, nonatomic) NSMutableArray *blocks; // ivar: _blocks
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) *__CFRunLoopSource runLoopSource; // ivar: _runLoopSource
@property (copy, nonatomic) id *startCompletionBlock; // ivar: _startCompletionBlock
@property (nonatomic) NSInteger state; // ivar: _state
@property (nonatomic) *__CFRunLoop underlyingRunLoop; // ivar: _underlyingRunLoop
@property (retain, nonatomic) NSThread *underlyingThread; // ivar: _underlyingThread


+(id)currentQueue;
-(id)initWithName:(id)arg0 ;
-(void)_threadMain;
-(void)dispatchBlock:(id)arg0 ;
-(void)dispatchBlockSync:(id)arg0 ;
-(void)startWithCompletionHandler:(id)arg0 ;
-(void)stop;


@end


#endif