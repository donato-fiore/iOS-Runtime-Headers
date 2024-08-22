// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMISYSTEMRESOURCEUSAGEMONITOR_H
#define HMISYSTEMRESOURCEUSAGEMONITOR_H

@class HMFObject;
@protocol HMISystemResourceUsageMonitorProtocol, HMISystemResourceUsageMonitorDelegate, OS_dispatch_queue;


#import "HMISystemResourceUsageMonitorImpl.h"

@interface HMISystemResourceUsageMonitor : HMFObject <HMISystemResourceUsageMonitorProtocol>



@property (weak) NSObject<HMISystemResourceUsageMonitorDelegate> *delegate;
@property (readonly) HMISystemResourceUsageMonitorImpl *systemResourceUsageMonitorImpl; // ivar: _systemResourceUsageMonitorImpl
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)getCurrentSystemResourceUsage;
-(id)init;
-(void)start;


@end


#endif