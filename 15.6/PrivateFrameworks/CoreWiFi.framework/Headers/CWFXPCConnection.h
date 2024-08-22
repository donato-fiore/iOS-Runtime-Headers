// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CWFXPCCONNECTION_H
#define CWFXPCCONNECTION_H

@class NSMutableDictionary, NSMutableArray, NSMutableSet, RBSProcessState, NSArray, NSUUID, NSXPCConnection, NSString;
@protocol CWFXPCRequestProtocolInternal, CWFXPCRequestProtocolPrivate, CWFXPCRequestProtocolPrivateReadonly, CWFXPCRequestProtocolPublicWiFi, CWFXPCRequestProtocolPublicCoreWLAN, OS_dispatch_queue, OS_os_transaction, CWFXPCConnectionDelegate;

#import <Foundation/Foundation.h>


@interface CWFXPCConnection : NSObject <CWFXPCRequestProtocolInternal, CWFXPCRequestProtocolPrivate, CWFXPCRequestProtocolPrivateReadonly, CWFXPCRequestProtocolPublicWiFi, CWFXPCRequestProtocolPublicCoreWLAN>

 {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSObject<OS_dispatch_queue> *_requestQueue;
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    NSObject<OS_dispatch_queue> *_ackQueue;
    NSMutableDictionary *_mutablePendingRequestMap;
    NSMutableArray *_mutableActivities;
    NSMutableSet *_mutableEventIDs;
    NSMutableArray *_mutablePendingEventAcknowledgements;
    RBSProcessState *_processState;
    NSMutableDictionary *_coalescedEvents;
    NSObject<OS_os_transaction> *_XPCTransaction;
    NSArray *_bootArgs;
    NSMutableDictionary *_entitlementsCache;
}


@property (readonly, copy, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (readonly, retain, nonatomic) NSXPCConnection *XPCConnection; // ivar: _XPCConnection
@property (readonly, copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (retain) NSObject<CWFXPCConnectionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy, nonatomic) NSString *processName; // ivar: _processName
@property (readonly, nonatomic) NSInteger serviceType; // ivar: _serviceType


+(int)locationAuthorizationStatusForWiFiNetworking;
-(BOOL)__allowXPCRequestWithType:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)__shouldCoalesceEventTypeWhileSuspended:(NSInteger)arg0 ;
-(BOOL)__shouldDropEventTypeWhileSuspended:(NSInteger)arg0 ;
-(BOOL)isVisible;
-(NSUInteger)__defaultTimeoutForRequestType:(NSInteger)arg0 ;
-(id)__addXPCRequestWithType:(NSInteger)arg0 info:(id)arg1 requestParams:(id)arg2 parentRequestUUID:(id)arg3 isParentRequest:(BOOL)arg4 reply:(id)arg5 ;
-(id)__bundleIDFromAuditToken:(struct ? )arg0 ;
-(id)__filterScanResultsForPrivacy:(id)arg0 ;
-(id)__matchedScanResultsWithKnownNetworkProfiles:(id)arg0 scanResults:(id)arg1 ;
-(id)__passpointScanResults:(id)arg0 ;
-(id)__privacyFilteredScanResult:(id)arg0 allowBSSID:(BOOL)arg1 allowCountryCode:(BOOL)arg2 ;
-(id)__processPathFromAuditToken:(struct ? )arg0 ;
-(id)description;
-(id)init;
-(id)initWithServiceType:(NSInteger)arg0 XPCConnection:(id)arg1 ;
-(id)processState;
-(id)registeredActivities;
-(id)registeredEventIDs;
-(int)locationAuthorizationStatus;
-(void)__addXPCGetRequestWithType:(NSInteger)arg0 requestParams:(id)arg1 reply:(id)arg2 ;
-(void)__addXPCRequestWithType:(NSInteger)arg0 info:(id)arg1 requestParams:(id)arg2 reply:(id)arg3 ;
-(void)__coalesceAndCacheEvent:(id)arg0 ;
-(void)__matchKnownNetworksWithScanResults:(id)arg0 parentXPCRequest:(id)arg1 ;
-(void)__peformFollowupANQPForPasspointScanResults:(id)arg0 combinedScanResults:(id)arg1 parameters:(id)arg2 parentXPCRequest:(id)arg3 ;
-(void)__performANQPWithParameters:(id)arg0 parentXPCRequest:(id)arg1 ;
-(void)__performScanWithParameters:(id)arg0 parentXPCRequest:(id)arg1 ;
-(void)__updateXPCTransactionCount;
-(void)addKnownNetworkProfile:(id)arg0 requestParams:(id)arg1 reply:(id)arg2 ;
-(void)associateWithParameters:(id)arg0 requestParams:(id)arg1 reply:(id)arg2 ;
-(void)beginActivity:(id)arg0 requestParams:(id)arg1 reply:(id)arg2 ;
-(void)cancelRequestsWithUUID:(id)arg0 reply:(id)arg1 ;
-(void)disassociateWithReason:(NSInteger)arg0 requestParams:(id)arg1 reply:(id)arg2 ;
-(void)endActivityWithUUID:(id)arg0 requestParams:(id)arg1 reply:(id)arg2 ;
-(void)endAllActivitiesWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)invalidate;
-(void)performANQPWithParameters:(id)arg0 requestParams:(id)arg1 reply:(id)arg2 ;
-(void)performAutoJoinWithParameters:(id)arg0 requestParams:(id)arg1 reply:(id)arg2 ;
-(void)performRangingWithPeerList:(id)arg0 timeout:(NSUInteger)arg1 requestParams:(id)arg2 reply:(id)arg3 ;
-(void)performScanWithParameters:(id)arg0 requestParams:(id)arg1 reply:(id)arg2 ;
-(void)queryAWDLAFTxModeWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryAWDLAvailabilityWindowAPAlignmentWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryAWDLBTLEStateParamsWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryAWDLContinuousElectionAlgorithmEnabledWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryAWDLElectionIDWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryAWDLElectionMetricWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryAWDLElectionParametersWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryAWDLElectionRSSIThresholdsWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryAWDLEncryptionTypeWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryAWDLExtensionStateMachineParamsWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryAWDLGuardTimeWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryAWDLMasterChannelWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryAWDLOpModeWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryAWDLPeerDatabaseWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryAWDLPeerTrafficRegistrationWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryAWDLPreferredChannelsWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryAWDLPresenceModeWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryAWDLSecondaryMasterChannelWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryAWDLSidecarDiagnosticsWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryAWDLSocialTimeSlotsWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryAWDLStatisticsWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryAWDLStrategyWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryAWDLSyncChannelSequenceWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryAWDLSyncEnabledWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryAWDLSyncParametersWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryAWDLSyncStateWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryActivitiesWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryAuthTypeWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryAutoHotspotModeWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryAutoJoinStatusWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryBSSIDForVendorWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryBSSIDWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryBluetoothCoexConfigWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryBluetoothCoexModeWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryBluetoothCoexProfiles2GHzWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryBluetoothCoexProfiles5GHzWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryCCAWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryChainAckWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryChannelWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryCountryCodeWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryCurrentKnownNetworkProfileWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryCurrentScanResultWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryDHCPLeaseExpirationTimeWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryDHCPLeaseStartTimeWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryDNSServerAddressesWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryDTIMIntervalWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryDesenseLevelWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryDesenseWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryDeviceUUIDWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryEAP8021XClientStatusWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryEAP8021XControlModeWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryEAP8021XControlStateWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryEAP8021XSupplicantStateWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryEventIDsWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryGlobalDNSServerAddressesWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryGlobalIPv4AddressesWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryGlobalIPv4InterfaceNameWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryGlobalIPv4NetworkServiceIDWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryGlobalIPv4NetworkServiceNameWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryGlobalIPv4RouterWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryGlobalIPv6AddressesWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryGlobalIPv6InterfaceNameWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryGlobalIPv6NetworkServiceIDWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryGlobalIPv6NetworkServiceNameWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryGlobalIPv6RouterWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryGuardIntervalWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryHardwareMACAddressWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryIO80211ControllerInfoWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryIO80211InterfaceInfoWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryIPv4AddressesWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryIPv4RouterWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryIPv6AddressesWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryIPv6RouterWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryInterfaceCapabilitiesWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryInterfaceNameWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryInterfaceNamesWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryIsNetworkServiceEnabledWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryJoinStatusWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryKnownNetworkProfileMatchingNetworkProfile:(id)arg0 requestParams:(id)arg1 reply:(id)arg2 ;
-(void)queryKnownNetworkProfileMatchingScanResult:(id)arg0 requestParams:(id)arg1 reply:(id)arg2 ;
-(void)queryKnownNetworkProfilesWithProperties:(id)arg0 requestParams:(id)arg1 reply:(id)arg2 ;
-(void)queryLQMSummaryWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryLeakyAPStatsWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryLinkDownStatusWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryLinkQualityMetricWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryMACAddressWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryMCSIndexWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryNetworkReachabilityWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryNetworkServiceIDWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryNetworkServiceNameWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryNoiseWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryNumberOfSpatialStreamsWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryOpModeWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryPHYModeWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryParentInterfaceNameWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryPowerDebugInfoWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryPowerStateWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryPowerWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryRSSIWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryRangingCapabilitiesWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryRoamStatusWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryRxRateWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)querySSIDForVendorWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)querySSIDWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)querySecurityWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)querySupportedChannelsWithCountryCode:(id)arg0 requestParams:(id)arg1 reply:(id)arg2 ;
-(void)querySupportedPHYModesWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)querySystemAWDLPeerTrafficRegistrationsWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)querySystemActivitiesWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)querySystemEventIDsWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryThermalIndexWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryTxChainPowerWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryTxPowerWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryTxRateWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryUserAutoJoinStateWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryVirtualInterfaceNamesWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryVirtualInterfaceRoleWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryWAPISubtypeWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryWEPSubtypeWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)queryWoWEnabledWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)removeKnownNetworkProfile:(id)arg0 reason:(NSInteger)arg1 requestParams:(id)arg2 reply:(id)arg3 ;
-(void)resume;
-(void)sendXPCEvent:(id)arg0 reply:(id)arg1 ;
-(void)setAWDLPeerTrafficRegistration:(id)arg0 requestParams:(id)arg1 reply:(id)arg2 ;
-(void)setAutoHotspotMode:(NSInteger)arg0 requestParams:(id)arg1 reply:(id)arg2 ;
-(void)setChannel:(id)arg0 requestParams:(id)arg1 reply:(id)arg2 ;
-(void)setPower:(BOOL)arg0 requestParams:(id)arg1 reply:(id)arg2 ;
-(void)setProcessState:(id)arg0 ;
-(void)setRangeable:(BOOL)arg0 peerList:(id)arg1 requestParams:(id)arg2 reply:(id)arg3 ;
-(void)setRangingIdentifier:(id)arg0 requestParams:(id)arg1 reply:(id)arg2 ;
-(void)setThermalIndex:(NSInteger)arg0 requestParams:(id)arg1 reply:(id)arg2 ;
-(void)setUserAutoJoinState:(BOOL)arg0 requestParams:(id)arg1 reply:(id)arg2 ;
-(void)startAWDLPeerAssistedDiscoveryWithParameters:(id)arg0 requestParams:(id)arg1 reply:(id)arg2 ;
-(void)startMonitoringEvent:(id)arg0 requestParams:(id)arg1 reply:(id)arg2 ;
-(void)stopAWDLPeerAssistedDiscoveryWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)stopMonitoringAllEventsWithRequestParams:(id)arg0 reply:(id)arg1 ;
-(void)stopMonitoringEvent:(id)arg0 requestParams:(id)arg1 reply:(id)arg2 ;
-(void)suspend;
-(void)updateKnownNetworkProfile:(id)arg0 properties:(id)arg1 requestParams:(id)arg2 reply:(id)arg3 ;


@end


#endif