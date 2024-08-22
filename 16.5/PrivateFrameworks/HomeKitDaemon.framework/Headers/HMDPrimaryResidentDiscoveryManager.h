// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDPRIMARYRESIDENTDISCOVERYMANAGER_H
#define HMDPRIMARYRESIDENTDISCOVERYMANAGER_H

@class HMFExponentialBackoffTimer, NSString;
@protocol HMFLogging, HMFTimerDelegate, HMDPrimaryResidentDiscoveryManager, OS_dispatch_queue, HMDPrimaryResidentDiscoveryManagerDataSource, HMDResidentDeviceManagerContext, HMDPrimaryResidentDiscoveryOperation, HMDPrimaryResidentDiscoveryManagerDelegate;

#import <Foundation/Foundation.h>


@interface HMDPrimaryResidentDiscoveryManager : NSObject <HMFLogging, HMFTimerDelegate, HMDPrimaryResidentDiscoveryManager>

 {
    NSObject<OS_dispatch_queue> *_queue;
    id<HMDPrimaryResidentDiscoveryManagerDataSource> *_dataSource;
    id<HMDResidentDeviceManagerContext> *_context;
    id<HMDPrimaryResidentDiscoveryOperation> *_primaryDiscoveryOperation;
    HMFExponentialBackoffTimer *_retryTimer;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDPrimaryResidentDiscoveryManagerDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *logIdentifier; // ivar: _logIdentifier
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithQueue:(id)arg0 ;
-(id)initWithQueue:(id)arg0 dataSource:(id)arg1 ;
-(void)_discoverPrimaryResident;
-(void)_handleDeviceMonitorReachableNotification:(id)arg0 ;
-(void)_removeRetryTimer;
-(void)_startRetryTimer;
-(void)cancel;
-(void)completedDiscoveryWithPrimaryResident:(id)arg0 primaryResidentGenerationID:(id)arg1 error:(id)arg2 ;
-(void)configureWithContext:(id)arg0 ;
-(void)discoverPrimaryResident;
-(void)sendCheckForResidentsInHomeNotification;
-(void)timerDidFire:(id)arg0 ;


@end


#endif