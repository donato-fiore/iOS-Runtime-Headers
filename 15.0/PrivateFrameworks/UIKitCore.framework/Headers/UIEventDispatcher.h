// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIEVENTDISPATCHER_H
#define UIEVENTDISPATCHER_H

@protocol UIEventFetcherSink;

#import <Foundation/Foundation.h>

#import "UIEventEnvironment.h"
#import "UIEventFetcher.h"

@interface UIEventDispatcher : NSObject <UIEventFetcherSink>

 {
    UIEventEnvironment *_mainEnvironment;
    UIEventFetcher *_eventFetcher;
    *__CFRunLoopSource _handleEventQueueRunLoopSource;
    *__CFRunLoopSource _collectHIDEventsRunLoopSource;
    *__CFRunLoop _runLoop;
}




-(id)initWithApplication:(id)arg0 ;
-(void)dealloc;
-(void)eventFetcherDidReceiveEvents:(id)arg0 ;


@end


#endif