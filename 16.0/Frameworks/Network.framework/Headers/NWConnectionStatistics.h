// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWCONNECTIONSTATISTICS_H
#define NWCONNECTIONSTATISTICS_H

@class NSArray, PBCodable, NSString, NSUUID;

#import <Foundation/Foundation.h>

#import "NWDeviceReport.h"
#import "NWL2Report.h"

@interface NWConnectionStatistics : NSObject

@property (retain, nonatomic) NSArray *activities; // ivar: _activities
@property (nonatomic) unsigned int awdMetricID; // ivar: _awdMetricID
@property (retain, nonatomic) PBCodable *awdReport; // ivar: _awdReport
@property (retain, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSUInteger bytesDuplicate;
@property (readonly, nonatomic) NSUInteger bytesIn;
@property (readonly, nonatomic) NSUInteger bytesOOO;
@property (readonly, nonatomic) NSUInteger bytesOut;
@property (readonly, nonatomic) NSUInteger bytesRetransmitted;
@property (readonly, nonatomic) BOOL cellularFallback;
@property (readonly, nonatomic) BOOL cellularRrcConnected;
@property (retain, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, nonatomic) BOOL connected;
@property (readonly, nonatomic) int connectedInterfaceType;
@property (readonly, nonatomic) unsigned int connectionEstablishmentTimeMsecs;
@property (readonly, nonatomic) unsigned int connectionReportReason;
@property (readonly, nonatomic) NSUUID *connectionUUID;
@property (readonly, nonatomic) BOOL delegated;
@property (retain, nonatomic) NWDeviceReport *deviceReport; // ivar: _deviceReport
@property (readonly, nonatomic) BOOL dnsAnswersCached;
@property (readonly, nonatomic) unsigned int dnsResolvedTimeMsecs;
@property (retain, nonatomic) NSString *effectiveBundleID;
@property (retain, nonatomic) NSArray *externallyVisibleActivityUUIDs; // ivar: _externallyVisibleActivityUUIDs
@property (retain, nonatomic) NSUUID *externallyVisibleConnectionUUID; // ivar: _externallyVisibleConnectionUUID
@property (retain, nonatomic) NSUUID *externallyVisibleParentUUID; // ivar: _externallyVisibleParentUUID
@property (readonly, nonatomic) BOOL fallbackEligible;
@property (readonly, nonatomic) unsigned int flowDurationMsecs;
@property (readonly, nonatomic) int interfaceType;
@property (readonly, nonatomic) BOOL kernelReportedStalls;
@property (readonly, nonatomic) BOOL kernelReportingConnectionStalled;
@property (readonly, nonatomic) BOOL kernelReportingReadStalled;
@property (readonly, nonatomic) BOOL kernelReportingWriteStalled;
@property (retain, nonatomic) NWL2Report *layer2Report; // ivar: _layer2Report
@property (readonly, nonatomic) NSUInteger packetsDuplicate;
@property (readonly, nonatomic) NSUInteger packetsIn;
@property (readonly, nonatomic) NSUInteger packetsOOO;
@property (readonly, nonatomic) NSUInteger packetsOut;
@property (readonly, nonatomic) NSUInteger packetsRetransmitted;
@property (readonly, nonatomic) NSUUID *parentUUID;
@property (nonatomic) netcore_stats_tcp_report report; // ivar: _report
@property (retain, nonatomic) NSString *sourceIdentifier; // ivar: _sourceIdentifier
@property (readonly, nonatomic) unsigned int tcpAppDataStallTimerMsecs;
@property (readonly, nonatomic) unsigned int tcpAppReportingDataStallCount;
@property (readonly, nonatomic) unsigned int tcpBetterRouteEventCount;
@property (readonly, nonatomic) unsigned int tcpConnectionReuseCount;
@property (readonly, nonatomic) BOOL tcpFastOpen;
@property (readonly, nonatomic) unsigned int tcpRTTBestMsecs;
@property (readonly, nonatomic) unsigned int tcpRTTCurrentMsecs;
@property (readonly, nonatomic) unsigned int tcpRTTSmoothedMsecs;
@property (readonly, nonatomic) unsigned int tcpRTTVariance;
@property (readonly, nonatomic) unsigned int tcpSynRetransmissionCount;
@property (readonly, nonatomic) unsigned int timeToConnectionEstablishmentMsecs;
@property (readonly, nonatomic) unsigned int timeToConnectionStartMsecs;
@property (readonly, nonatomic) unsigned int timeToDnsResolvedMsecs;
@property (readonly, nonatomic) unsigned int timeToDnsStartMsecs;
@property (readonly, nonatomic) BOOL tls13Configured;
@property (readonly, nonatomic) BOOL tlsSucceeded;
@property (readonly, nonatomic) unsigned int trafficClass;


+(int)protocolToTransportProtocol:(unsigned int)arg0 ;
-(BOOL)tlsHandshakeTimedOut;
-(id)_createDataUsageSnapshotFromStruct:(struct netcore_stats_data_usage_snapshot *)arg0 ;
-(id)_createFallbackReportFromStruct:(struct netcore_stats_tcp_cell_fallback_report *)arg0 ;
-(id)_createStatisticsReportFromStruct:(struct netcore_stats_tcp_statistics_report *)arg0 ;
-(id)initWithPBCodableData:(id)arg0 ;
-(id)initWithTCPReport:(struct netcore_stats_tcp_report *)arg0 length:(NSUInteger)arg1 clientIdentifier:(id)arg2 sourceIdentifier:(id)arg3 ;


@end


#endif