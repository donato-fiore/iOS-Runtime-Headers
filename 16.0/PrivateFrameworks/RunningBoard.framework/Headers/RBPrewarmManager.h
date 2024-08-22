// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RBPREWARMMANAGER_H
#define RBPREWARMMANAGER_H

@class NSMutableSet, NSDictionary;
@protocol RBProcessManaging, RBTimeProviding, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "RBEventQueue.h"

@interface RBPrewarmManager : NSObject {
    id<RBProcessManaging> *_delegate;
    id<RBTimeProviding> *_timeProvider;
    NSObject<OS_dispatch_queue> *_prewarmingQueue;
    NSMutableSet *_pendingPrewarms;
    RBEventQueue *_prewarmingEventQueue;
    NSDictionary *_lastAppliedConfiguration;
    NSDictionary *_currentConfiguration;
    os_unfair_lock_s _dataLock;
}




-(id)_prewarmingQueue;
-(id)initWithDelegate:(id)arg0 timeProvider:(id)arg1 ;
-(void)_queue_addPrewarmForIdentity:(id)arg0 ;
-(void)_queue_checkForNewPrewarms;
-(void)_queue_runPrewarm;
-(void)_queue_schedulePrewarmForIdentity:(id)arg0 withInterval:(id)arg1 ;
-(void)identityDidTerminate:(id)arg0 ;
-(void)prewarmingConfigurationDidChange:(id)arg0 ;


@end


#endif