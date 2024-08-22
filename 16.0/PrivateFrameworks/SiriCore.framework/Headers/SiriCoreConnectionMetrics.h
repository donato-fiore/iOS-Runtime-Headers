// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRICORECONNECTIONMETRICS_H
#define SIRICORECONNECTIONMETRICS_H

@class NSNumber, NSString, NSArray, NSDictionary;

#import <Foundation/Foundation.h>

#import "SiriCoreConnectionMetrics.h"

@interface SiriCoreConnectionMetrics : NSObject

@property (copy, nonatomic) NSNumber *attemptCount; // ivar: _attemptCount
@property (copy, nonatomic) NSString *carrierName; // ivar: _carrierName
@property (copy, nonatomic) NSNumber *connectedSubflowCount; // ivar: _connectedSubflowCount
@property (copy, nonatomic) NSNumber *connectionDelay; // ivar: _connectionDelay
@property (copy, nonatomic) NSString *connectionEdgeID; // ivar: _connectionEdgeID
@property (copy, nonatomic) NSString *connectionEdgeType; // ivar: _connectionEdgeType
@property (copy, nonatomic) NSNumber *connectionEstablishmentTimeMsec; // ivar: _connectionEstablishmentTimeMsec
@property (copy, nonatomic) NSNumber *connectionFallbackReason; // ivar: _connectionFallbackReason
@property (copy, nonatomic) NSString *connectionMethod; // ivar: _connectionMethod
@property (copy, nonatomic) NSArray *connectionMethodHistory; // ivar: _connectionMethodHistory
@property (copy, nonatomic) NSNumber *connectionStartTimeToConnectionEstablishmentTimeMsec; // ivar: _connectionStartTimeToConnectionEstablishmentTimeMsec
@property (copy, nonatomic) NSNumber *connectionStartTimeToDNSResolutionTimeMsec; // ivar: _connectionStartTimeToDNSResolutionTimeMsec
@property (copy, nonatomic) NSNumber *connectionStartTimeToTLSHandshakeTimeMsec; // ivar: _connectionStartTimeToTLSHandshakeTimeMsec
@property (copy, nonatomic) NSNumber *dnsResolutionTime; // ivar: _dnsResolutionTime
@property (copy, nonatomic) NSNumber *firstTxByteDelay; // ivar: _firstTxByteDelay
@property (copy, nonatomic) NSDictionary *flowNetworkInterfaceType; // ivar: _flowNetworkInterfaceType
@property (copy, nonatomic) NSNumber *idsLastMessageDelay; // ivar: _idsLastMessageDelay
@property (copy, nonatomic) NSNumber *idsLastSocketDelay; // ivar: _idsLastSocketDelay
@property (copy, nonatomic) NSNumber *idsLastSocketOpenError; // ivar: _idsLastSocketOpenError
@property (copy, nonatomic) NSNumber *isCaptive; // ivar: _isCaptive
@property (copy, nonatomic) NSNumber *meanPing; // ivar: _meanPing
@property (copy, nonatomic) NSNumber *metricsCount; // ivar: _metricsCount
@property (copy, nonatomic) NSNumber *pingCount; // ivar: _pingCount
@property (copy, nonatomic) NSString *policyId; // ivar: _policyId
@property (copy, nonatomic) NSString *primarySubflowInterfaceName; // ivar: _primarySubflowInterfaceName
@property (copy, nonatomic) NSString *providerStyle; // ivar: _providerStyle
@property (retain, nonatomic) SiriCoreConnectionMetrics *remoteMetrics; // ivar: _remoteMetrics
@property (copy, nonatomic) NSNumber *rssi; // ivar: _rssi
@property (copy, nonatomic) NSNumber *signalStrengthBars; // ivar: _signalStrengthBars
@property (copy, nonatomic) NSNumber *simSubscriptions; // ivar: _simSubscriptions
@property (copy, nonatomic) NSNumber *snr; // ivar: _snr
@property (copy, nonatomic) NSNumber *subflowCount; // ivar: _subflowCount
@property (copy, nonatomic) NSDictionary *subflowSwitchCounts; // ivar: _subflowSwitchCounts
@property (copy, nonatomic) NSDictionary *symptomsBasedNetworkQuality; // ivar: _symptomsBasedNetworkQuality
@property (copy, nonatomic, setter=setTCPInfoMetricsByInterfaceName:) NSDictionary *tcpInfoMetricsByInterfaceName; // ivar: _tcpInfoMetricsByInterfaceName
@property (copy, nonatomic) NSNumber *timeUntilFirstByteRead; // ivar: _timeUntilFirstByteRead
@property (copy, nonatomic) NSNumber *timeUntilOpen; // ivar: _timeUntilOpen
@property (copy, nonatomic) NSNumber *tlsHandshakeTimeMsec; // ivar: _tlsHandshakeTimeMsec
@property (copy, nonatomic) NSString *tlsVersion; // ivar: _tlsVersion
@property (copy, nonatomic) NSNumber *unacknowledgedPingCount; // ivar: _unacknowledgedPingCount
@property (copy, nonatomic) NSString *wifiChannelInfo; // ivar: _wifiChannelInfo
@property (copy, nonatomic) NSString *wifiPhyMode; // ivar: _wifiPhyMode


-(id)getConnectionMetricsDescription;
-(void)_setConnectionMetricsFromNSPControlConnection:(id)arg0 withCompletion:(id)arg1 ;
-(void)_setConnectionMetricsTCPInfo:(id)arg0 ;
-(void)setConnectionMetricsForIDS:(CGFloat)arg0 messageDelay:(CGFloat)arg1 openErrorCode:(NSUInteger)arg2 ;
-(void)setConnectionMetricsFromConnection:(id)arg0 isPop:(BOOL)arg1 isMPTCP:(BOOL)arg2 attemptedEndpoints:(id)arg3 completion:(id)arg4 ;
-(void)setConnectionMetricsFromNWConnectionForDirect:(id)arg0 isMPTCP:(BOOL)arg1 attemptedEndpoints:(id)arg2 withCompletion:(id)arg3 ;
-(void)setConnectionMetricsFromNWConnectionForPOP:(id)arg0 withCompletion:(id)arg1 ;
-(void)setConnectionMetricsFromStream:(id)arg0 isPop:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)setConnectionMetricsFromStreamForDirect:(id)arg0 withCompletion:(id)arg1 ;
-(void)setConnectionMetricsFromStreamForPOP:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif