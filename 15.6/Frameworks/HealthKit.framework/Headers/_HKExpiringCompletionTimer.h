// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HKEXPIRINGCOMPLETIONTIMER_H
#define _HKEXPIRINGCOMPLETIONTIMER_H

@class NSDate;
@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _HKExpiringCompletionTimer : NSObject {
    NSObject<OS_dispatch_source> *_timerSource;
    CGFloat _expirationTime;
    CGFloat _timeout;
    id *_timeoutHandler;
    BOOL _invalidated;
    id *_completion;
}


@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate


-(id)initWithCompletion:(id)arg0 ;
-(id)initWithQueue:(id)arg0 completion:(id)arg1 ;
-(void)_cancelTimer;
-(void)_invalidateAndInvokeCompletion:(BOOL)arg0 error:(id)arg1 ;
-(void)_start;
-(void)dealloc;
-(void)invalidate;
-(void)invalidateAndInvokeCompletionWithError:(id)arg0 ;
-(void)restart;
-(void)startWithTimeoutInterval:(CGFloat)arg0 handler:(id)arg1 ;


@end


#endif