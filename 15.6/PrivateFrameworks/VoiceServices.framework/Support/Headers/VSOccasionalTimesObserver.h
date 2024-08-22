// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSOCCASIONALTIMESOBSERVER_H
#define VSOCCASIONALTIMESOBSERVER_H

@class NSArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface VSOccasionalTimesObserver : NSObject {
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSObject<OS_dispatch_source> *_timerSource;
    BOOL _invalid;
    NSArray *_times;
    ? _nextFireTime;
    id *_block;
}


@property (readonly) *OpaqueCMTimebase timebase; // ivar: _timebase


-(id)initWithTimebase:(struct OpaqueCMTimebase *)arg0 times:(id)arg1 queue:(id)arg2 block:(id)arg3 ;
-(void)_reallyInvalidate;
-(void)_resetNextFireTime;
-(void)dealloc;
-(void)invalidate;


@end


#endif