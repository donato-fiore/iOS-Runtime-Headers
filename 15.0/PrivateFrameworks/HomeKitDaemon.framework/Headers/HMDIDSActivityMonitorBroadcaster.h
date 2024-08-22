// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDIDSACTIVITYMONITORBROADCASTER_H
#define HMDIDSACTIVITYMONITORBROADCASTER_H

@class HMFTimer, NSString;
@protocol HMFLogging, HMFTimerDelegate, HMDIDSActivityMonitorBroadcasterPushTokenDataSourceDelegate, HMDIDSActivityMonitorBroadcasterPushTokenDataSource, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMDIDSActivityMonitor.h"

@interface HMDIDSActivityMonitorBroadcaster : NSObject <HMFLogging, HMFTimerDelegate, HMDIDSActivityMonitorBroadcasterPushTokenDataSourceDelegate>

 {
    HMFTimer *_debounceTimer;
}


@property (readonly) HMDIDSActivityMonitor *activityMonitor; // ivar: _activityMonitor
@property (retain) NSObject<HMDIDSActivityMonitorBroadcasterPushTokenDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithActivityMonitor:(id)arg0 ;
-(id)initWithActivityMonitor:(id)arg0 timer:(id)arg1 ;
-(id)logIdentifier;
-(void)configureWithDataSource:(id)arg0 ;
-(void)configureWithQueue:(id)arg0 ;
-(void)dataSourceDidUpdate:(id)arg0 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif