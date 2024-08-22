// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NWAWDNWCONNECTIONREPORT_H
#define NWAWDNWCONNECTIONREPORT_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "NWAWDNWDeviceReport.h"
#import "NWAWDNWL2Report.h"

@interface NWAWDNWConnectionReport : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *activities; // ivar: _activities
@property (nonatomic) int appleApp; // ivar: _appleApp
@property (nonatomic) int appleHost; // ivar: _appleHost
@property (nonatomic) NSUInteger bestRTT; // ivar: _bestRTT
@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (nonatomic) NSUInteger bytesDuplicate; // ivar: _bytesDuplicate
@property (nonatomic) NSUInteger bytesIn; // ivar: _bytesIn
@property (nonatomic) NSUInteger bytesOut; // ivar: _bytesOut
@property (nonatomic) NSUInteger bytesOutOfOrder; // ivar: _bytesOutOfOrder
@property (nonatomic) NSUInteger bytesRetransmitted; // ivar: _bytesRetransmitted
@property (nonatomic) int connectedAddressFamily; // ivar: _connectedAddressFamily
@property (nonatomic) NSUInteger connectedAddressIndex; // ivar: _connectedAddressIndex
@property (nonatomic) int connectedInterfaceSubtype; // ivar: _connectedInterfaceSubtype
@property (nonatomic) int connectedInterfaceType; // ivar: _connectedInterfaceType
@property (nonatomic) int connectionMode; // ivar: _connectionMode
@property (nonatomic) NSUInteger connectionReportReason; // ivar: _connectionReportReason
@property (nonatomic) NSUInteger connectionReuseCount; // ivar: _connectionReuseCount
@property (retain, nonatomic) NSString *connectionUUID; // ivar: _connectionUUID
@property (nonatomic) NSUInteger currentRTT; // ivar: _currentRTT
@property (nonatomic) BOOL customProxyConfigured; // ivar: _customProxyConfigured
@property (nonatomic) NSUInteger dataStallCount; // ivar: _dataStallCount
@property (retain, nonatomic) NWAWDNWDeviceReport *deviceReport; // ivar: _deviceReport
@property (nonatomic) int dnsProtocol; // ivar: _dnsProtocol
@property (nonatomic) int dnsProvider; // ivar: _dnsProvider
@property (retain, nonatomic) NSString *effectiveBundleID; // ivar: _effectiveBundleID
@property (nonatomic) NSUInteger estimatedDownloadThroughput; // ivar: _estimatedDownloadThroughput
@property (nonatomic) NSUInteger estimatedUploadThroughput; // ivar: _estimatedUploadThroughput
@property (nonatomic) int failureReason; // ivar: _failureReason
@property (nonatomic) BOOL fallbackEligible; // ivar: _fallbackEligible
@property (nonatomic) int firstAddressFamily; // ivar: _firstAddressFamily
@property (nonatomic) BOOL firstParty; // ivar: _firstParty
@property (nonatomic) NSUInteger flowConnectMilliseconds; // ivar: _flowConnectMilliseconds
@property (nonatomic) NSUInteger flowDurationMilliseconds; // ivar: _flowDurationMilliseconds
@property (nonatomic) BOOL hasAppleApp;
@property (nonatomic) BOOL hasAppleHost;
@property (nonatomic) BOOL hasBestRTT;
@property (readonly, nonatomic) BOOL hasBundleID;
@property (nonatomic) BOOL hasBytesDuplicate;
@property (nonatomic) BOOL hasBytesIn;
@property (nonatomic) BOOL hasBytesOut;
@property (nonatomic) BOOL hasBytesOutOfOrder;
@property (nonatomic) BOOL hasBytesRetransmitted;
@property (nonatomic) BOOL hasConnectedAddressFamily;
@property (nonatomic) BOOL hasConnectedAddressIndex;
@property (nonatomic) BOOL hasConnectedInterfaceSubtype;
@property (nonatomic) BOOL hasConnectedInterfaceType;
@property (nonatomic) BOOL hasConnectionMode;
@property (nonatomic) BOOL hasConnectionReportReason;
@property (nonatomic) BOOL hasConnectionReuseCount;
@property (readonly, nonatomic) BOOL hasConnectionUUID;
@property (nonatomic) BOOL hasCurrentRTT;
@property (nonatomic) BOOL hasCustomProxyConfigured;
@property (nonatomic) BOOL hasDataStallCount;
@property (readonly, nonatomic) BOOL hasDeviceReport;
@property (nonatomic) BOOL hasDnsProtocol;
@property (nonatomic) BOOL hasDnsProvider;
@property (readonly, nonatomic) BOOL hasEffectiveBundleID;
@property (nonatomic) BOOL hasEstimatedDownloadThroughput;
@property (nonatomic) BOOL hasEstimatedUploadThroughput;
@property (nonatomic) BOOL hasFailureReason;
@property (nonatomic) BOOL hasFallbackEligible;
@property (nonatomic) BOOL hasFirstAddressFamily;
@property (nonatomic) BOOL hasFirstParty;
@property (nonatomic) BOOL hasFlowConnectMilliseconds;
@property (nonatomic) BOOL hasFlowDurationMilliseconds;
@property (nonatomic) BOOL hasIpv4AddressCount;
@property (nonatomic) BOOL hasIpv4Available;
@property (nonatomic) BOOL hasIpv4DNSServerCount;
@property (nonatomic) BOOL hasIpv6AddressCount;
@property (nonatomic) BOOL hasIpv6Available;
@property (nonatomic) BOOL hasIpv6DNSServerCount;
@property (nonatomic) BOOL hasIsDaemon;
@property (nonatomic) BOOL hasIsKnownTracker;
@property (nonatomic) BOOL hasIsPathConstrained;
@property (nonatomic) BOOL hasIsPathExpensive;
@property (nonatomic) BOOL hasIsProbe;
@property (nonatomic) BOOL hasIsThirdPartyWebContent;
@property (readonly, nonatomic) BOOL hasL2Report;
@property (nonatomic) BOOL hasMultipathBytesInCell;
@property (nonatomic) BOOL hasMultipathBytesInInitial;
@property (nonatomic) BOOL hasMultipathBytesInWiFi;
@property (nonatomic) BOOL hasMultipathBytesOutCell;
@property (nonatomic) BOOL hasMultipathBytesOutInitial;
@property (nonatomic) BOOL hasMultipathBytesOutWiFi;
@property (nonatomic) BOOL hasMultipathConfigured;
@property (nonatomic) BOOL hasMultipathServiceType;
@property (nonatomic) BOOL hasPacketsIn;
@property (nonatomic) BOOL hasPacketsOut;
@property (readonly, nonatomic) BOOL hasParentUUID;
@property (nonatomic) BOOL hasPathTriggerMilliseconds;
@property (nonatomic) BOOL hasPreferFallback;
@property (nonatomic) BOOL hasPrivacyStance;
@property (readonly, nonatomic) BOOL hasProcessName;
@property (nonatomic) BOOL hasProhibitsConstrained;
@property (nonatomic) BOOL hasProhibitsExpensive;
@property (nonatomic) BOOL hasProxyMilliseconds;
@property (nonatomic) BOOL hasQuicAlternativePresent;
@property (nonatomic) BOOL hasQuicApplicationDeferred;
@property (nonatomic) BOOL hasQuicDeferred;
@property (nonatomic) BOOL hasQuicDenied;
@property (nonatomic) BOOL hasQuicExperimentEnabled;
@property (nonatomic) BOOL hasQuicSpeculativeAttempt;
@property (nonatomic) BOOL hasQuicUpdatedAlternative;
@property (nonatomic) BOOL hasRTTvariance;
@property (nonatomic) BOOL hasResolutionMilliseconds;
@property (nonatomic) BOOL hasResolutionRequired;
@property (nonatomic) BOOL hasSecondsSinceInterfaceChange;
@property (nonatomic) BOOL hasSmoothedRTT;
@property (nonatomic) BOOL hasStackLevel;
@property (nonatomic) BOOL hasSvcbDoHURI;
@property (nonatomic) BOOL hasSvcbReceived;
@property (nonatomic) BOOL hasSvcbRequested;
@property (nonatomic) BOOL hasSynRetransmissionCount;
@property (nonatomic) BOOL hasSynthesizedExtraIPv6Address;
@property (nonatomic) BOOL hasSynthesizedIPv6Address;
@property (nonatomic) BOOL hasSystemProxyConfigured;
@property (nonatomic) BOOL hasTfoConfigured;
@property (nonatomic) BOOL hasTfoUsed;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasTlsConfigured;
@property (nonatomic) BOOL hasTlsECHEnabled;
@property (nonatomic) BOOL hasTlsHandshakeTimedOut;
@property (nonatomic) BOOL hasTlsMilliseconds;
@property (nonatomic) BOOL hasTlsVersion;
@property (nonatomic) BOOL hasTlsVersionTimeout;
@property (nonatomic) BOOL hasTrafficClass;
@property (nonatomic) BOOL hasTransformConnectedProtocol;
@property (nonatomic) BOOL hasTransformConnectedProtocolIndex;
@property (nonatomic) BOOL hasTransformFirstProtocol;
@property (nonatomic) BOOL hasTransformLastTimeoutMsecs;
@property (nonatomic) BOOL hasTransportProtocol;
@property (nonatomic) BOOL hasTriggeredPath;
@property (nonatomic) BOOL hasUsedFallback;
@property (nonatomic) BOOL hasUsedProxyType;
@property (nonatomic) BOOL hasWeakFallback;
@property (nonatomic) NSUInteger ipv4AddressCount; // ivar: _ipv4AddressCount
@property (nonatomic) BOOL ipv4Available; // ivar: _ipv4Available
@property (nonatomic) NSUInteger ipv4DNSServerCount; // ivar: _ipv4DNSServerCount
@property (nonatomic) NSUInteger ipv6AddressCount; // ivar: _ipv6AddressCount
@property (nonatomic) BOOL ipv6Available; // ivar: _ipv6Available
@property (nonatomic) NSUInteger ipv6DNSServerCount; // ivar: _ipv6DNSServerCount
@property (nonatomic) BOOL isDaemon; // ivar: _isDaemon
@property (nonatomic) BOOL isKnownTracker; // ivar: _isKnownTracker
@property (nonatomic) BOOL isPathConstrained; // ivar: _isPathConstrained
@property (nonatomic) BOOL isPathExpensive; // ivar: _isPathExpensive
@property (nonatomic) BOOL isProbe; // ivar: _isProbe
@property (nonatomic) BOOL isThirdPartyWebContent; // ivar: _isThirdPartyWebContent
@property (retain, nonatomic) NWAWDNWL2Report *l2Report; // ivar: _l2Report
@property (nonatomic) NSUInteger multipathBytesInCell; // ivar: _multipathBytesInCell
@property (nonatomic) NSUInteger multipathBytesInInitial; // ivar: _multipathBytesInInitial
@property (nonatomic) NSUInteger multipathBytesInWiFi; // ivar: _multipathBytesInWiFi
@property (nonatomic) NSUInteger multipathBytesOutCell; // ivar: _multipathBytesOutCell
@property (nonatomic) NSUInteger multipathBytesOutInitial; // ivar: _multipathBytesOutInitial
@property (nonatomic) NSUInteger multipathBytesOutWiFi; // ivar: _multipathBytesOutWiFi
@property (nonatomic) BOOL multipathConfigured; // ivar: _multipathConfigured
@property (nonatomic) NSUInteger multipathServiceType; // ivar: _multipathServiceType
@property (nonatomic) NSUInteger packetsIn; // ivar: _packetsIn
@property (nonatomic) NSUInteger packetsOut; // ivar: _packetsOut
@property (retain, nonatomic) NSString *parentUUID; // ivar: _parentUUID
@property (nonatomic) NSUInteger pathTriggerMilliseconds; // ivar: _pathTriggerMilliseconds
@property (nonatomic) BOOL preferFallback; // ivar: _preferFallback
@property (nonatomic) int privacyStance; // ivar: _privacyStance
@property (retain, nonatomic) NSString *processName; // ivar: _processName
@property (nonatomic) BOOL prohibitsConstrained; // ivar: _prohibitsConstrained
@property (nonatomic) BOOL prohibitsExpensive; // ivar: _prohibitsExpensive
@property (retain, nonatomic) NSMutableArray *protocolEstablishmentReports; // ivar: _protocolEstablishmentReports
@property (retain, nonatomic) NSMutableArray *proxyHops; // ivar: _proxyHops
@property (nonatomic) NSUInteger proxyMilliseconds; // ivar: _proxyMilliseconds
@property (nonatomic) BOOL quicAlternativePresent; // ivar: _quicAlternativePresent
@property (nonatomic) BOOL quicApplicationDeferred; // ivar: _quicApplicationDeferred
@property (nonatomic) BOOL quicDeferred; // ivar: _quicDeferred
@property (nonatomic) BOOL quicDenied; // ivar: _quicDenied
@property (nonatomic) BOOL quicExperimentEnabled; // ivar: _quicExperimentEnabled
@property (nonatomic) BOOL quicSpeculativeAttempt; // ivar: _quicSpeculativeAttempt
@property (nonatomic) BOOL quicUpdatedAlternative; // ivar: _quicUpdatedAlternative
@property (nonatomic) NSUInteger rTTvariance; // ivar: _rTTvariance
@property (nonatomic) NSUInteger resolutionMilliseconds; // ivar: _resolutionMilliseconds
@property (nonatomic) BOOL resolutionRequired; // ivar: _resolutionRequired
@property (nonatomic) NSUInteger secondsSinceInterfaceChange; // ivar: _secondsSinceInterfaceChange
@property (nonatomic) NSUInteger smoothedRTT; // ivar: _smoothedRTT
@property (nonatomic) int stackLevel; // ivar: _stackLevel
@property (nonatomic) BOOL svcbDoHURI; // ivar: _svcbDoHURI
@property (nonatomic) BOOL svcbReceived; // ivar: _svcbReceived
@property (nonatomic) BOOL svcbRequested; // ivar: _svcbRequested
@property (nonatomic) NSUInteger synRetransmissionCount; // ivar: _synRetransmissionCount
@property (nonatomic) BOOL synthesizedExtraIPv6Address; // ivar: _synthesizedExtraIPv6Address
@property (nonatomic) BOOL synthesizedIPv6Address; // ivar: _synthesizedIPv6Address
@property (nonatomic) BOOL systemProxyConfigured; // ivar: _systemProxyConfigured
@property (nonatomic) BOOL tfoConfigured; // ivar: _tfoConfigured
@property (nonatomic) BOOL tfoUsed; // ivar: _tfoUsed
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) BOOL tlsConfigured; // ivar: _tlsConfigured
@property (nonatomic) BOOL tlsECHEnabled; // ivar: _tlsECHEnabled
@property (nonatomic) BOOL tlsHandshakeTimedOut; // ivar: _tlsHandshakeTimedOut
@property (nonatomic) NSUInteger tlsMilliseconds; // ivar: _tlsMilliseconds
@property (nonatomic) int tlsVersion; // ivar: _tlsVersion
@property (nonatomic) BOOL tlsVersionTimeout; // ivar: _tlsVersionTimeout
@property (nonatomic) NSUInteger trafficClass; // ivar: _trafficClass
@property (nonatomic) int transformConnectedProtocol; // ivar: _transformConnectedProtocol
@property (nonatomic) NSUInteger transformConnectedProtocolIndex; // ivar: _transformConnectedProtocolIndex
@property (nonatomic) int transformFirstProtocol; // ivar: _transformFirstProtocol
@property (nonatomic) NSUInteger transformLastTimeoutMsecs; // ivar: _transformLastTimeoutMsecs
@property (nonatomic) int transportProtocol; // ivar: _transportProtocol
@property (nonatomic) BOOL triggeredPath; // ivar: _triggeredPath
@property (nonatomic) BOOL usedFallback; // ivar: _usedFallback
@property (nonatomic) int usedProxyType; // ivar: _usedProxyType
@property (nonatomic) BOOL weakFallback; // ivar: _weakFallback


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)activitiesAtIndex:(NSUInteger)arg0 ;
-(id)appleAppAsString:(int)arg0 ;
-(id)appleHostAsString:(int)arg0 ;
-(id)connectedAddressFamilyAsString:(int)arg0 ;
-(id)connectedInterfaceSubtypeAsString:(int)arg0 ;
-(id)connectedInterfaceTypeAsString:(int)arg0 ;
-(id)connectionModeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)dnsProtocolAsString:(int)arg0 ;
-(id)dnsProviderAsString:(int)arg0 ;
-(id)failureReasonAsString:(int)arg0 ;
-(id)firstAddressFamilyAsString:(int)arg0 ;
-(id)privacyStanceAsString:(int)arg0 ;
-(id)protocolEstablishmentReportsAtIndex:(NSUInteger)arg0 ;
-(id)proxyHopsAtIndex:(NSUInteger)arg0 ;
-(id)stackLevelAsString:(int)arg0 ;
-(id)tlsVersionAsString:(int)arg0 ;
-(id)transformConnectedProtocolAsString:(int)arg0 ;
-(id)transformFirstProtocolAsString:(int)arg0 ;
-(id)transportProtocolAsString:(int)arg0 ;
-(id)usedProxyTypeAsString:(int)arg0 ;
-(int)StringAsAppleApp:(id)arg0 ;
-(int)StringAsAppleHost:(id)arg0 ;
-(int)StringAsConnectedAddressFamily:(id)arg0 ;
-(int)StringAsConnectedInterfaceSubtype:(id)arg0 ;
-(int)StringAsConnectedInterfaceType:(id)arg0 ;
-(int)StringAsConnectionMode:(id)arg0 ;
-(int)StringAsDnsProtocol:(id)arg0 ;
-(int)StringAsDnsProvider:(id)arg0 ;
-(int)StringAsFailureReason:(id)arg0 ;
-(int)StringAsFirstAddressFamily:(id)arg0 ;
-(int)StringAsPrivacyStance:(id)arg0 ;
-(int)StringAsStackLevel:(id)arg0 ;
-(int)StringAsTlsVersion:(id)arg0 ;
-(int)StringAsTransformConnectedProtocol:(id)arg0 ;
-(int)StringAsTransformFirstProtocol:(id)arg0 ;
-(int)StringAsTransportProtocol:(id)arg0 ;
-(int)StringAsUsedProxyType:(id)arg0 ;
-(void)addActivities:(id)arg0 ;
-(void)addProtocolEstablishmentReports:(id)arg0 ;
-(void)addProxyHops:(id)arg0 ;
-(void)clearActivities;
-(void)clearProtocolEstablishmentReports;
-(void)clearProxyHops;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif