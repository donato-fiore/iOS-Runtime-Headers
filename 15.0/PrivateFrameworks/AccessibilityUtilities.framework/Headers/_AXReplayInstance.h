// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _AXREPLAYINSTANCE_H
#define _AXREPLAYINSTANCE_H

@class NSString, NSError;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _AXReplayInstance : NSObject

@property (nonatomic) BOOL async; // ivar: _async
@property (nonatomic) NSInteger attemptsRemaining; // ivar: _attemptsRemaining
@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (nonatomic) BOOL didSucceed; // ivar: _didSucceed
@property (nonatomic) CGFloat interval; // ivar: _interval
@property (nonatomic) NSInteger maxAttempts; // ivar: _maxAttempts
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (weak, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (copy, nonatomic) id *replayBlock; // ivar: _replayBlock
@property (retain, nonatomic) NSError *underlyingError; // ivar: _underlyingError
@property (retain, nonatomic) id *underlyingResult; // ivar: _underlyingResult


// +(id)replayBlock:(id)arg0 name:(unk)arg1 attempts:(id)arg2 interval:(NSInteger)arg3 async:(CGFloat)arg4 queue:(BOOL)arg5 completion:(id)arg6  ;
-(id)_genericFailError;
-(void)_dispatchAsynchronously;
-(void)_dispatchSynchronously;
-(void)dispatch;


@end


#endif