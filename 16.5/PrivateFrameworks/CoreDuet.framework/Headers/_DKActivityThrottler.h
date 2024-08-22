// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DKACTIVITYTHROTTLER_H
#define _DKACTIVITYTHROTTLER_H

@class NSCountedSet, NSCache;
@protocol OS_dispatch_queue, _DKSimpleKeyValueStore;

#import <Foundation/Foundation.h>


@interface _DKActivityThrottler : NSObject {
    NSCountedSet *_minimumIntervalScheduledActions;
    NSCountedSet *_delayScheduledActions;
    NSCache *_cache;
    NSObject<OS_dispatch_queue> *_storeQueue;
    id<_DKSimpleKeyValueStore> *_store;
}




-(id)description;


@end


#endif