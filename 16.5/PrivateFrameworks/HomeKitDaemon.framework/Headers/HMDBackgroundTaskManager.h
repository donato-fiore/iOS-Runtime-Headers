// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDBACKGROUNDTASKMANAGER_H
#define HMDBACKGROUNDTASKMANAGER_H

@class HMFObject, NSString, NSMutableDictionary;
@protocol HMFLogging;


#import "HMDBackgroundTaskLogger.h"

@interface HMDBackgroundTaskManager : HMFObject <HMFLogging>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMDBackgroundTaskLogger *logger; // ivar: _logger
@property (readonly, nonatomic) NSMutableDictionary *pendingTaskDateByIdentifier; // ivar: _pendingTaskDateByIdentifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMutableDictionary *tasksByIdentifier; // ivar: _tasksByIdentifier


+(id)logCategory;
+(id)sharedManager;
-(BOOL)scheduleTaskWithIdentifier:(id)arg0 fireDate:(id)arg1 onObserver:(id)arg2 selector:(SEL)arg3 error:(*id)arg4 ;
-(id)_taskForIdentifier:(id)arg0 ;
-(id)init;
-(void)_configure;
-(void)_handleEvent:(id)arg0 ;
-(void)_handlePendingTaskWithIdentifier:(id)arg0 ;
-(void)_postNotificationWithIdentifier:(id)arg0 ;
-(void)_registerEventWithIdentifier:(id)arg0 fireDate:(id)arg1 ;
-(void)_setTask:(id)arg0 forIdentifier:(id)arg1 ;
-(void)_unregisterEventWithIdentifier:(id)arg0 ;
-(void)cancelTaskWithIdentifier:(id)arg0 onObserver:(id)arg1 ;


@end


#endif