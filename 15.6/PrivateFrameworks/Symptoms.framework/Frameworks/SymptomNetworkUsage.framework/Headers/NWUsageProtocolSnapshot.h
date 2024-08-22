// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NWUSAGEPROTOCOLSNAPSHOT_H
#define NWUSAGEPROTOCOLSNAPSHOT_H

@class NSString, NSDate, NSUUID, NSData;


#import "NWUsageSnapshot.h"

@interface NWUsageProtocolSnapshot : NWUsageSnapshot {
    unsigned int _flags;
    update_subset_for_deltas _prev_items;
    nstat_msg_src_update_convenient _nstat_update;
}


@property (readonly, nonatomic) *update_subset_for_deltas _update_delta_ptr;
@property (readonly, nonatomic) *nstat_msg_src_update_convenient _update_ptr;
@property (readonly, nonatomic) BOOL changedAddress;
@property (readonly, nonatomic) BOOL changedEUUID;
@property (readonly, nonatomic) BOOL changedEpid;
@property (readonly, nonatomic) BOOL changedLocalAddress;
@property (readonly, nonatomic) BOOL changedMetadata;
@property (readonly, nonatomic) BOOL changedOwnership;
@property (readonly, nonatomic) BOOL changedPid;
@property (readonly, nonatomic) BOOL changedProcname;
@property (readonly, nonatomic) BOOL changedRemoteAddress;
@property (readonly, nonatomic) BOOL changedUUID;
@property (readonly, nonatomic) NSString *countsDescription;
@property (readonly, nonatomic) NSUInteger deltaRxBytes;
@property (readonly, nonatomic) NSUInteger deltaRxCellularBytes;
@property (readonly, nonatomic) NSUInteger deltaRxPackets;
@property (readonly, nonatomic) NSUInteger deltaRxWiFiBytes;
@property (readonly, nonatomic) NSUInteger deltaRxWiredBytes;
@property (readonly, nonatomic) NSUInteger deltaTxBytes;
@property (readonly, nonatomic) NSUInteger deltaTxCellularBytes;
@property (readonly, nonatomic) NSUInteger deltaTxPackets;
@property (readonly, nonatomic) NSUInteger deltaTxWiFiBytes;
@property (readonly, nonatomic) NSUInteger deltaTxWiredBytes;
@property (readonly, nonatomic) NSString *descriptorDescription;
@property (readonly, nonatomic) BOOL failedConsistencyChecks;
@property (readonly, nonatomic) BOOL failedFlowswitchValuesLookup; // ivar: _failedFlowswitchValuesLookup
@property (readonly, nonatomic) BOOL failedNegativeDeltaCheck;
@property (readonly, nonatomic) BOOL failedRouteValuesLookup; // ivar: _failedRouteValuesLookup
@property (readonly, nonatomic) BOOL failedRxCountCheck;
@property (readonly, nonatomic) BOOL failedSkywalkAction; // ivar: _failedSkywalkAction
@property (readonly, nonatomic) BOOL failedTCPMultipleInterfaceCheck;
@property (readonly, nonatomic) CGFloat flowDuration; // ivar: _flowDuration
@property (readonly, nonatomic) NSUInteger flowIdentifier;
@property (readonly, nonatomic) CGFloat flowSnapshotTimeIntervalSince1970; // ivar: _flowSnapshotTimeIntervalSince1970
@property (nonatomic) CGFloat flowSnapshotTimeIntervalSinceReferenceDate; // ivar: _flowSnapshotTimeIntervalSinceReferenceDate
@property (readonly, nonatomic) NSDate *flowSnapshotTimestamp; // ivar: _flowSnapshotTimestamp
@property (readonly, nonatomic) NSUInteger flowStartContinuousTime; // ivar: _flowStartContinuousTime
@property (readonly, nonatomic) CGFloat flowStartTimeIntervalSince1970; // ivar: _flowStartTimeIntervalSince1970
@property (readonly, nonatomic) CGFloat flowStartTimeIntervalSinceReferenceDate; // ivar: _flowStartTimeIntervalSinceReferenceDate
@property (readonly, nonatomic) NSDate *flowStartTimestamp; // ivar: _flowStartTimestamp
@property (readonly, nonatomic) NSString *flowType;
@property (readonly, nonatomic) NSString *flowTypeLowerCase;
@property (readonly, nonatomic) BOOL flowUsesChannels; // ivar: _flowUsesChannels
@property (readonly, nonatomic) NSUUID *flowuuid; // ivar: _flowuuid
@property (readonly, nonatomic) BOOL hasCellTraffic; // ivar: _hasCellTraffic
@property (readonly, nonatomic) BOOL hasCellTrafficDelta; // ivar: _hasCellTrafficDelta
@property (readonly, nonatomic) BOOL hasLocalDestination; // ivar: _hasLocalDestination
@property (readonly, nonatomic) BOOL hasNonLocalDestination; // ivar: _hasNonLocalDestination
@property (readonly, nonatomic) BOOL hasTraffic; // ivar: _hasTraffic
@property (readonly, nonatomic) BOOL hasTrafficDelta; // ivar: _hasTrafficDelta
@property (readonly, nonatomic) BOOL hasWiFiTraffic; // ivar: _hasWiFiTraffic
@property (readonly, nonatomic) BOOL hasWiFiTrafficDelta; // ivar: _hasWiFiTrafficDelta
@property (readonly, nonatomic) BOOL hasWiredTraffic; // ivar: _hasWiredTraffic
@property (readonly, nonatomic) BOOL hasWiredTrafficDelta; // ivar: _hasWiredTrafficDelta
@property (readonly, nonatomic) BOOL interfaceAWDL; // ivar: _interfaceAWDL
@property (readonly, nonatomic) BOOL interfaceCellular; // ivar: _interfaceCellular
@property (readonly, nonatomic) BOOL interfaceCellularViaFallback; // ivar: _interfaceCellularViaFallback
@property (readonly, nonatomic) NSString *interfaceCellularViaFallbackString;
@property (readonly, nonatomic) BOOL interfaceCellularViaFastFallback; // ivar: _interfaceCellularViaFastFallback
@property (readonly, nonatomic) BOOL interfaceCellularViaIndependentFallback; // ivar: _interfaceCellularViaIndependentFallback
@property (readonly, nonatomic) BOOL interfaceCellularViaPreferredFallback; // ivar: _interfaceCellularViaPreferredFallback
@property (readonly, nonatomic) BOOL interfaceCellularViaSlowFallback; // ivar: _interfaceCellularViaSlowFallback
@property (readonly, nonatomic) BOOL interfaceCompanionLink; // ivar: _interfaceCompanionLink
@property (readonly, nonatomic) BOOL interfaceConstrained; // ivar: _interfaceConstrained
@property (readonly, nonatomic) BOOL interfaceExpensive; // ivar: _interfaceExpensive
@property (readonly, nonatomic) unsigned int interfaceIndex; // ivar: _interfaceIndex
@property (readonly, nonatomic) BOOL interfaceLLW; // ivar: _interfaceLLW
@property (readonly, nonatomic) BOOL interfaceLoopback; // ivar: _interfaceLoopback
@property (readonly, nonatomic) BOOL interfaceUnknown; // ivar: _interfaceUnknown
@property (readonly, nonatomic) BOOL interfaceWiFi; // ivar: _interfaceWiFi
@property (readonly, nonatomic) BOOL interfaceWired; // ivar: _interfaceWired
@property (readonly, nonatomic) BOOL isIPv4;
@property (readonly, nonatomic) BOOL isIPv6;
@property (readonly, nonatomic) NSData *localAddress; // ivar: _localAddress
@property (readonly, nonatomic) unsigned short localPort; // ivar: _localPort
@property (readonly, nonatomic) NSUInteger networkActivityMapPart1; // ivar: _networkActivityMapPart1
@property (readonly, nonatomic) NSUInteger networkActivityMapPart2; // ivar: _networkActivityMapPart2
@property (readonly, nonatomic) NSUInteger networkActivityMapStartTime; // ivar: _networkActivityMapStartTime
@property (readonly, nonatomic) unsigned int receiveBufferSize; // ivar: _receiveBufferSize
@property (readonly, nonatomic) unsigned int receiveBufferUsed; // ivar: _receiveBufferUsed
@property (readonly, nonatomic) NSData *remoteAddress; // ivar: _remoteAddress
@property (readonly, nonatomic) unsigned short remotePort; // ivar: _remotePort
@property (readonly, nonatomic) NSUInteger rxBytes;
@property (readonly, nonatomic) NSUInteger rxCellularBytes;
@property (readonly, nonatomic) NSUInteger rxPackets;
@property (readonly, nonatomic) NSUInteger rxWiFiBytes;
@property (readonly, nonatomic) NSUInteger rxWiredBytes;
@property (readonly, nonatomic) NSString *savedCountsDescription;
@property (readonly, nonatomic) unsigned int trafficClass; // ivar: _trafficClass
@property (readonly, nonatomic) NSUInteger txBytes;
@property (readonly, nonatomic) NSUInteger txCellularBytes;
@property (readonly, nonatomic) NSUInteger txPackets;
@property (readonly, nonatomic) NSUInteger txWiFiBytes;
@property (readonly, nonatomic) NSUInteger txWiredBytes;
@property (nonatomic) BOOL uiBackgroundAudioCapable; // ivar: _uiBackgroundAudioCapable
@property (readonly, nonatomic) NSString *verboseDescription;
@property (readonly, nonatomic) NSUUID *vuuid; // ivar: _vuuid


+(CGFloat)_intervalWithContinuousTime:(NSUInteger)arg0 ;
+(CGFloat)_referenceIntervalWithContinuousTime:(NSUInteger)arg0 ;
+(id)_dateWithContinuousTime:(NSUInteger)arg0 ;
+(id)_snapshotWithDictionary:(id)arg0 ;
+(id)snapshotWithDictionary:(id)arg0 ;
+(void)_initializeQUICDescriptor:(struct nstat_tcp_descriptor *)arg0 fromDictionary:(id)arg1 ;
+(void)_initializeTCPDescriptor:(struct nstat_tcp_descriptor *)arg0 fromDictionary:(id)arg1 ;
+(void)_initializeUDPDescriptor:(struct nstat_udp_descriptor *)arg0 fromDictionary:(id)arg1 ;
+(void)initialize;
-(BOOL)attributedEntityIsBundleName;
-(BOOL)attributedEntityIsProcessName;
-(BOOL)fixedInterfaceUseExpected:(unsigned int)arg0 ;
-(BOOL)isSimpleInterface:(unsigned int)arg0 ;
-(BOOL)noBluetoothUseExpected:(unsigned int)arg0 ;
-(BOOL)snapshotAppStateIsForeground;
-(BOOL)startAppStateIsForeground;
-(CGFloat)_rttAverage;
-(CGFloat)_rttMinimum;
-(CGFloat)_rttVariation;
-(NSUInteger)_adjustedByteCount:(NSUInteger)arg0 otherBytes:(NSUInteger)arg1 packets:(NSUInteger)arg2 ;
-(NSUInteger)_byteOverheadForPacketCount:(NSUInteger)arg0 ;
-(NSUInteger)_deltaForCurrentBytes:(NSUInteger)arg0 otherBytes:(NSUInteger)arg1 packets:(NSUInteger)arg2 prevBytes:(NSUInteger)arg3 prevOtherBytes:(NSUInteger)arg4 prevPackets:(NSUInteger)arg5 ;
-(NSUInteger)sourceIdentifier;
-(id)_createNSUUIDForBytes:(unsigned char)arg0 ;
-(id)_nstatCountsDictionaryForm:(struct nstat_counts *)arg0 ;
-(id)_quicDescriptorDictionaryForm:(struct nstat_tcp_descriptor *)arg0 ;
-(id)_tcpDescriptorDictionaryForm:(struct nstat_tcp_descriptor *)arg0 ;
-(id)_udpDescriptorDictionaryForm:(struct nstat_udp_descriptor *)arg0 ;
-(id)attributionReasonString;
-(id)briefDescription;
-(id)description;
-(id)dictionaryForm;
-(id)domainDescription;
-(id)initWithUpdate:(struct nstat_msg_src_update_convenient *)arg0 startTime:(CGFloat)arg1 flowFlags:(unsigned int)arg2 previously:(struct update_subset_for_deltas *)arg3 ;
-(id)snapshotAppStateString;
-(id)snapshotReasonString;
-(id)snapshotType;
-(id)snapshotTypeLowerCase;
-(id)startAppStateString;
-(unsigned int)_deltaRxDuplicateBytes;
-(unsigned int)_deltaRxOutOfOrderBytes;
-(unsigned int)_deltaTxRetransmittedBytes;
-(unsigned int)_rxDuplicateBytes;
-(unsigned int)_rxOutOfOrderBytes;
-(unsigned int)_txRetransmittedBytes;
-(void)runConsistencyChecks;
-(void)setAppState:(unsigned int)arg0 screenStateOn:(BOOL)arg1 startAppState:(unsigned int)arg2 startScreenStateOn:(BOOL)arg3 ;
-(void)setAttribution:(id)arg0 derivation:(int)arg1 delegateName:(id)arg2 isADaemon:(BOOL)arg3 ;
-(void)setDomainName:(id)arg0 owner:(id)arg1 context:(id)arg2 attributedBundleId:(id)arg3 isTracker:(BOOL)arg4 isNonAppInitiated:(BOOL)arg5 isSilent:(BOOL)arg6 ;
-(void)setIsUIBackgroundAudioCapable:(BOOL)arg0 ;


@end


#endif