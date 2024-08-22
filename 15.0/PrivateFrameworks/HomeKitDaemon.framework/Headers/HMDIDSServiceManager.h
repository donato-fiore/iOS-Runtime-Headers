// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDIDSSERVICEMANAGER_H
#define HMDIDSSERVICEMANAGER_H

@class HMFObject, IDSService;
@protocol OS_dispatch_queue;


#import "HMDIDSActivityMonitorBroadcaster.h"
#import "HMDIDSActivityMonitor.h"
#import "HMDIDSActivityMonitorObserver.h"
#import "_HMDIDSProxyLinkPreferenceAssertion.h"

@interface HMDIDSServiceManager : HMFObject

@property (readonly) HMDIDSActivityMonitorBroadcaster *activityBroadcaster; // ivar: _activityBroadcaster
@property (readonly, nonatomic) HMDIDSActivityMonitor *activityMonitor; // ivar: _activityMonitor
@property (readonly) HMDIDSActivityMonitorObserver *activityObserver; // ivar: _activityObserver
@property (weak) _HMDIDSProxyLinkPreferenceAssertion *proxyLinkPreferenceAssertion; // ivar: _proxyLinkPreferenceAssertion
@property (readonly) IDSService *proxyService; // ivar: _proxyService
@property (readonly) IDSService *service; // ivar: _service
@property (readonly) IDSService *streamService; // ivar: _streamService
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)sharedIDSService;
+(id)sharedIDSServiceName;
+(id)sharedManager;
-(id)init;
-(void)addProxyServiceLinkPreferencesAssertionHolder:(id)arg0 ;


@end


#endif