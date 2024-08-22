// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMISYSTEMRESOURCEUSAGEMONITORIMPL_H
#define HMISYSTEMRESOURCEUSAGEMONITORIMPL_H

@class HMFObject;
@protocol HMISystemResourceUsageMonitorProtocol, HMISystemResourceUsageMonitorDelegate, OS_dispatch_queue;



@interface HMISystemResourceUsageMonitorImpl : HMFObject <HMISystemResourceUsageMonitorProtocol>



@property (weak) NSObject<HMISystemResourceUsageMonitorDelegate> *delegate;
@property (readonly) NSObject<HMISystemResourceUsageMonitorProtocol> *resourceUsageMonitor; // ivar: _resourceUsageMonitor
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)getCurrentSystemResourceUsage;
-(id)initWithProductClass:(NSInteger)arg0 workQueue:(id)arg1 ;
-(void)start;


@end


#endif