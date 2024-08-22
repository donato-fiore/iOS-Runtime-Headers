// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CWFSCNETWORKSERVICE_H
#define CWFSCNETWORKSERVICE_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CWFSCNetworkService : NSObject {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    *__SCDynamicStore _storeRef;
    *__SCPreferences _prefsRef;
    BOOL _isMonitoringEvents;
    NSString *_serviceID;
    NSString *_serviceName;
    BOOL _isServiceEnabled;
}


@property (copy) id *eventHandler; // ivar: _eventHandler
@property (readonly, copy, nonatomic) NSString *interfaceName; // ivar: _interfaceName
@property (readonly, copy, nonatomic) NSString *serviceID;


-(BOOL)__updateServiceID;
-(BOOL)isMonitoringEvents;
-(BOOL)isServiceEnabled;
-(id)DHCPLeaseExpirationTimestamp;
-(id)DHCPLeaseStartTimestamp;
-(id)DNSDomainName;
-(id)DNSServerAddresses;
-(id)IPv4Addresses;
-(id)IPv4ConfigMethod;
-(id)IPv4Router;
-(id)IPv6Addresses;
-(id)IPv6ConfigMethod;
-(id)IPv6Router;
-(id)__DHCPInfo;
-(id)__DNSSetupConfig;
-(id)__DNSStateConfig;
-(id)__IPv4SetupConfig;
-(id)__IPv4StateConfig;
-(id)__IPv6SetupConfig;
-(id)__IPv6StateConfig;
-(id)__proxiesSetupConfig;
-(id)init;
-(id)initWithInterfaceName:(id)arg0 ;
-(id)serviceName;
-(void)__refreshNotificationKeys;
-(void)dealloc;
-(void)startEventMonitoring;
-(void)stopEventMonitoring;


@end


#endif