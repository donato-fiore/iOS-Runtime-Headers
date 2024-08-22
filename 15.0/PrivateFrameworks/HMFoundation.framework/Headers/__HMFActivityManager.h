// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef __HMFACTIVITYMANAGER_H
#define __HMFACTIVITYMANAGER_H

@class NSHashTable;


#import "HMFObject.h"

@interface __HMFActivityManager : HMFObject {
    os_unfair_lock_s _lock;
    NSHashTable *_activities;
}




-(id)init;


@end


#endif