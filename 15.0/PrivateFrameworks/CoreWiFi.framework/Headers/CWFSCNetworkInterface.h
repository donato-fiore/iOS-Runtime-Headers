// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CWFSCNETWORKINTERFACE_H
#define CWFSCNETWORKINTERFACE_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CWFSCNetworkInterface : NSObject {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    *__SCDynamicStore _storeRef;
    BOOL _isMonitoringEvents;
}


@property (copy) id *eventHandler; // ivar: _eventHandler
@property (readonly, copy, nonatomic) NSString *hardwareAddress; // ivar: _hardwareAddress
@property (readonly, copy, nonatomic) NSString *interfaceName; // ivar: _interfaceName


-(BOOL)isLinkActive;
-(BOOL)isMonitoringEvents;
-(id)IPv4Addresses;
-(id)IPv4BroadcastAddresses;
-(id)IPv4SubnetMasks;
-(id)IPv6Addresses;
-(id)IPv6Flags;
-(id)IPv6PrefixLengths;
-(id)__IPv4StateConfig;
-(id)__IPv6StateConfig;
-(id)__linkStateConfig;
-(id)__networkInterfaceHardwareAddress;
-(id)airPortSetupConfiguration;
-(id)airPortStateConfiguration;
-(id)init;
-(id)initWithInterfaceName:(id)arg0 ;
-(void)__startEventMonitoring;
-(void)dealloc;
-(void)startEventMonitoring;
-(void)stopEventMonitoring;


@end


#endif