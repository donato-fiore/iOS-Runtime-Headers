// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REDISPATCHQUEUEPOOL_H
#define REDISPATCHQUEUEPOOL_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface REDispatchQueuePool : NSObject {
    NSUInteger _currentIndex;
    NSArray *_queues;
    os_unfair_lock_s _lock;
}




-(id)initWithQueueCount:(NSUInteger)arg0 prefix:(id)arg1 ;
-(id)nextAvailableQueue;


@end


#endif