// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUCOALESCER_H
#define CUCOALESCER_H

@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CUCoalescer : NSObject {
    BOOL _invalidateCalled;
    CGFloat _startTime;
    NSObject<OS_dispatch_source> *_timer;
    int _triggered;
}


@property (copy, nonatomic) id *actionHandler; // ivar: _actionHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (nonatomic) CGFloat leeway; // ivar: _leeway
@property (nonatomic) CGFloat maxDelay; // ivar: _maxDelay
@property (nonatomic) CGFloat minDelay; // ivar: _minDelay


-(id)init;
-(void)_cancel;
-(void)_invalidate;
-(void)_timerFired;
-(void)_trigger;
-(void)cancel;
-(void)dealloc;
-(void)invalidate;
-(void)trigger;


@end


#endif