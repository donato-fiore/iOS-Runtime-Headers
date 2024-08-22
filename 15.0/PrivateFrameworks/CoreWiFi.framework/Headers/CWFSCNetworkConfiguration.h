// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CWFSCNETWORKCONFIGURATION_H
#define CWFSCNETWORKCONFIGURATION_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CWFSCNetworkConfiguration : NSObject {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    *__SCDynamicStore _storeRef;
    BOOL _isMonitoringEvents;
}


@property (copy) id *eventHandler; // ivar: _eventHandler


-(BOOL)isMonitoringEvents;
-(id)DNSDomainName;
-(id)DNSSearchDomains;
-(id)DNSServerAddresses;
-(id)IPv4Addresses;
-(id)IPv4InterfaceName;
-(id)IPv4Router;
-(id)IPv4ServiceID;
-(id)IPv4ServiceName;
-(id)IPv4SubnetMasks;
-(id)IPv6Addresses;
-(id)IPv6InterfaceName;
-(id)IPv6PrefixLengths;
-(id)IPv6Router;
-(id)IPv6ServiceID;
-(id)IPv6ServiceName;
-(id)__DNSGlobalStateConfig;
-(id)__IPv4GlobalStateConfig;
-(id)__IPv4SetupConfigForServiceID:(id)arg0 ;
-(id)__IPv4StateConfigForServiceID:(id)arg0 ;
-(id)__IPv6GlobalStateConfig;
-(id)__IPv6SetupConfigForServiceID:(id)arg0 ;
-(id)__IPv6StateConfigForServiceID:(id)arg0 ;
-(id)__nameForServiceWithID:(id)arg0 ;
-(id)init;
-(void)__startEventMonitoring;
-(void)dealloc;
-(void)startEventMonitoring;
-(void)stopEventMonitoring;


@end


#endif