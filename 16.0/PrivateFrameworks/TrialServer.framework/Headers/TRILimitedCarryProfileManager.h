// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRILIMITEDCARRYPROFILEMANAGER_H
#define TRILIMITEDCARRYPROFILEMANAGER_H

@class _PASSimpleCoalescingTimer, NSString, NSDictionary;
@protocol MCProfileConnectionObserver, TRITaskQueuing, OS_dispatch_queue, OS_os_transaction;

#import <Foundation/Foundation.h>

#import "TRIServerContext.h"

@interface TRILimitedCarryProfileManager : NSObject <MCProfileConnectionObserver>

 {
    id<TRITaskQueuing> *_taskQueue;
    TRIServerContext *_context;
    NSObject<OS_dispatch_queue> *_profileProcessingQueue;
    _PASSimpleCoalescingTimer *_checkForUpdates;
    NSObject<OS_os_transaction> *_txn;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *lcExperiments; // ivar: _lcExperiments
@property (readonly) Class superclass;


-(BOOL)_setStoredLimitedCarryExperimentsWithError:(*id)arg0 ;
-(id)_getStoredLimitedCarryExperimentsWithError:(*id)arg0 ;
-(id)_limitedCarryExperiments;
-(id)initWithTaskQueue:(id)arg0 context:(id)arg1 ;
-(struct ? )_enqueueTask:(id)arg0 ;
-(void)_gatherProfleUpdatesAndScheduleRelatedTasks;
-(void)processLaunchEvent;
-(void)profileConnectionDidReceiveProfileListChangedNotification:(id)arg0 userInfo:(id)arg1 ;
-(void)removeProfileForExperiment:(id)arg0 ;


@end


#endif