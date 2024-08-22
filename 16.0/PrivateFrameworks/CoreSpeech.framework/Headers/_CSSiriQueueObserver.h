// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CSSIRIQUEUEOBSERVER_H
#define _CSSIRIQUEUEOBSERVER_H

@class AFHeartBeat;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _CSSiriQueueObserver : NSObject {
    NSUInteger _numberOfOccurrences;
    AFHeartBeat *_heartBeat;
    NSObject<OS_dispatch_queue> *_queue;
    CGFloat _heartBeatInterval;
    CGFloat _timeoutInterval;
    id *_timeoutHandler;
}




-(id)initWithQueue:(id)arg0 heartBeatInterval:(CGFloat)arg1 timeoutInterval:(CGFloat)arg2 timeoutHandler:(id)arg3 ;
-(void)heartBeatFiredWithQueue:(id)arg0 ;
-(void)startWithQueue:(id)arg0 ;
-(void)stop;
-(void)timeoutDetected;


@end


#endif