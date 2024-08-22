// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NRDEVICEMONITOR_H
#define NRDEVICEMONITOR_H

@protocol OS_dispatch_queue, NRDeviceMonitorDelegate, OS_xpc_object;

#import <Foundation/Foundation.h>

#import "NRDeviceIdentifier.h"

@interface NRDeviceMonitor : NSObject {
    BOOL _didIssueFirstUpdate;
    BOOL _internalIsRegistered;
    BOOL _internalIsEnabled;
    BOOL _internalIsNearby;
    BOOL _internalIsConnected;
    BOOL _internalIsCloudConnected;
    BOOL _internalIsAsleep;
    BOOL _internalIsClassCConnected;
    BOOL _internalHasUnpairedBluetooth;
    unsigned char _internalLinkType;
    os_unfair_lock_s _lock;
    NRDeviceIdentifier *_internalDeviceIdentifier;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id<NRDeviceMonitorDelegate> *_delegate;
    NSObject<OS_xpc_object> *_connection;
}


@property (readonly, nonatomic) NRDeviceIdentifier *deviceIdentifier;
@property (readonly, nonatomic) BOOL isAsleep;
@property (readonly, nonatomic) BOOL isClassCConnected;
@property (readonly, nonatomic) BOOL isCloudConnected;
@property (readonly, nonatomic) BOOL isConnected;
@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) BOOL isNearby;
@property (readonly, nonatomic) BOOL isRegistered;
@property (readonly, nonatomic) unsigned char linkType;


-(id)initWithDeviceIdentifier:(id)arg0 delegate:(id)arg1 queue:(id)arg2 ;
-(void)dealloc;


@end


#endif