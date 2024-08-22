// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CWFXPCREQUESTPROXY_H
#define CWFXPCREQUESTPROXY_H

@class NSMutableDictionary, NSSet, NSOperationQueue;
@protocol OS_dispatch_queue, CWFXPCRequestProxyDelegate;

#import <Foundation/Foundation.h>

#import "CWFSCNetworkConfiguration.h"
#import "CWFSCNetworkReachability.h"
#import "CWFIO80211.h"
#import "CWFKernelEventMonitor.h"

@interface CWFXPCRequestProxy : NSObject {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    NSObject<OS_dispatch_queue> *_interfaceQueue;
    NSMutableDictionary *_apple80211Map;
    NSMutableDictionary *_SCNetworkServiceMap;
    NSMutableDictionary *_SCNetworkInterfaceMap;
    NSMutableDictionary *_EAP8021XMap;
    CWFSCNetworkConfiguration *_SCNetworkConfiguration;
    CWFSCNetworkReachability *_SCNetworkReachability;
    CWFIO80211 *_IO80211;
    CWFKernelEventMonitor *_keventMonitor;
    NSSet *_mutableEventIDs;
    BOOL _isMonitoringEvents;
    NSMutableDictionary *_mutableLinkDownStatusMap;
    NSMutableDictionary *_mutableRoamStatusMap;
    NSMutableDictionary *_mutableJoinStatusMap;
    NSMutableDictionary *_mutableAutoJoinTriggerMap;
    NSMutableDictionary *_mutableAutoJoinStatusMap;
    NSMutableDictionary *_mutableLinkQualityMap;
    CGFloat _lastLinkQualityMetricLoggedAt;
    NSMutableDictionary *_mutableQueueMap;
    NSOperationQueue *_defaultQueue;
}


@property (retain) NSObject<CWFXPCRequestProxyDelegate> *delegate; // ivar: _delegate


-(BOOL)isMonitoringEvents;
-(id)EAP8021XWithInterfaceName:(id)arg0 ;
-(id)SCNetworkInterfaceWithInterfaceName:(id)arg0 ;
-(id)SCNetworkServiceWithInterfaceName:(id)arg0 ;
-(id)__EAP8021XWithInterfaceName:(id)arg0 ;
-(id)__SCNetworkInterfaceWithInterfaceName:(id)arg0 ;
-(id)__SCNetworkServiceWithInterfaceName:(id)arg0 ;
-(id)__apple80211WithInterfaceName:(id)arg0 ;
-(id)__apple80211WithVirtualInterfaceRole:(int)arg0 parentInterfaceName:(id)arg1 ;
-(id)__autojoinStatusWithInterfaceName:(id)arg0 ;
-(id)__currentNetworkProfileWithInterfaceName:(id)arg0 ;
-(id)__currentScanResult;
-(id)__deviceUUID;
-(id)__hashedBSSID:(id)arg0 XPCConnection:(id)arg1 error:(*id)arg2 ;
-(id)__hashedSSID:(id)arg0 XPCConnection:(id)arg1 error:(*id)arg2 ;
-(id)__interfaceSpecificEventIDs:(id)arg0 ;
-(id)__joinStatusWithInterfaceName:(id)arg0 ;
-(id)__knownNetworkProfiles;
-(id)__linkDownStatusWithInterfaceName:(id)arg0 ;
-(id)__linkQualityMetricWithInterfaceName:(id)arg0 ;
-(id)__networkStackMACAddressWithInterfaceName:(id)arg0 ;
-(id)__queueForXPCRequest:(id)arg0 ;
-(id)__roamStatusWithInterfaceName:(id)arg0 ;
-(id)__vendorSpecificIdentifierForXPCConnection:(id)arg0 ;
-(id)apple80211WithInterfaceName:(id)arg0 ;
-(id)apple80211WithVirtualInterfaceRole:(int)arg0 parentInterfaceName:(id)arg1 ;
-(id)init;
-(int)__defaultInterfaceRoleForRequestType:(NSInteger)arg0 ;
-(void)XPCManager:(id)arg0 XPCConnection:(id)arg1 canceledXPCRequestsWithUUID:(id)arg2 ;
-(void)XPCManager:(id)arg0 XPCConnection:(id)arg1 receivedXPCRequest:(id)arg2 ;
-(void)XPCManager:(id)arg0 XPCConnection:(id)arg1 updatedRegisteredEventIDs:(id)arg2 ;
-(void)XPCManager:(id)arg0 invalidatedXPCConnection:(id)arg1 ;
-(void)XPCManager:(id)arg0 sendXPCEvent:(id)arg1 reply:(id)arg2 ;
-(void)__addJoinStatusWithScanResult:(id)arg0 knownNetworkProfile:(id)arg1 isAutoJoin:(BOOL)arg2 interfaceName:(id)arg3 ;
-(void)__addKnownNetwork:(id)arg0 XPCConnection:(id)arg1 ;
-(void)__autoJoinEndedWithResult:(BOOL)arg0 interfaceName:(id)arg1 ;
-(void)__autoJoinStartedWithTrigger:(NSInteger)arg0 interfaceName:(id)arg1 ;
-(void)__cancelRequestsWithNamePrefix:(id)arg0 ;
-(void)__getActivities:(id)arg0 XPCConnection:(id)arg1 ;
-(void)__getApple80211:(id)arg0 ;
-(void)__getAutoJoinStatus:(id)arg0 ;
-(void)__getBSSID:(id)arg0 XPCConnection:(id)arg1 ;
-(void)__getBSSIDForVendor:(id)arg0 XPCConnection:(id)arg1 ;
-(void)__getDHCPLeaseExpirationTime:(id)arg0 ;
-(void)__getDHCPLeaseStartTime:(id)arg0 ;
-(void)__getDHCPServerID:(id)arg0 ;
-(void)__getDHCPv6ServerID:(id)arg0 ;
-(void)__getDNSServerAddresses:(id)arg0 ;
-(void)__getEAP8021XClientStatus:(id)arg0 ;
-(void)__getEAP8021XControlMode:(id)arg0 ;
-(void)__getEAP8021XControlState:(id)arg0 ;
-(void)__getEAP8021XSupplicantState:(id)arg0 ;
-(void)__getEventIDs:(id)arg0 XPCConnection:(id)arg1 ;
-(void)__getGlobalDNSServerAddresses:(id)arg0 ;
-(void)__getGlobalIPv4Addresses:(id)arg0 ;
-(void)__getGlobalIPv4InterfaceName:(id)arg0 ;
-(void)__getGlobalIPv4NetServiceID:(id)arg0 ;
-(void)__getGlobalIPv4NetServiceName:(id)arg0 ;
-(void)__getGlobalIPv4Router:(id)arg0 ;
-(void)__getGlobalIPv6Addresses:(id)arg0 ;
-(void)__getGlobalIPv6InterfaceName:(id)arg0 ;
-(void)__getGlobalIPv6NetServiceID:(id)arg0 ;
-(void)__getGlobalIPv6NetServiceName:(id)arg0 ;
-(void)__getGlobalIPv6Router:(id)arg0 ;
-(void)__getHardwareMACAddress:(id)arg0 ;
-(void)__getIO80211ControllerInfo:(id)arg0 ;
-(void)__getIO80211InterfaceInfo:(id)arg0 ;
-(void)__getIPv4ARPResolvedHardwareAddress:(id)arg0 ;
-(void)__getIPv4ARPResolvedIPAddress:(id)arg0 ;
-(void)__getIPv4Addresses:(id)arg0 ;
-(void)__getIPv4NetworkSignature:(id)arg0 ;
-(void)__getIPv4Router:(id)arg0 ;
-(void)__getIPv4SubnetMasks:(id)arg0 ;
-(void)__getIPv6Addresses:(id)arg0 ;
-(void)__getIPv6NetworkSignature:(id)arg0 ;
-(void)__getIPv6Router:(id)arg0 ;
-(void)__getJoinStatus:(id)arg0 ;
-(void)__getKnownNetworkMatchingNetworkProfile:(id)arg0 ;
-(void)__getKnownNetworkMatchingScanResult:(id)arg0 ;
-(void)__getLinkDownStatus:(id)arg0 ;
-(void)__getLinkQualityMetric:(id)arg0 ;
-(void)__getMACAddress:(id)arg0 ;
-(void)__getNetServiceEnabled:(id)arg0 ;
-(void)__getNetServiceID:(id)arg0 ;
-(void)__getNetServiceName:(id)arg0 ;
-(void)__getNetworkReachability:(id)arg0 ;
-(void)__getPlatformCapabilities:(id)arg0 ;
-(void)__getRoamStatus:(id)arg0 ;
-(void)__getSSID:(id)arg0 XPCConnection:(id)arg1 ;
-(void)__getSSIDForVendor:(id)arg0 XPCConnection:(id)arg1 ;
-(void)__getSecurity:(id)arg0 ;
-(void)__getSystemActivities:(id)arg0 XPCManager:(id)arg1 ;
-(void)__getSystemEventIDs:(id)arg0 XPCManager:(id)arg1 ;
-(void)__getWAPISubtype:(id)arg0 ;
-(void)__getWEPSubtype:(id)arg0 ;
-(void)__handleAssocDoneInternalEvent:(id)arg0 ;
-(void)__handleAutoJoinStateChangedInternalEvent:(id)arg0 ;
-(void)__handleKnownNetworkProfileChangedEvent:(id)arg0 ;
-(void)__handleWillAssocInternalEvent:(id)arg0 ;
-(void)__performScan:(id)arg0 XPCConnection:(id)arg1 ;
-(void)__setAutoJoinStatus:(id)arg0 interfaceName:(id)arg1 ;
-(void)__setChannel:(id)arg0 ;
-(void)__setJoinStatus:(id)arg0 interfaceName:(id)arg1 ;
-(void)__setLinkDownStatus:(id)arg0 interfaceName:(id)arg1 ;
-(void)__setLinkQualityMetric:(id)arg0 interfaceName:(id)arg1 ;
-(void)__setRoamStatus:(id)arg0 interfaceName:(id)arg1 ;
-(void)__setupEventHandlers;
-(void)__setupEventHandlersWithInterfaceName:(id)arg0 ;
-(void)__startMonitoringDefaultEventIDs;
-(void)__startMonitoringDefaultEventIDsForInterfaceName:(id)arg0 ;
-(void)__stopMonitoringDefaultEventIDs;
-(void)__stopMonitoringDefaultEventIDsForInterfaceName:(id)arg0 ;
-(void)__updateAutoJoinState:(NSInteger)arg0 interfaceName:(id)arg1 ;
-(void)__updateAutoJoinStatusWithJoin:(id)arg0 ;
-(void)__updateCurrentKnownBSSWithIPConfigurationForInterfaceName:(id)arg0 ;
-(void)__updateEventMonitoring:(id)arg0 ;
-(void)__updateEventRegistration:(id)arg0 XPCManager:(id)arg1 ;
-(void)__updateJoinStatusWithAssoc:(id)arg0 ;
-(void)__updateJoinStatusWithAuth:(id)arg0 ;
-(void)__updateJoinStatusWithEAP8021X:(id)arg0 ;
-(void)__updateJoinStatusWithError:(id)arg0 interaceName:(id)arg1 ;
-(void)__updateJoinStatusWithIPv4:(id)arg0 ;
-(void)__updateJoinStatusWithIPv6:(id)arg0 ;
-(void)__updateMonitoring:(BOOL)arg0 eventIDs:(id)arg1 ;
-(void)__updateWiFiNetworkInterfaces;
-(void)__updateWiFiNetworkServices;
-(void)invalidate;
-(void)setTargetQueue:(id)arg0 requestType:(NSInteger)arg1 interfaceName:(id)arg2 ;
-(void)startEventMonitoring;
-(void)stopEventMonitoring;


@end


#endif