// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIXPCACTIVITYMANAGER_H
#define TRIXPCACTIVITYMANAGER_H

@protocol TRIXPCActivityManagementProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TRIServerContext.h"
#import "TRITaskQueue.h"

@interface TRIXPCActivityManager : NSObject <TRIXPCActivityManagementProtocol>

 {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}


@property (retain, nonatomic) TRIServerContext *context; // ivar: _context
@property (retain, nonatomic) TRITaskQueue *taskQueue; // ivar: _taskQueue


-(id)initWithDispatchQueue:(id)arg0 ;
-(void)_registerCellularActivityWithDelay:(CGFloat)arg0 ;
-(void)_registerClientTriggeredActivities;
-(void)_registerFetchExperimentsActivity;
-(void)_registerHotfixTargetingActivity;
-(void)_registerPlaceholderTaskQueueActivity;
-(void)_registerPostUpgradeActivity;
-(void)_registerPostUpgradeActivityRequireInexpensiveNetworking;
-(void)_registerRetryFailuresActivity;
-(void)_scheduleMaintenanceAndFetchTasksWithActivityDescriptor:(id)arg0 label:(id)arg1 ;
-(void)_setDelaySeconds:(NSInteger)arg0 forXPCActivity:(id)arg1 withLabel:(id)arg2 replacementCriteria:(id)arg3 ;
-(void)_setJitterForXPCActivity:(id)arg0 withLabel:(id)arg1 replacementCriteria:(id)arg2 ;
-(void)postponeCellularActivity;
-(void)registerActivities;
-(void)registerRecurrentRollbackActivityWithDelay:(CGFloat)arg0 ;
-(void)registerSetupAssistantFetchActivity;


@end


#endif