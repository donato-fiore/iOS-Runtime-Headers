// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MULTIWAYSEGMENT_H
#define MULTIWAYSEGMENT_H

@class NSDate, NSNumber, NSString, NSMutableDictionary;
@protocol SegmentStatsDelegate, OS_nw_activity;

#import <Foundation/Foundation.h>

#import "VCHistogram.h"
#import "VCHistogram2D.h"

@interface MultiwaySegment : NSObject {
    int _interval;
    int _frequency;
    CGFloat _averageTargetBitrateSum;
    unsigned int _averageTargetBitrateReportCounter;
    CGFloat _uplinkActualBitrateSum;
    unsigned int _uplinkActualBitrateCounter;
    CGFloat _uplinkBWEstimationSum;
    unsigned int _uplinkBWEstimationCounter;
    CGFloat _receiveBitrateSum;
    unsigned int _receiveBitrateCounter;
    CGFloat _roundTripTimeSum;
    unsigned int _roundTripTimeReportCounter;
    BOOL _hasReported;
    NSDate *_conversationTimeBase;
    int _startDate;
    id<SegmentStatsDelegate> *_delegate;
    BOOL _useNwActivitySubmitMetrics;
    NSObject<OS_nw_activity> *_nwActivity;
    BOOL _isNWActivityReportingEnabled;
    CGFloat _duplicationMaxNoRemotePacketTime;
    CGFloat _duplicationMaxRemoteNoRemotePacketTime;
}


@property (copy) NSNumber *IPVersion; // ivar: _IPVersion
@property (readonly) VCHistogram *PLR; // ivar: _PLR
@property (readonly) VCHistogram *RTT; // ivar: _RTT
@property (readonly) VCHistogram *TBR; // ivar: _TBR
@property (copy) NSString *activeConnectionRegistry; // ivar: _activeConnectionRegistry
@property (readonly) NSMutableDictionary *activeTemporalTiersBitmapStreams; // ivar: _activeTemporalTiersBitmapStreams
@property int adjustedDuration; // ivar: _adjustedDuration
@property (readonly) CGFloat averageTargetBitrate;
@property unsigned int callDeviceRole; // ivar: _callDeviceRole
@property unsigned int callMode; // ivar: _callMode
@property unsigned int callTransportType; // ivar: _callTransportType
@property unsigned char coreMotionActivityConfidence; // ivar: _coreMotionActivityConfidence
@property unsigned char coreMotionActivityValue; // ivar: _coreMotionActivityValue
@property (copy) NSString *duplicationConnectionConfig; // ivar: _duplicationConnectionConfig
@property (copy) NSString *duplicationConnectionFamily; // ivar: _duplicationConnectionFamily
@property unsigned char duplicationType; // ivar: _duplicationType
@property int duration; // ivar: _duration
@property unsigned int dynamicDupeLinkCount; // ivar: _dynamicDupeLinkCount
@property (readonly) NSMutableDictionary *fecStatsDict; // ivar: _fecStatsDict
@property BOOL is5GHz; // ivar: _is5GHz
@property BOOL isApplePersonalHotspot; // ivar: _isApplePersonalHotspot
@property BOOL isInitiator; // ivar: _isInitiator
@property BOOL isLocalCelltechDirty; // ivar: _isLocalCelltechDirty
@property (copy) NSNumber *isLocalExpensive; // ivar: _isLocalExpensive
@property BOOL isOneToOneMode; // ivar: _isOneToOneMode
@property (copy) NSNumber *isRemoteExpensive; // ivar: _isRemoteExpensive
@property unsigned char linkConfidenceScore; // ivar: _linkConfidenceScore
@property unsigned char linkIPPreference; // ivar: _linkIPPreference
@property unsigned char linkPreferDecision; // ivar: _linkPreferDecision
@property unsigned char linkPreferSuggestion; // ivar: _linkPreferSuggestion
@property unsigned int linkProbingVersion; // ivar: _linkProbingVersion
@property unsigned int localAlertStateSwitchCount; // ivar: _localAlertStateSwitchCount
@property (copy) NSNumber *localCelltech; // ivar: _localCelltech
@property unsigned int localSwitches; // ivar: _localSwitches
@property (readonly) VCHistogram2D *lossFecHistogram; // ivar: _lossFecHistogram
@property (readonly) VCHistogram2D *lossHistogram; // ivar: _lossHistogram
@property (readonly) VCHistogram *lossPattern; // ivar: _lossPattern
@property (copy) NSNumber *maxNegotiatedDownlinkBitrate; // ivar: _maxNegotiatedDownlinkBitrate
@property (copy) NSNumber *maxNegotiatedUplinkBitrate; // ivar: _maxNegotiatedUplinkBitrate
@property unsigned int mediaStallCount; // ivar: _mediaStallCount
@property unsigned int negotiatedSwitches; // ivar: _negotiatedSwitches
@property unsigned char plrTierTotalDelta; // ivar: _plrTierTotalDelta
@property (readonly) NSString *previousSegmentName; // ivar: _previousSegmentName
@property (readonly) unsigned int previousSegmentStreamGroups; // ivar: _previousSegmentStreamGroups
@property CGFloat primaryConnHealthAllowedDelay; // ivar: _primaryConnHealthAllowedDelay
@property unsigned int remoteAlertStateSwitchCount; // ivar: _remoteAlertStateSwitchCount
@property (copy) NSNumber *remoteCelltech; // ivar: _remoteCelltech
@property unsigned int remoteLinkProbingVersion; // ivar: _remoteLinkProbingVersion
@property (copy) NSString *remoteOSBuild; // ivar: _remoteOSBuild
@property unsigned int remoteSwitches; // ivar: _remoteSwitches
@property CGFloat rttMeanTotalDelta; // ivar: _rttMeanTotalDelta
@property (readonly) NSString *segmentName; // ivar: _segmentName
@property (readonly) unsigned int segmentStreamGroups; // ivar: _segmentStreamGroups
@property (copy) NSString *suggestedLinkTypeCombo; // ivar: _suggestedLinkTypeCombo
@property NSUInteger totalBytesReceived; // ivar: _totalBytesReceived
@property NSUInteger totalBytesSent; // ivar: _totalBytesSent
@property unsigned int totalMBLRampDownCount; // ivar: _totalMBLRampDownCount
@property unsigned int totalPacketsLost; // ivar: _totalPacketsLost
@property unsigned int totalPacketsReceived; // ivar: _totalPacketsReceived
@property unsigned int totalPacketsSent; // ivar: _totalPacketsSent
@property unsigned int totalSuddenBandwidthDropCount; // ivar: _totalSuddenBandwidthDropCount


+(void)storeToReport:(id)arg0 value:(id)arg1 key:(struct __CFString *)arg2 streamGroup:(id)arg3 ;
-(CGFloat)averageBWE;
-(CGFloat)averageReceiveBitrate;
-(CGFloat)averageRoundTripTime;
-(CGFloat)averageSendBitrate;
-(CGFloat)packetLossRate;
-(id)delegate;
-(id)initWithSegmentName:(id)arg0 previousSegmentName:(id)arg1 segmentStreamGroups:(unsigned int)arg2 previousSegmentStreamGroups:(unsigned int)arg3 nwActivity:(id)arg4 localSwitches:(unsigned int)arg5 conversationTimeBase:(id)arg6 delegate:(id)arg7 ;
-(id)segmentReport;
-(unsigned int)RTPeriod;
-(void)addCelltechTelemetryToDictionary:(id)arg0 ;
-(void)addCommonSegmentTelemetry:(id)arg0 ;
-(void)assertCleanCellTech;
-(void)complete_and_release_nw_activity:(int)arg0 ;
-(void)dealloc;
-(void)processDuplicationConnectionTelemetry:(id)arg0 type:(unsigned short)arg1 ;
-(void)processReceiveBitrate:(unsigned int)arg0 ;
-(void)processRoundTripTime:(unsigned int)arg0 ;
-(void)processTargetBitrate:(unsigned int)arg0 ;
-(void)processUplinkActualBitrate:(unsigned int)arg0 ;
-(void)processUplinkBWEstimation:(unsigned int)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setNWActivityReportingEnabled:(BOOL)arg0 ;


@end


#endif