// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFIPMONITOR_H
#define WFIPMONITOR_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_WFIPMonitorObserver.h"

@interface WFIPMonitor : NSObject {
    BOOL _isMonitoring;
    _WFIPMonitorObserver *_dynamicStoreInfo;
}


@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy, nonatomic) NSString *interfaceName; // ivar: _interfaceName
@property *__SCDynamicStore networkServiceStore; // ivar: _networkServiceStore
@property *__SCPreferences prefsRef; // ivar: _prefsRef
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (copy, nonatomic) NSString *serviceID; // ivar: _serviceID
@property *__SCDynamicStore storeRef; // ivar: _storeRef


-(BOOL)globalProxyIsEnabled;
-(BOOL)hasValidIPAddress;
-(BOOL)hasValidIPv4Address;
-(BOOL)hasValidIPv6Address;
-(BOOL)httpProxyAutoConfigured;
-(BOOL)httpProxyIsAuthenticated;
-(BOOL)isUsingCustomDNSSettings;
-(BOOL)isUsingCustomProxySetting;
-(BOOL)monitorNetworkServiceID:(id)arg0 ;
-(BOOL)personalHotspotHasClients;
-(BOOL)renewLease;
-(NSInteger)ipv4ConfigMethod;
-(NSInteger)ipv6ConfigMethod;
-(id)DHCPLeaseExpirationDate;
-(id)__dhcpInfo;
-(id)__dnsSetupConfig;
-(id)__dnsStateConfig;
-(id)__ipv4InterfaceStateConfig;
-(id)__ipv4SetupConfig;
-(id)__ipv4StateConfig;
-(id)__ipv6SetupConfig;
-(id)__ipv6StateConfig;
-(id)__proxiesSetupConfig;
-(id)__wifiServiceID;
-(id)dnsDomainName;
-(id)dnsSearchDomains;
-(id)dnsServerAddresses;
-(id)httpProxyAutoConfigURL;
-(id)httpProxyPort;
-(id)httpProxyServer;
-(id)httpProxyUsername;
-(id)init;
-(id)initWithInterfaceName:(id)arg0 ;
-(id)ipv4Addresses;
-(id)ipv4DHCPClientID;
-(id)ipv4Router;
-(id)ipv4SubnetMasks;
-(id)ipv6Addresses;
-(id)ipv6PrefixLengths;
-(id)ipv6Router;
-(void)_postChangesNotification:(id)arg0 ;
-(void)dealloc;


@end


#endif