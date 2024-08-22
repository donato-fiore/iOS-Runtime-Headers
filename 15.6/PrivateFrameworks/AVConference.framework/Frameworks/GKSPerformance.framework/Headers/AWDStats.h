// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AWDSTATS_H
#define AWDSTATS_H

@class NSDictionary, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AudioTierHistogram.h"
#import "AWDHistogram.h"

@interface AWDStats : NSObject {
    NSDictionary *histogramDict;
    NSMutableDictionary *timingDict;
    unsigned int txWidth;
    unsigned int txHeight;
    unsigned int rxWidth;
    unsigned int rxHeight;
    unsigned int txFrameRateAvg;
    unsigned int txFrameRateAvgCount;
    unsigned int txFrameRateMax;
    unsigned int txFrameRateMin;
    unsigned int rxFrameRateAvg;
    unsigned int rxFrameRateAvgCount;
    unsigned int rxFrameRateMax;
    unsigned int rxFrameRateMin;
    NSString *interfaceName;
    NSString *remoteInterfaceName;
    unsigned int connectionType;
    unsigned int avgLossRate;
    unsigned int avgLossRateCount;
    unsigned int avgJitterBufferSize;
    unsigned int avgJitterBufferSizeCount;
    unsigned int avgInterarrivalTime;
    unsigned int avgInterarrivalTimeCount;
    unsigned int targetJitterBufferSize;
    unsigned int targetJitterBufferSizeCount;
    unsigned int downlinkEstimateAvg;
    unsigned int downlinkEstimateAvgCount;
    unsigned int uplinkEstimateAvg;
    unsigned int uplinkEstimateAvgCount;
    unsigned int avgRate;
    unsigned int avgRateCount;
    unsigned int audioPauseTime;
    unsigned int videoPauseTime;
    unsigned int audioFlush;
    unsigned int videoFlush;
    unsigned int basebandCount;
    CGFloat pipDuration;
    CGFloat pipRunningSince;
    unsigned int targetFramerate;
    CGFloat timeSinceLastVRA;
    unsigned int lastVRAWidth;
    NSString *currentInterface;
    NSString *previousInterface;
    CGFloat timeSinceLastCellTech;
    CGFloat previousCellTechDuration;
    CGFloat currentCellTechDuration;
    unsigned int terminationReason;
    char isSender;
    NSInteger startTime;
    NSString *currentInterfaceOUI;
    AudioTierHistogram *audioTiers;
    unsigned int operatingMode;
    unsigned int relayType;
    unsigned int callAvgTxRate;
    unsigned int callAvgTxRateCount;
    unsigned int callAvgRxRate;
    unsigned int callAvgRxRateCount;
    NSInteger callDuration;
    BOOL initialPrimaryInterfaceFound;
    BOOL currentPrimaryInterfaceIsCell;
    unsigned int handoverCellCount;
    unsigned int handoverWifiCount;
    BOOL currentDuplicationStateOn;
    BOOL handoverDuringDuplication;
    unsigned int handoverWithDuplicationCount;
    unsigned int handoverWithoutDuplicationCount;
    unsigned int duplicationWithoutHandoverCount;
    unsigned int duplicationPercent;
    unsigned int rxExcessICEBytes;
    unsigned int txExcessICEBytes;
    unsigned int rxExcessRTPBytes;
    unsigned int txExcessRTPBytes;
    BOOL isRoaming;
    CGFloat silenceCompressionRatio;
    unsigned int bytesSaved;
    unsigned int mode;
    unsigned int deviceRole;
    unsigned int transportType;
    NSMutableDictionary *aggregatedStats;
    CGFloat avgFrameRateSum;
    unsigned int avgFrameRateSampleCount;
    CGFloat minFrameRate;
    CGFloat maxFrameRate;
    unsigned int PLICounter;
    unsigned int keyframeCounter;
    unsigned int videoStallDuration;
    AWDHistogram *PLRHistogram;
    AWDHistogram *RTTHistogram;
    AWDHistogram *NOWRDHistogram;
    AWDHistogram *RecommendedRxBitrateHistogram;
    AWDHistogram *ActualRxBitrateHistogram;
    AWDHistogram *momentsMediaTypeHistogram;
    AWDHistogram *momentsResultsHistogram;
    AWDHistogram *momentsFileSizeHistogram;
    CGFloat RTCPSendInterval;
    NSDictionary *aggregatedReport;
    NSObject<OS_dispatch_queue> *submitQueue;
}


@property (copy, nonatomic) NSString *callID; // ivar: callID
@property (readonly) unsigned int callNonce; // ivar: callNonce
@property float localVideoDegradeTime; // ivar: localVideoDegradeTime
@property float remoteVideoDegradeTime; // ivar: remoteVideoDegradeTime


+(id)statsSingleton;
+(void)initialize;
-(id)init;
-(int)sendAggregationReportToAWD;
-(int)sendAudioTierHistogramToAWD;
-(int)sendBasebandStatsToAWD;
-(int)sendConnectivityTimingToAWD;
-(int)sendDTXStatsToAWD;
-(int)sendHistogramsToAWD;
-(int)sendHomeKitIPCameraNetworkStatistics;
-(int)sendInterfaceStatusToAWD;
-(int)sendModeRoleTransportToAWD;
-(int)sendRTCSessionEndMetricToAWD;
-(int)sendRTStatsToAWD;
-(int)sendVideoQualityStatsToAWD;
-(int)sendVideoStatusToAWD;
-(void)accumulateAudioFlush:(unsigned int)arg0 ;
-(void)accumulateAudioPauseTime:(unsigned int)arg0 ;
-(void)accumulateAverageInterarrivalTime:(unsigned int)arg0 ;
-(void)accumulateAverageRate:(unsigned int)arg0 ;
-(void)accumulateAverageReceiveRate:(unsigned int)arg0 ;
-(void)accumulateAverageTransmitRate:(unsigned int)arg0 ;
-(void)accumulateAvgLossRate:(unsigned int)arg0 ;
-(void)accumulateDownlinkEstimate:(unsigned int)arg0 ;
-(void)accumulateJitterBufferSize:(unsigned int)arg0 ;
-(void)accumulateRxFrameRate:(unsigned int)arg0 min:(unsigned int)arg1 max:(unsigned int)arg2 ;
-(void)accumulateTargetJitterBufferSize:(unsigned int)arg0 ;
-(void)accumulateTxFrameRate:(unsigned int)arg0 min:(unsigned int)arg1 max:(unsigned int)arg2 ;
-(void)accumulateUplinkEstimate:(unsigned int)arg0 ;
-(void)accumulateVideoFlush:(unsigned int)arg0 ;
-(void)accumulateVideoPauseTime:(unsigned int)arg0 ;
-(void)addConnectivityTimingDictionary:(id)arg0 ;
-(void)addFloatValue:(float)arg0 toHistogram:(id)arg1 ;
-(void)addRTStatsDictionary:(id)arg0 ;
-(void)addVRAWidth:(unsigned int)arg0 ;
-(void)addValue:(unsigned int)arg0 toHistogram:(id)arg1 ;
-(void)callEnd;
-(void)callEndAppleCalling;
-(void)callEndFaceTime;
-(void)callEndHomeKitIPCamera;
-(void)callEndSecondDisplay;
-(void)callStartIsSender:(BOOL)arg0 forTime:(NSInteger)arg1 mode:(unsigned int)arg2 ;
-(void)dealloc;
-(void)duplicationStartEvent;
-(void)duplicationStopEvent;
-(void)finishCellTech;
-(void)finishVRA;
-(void)firstVideoFrameForHomeKitSessionReceived:(NSInteger)arg0 ;
-(void)generateAggregatedCallStats:(id)arg0 ;
-(void)generateSecondDisplayAggregatedCallStats:(id)arg0 ;
-(void)incrementBasebandCount;
-(void)mergeAggregatedSegmentStats:(id)arg0 ;
-(void)printHistograms;
-(void)processSecondDisplayLogTransportInfoStats;
-(void)reset;
-(void)setCallReportProtobuf:(unsigned int)arg0 withProtobufData:(id)arg1 forMetricID:(NSInteger)arg2 ;
-(void)setConnectionType:(unsigned int)arg0 ;
-(void)setDTXStats:(CGFloat)arg0 BytesSaved:(unsigned int)arg1 ;
-(void)setDuplicationPercent:(unsigned int)arg0 ;
-(void)setFirstRemoteFrameTiming:(unsigned int)arg0 ;
-(void)setInterface:(id)arg0 ;
-(void)setInterfaceOUI:(id)arg0 ;
-(void)setLocalWidth:(unsigned int)arg0 height:(unsigned int)arg1 framerate:(unsigned int)arg2 ;
-(void)setModeRoleTransport:(unsigned int)arg0 deviceRole:(unsigned int)arg1 transportType:(unsigned int)arg2 ;
-(void)setRXExcessICEBytes:(unsigned int)arg0 TXExcessICEBytes:(unsigned int)arg1 RXExcessRTPBytes:(unsigned int)arg2 TXExcessRTPBytes:(unsigned int)arg3 ;
-(void)setRemoteInterface:(id)arg0 ;
-(void)setRemoteWidth:(unsigned int)arg0 height:(unsigned int)arg1 ;
-(void)setRoaming:(BOOL)arg0 ;
-(void)setTerminationReason:(unsigned int)arg0 ;
-(void)startHomeKitSessionWithCallID:(id)arg0 RTCPSendInterval:(CGFloat)arg1 startTime:(NSInteger)arg2 ;
-(void)startPIPState;
-(void)stopPIPState;
-(void)updateAudioTier:(unsigned int)arg0 mode:(unsigned int)arg1 duplication:(unsigned int)arg2 codecPayload:(unsigned int)arg3 codecBitrate:(unsigned int)arg4 bundling:(unsigned int)arg5 ;
-(void)updateCellTech:(id)arg0 ;
-(void)updateHomeKitIPCameraRealtimeStats:(CGFloat)arg0 minFrameRate:(CGFloat)arg1 maxFrameRate:(CGFloat)arg2 videoStallDuration:(unsigned int)arg3 PLRSample:(unsigned int)arg4 RTTSample:(unsigned int)arg5 NOWRDSample:(unsigned int)arg6 RecommendedRxBitrateSample:(unsigned int)arg7 ActualRxBitrateSample:(unsigned int)arg8 ;
-(void)updateHomeKitSessionKeyframeCount;
-(void)updateHomeKitSessionPLICount;
-(void)updateLocalPrimaryInterface:(id)arg0 ;
-(void)updateMomentsStats:(id)arg0 ;


@end


#endif