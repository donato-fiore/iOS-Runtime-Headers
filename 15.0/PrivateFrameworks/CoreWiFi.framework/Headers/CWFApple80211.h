// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CWFAPPLE80211_H
#define CWFAPPLE80211_H

@class NSThread, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface CWFApple80211 : NSObject {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSThread *_callbackThread;
    NSObject<OS_dispatch_queue> *_eventQueue;
    NSObject<OS_dispatch_source> *_eventSource;
    *_Apple80211 _a11Ref;
    NSMutableDictionary *_mutableInterfaceNameEventMap;
}


@property (copy) id *eventHandler; // ivar: _eventHandler
@property (readonly, copy, nonatomic) NSString *interfaceName; // ivar: _interfaceName


-(BOOL)isAWDLEnabled;
-(BOOL)isMonitoringEventType:(unsigned int)arg0 interfaceName:(id)arg1 ;
-(BOOL)setAWDLPeerTrafficRegistration:(id)arg0 error:(*id)arg1 ;
-(BOOL)setChannel:(id)arg0 error:(*id)arg1 ;
-(id)AWDLAFTxMode:(*id)arg0 ;
-(id)AWDLAvailabilityWindowAPAlignment:(*id)arg0 ;
-(id)AWDLBTLEStateParameters:(*id)arg0 ;
-(id)AWDLContinuousElectionAlgorithmEnabled:(*id)arg0 ;
-(id)AWDLElectionID:(*id)arg0 ;
-(id)AWDLElectionMetric:(*id)arg0 ;
-(id)AWDLElectionParameters:(*id)arg0 ;
-(id)AWDLElectionRSSIThresholds:(*id)arg0 ;
-(id)AWDLEncryptionType:(*id)arg0 ;
-(id)AWDLExtensionStateMachineParameters:(*id)arg0 ;
-(id)AWDLGuardTime:(*id)arg0 ;
-(id)AWDLMasterChannel:(*id)arg0 ;
-(id)AWDLOpMode:(*id)arg0 ;
-(id)AWDLPeerDatabase:(*id)arg0 ;
-(id)AWDLPeerTrafficRegistration:(*id)arg0 ;
-(id)AWDLPreferredChannels:(*id)arg0 ;
-(id)AWDLPresenceMode:(*id)arg0 ;
-(id)AWDLSecondaryMasterChannel:(*id)arg0 ;
-(id)AWDLSidecarDiagnostics:(*id)arg0 ;
-(id)AWDLSocialTimeSlots:(*id)arg0 ;
-(id)AWDLStatistics:(*id)arg0 ;
-(id)AWDLStrategy:(*id)arg0 ;
-(id)AWDLSyncChannelSequence:(*id)arg0 ;
-(id)AWDLSyncEnabled:(*id)arg0 ;
-(id)AWDLSyncParameters:(*id)arg0 ;
-(id)AWDLSyncState:(*id)arg0 ;
-(id)BSSID:(*id)arg0 ;
-(id)DTIMInterval:(*id)arg0 ;
-(id)LQMSummary:(*id)arg0 ;
-(id)MCSIndex:(*id)arg0 ;
-(id)RSSI:(*id)arg0 ;
-(id)SSID:(*id)arg0 ;
-(id)__MCSIndex:(*id)arg0 ;
-(id)__VHTGuardInterval:(*id)arg0 ;
-(id)__VHTMCSIndex:(*id)arg0 ;
-(id)__VHTNumberOfSpatialStreams:(*id)arg0 ;
-(id)__countryChannelsWithCountryCode:(id)arg0 error:(*id)arg1 ;
-(id)__guardInterval:(*id)arg0 ;
-(id)__hardwareSupportedChannels:(*id)arg0 ;
-(id)__legacySupportedChannels:(*id)arg0 ;
-(id)__numberOfSpatialStreams:(*id)arg0 ;
-(id)__scanDictionaryWithParameters:(id)arg0 ;
-(id)__supportedChannelsWithCountryCode:(id)arg0 error:(*id)arg1 ;
-(id)activePHYMode:(*id)arg0 ;
-(id)authType:(*id)arg0 ;
-(id)bluetoothCoexistenceConfig:(*id)arg0 ;
-(id)bluetoothCoexistenceMode:(*id)arg0 ;
-(id)bluetoothCoexistenceProfiles2GHz:(*id)arg0 ;
-(id)bluetoothCoexistenceProfiles5GHz:(*id)arg0 ;
-(id)capabilities:(*id)arg0 ;
-(id)cca:(*id)arg0 ;
-(id)chainAck:(*id)arg0 ;
-(id)channel:(*id)arg0 ;
-(id)countryCode:(*id)arg0 ;
-(id)desense:(*id)arg0 ;
-(id)desenseLevel:(*id)arg0 ;
-(id)guardInterval:(*id)arg0 ;
-(id)init;
-(id)initWithInterfaceName:(id)arg0 ;
-(id)interfaceNames:(*id)arg0 ;
-(id)leakyAPStats:(*id)arg0 ;
-(id)linkChangedEventData:(*id)arg0 ;
-(id)noise:(*id)arg0 ;
-(id)numberOfSpatialStreams:(*id)arg0 ;
-(id)opMode:(*id)arg0 ;
-(id)perAntennaRSSI:(*id)arg0 ;
-(id)powerDebugInfo:(*id)arg0 ;
-(id)powerOn:(*id)arg0 ;
-(id)powerState:(*id)arg0 ;
-(id)rangingCapabilities:(*id)arg0 ;
-(id)rxRate:(*id)arg0 ;
-(id)supportedChannelsWithCountryCode:(id)arg0 error:(*id)arg1 ;
-(id)supportedPHYModes:(*id)arg0 ;
-(id)txChainPower:(*id)arg0 ;
-(id)txPower:(*id)arg0 ;
-(id)txRate:(*id)arg0 ;
-(id)virtualInterfaceNames:(*id)arg0 ;
-(id)virtualInterfaceParent:(*id)arg0 ;
-(id)virtualInterfaceRole:(*id)arg0 ;
-(id)wowEnabled:(*id)arg0 ;
-(int)startMonitoringEventWithType:(unsigned int)arg0 interfaceName:(id)arg1 ;
-(struct _Apple80211 *)__apple80211RefWithInterfaceName:(id)arg0 ;
-(void)__setupEventMonitoring;
-(void)dealloc;
-(void)invalidate;
-(void)stopMonitoringEventWithType:(unsigned int)arg0 interfaceName:(id)arg1 ;


@end


#endif