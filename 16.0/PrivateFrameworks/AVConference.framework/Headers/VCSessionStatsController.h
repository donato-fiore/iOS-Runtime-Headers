// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCSESSIONSTATSCONTROLLER_H
#define VCSESSIONSTATSCONTROLLER_H

@protocol VCSessionStatsControllerDelegate, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "AVCStatisticsCollector.h"
#import "VCConnectionManager.h"
#import "VCTransportStreamGFT.h"

@interface VCSessionStatsController : NSObject {
    id<VCSessionStatsControllerDelegate> *_weakDelegate;
    AVCStatisticsCollector *_uplinkStatisticsCollector;
    AVCStatisticsCollector *_downlinkStatisticsCollector;
    ? _remoteStats;
    NSObject<OS_dispatch_source> *_localSessionStatsTimemoutSource;
    unsigned int _statsRequestCounter;
    VCConnectionManager *_connectionManager;
    VCTransportStreamGFT *_transportStream;
    CGFloat _lastTriggerRateControlTime;
    id *_reportingAgentWeak;
    unsigned int _uplinkServerStatsByteUsed;
    unsigned int _downlinkServerStatsByteUsed;
    *tagVCRealTimeThread _statsReceiveThread;
    unsigned short _streamID;
    unsigned short _statsArrayIndex;
    BOOL _enableStatsReceiveThread;
    unsigned int _previousTotalPacketSent;
    unsigned int _previousTotalPacketReceived;
    unsigned int _uplinkMostRecentSendTimestamp;
    unsigned int _downlinkMostRecentSendTimestamp;
    BOOL _didReceiveServerStatsResponse;
    BOOL _enableStatsReporting;
    CGFloat _lastStatsReportTime;
    int _lastProcessedBytesSent;
    int _bytesSentToReport;
    int _maxSentRate;
    int _minSentRate;
    int _lastProcessedBytesReceived;
    int _bytesReceivedToReport;
    int _maxReceivedRate;
    int _minReceivedRate;
    CGFloat _lastUpdateTime;
    CGFloat _lastTimeReceiveStatsFailed;
    unsigned int _statsNoResponseCounter;
    unsigned int _statsResponseCounter;
    unsigned int _numStatsDroppedDueToStatsID;
    unsigned int _numStatsDroppedDueToLinkID;
    unsigned int _numStatsDroppedDueToTooLate;
    unsigned int _numStatsProcessed;
    unsigned int _numStatsTriggeredForUplink;
    unsigned int _numStatsTriggeredForDownlink;
    CGFloat _averageInterCallbackDuration;
    CGFloat _lastPacketReceiveCallbackTime;
    CGFloat _totalStatsTransportStreamQueueTime;
    CGFloat _maxStatsTransportStreamQueueTime;
    CGFloat _lastHealthPrintTime;
}


@property (readonly) id *reportingAgent;
@property (nonatomic) CGFloat statsReportingInterval; // ivar: _statsReportingInterval


-(BOOL)isRemoteSessionStatsTooLateWithStatsId:(unsigned short)arg0 ;
-(id)initWithDelegate:(id)arg0 connectionManager:(id)arg1 uplinkStatsCollector:(id)arg2 downlinkStatsCollector:(id)arg3 reportingAgent:(struct opaqueRTCReporting *)arg4 transportSessionID:(unsigned int)arg5 streamID:(unsigned short)arg6 mediaQueue:(struct tagVCMediaQueue *)arg7 ;
-(unsigned short)translateTimestampFromMicro:(CGFloat)arg0 ;
-(void)calculateInterCallbackDurationWithTime:(CGFloat)arg0 ;
-(void)dealloc;
-(void)deregisterPeriodicTask;
-(void)flushRealTimeReportingStats;
-(void)handleRemoteSessionStats:(struct ? *)arg0 ;
-(void)healthPrintForServerStats;
-(void)periodicTask:(*void)arg0 ;
-(void)registerPeriodicTask;
-(void)reset;
-(void)resetHealthPrintCounters;
-(void)sendLocalStats;
-(void)startLocalSessionStatsReceive;
-(void)startLocalSessionStatsSend;
-(void)startLocalSessionStatsUpdate;
-(void)statsReceiveStatsPayload;
-(void)stopLocalSessionStatsUpdate;
-(void)triggerRateControlWithLocalSessionStats:(struct ? )arg0 time:(CGFloat)arg1 forUplink:(BOOL)arg2 forDownlink:(BOOL)arg3 fromVCRCExternalThread:(BOOL)arg4 ;
-(void)updateRemoteSessionStats:(struct ? )arg0 ;


@end


#endif