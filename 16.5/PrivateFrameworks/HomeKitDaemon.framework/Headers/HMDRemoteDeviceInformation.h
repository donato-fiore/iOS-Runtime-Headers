// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDREMOTEDEVICEINFORMATION_H
#define HMDREMOTEDEVICEINFORMATION_H

@class HMFObject, NSMutableArray, NSHashTable, HMFTimer;
@protocol OS_dispatch_queue, HMDRemoteDeviceMonitorFactory;


#import "HMDDevice.h"

@interface HMDRemoteDeviceInformation : HMFObject {
    BOOL _reachable;
    BOOL _didUpdateReachabilityDueToNonNetworkStateChangeReason;
    BOOL _didUpdateReachabilityWithInitialReachablityReason;
    HMDDevice *_device;
    NSObject<OS_dispatch_queue> *_workQueue;
    id<HMDRemoteDeviceMonitorFactory> *_factory;
    NSInteger _state;
    NSMutableArray *_confirmationHandlers;
    NSHashTable *_clients;
    HMFTimer *_retryTimer;
}




-(id)attributeDescriptions;
-(id)init;


@end


#endif