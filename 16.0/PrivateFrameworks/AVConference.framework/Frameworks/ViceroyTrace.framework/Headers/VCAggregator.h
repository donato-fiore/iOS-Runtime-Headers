// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCAGGREGATOR_H
#define VCAGGREGATOR_H

@class NSString, NSDate, NSMutableArray, WiFiP2PAWDLStateMonitor, NSDictionary, NSNumber;
@protocol VCAdaptiveLearningDelegate, OS_dispatch_queue, VCAggregatorDelegate, OS_nw_activity, OS_os_transaction;

#import <Foundation/Foundation.h>

#import "TimingCollection.h"
#import "VCAlgosStreamingScorer.h"
#import "VCAlgosStreamingScoreAggregator.h"

@interface VCAggregator : NSObject <VCAdaptiveLearningDelegate>

 {
    int _interval;
    int _frequency;
    NSString *_localInterfaceType;
    NSString *_connectionType;
    unsigned int _switchIntoDupCount;
    TimingCollection *_cameraTimers;
    unsigned char _momentCaptureTotal;
    unsigned char _momentCaptureFailure;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    id<VCAggregatorDelegate> *_delegate;
    id *_periodicAggregationOccuredHandler;
    VCAlgosStreamingScorer *_algosScorerDefault;
    NSObject<OS_nw_activity> *_sessionNwActivity;
    NSObject<OS_nw_activity> *_nwActivity;
    BOOL _useNwActivitySubmitMetrics;
    NSDate *_conversationTimeBase;
    int _startDate;
    NSInteger _onceAggregatedReportsToken;
    BOOL _isNWActivityReportingEnabled;
    NSMutableArray *_idsReportingBlobs;
    BOOL _reportRateControlExperiment;
    unsigned char _rateControlExperimentVersion;
    unsigned char _rateControlExperimentGroupIndex;
    unsigned int _nackGeneratorConfigVersion;
    BOOL _serverPacketRetransmissionsForVideoEnabled;
    BOOL _serverPacketRetransmissionsExtraDelayBudgetEnabled;
    int _transportType;
    BOOL _shouldReportLowLatencyInterfaceStatistics;
    int _thermalTimeToModerate;
    int _thermalTimeToHeavy;
    CGFloat _lastUsedTimestamp;
    NSObject<OS_os_transaction> *_transaction;
}


@property (readonly) VCAlgosStreamingScoreAggregator *algosScoreAggregator; // ivar: _algosScoreAggregator
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSObject<VCAggregatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int direction; // ivar: _direction
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WiFiP2PAWDLStateMonitor *lowLatencyInterfaceMonitor; // ivar: _lowLatencyInterfaceMonitor
@property (retain, nonatomic) NSDictionary *lowLatencyInterfaceStatistics; // ivar: _lowLatencyInterfaceStatistics
@property (readonly) *NSInteger onceAggregatedReportsToken;
@property (readonly) NSString *sessionID; // ivar: _sessionID
@property (readonly) NSNumber *streamToken; // ivar: _streamToken
@property (readonly) Class superclass;


-(BOOL)didUpdateStringFrom:(*id)arg0 toString:(id)arg1 ;
-(BOOL)isApplePersonalHotspot;
-(BOOL)serverPacketRetransmissionsExtraDelayBudgetEnabled;
-(BOOL)serverPacketRetransmissionsForVideoEnabled;
-(CGFloat)microFromPayload:(id)arg0 ;
-(id)aggregatedCallReports;
-(id)aggregatedSegmentQRReport;
-(id)aggregatedSegmentReport:(int)arg0 ;
-(id)aggregatedSessionReport;
-(id)initWithDelegate:(id)arg0 nwParentActivity:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 nwParentActivity:(id)arg1 conversationTimeBase:(id)arg2 ;
-(int)adaptiveLearningState;
-(int)initialSettledBitrate;
-(int)learntBitrateForSegment:(id)arg0 defaultValue:(int)arg1 ;
-(int)longTermAverageBWEForSegment:(id)arg0 ;
-(int)longTermAverageISBRForSegment:(id)arg0 ;
-(int)longTermAverageSARBRForSegment:(id)arg0 ;
-(int)longTermAverageSATXBRForSegment:(id)arg0 ;
-(int)longTermAverageTBRForSegment:(id)arg0 ;
-(int)previousISBRForSegment:(id)arg0 ;
-(int)shortTermAverageBWEForSegment:(id)arg0 ;
-(int)shortTermAverageISBRForSegment:(id)arg0 ;
-(int)shortTermAverageSARBRForSegment:(id)arg0 ;
-(int)shortTermAverageSATXBRForSegment:(id)arg0 ;
-(int)shortTermAverageTBRForSegment:(id)arg0 ;
-(struct __WiFiDeviceClient *)copyCurrentWiFiDevice;
-(unsigned int)RTPeriod;
-(unsigned int)nackGeneratorConfigVersion;
-(void)addCameraMetricsToReportDictionary:(id)arg0 totalDuration:(int)arg1 ;
-(void)addIDSTelemetry:(id)arg0 ;
-(void)addLowLatencyInterfaceStatisticsToPayload:(id)arg0 ;
-(void)addThermalMetricsToReportDictionary:(id)arg0 ;
-(void)dealloc;
-(void)flushCurrentSegment;
-(void)initAdaptiveLearningWithParameters:(id)arg0 ;
-(void)initializeLowLatencyInterfaceStatistics;
-(void)migrateValueForKey:(struct __CFString *)arg0 from:(id)arg1 to:(id)arg2 withKey:(struct __CFString *)arg3 ;
-(void)processEventWithCategory:(unsigned short)arg0 type:(unsigned short)arg1 payload:(id)arg2 ;
-(void)processIDSReportingBlob:(id)arg0 ;
-(void)saveCallSegmentHistory;
-(void)setNWActivityReportingEnabled:(BOOL)arg0 ;
-(void)setPeriodicAggregationOccuredHandler:(id)arg0 ;
-(void)updateRateControlExperiment:(id)arg0 type:(unsigned short)arg1 ;
-(void)updateRateControlExperimentCall:(id)arg0 ;
-(void)updateSegment:(id)arg0 TBR:(int)arg1 ISBTR:(int)arg2 SATXBR:(int)arg3 SARBR:(int)arg4 BWE:(int)arg5 ;
-(void)updateThermalMetricsFromPayload:(id)arg0 ;


@end


#endif