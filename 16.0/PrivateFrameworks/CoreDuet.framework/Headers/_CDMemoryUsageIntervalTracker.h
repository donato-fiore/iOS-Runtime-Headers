// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CDMEMORYUSAGEINTERVALTRACKER_H
#define _CDMEMORYUSAGEINTERVALTRACKER_H

@class NSHashTable;

#import <Foundation/Foundation.h>


@interface _CDMemoryUsageIntervalTracker : NSObject {
    os_unfair_lock_s _lock;
    NSUInteger _counter;
    NSUInteger _activeMemoryLimit;
    NSHashTable *_activeIntervals;
    NSUInteger _intervalTimeout;
}




-(id)init;


@end


#endif