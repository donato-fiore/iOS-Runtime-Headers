// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef C2MPNETWORKEVENT_H
#define C2MPNETWORKEVENT_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;


#import "C2MPError.h"

@interface C2MPNetworkEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasNetworkConnectionReused;
@property (readonly, nonatomic) BOOL hasNetworkConnectionUuid;
@property (readonly, nonatomic) BOOL hasNetworkFatalError;
@property (readonly, nonatomic) BOOL hasNetworkHostname;
@property (readonly, nonatomic) BOOL hasNetworkInterfaceIdentifier;
@property (nonatomic) BOOL hasNetworkIsDiscretionary;
@property (readonly, nonatomic) BOOL hasNetworkNegotiatedTlsProtocolVersion;
@property (nonatomic) BOOL hasNetworkPreviousAttemptCount;
@property (readonly, nonatomic) BOOL hasNetworkProtocolName;
@property (readonly, nonatomic) BOOL hasNetworkRemoteAddresssAndPort;
@property (nonatomic) BOOL hasNetworkRequestBodyBytesSent;
@property (nonatomic) BOOL hasNetworkRequestHeaderSize;
@property (readonly, nonatomic) BOOL hasNetworkRequestUri;
@property (nonatomic) BOOL hasNetworkResponseBodyBytesReceived;
@property (nonatomic) BOOL hasNetworkResponseHeaderSize;
@property (nonatomic) BOOL hasNetworkStatusCode;
@property (readonly, nonatomic) BOOL hasNetworkTaskDescription;
@property (nonatomic) BOOL hasOptionsAllowCellularAccess;
@property (nonatomic) BOOL hasOptionsAllowExpensiveAccess;
@property (nonatomic) BOOL hasOptionsAllowPowerNapScheduling;
@property (nonatomic) BOOL hasOptionsAppleIdContext;
@property (readonly, nonatomic) BOOL hasOptionsDiscretionaryNetworkBehavior;
@property (readonly, nonatomic) BOOL hasOptionsDuetPreClearedMode;
@property (nonatomic) BOOL hasOptionsOutOfProcess;
@property (nonatomic) BOOL hasOptionsOutOfProcessForceDiscretionary;
@property (readonly, nonatomic) BOOL hasOptionsQualityOfService;
@property (readonly, nonatomic) BOOL hasOptionsSourceApplicationBundleIdentifier;
@property (readonly, nonatomic) BOOL hasOptionsSourceApplicationSecondaryIdentifier;
@property (nonatomic) BOOL hasOptionsTimeoutIntervalForRequest;
@property (nonatomic) BOOL hasOptionsTimeoutIntervalForResource;
@property (nonatomic) BOOL hasOptionsTlsPinningRequired;
@property (nonatomic) BOOL hasReportFrequency;
@property (nonatomic) BOOL hasReportFrequencyBase;
@property (nonatomic) BOOL hasTimestampC2Init;
@property (nonatomic) BOOL hasTimestampC2Now;
@property (nonatomic) BOOL hasTimestampC2Start;
@property (nonatomic) BOOL hasTimestampDnsEnd;
@property (nonatomic) BOOL hasTimestampDnsStart;
@property (nonatomic) BOOL hasTimestampRequestEnd;
@property (nonatomic) BOOL hasTimestampRequestStart;
@property (nonatomic) BOOL hasTimestampResponseEnd;
@property (nonatomic) BOOL hasTimestampResponseStart;
@property (nonatomic) BOOL hasTimestampSslStart;
@property (nonatomic) BOOL hasTimestampTcpEnd;
@property (nonatomic) BOOL hasTimestampTcpStart;
@property (nonatomic) BOOL hasTriggers;
@property (nonatomic) BOOL networkConnectionReused; // ivar: _networkConnectionReused
@property (retain, nonatomic) NSString *networkConnectionUuid; // ivar: _networkConnectionUuid
@property (retain, nonatomic) C2MPError *networkFatalError; // ivar: _networkFatalError
@property (retain, nonatomic) NSString *networkHostname; // ivar: _networkHostname
@property (retain, nonatomic) NSString *networkInterfaceIdentifier; // ivar: _networkInterfaceIdentifier
@property (nonatomic) BOOL networkIsDiscretionary; // ivar: _networkIsDiscretionary
@property (retain, nonatomic) NSString *networkNegotiatedTlsProtocolVersion; // ivar: _networkNegotiatedTlsProtocolVersion
@property (retain, nonatomic) NSMutableArray *networkPathInfos; // ivar: _networkPathInfos
@property (nonatomic) unsigned int networkPreviousAttemptCount; // ivar: _networkPreviousAttemptCount
@property (retain, nonatomic) NSString *networkProtocolName; // ivar: _networkProtocolName
@property (retain, nonatomic) NSString *networkRemoteAddresssAndPort; // ivar: _networkRemoteAddresssAndPort
@property (nonatomic) NSUInteger networkRequestBodyBytesSent; // ivar: _networkRequestBodyBytesSent
@property (nonatomic) unsigned int networkRequestHeaderSize; // ivar: _networkRequestHeaderSize
@property (retain, nonatomic) NSString *networkRequestUri; // ivar: _networkRequestUri
@property (nonatomic) NSUInteger networkResponseBodyBytesReceived; // ivar: _networkResponseBodyBytesReceived
@property (nonatomic) unsigned int networkResponseHeaderSize; // ivar: _networkResponseHeaderSize
@property (nonatomic) NSUInteger networkStatusCode; // ivar: _networkStatusCode
@property (retain, nonatomic) NSString *networkTaskDescription; // ivar: _networkTaskDescription
@property (nonatomic) BOOL optionsAllowCellularAccess; // ivar: _optionsAllowCellularAccess
@property (nonatomic) BOOL optionsAllowExpensiveAccess; // ivar: _optionsAllowExpensiveAccess
@property (nonatomic) BOOL optionsAllowPowerNapScheduling; // ivar: _optionsAllowPowerNapScheduling
@property (nonatomic) BOOL optionsAppleIdContext; // ivar: _optionsAppleIdContext
@property (retain, nonatomic) NSString *optionsDiscretionaryNetworkBehavior; // ivar: _optionsDiscretionaryNetworkBehavior
@property (retain, nonatomic) NSString *optionsDuetPreClearedMode; // ivar: _optionsDuetPreClearedMode
@property (nonatomic) BOOL optionsOutOfProcess; // ivar: _optionsOutOfProcess
@property (nonatomic) BOOL optionsOutOfProcessForceDiscretionary; // ivar: _optionsOutOfProcessForceDiscretionary
@property (retain, nonatomic) NSString *optionsQualityOfService; // ivar: _optionsQualityOfService
@property (retain, nonatomic) NSString *optionsSourceApplicationBundleIdentifier; // ivar: _optionsSourceApplicationBundleIdentifier
@property (retain, nonatomic) NSString *optionsSourceApplicationSecondaryIdentifier; // ivar: _optionsSourceApplicationSecondaryIdentifier
@property (nonatomic) unsigned int optionsTimeoutIntervalForRequest; // ivar: _optionsTimeoutIntervalForRequest
@property (nonatomic) unsigned int optionsTimeoutIntervalForResource; // ivar: _optionsTimeoutIntervalForResource
@property (nonatomic) BOOL optionsTlsPinningRequired; // ivar: _optionsTlsPinningRequired
@property (nonatomic) NSUInteger reportFrequency; // ivar: _reportFrequency
@property (nonatomic) NSUInteger reportFrequencyBase; // ivar: _reportFrequencyBase
@property (nonatomic) NSUInteger timestampC2Init; // ivar: _timestampC2Init
@property (nonatomic) NSUInteger timestampC2Now; // ivar: _timestampC2Now
@property (nonatomic) NSUInteger timestampC2Start; // ivar: _timestampC2Start
@property (nonatomic) NSUInteger timestampDnsEnd; // ivar: _timestampDnsEnd
@property (nonatomic) NSUInteger timestampDnsStart; // ivar: _timestampDnsStart
@property (nonatomic) NSUInteger timestampRequestEnd; // ivar: _timestampRequestEnd
@property (nonatomic) NSUInteger timestampRequestStart; // ivar: _timestampRequestStart
@property (nonatomic) NSUInteger timestampResponseEnd; // ivar: _timestampResponseEnd
@property (nonatomic) NSUInteger timestampResponseStart; // ivar: _timestampResponseStart
@property (nonatomic) NSUInteger timestampSslStart; // ivar: _timestampSslStart
@property (nonatomic) NSUInteger timestampTcpEnd; // ivar: _timestampTcpEnd
@property (nonatomic) NSUInteger timestampTcpStart; // ivar: _timestampTcpStart
@property (nonatomic) NSUInteger triggers; // ivar: _triggers


+(Class)networkPathInfoType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)networkPathInfoAtIndex:(NSUInteger)arg0 ;
-(void)addNetworkPathInfo:(id)arg0 ;
-(void)clearNetworkPathInfos;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif