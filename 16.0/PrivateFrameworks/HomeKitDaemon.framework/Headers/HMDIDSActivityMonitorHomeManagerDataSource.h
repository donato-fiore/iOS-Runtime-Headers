// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDIDSACTIVITYMONITORHOMEMANAGERDATASOURCE_H
#define HMDIDSACTIVITYMONITORHOMEMANAGERDATASOURCE_H

@class NSSet, NSBackgroundActivityScheduler, NSString;
@protocol HMFLogging, HMDIDSActivityMonitorDataSource, OS_dispatch_queue, HMDIDSActivityMonitorBroadcasterPushTokenDataSourceDelegate;

#import <Foundation/Foundation.h>

#import "HMDAppleAccountManager.h"
#import "HMDHomeManager.h"

@interface HMDIDSActivityMonitorHomeManagerDataSource : NSObject <HMFLogging, HMDIDSActivityMonitorDataSource>

 {
    NSSet *_pushTokens;
    HMDAppleAccountManager *_appleAccountManager;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSBackgroundActivityScheduler *_updateTask;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDIDSActivityMonitorBroadcasterPushTokenDataSourceDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) HMDHomeManager *homeManager; // ivar: _homeManager
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithHomeManager:(id)arg0 ;
-(void)_handleCurrentDeviceOrAccountUpdated:(id)arg0 ;
-(void)_handleDeviceAdded:(id)arg0 ;
-(void)_handleDeviceRemoved:(id)arg0 ;
-(void)_handleHomeAdded:(id)arg0 ;
-(void)pushTokensForDevicesObservingSubjectDevice:(id)arg0 subActivity:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
-(void)start;
-(void)startObservingDevice:(id)arg0 subActivity:(id)arg1 ;
-(void)startWithNotificationCenter:(id)arg0 ;
-(void)stopObservingDevice:(id)arg0 subActivity:(id)arg1 ;


@end


#endif