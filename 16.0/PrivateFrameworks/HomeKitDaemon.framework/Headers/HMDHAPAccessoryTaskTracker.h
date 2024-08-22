// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDHAPACCESSORYTASKTRACKER_H
#define HMDHAPACCESSORYTASKTRACKER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface HMDHAPAccessoryTaskTracker : NSObject {
    os_unfair_lock_s _lock;
    NSUInteger _currentTaskIdentifier;
}


@property (readonly) NSUInteger nextTaskIdentifier;
@property (readonly) NSMutableDictionary *pendingTasks; // ivar: _pendingTasks


-(id)init;
-(id)pendingRemoteTasks;
-(void)executeTask:(id)arg0 ;
-(void)removePendingTaskWithIdentifier:(id)arg0 ;


@end


#endif