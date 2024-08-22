// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWAWDLIBNETCORECONNECTIONSTATISTICSREPORT_H
#define NWAWDLIBNETCORECONNECTIONSTATISTICSREPORT_H

@class PBCodable;
@protocol NSCopying;



@interface NWAWDLibnetcoreConnectionStatisticsReport : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger appDataStallTimerMsecs; // ivar: _appDataStallTimerMsecs
@property (nonatomic) NSUInteger appReportingDataStallCount; // ivar: _appReportingDataStallCount
@property (nonatomic) NSUInteger bestRTTMsecs; // ivar: _bestRTTMsecs
@property (nonatomic) NSUInteger betterRouteEventCount; // ivar: _betterRouteEventCount
@property (nonatomic) NSUInteger bytesDuplicate; // ivar: _bytesDuplicate
@property (nonatomic) NSUInteger bytesIn; // ivar: _bytesIn
@property (nonatomic) NSUInteger bytesOut; // ivar: _bytesOut
@property (nonatomic) NSUInteger bytesOutOfOrder; // ivar: _bytesOutOfOrder
@property (nonatomic) NSUInteger bytesRetransmitted; // ivar: _bytesRetransmitted
@property (nonatomic) BOOL cellularFallback; // ivar: _cellularFallback
@property (nonatomic) BOOL cellularRRCConnected; // ivar: _cellularRRCConnected
@property (nonatomic) BOOL connected; // ivar: _connected
@property (nonatomic) int connectedInterfaceType; // ivar: _connectedInterfaceType
@property (nonatomic) NSUInteger connectionEstablishmentTimeMsecs; // ivar: _connectionEstablishmentTimeMsecs
@property (nonatomic) NSUInteger connectionReuseCount; // ivar: _connectionReuseCount
@property (nonatomic) NSUInteger currentRTTMsecs; // ivar: _currentRTTMsecs
@property (nonatomic) BOOL dNSAnswersCached; // ivar: _dNSAnswersCached
@property (nonatomic) NSUInteger dNSResolvedTimeMsecs; // ivar: _dNSResolvedTimeMsecs
@property (nonatomic) BOOL firstParty; // ivar: _firstParty
@property (nonatomic) NSUInteger flowDurationMsecs; // ivar: _flowDurationMsecs
@property (nonatomic) BOOL hasAppDataStallTimerMsecs;
@property (nonatomic) BOOL hasAppReportingDataStallCount;
@property (nonatomic) BOOL hasBestRTTMsecs;
@property (nonatomic) BOOL hasBetterRouteEventCount;
@property (nonatomic) BOOL hasBytesDuplicate;
@property (nonatomic) BOOL hasBytesIn;
@property (nonatomic) BOOL hasBytesOut;
@property (nonatomic) BOOL hasBytesOutOfOrder;
@property (nonatomic) BOOL hasBytesRetransmitted;
@property (nonatomic) BOOL hasCellularFallback;
@property (nonatomic) BOOL hasCellularRRCConnected;
@property (nonatomic) BOOL hasConnected;
@property (nonatomic) BOOL hasConnectedInterfaceType;
@property (nonatomic) BOOL hasConnectionEstablishmentTimeMsecs;
@property (nonatomic) BOOL hasConnectionReuseCount;
@property (nonatomic) BOOL hasCurrentRTTMsecs;
@property (nonatomic) BOOL hasDNSAnswersCached;
@property (nonatomic) BOOL hasDNSResolvedTimeMsecs;
@property (nonatomic) BOOL hasFirstParty;
@property (nonatomic) BOOL hasFlowDurationMsecs;
@property (nonatomic) BOOL hasIPAddressAttemptCount;
@property (nonatomic) BOOL hasInterfaceType;
@property (nonatomic) BOOL hasKernelReportedStalls;
@property (nonatomic) BOOL hasKernelReportingConnectionStalled;
@property (nonatomic) BOOL hasKernelReportingReadStalled;
@property (nonatomic) BOOL hasKernelReportingWriteStalled;
@property (nonatomic) BOOL hasMultipathBytesInCell;
@property (nonatomic) BOOL hasMultipathBytesInInitial;
@property (nonatomic) BOOL hasMultipathBytesInWiFi;
@property (nonatomic) BOOL hasMultipathBytesOutCell;
@property (nonatomic) BOOL hasMultipathBytesOutInitial;
@property (nonatomic) BOOL hasMultipathBytesOutWiFi;
@property (nonatomic) BOOL hasMultipathServiceType;
@property (nonatomic) BOOL hasPacketsDuplicate;
@property (nonatomic) BOOL hasPacketsIn;
@property (nonatomic) BOOL hasPacketsOut;
@property (nonatomic) BOOL hasPacketsOutOfOrder;
@property (nonatomic) BOOL hasPacketsRetransmitted;
@property (nonatomic) BOOL hasPreferFallback;
@property (nonatomic) BOOL hasRTTvariance;
@property (nonatomic) BOOL hasSmoothedRTTMsecs;
@property (nonatomic) BOOL hasSynRetransmissionCount;
@property (nonatomic) BOOL hasTcpFastOpen;
@property (nonatomic) BOOL hasTimeToConnectionEstablishmentMsecs;
@property (nonatomic) BOOL hasTimeToConnectionStartMsecs;
@property (nonatomic) BOOL hasTimeToDNSResolvedMsecs;
@property (nonatomic) BOOL hasTimeToDNSStartMsecs;
@property (nonatomic) BOOL hasTrafficClass;
@property (nonatomic) NSUInteger iPAddressAttemptCount; // ivar: _iPAddressAttemptCount
@property (nonatomic) int interfaceType; // ivar: _interfaceType
@property (nonatomic) BOOL kernelReportedStalls; // ivar: _kernelReportedStalls
@property (nonatomic) BOOL kernelReportingConnectionStalled; // ivar: _kernelReportingConnectionStalled
@property (nonatomic) BOOL kernelReportingReadStalled; // ivar: _kernelReportingReadStalled
@property (nonatomic) BOOL kernelReportingWriteStalled; // ivar: _kernelReportingWriteStalled
@property (nonatomic) NSUInteger multipathBytesInCell; // ivar: _multipathBytesInCell
@property (nonatomic) NSUInteger multipathBytesInInitial; // ivar: _multipathBytesInInitial
@property (nonatomic) NSUInteger multipathBytesInWiFi; // ivar: _multipathBytesInWiFi
@property (nonatomic) NSUInteger multipathBytesOutCell; // ivar: _multipathBytesOutCell
@property (nonatomic) NSUInteger multipathBytesOutInitial; // ivar: _multipathBytesOutInitial
@property (nonatomic) NSUInteger multipathBytesOutWiFi; // ivar: _multipathBytesOutWiFi
@property (nonatomic) NSUInteger multipathServiceType; // ivar: _multipathServiceType
@property (nonatomic) NSUInteger packetsDuplicate; // ivar: _packetsDuplicate
@property (nonatomic) NSUInteger packetsIn; // ivar: _packetsIn
@property (nonatomic) NSUInteger packetsOut; // ivar: _packetsOut
@property (nonatomic) NSUInteger packetsOutOfOrder; // ivar: _packetsOutOfOrder
@property (nonatomic) NSUInteger packetsRetransmitted; // ivar: _packetsRetransmitted
@property (nonatomic) BOOL preferFallback; // ivar: _preferFallback
@property (nonatomic) NSUInteger rTTvariance; // ivar: _rTTvariance
@property (nonatomic) NSUInteger smoothedRTTMsecs; // ivar: _smoothedRTTMsecs
@property (nonatomic) NSUInteger synRetransmissionCount; // ivar: _synRetransmissionCount
@property (nonatomic) BOOL tcpFastOpen; // ivar: _tcpFastOpen
@property (nonatomic) NSUInteger timeToConnectionEstablishmentMsecs; // ivar: _timeToConnectionEstablishmentMsecs
@property (nonatomic) NSUInteger timeToConnectionStartMsecs; // ivar: _timeToConnectionStartMsecs
@property (nonatomic) NSUInteger timeToDNSResolvedMsecs; // ivar: _timeToDNSResolvedMsecs
@property (nonatomic) NSUInteger timeToDNSStartMsecs; // ivar: _timeToDNSStartMsecs
@property (nonatomic) NSUInteger trafficClass; // ivar: _trafficClass


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)connectedInterfaceTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)interfaceTypeAsString:(int)arg0 ;
-(int)StringAsConnectedInterfaceType:(id)arg0 ;
-(int)StringAsInterfaceType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif