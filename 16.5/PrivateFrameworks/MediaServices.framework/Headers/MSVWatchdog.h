// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSVWATCHDOG_H
#define MSVWATCHDOG_H

@class NSString, NSOperationQueue, NSRunLoop;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface MSVWatchdog : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (nonatomic) CGFloat interval; // ivar: _interval
@property (retain, nonatomic) NSString *mode; // ivar: _mode
@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSRunLoop *runLoop; // ivar: _runLoop
@property (nonatomic) BOOL running; // ivar: _running
@property (nonatomic) BOOL scheduled; // ivar: _scheduled
@property (copy, nonatomic) id *timeoutCallback; // ivar: _timeoutCallback
@property (nonatomic) CGFloat timeoutInterval; // ivar: _timeoutInterval
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer; // ivar: _timer


-(id)init;
-(void)_cancelTimeout;
-(void)_invokeCallback;
-(void)_scheduleTest;
-(void)_scheduleTimeout;
-(void)resume;
-(void)scheduleInDispatchQueue:(id)arg0 ;
-(void)scheduleInOperationQueue:(id)arg0 ;
-(void)scheduleInRunLoop:(id)arg0 ;
-(void)suspend;


@end


#endif