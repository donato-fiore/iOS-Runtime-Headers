// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTIMEBASEOBSERVER_H
#define AVTIMEBASEOBSERVER_H

@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "AVWeakReference.h"

@interface AVTimebaseObserver : NSObject {
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSObject<OS_dispatch_source> *_timerSource;
    *OpaqueCMTimebase _timebase;
    BOOL _isObservingTimebase;
    CGFloat _lastRate;
    CGFloat _currentRate;
    BOOL _invalid;
}


@property (readonly, nonatomic) BOOL invalidated;
@property (readonly) *OpaqueCMTimebase timebase;
@property (readonly, nonatomic, getter=_weakReference) AVWeakReference *weakReference; // ivar: _weakReference


-(id)initWithTimebase:(struct OpaqueCMTimebase *)arg0 queue:(id)arg1 ;
-(void)_attachTimerSourceToTimebase;
-(void)_effectiveRateChanged;
-(void)_finishInitializationWithTimerEventHandler:(id)arg0 ;
-(void)_handleTimeDiscontinuity;
-(void)_reallyInvalidate;
-(void)_removeTimebaseFromTimerSource;
-(void)_resetNextFireTime;
-(void)_startObservingTimebaseNotifications;
-(void)_stopObservingTimebaseNotifications;
-(void)dealloc;
-(void)invalidate;


@end


#endif