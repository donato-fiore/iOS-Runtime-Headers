// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CWFINTERFACE_H
#define CWFINTERFACE_H

@class AWDLServiceDiscoveryManager;

#import <Foundation/Foundation.h>

#import "CWFClient.h"
#import "CWFRequestParameters.h"

@interface CWFInterface : NSObject

@property (nonatomic, getter=isActivated) BOOL activated; // ivar: _activated
@property (retain, nonatomic) AWDLServiceDiscoveryManager *awdlServiceManager; // ivar: _awdlServiceManager
@property (readonly, nonatomic) CWFClient *client; // ivar: _client
@property (copy) id *eventHandler;
@property (copy) id *invalidationHandler;
@property (readonly, nonatomic) CWFRequestParameters *requestParameters; // ivar: _requestParameters


+(BOOL)logRedactionDisabled;
+(void)setLogRedactionDisabled:(BOOL)arg0 ;
-(BOOL)addKnownNetworkProfile:(id)arg0 error:(*id)arg1 ;
-(BOOL)applyUserSettings:(id)arg0 properties:(id)arg1 error:(*id)arg2 ;
-(BOOL)associateWithParameters:(id)arg0 error:(*id)arg1 ;
-(BOOL)beginActivity:(id)arg0 error:(*id)arg1 ;
-(BOOL)beginActivityType:(NSInteger)arg0 reason:(id)arg1 error:(*id)arg2 ;
-(BOOL)cancelRequestsWithUUID:(id)arg0 error:(*id)arg1 ;
-(BOOL)isNetworkServiceEnabled;
-(BOOL)performAutoJoinWithParameters:(id)arg0 error:(*id)arg1 ;
-(BOOL)powerOn;
-(BOOL)removeKnownNetworkProfile:(id)arg0 reason:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)setAWDLPeerTrafficRegistration:(id)arg0 error:(*id)arg1 ;
-(BOOL)setAutoHotspotMode:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)setChannel:(id)arg0 error:(*id)arg1 ;
-(BOOL)setPower:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)setRangeable:(BOOL)arg0 peerList:(id)arg1 error:(*id)arg2 ;
-(BOOL)setRangingIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)setThermalIndex:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)setUserAutoJoinDisabled:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)startAWDLPeerAssistedDiscoveryWithParameters:(id)arg0 error:(*id)arg1 ;
-(BOOL)startMonitoringEvent:(id)arg0 error:(*id)arg1 ;
-(BOOL)startMonitoringEventType:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)updateKnownNetworkProfile:(id)arg0 properties:(id)arg1 error:(*id)arg2 ;
-(BOOL)userAutoJoinDisabled;
-(BOOL)wakeOnWirelessEnabled;
-(CGFloat)rxRate;
-(CGFloat)txPower;
-(CGFloat)txRate;
-(NSInteger)RSSI;
-(NSInteger)WAPISubtype;
-(NSInteger)WEPSubtype;
-(NSInteger)autoHotspotMode;
-(NSInteger)countryBandSupport;
-(NSInteger)noise;
-(NSInteger)serviceType;
-(NSInteger)thermalIndex;
-(NSUInteger)CCA;
-(NSUInteger)DTIMInterval;
-(NSUInteger)MCSIndex;
-(NSUInteger)guardInterval;
-(NSUInteger)numberOfSpatialStreams;
-(NSUInteger)securityType;
-(id)AWDL;
-(id)AWDLAFTxMode;
-(id)AWDLAvailabilityWindowAPAlignment;
-(id)AWDLBTLEStateParameters;
-(id)AWDLContinuousElectionAlgorithmEnabled;
-(id)AWDLElectionID;
-(id)AWDLElectionMetric;
-(id)AWDLElectionParameters;
-(id)AWDLElectionRSSIThresholds;
-(id)AWDLEncryptionType;
-(id)AWDLExtensionStateMachineParameters;
-(id)AWDLGuardTime;
-(id)AWDLMasterChannel;
-(id)AWDLOpMode;
-(id)AWDLPeerDatabase;
-(id)AWDLPeerTrafficRegistration;
-(id)AWDLPreferredChannels;
-(id)AWDLPresenceMode;
-(id)AWDLSecondaryMasterChannel;
-(id)AWDLSidecarDiagnostics;
-(id)AWDLSocialTimeSlots;
-(id)AWDLStatistics;
-(id)AWDLStrategy;
-(id)AWDLSyncChannelSequence;
-(id)AWDLSyncEnabled;
-(id)AWDLSyncParameters;
-(id)AWDLSyncState;
-(id)BSSID;
-(id)BSSIDForVendor;
-(id)DHCPLeaseExpiresAt;
-(id)DHCPLeaseStartedAt;
-(id)DHCPServerID;
-(id)DHCPv6ServerID;
-(id)DNSServerAddresses;
-(id)IO80211ControllerInfo;
-(id)IO80211InterfaceInfo;
-(id)IPv4ARPResolvedHardwareAddress;
-(id)IPv4ARPResolvedIPAddress;
-(id)IPv4Addresses;
-(id)IPv4NetworkSignature;
-(id)IPv4RouterAddress;
-(id)IPv4SubnetMasks;
-(id)IPv6Addresses;
-(id)IPv6NetworkSignature;
-(id)IPv6RouterAddress;
-(id)LQMSummary;
-(id)MACAddress;
-(id)SSID;
-(id)SSIDForVendor;
-(id)__adjustedRequestParameters;
-(id)activities;
-(id)authType;
-(id)autoJoinStatistics;
-(id)auxiliaryInterface;
-(id)background;
-(id)bluetoothCoexistenceConfig;
-(id)bluetoothCoexistenceProfiles2GHz;
-(id)bluetoothCoexistenceProfiles5GHz;
-(id)cachedAutoJoinMetric;
-(id)cachedAutoJoinStatus;
-(id)cachedJoinStatus;
-(id)cachedLinkDownStatus;
-(id)cachedLinkQualityMetric;
-(id)cachedRoamStatus;
-(id)capabilities;
-(id)chainAck;
-(id)channel;
-(id)countryCode;
-(id)currentKnownNetworkProfile;
-(id)currentScanResult;
-(id)desense;
-(id)desenseLevel;
-(id)deviceUUID;
-(id)eventHandlerWithEventID:(SEL)arg0 ;
-(id)eventIDs;
-(id)globalDNSServerAddresses;
-(id)globalIPv4Addresses;
-(id)globalIPv4InterfaceName;
-(id)globalIPv4NetworkServiceID;
-(id)globalIPv4NetworkServiceName;
-(id)globalIPv4RouterAddress;
-(id)globalIPv6Addresses;
-(id)globalIPv6InterfaceName;
-(id)globalIPv6NetworkServiceID;
-(id)globalIPv6NetworkServiceName;
-(id)globalIPv6RouterAddress;
-(id)hardwareMACAddress;
-(id)highPriority;
-(id)init;
-(id)initWithClient:(id)arg0 requestParameters:(id)arg1 ;
-(id)initWithServiceType:(NSInteger)arg0 ;
-(id)interfaceName;
-(id)interfaceNames;
-(id)knownNetworkProfileMatchingNetworkProfile:(id)arg0 ;
-(id)knownNetworkProfileMatchingScanResult:(id)arg0 ;
-(id)knownNetworkProfilesWithProperties:(id)arg0 ;
-(id)leakyAPStats;
-(id)lowPriority;
-(id)networkName;
-(id)networkServiceID;
-(id)networkServiceName;
-(id)parentInterfaceName;
-(id)perAntennaRSSI;
-(id)performANQPWithParameters:(id)arg0 error:(*id)arg1 ;
-(id)performRangingWithPeerList:(id)arg0 timeout:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)performScanWithParameters:(id)arg0 error:(*id)arg1 ;
-(id)performSensingWithParameters:(id)arg0 error:(*id)arg1 ;
-(id)powerDebugInfo;
-(id)powerState;
-(id)rangingCapabilities;
-(id)supportedChannel:(NSUInteger)arg0 band:(int)arg1 width:(int)arg2 countryCode:(id)arg3 ;
-(id)supportedChannelsWithCountryCode:(id)arg0 ;
-(id)systemActivities;
-(id)systemEventIDs;
-(id)targetQueue;
-(id)txChainPower;
-(id)userInitiated;
-(id)userInteractive;
-(id)userSettings;
-(id)utility;
-(id)veryHighPriority;
-(id)veryLowPriority;
-(id)virtualInterfaceNames;
-(int)EAP8021XClientStatus;
-(int)PHYMode;
-(int)bluetoothCoexistenceMode;
-(int)opMode;
-(int)supportedPHYModes;
-(int)virtualInterfaceRole;
-(unsigned int)EAP8021XControlMode;
-(unsigned int)EAP8021XControlState;
-(unsigned int)EAP8021XSupplicantState;
-(unsigned int)__flagsForChannelBand:(int)arg0 width:(int)arg1 ;
-(unsigned int)reachabilityFlags;
-(void)activate;
-(void)associateWithParameters:(id)arg0 reply:(id)arg1 ;
-(void)clearAllEventHandlers;
-(void)disassociateWithReason:(NSInteger)arg0 ;
-(void)endActivity:(id)arg0 ;
-(void)endActivityType:(NSInteger)arg0 ;
-(void)endAllActivities;
-(void)invalidate;
-(void)performANQPWithParameters:(id)arg0 reply:(id)arg1 ;
-(void)performActivity:(id)arg0 usingBlock:(id)arg1 ;
-(void)performAutoJoinWithParameters:(id)arg0 reply:(id)arg1 ;
-(void)performRangingWithPeerList:(id)arg0 timeout:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)performScanWithParameters:(id)arg0 reply:(id)arg1 ;
-(void)performSensingWithParameters:(id)arg0 reply:(id)arg1 ;
-(void)resetAutoJoinStatistics;
-(void)resume;
-(void)setTargetQueue:(id)arg0 ;
-(void)stopAWDLPeerAssistedDiscovery;
-(void)stopMonitoringAllEvents;
-(void)stopMonitoringEvent:(id)arg0 ;
-(void)stopMonitoringEventType:(NSInteger)arg0 ;
-(void)suspend;


@end


#endif