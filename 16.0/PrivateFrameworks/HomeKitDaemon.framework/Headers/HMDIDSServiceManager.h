// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDIDSSERVICEMANAGER_H
#define HMDIDSSERVICEMANAGER_H

@class HMFObject, NSMutableSet, NSString;
@protocol HMFLogging, OS_dispatch_queue, HMDIDSServiceManagerNotificationCenter, HMDIDSService;


#import "HMDIDSActivityMonitor.h"
#import "_HMDIDSProxyLinkPreferenceAssertion.h"
#import "HMDIDSActivityMonitorBroadcaster.h"
#import "HMDIDSActivityMonitorObserver.h"

@interface HMDIDSServiceManager : HMFObject <HMFLogging>

 {
    NSMutableSet *_applicationBundleIdentifiersThatNeedWakingMessages;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDIDSActivityMonitor *_activityMonitor;
    _HMDIDSProxyLinkPreferenceAssertion *_proxyLinkPreferenceAssertion;
    id<HMDIDSServiceManagerNotificationCenter> *_notificationCenter;
}


@property (readonly) HMDIDSActivityMonitorBroadcaster *activityBroadcaster; // ivar: _activityBroadcaster
@property (readonly) HMDIDSActivityMonitorObserver *activityObserver; // ivar: _activityObserver
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<HMDIDSService> *legacyService; // ivar: _legacyService
@property (readonly) NSObject<HMDIDSService> *proxyService; // ivar: _proxyService
@property (readonly) NSObject<HMDIDSService> *service; // ivar: _service
@property (readonly) NSObject<HMDIDSService> *streamService; // ivar: _streamService
@property (readonly) Class superclass;


+(id)logCategory;
+(id)sharedIDSServiceName;
+(id)sharedManager;
-(id)initWithDefaults;
-(id)initWithMainService:(id)arg0 legacyService:(id)arg1 proxyService:(id)arg2 streamService:(id)arg3 notificationCenter:(id)arg4 ;
-(void)addProxyServiceLinkPreferencesAssertionHolder:(id)arg0 ;
-(void)configure;
-(void)handleProcessInfoStateChanged:(id)arg0 ;
-(void)retrieveFirewallWithQueue:(id)arg0 completion:(id)arg1 ;
-(void)setActivityMonitorDataSource:(id)arg0 ;
-(void)unconfigure;


@end


#endif