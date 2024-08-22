// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDSELFREMOVALWATCHDOG_H
#define HMDSELFREMOVALWATCHDOG_H

@class NSManagedObjectID, NSUUID, NSString, NSDate, HMFTimer;
@protocol HMDCoreDataCloudMirroringExportStatusMonitorDelegate, HMFTimerDelegate, HMFLogging, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMDCoreDataCloudMirroringExportStatusMonitor.h"

@interface HMDSelfRemovalWatchdog : NSObject <HMDCoreDataCloudMirroringExportStatusMonitorDelegate, HMFTimerDelegate, HMFLogging>



@property (copy) id *completion; // ivar: _completion
@property (retain) NSManagedObjectID *currentAccessoryModelObjectID; // ivar: _currentAccessoryModelObjectID
@property (readonly, copy) NSUUID *currentAccessoryUUID; // ivar: _currentAccessoryUUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) HMDCoreDataCloudMirroringExportStatusMonitor *monitor; // ivar: _monitor
@property (readonly) NSDate *selfRemovalBeginDate; // ivar: _selfRemovalBeginDate
@property (readonly) Class superclass;
@property (retain) HMFTimer *watchdogTimer; // ivar: _watchdogTimer
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)_retrieveExpectedObjectIDsTokenMap;
-(id)initWithCurrentAccessoryUUID:(id)arg0 workQueue:(id)arg1 ;
-(void)_stopWithError:(id)arg0 ;
-(void)configure;
-(void)monitorDidObserveExportComplete:(id)arg0 ;
-(void)startWithCompletion:(id)arg0 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif