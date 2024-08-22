// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PLQUEUEDISPATCHERQUEUETRACKINGSTATS_H
#define _PLQUEUEDISPATCHERQUEUETRACKINGSTATS_H


#import <Foundation/Foundation.h>


@interface _PLQueueDispatcherQueueTrackingStats : NSObject {
    *_PLQueueDispatcherBlockDebugInfoEntry head;
    *_PLQueueDispatcherBlockDebugInfoEntry tail;
    os_unfair_lock_s lock;
}






@end


#endif