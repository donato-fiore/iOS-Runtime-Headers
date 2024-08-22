// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef __CARPFACTIVITYMANAGER_H
#define __CARPFACTIVITYMANAGER_H

@class NSHashTable;


#import "CARPFObject.h"

@interface __CARPFActivityManager : CARPFObject {
    os_unfair_lock_s _lock;
    NSHashTable *_activities;
}




-(id)init;


@end


#endif