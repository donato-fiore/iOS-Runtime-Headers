// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMISYSTEMRESOURCEUSAGEMONITORIPAD_H
#define HMISYSTEMRESOURCEUSAGEMONITORIPAD_H

@class HMFObject, NSString;
@protocol HMISystemResourceUsageMonitorProtocol, HMFLogging, HMISystemResourceUsageMonitorDelegate, OS_dispatch_queue;


#import "HMISystemResourceUsage.h"
#import "HMINotifydObserver.h"

@interface HMISystemResourceUsageMonitoriPad : HMFObject <HMISystemResourceUsageMonitorProtocol, HMFLogging>



@property (readonly) HMISystemResourceUsage *currentSystemResourceUsage; // ivar: _currentSystemResourceUsage
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMISystemResourceUsageMonitorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (getter=isDisplayOn) BOOL displayOn; // ivar: _displayOn
@property (readonly) NSUInteger hash;
@property (getter=isLocked) BOOL locked; // ivar: _locked
@property (readonly) HMINotifydObserver *notifydObserverForDisplayState; // ivar: _notifydObserverForDisplayState
@property (readonly) HMINotifydObserver *notifydObserverForLockState; // ivar: _notifydObserverForLockState
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(BOOL)computeResourceUsageLevel;
-(id)getCurrentSystemResourceUsage;
-(id)initWithWorkQueue:(id)arg0 ;
-(void)handleResourceUsageNotification;
-(void)possibleComputeResourceChange;
-(void)start;


@end


#endif