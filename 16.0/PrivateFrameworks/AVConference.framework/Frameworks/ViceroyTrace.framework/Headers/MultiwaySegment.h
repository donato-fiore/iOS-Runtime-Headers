// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MULTIWAYSEGMENT_H
#define MULTIWAYSEGMENT_H

@class NSDate, NSMutableDictionary, NSString;
@protocol SegmentStatsDelegate, OS_nw_activity;

#import <Foundation/Foundation.h>

#import "VCHistogram.h"

@interface MultiwaySegment : NSObject {
    int _interval;
    int _frequency;
    CGFloat _averageTargetBitrateSum;
    unsigned int _averageTargetBitrateReportCounter;
    CGFloat _roundTripTimeSum;
    unsigned int _roundTripTimeReportCounter;
    BOOL _hasReported;
    NSDate *_conversationTimeBase;
    int _startDate;
    id<SegmentStatsDelegate> *_delegate;
    BOOL _useNwActivitySubmitMetrics;
    NSObject<OS_nw_activity> *_nwActivity;
    BOOL _isNWActivityReportingEnabled;
}


@property (readonly) VCHistogram *PLR; // ivar: _PLR
@property (readonly) VCHistogram *RTT; // ivar: _RTT
@property (readonly) VCHistogram *TBR; // ivar: _TBR
@property (readonly) NSMutableDictionary *activeTemporalTiersBitmapStreams; // ivar: _activeTemporalTiersBitmapStreams
@property int adjustedDuration; // ivar: _adjustedDuration
@property (readonly) CGFloat averageTargetBitrate;
@property int duration; // ivar: _duration
@property BOOL is5GHz; // ivar: _is5GHz
@property BOOL isApplePersonalHotspot; // ivar: _isApplePersonalHotspot
@property unsigned int localSwitches; // ivar: _localSwitches
@property (readonly) NSString *previousSegmentName; // ivar: _previousSegmentName
@property (readonly) unsigned int previousSegmentStreamGroups; // ivar: _previousSegmentStreamGroups
@property (readonly) NSString *segmentName; // ivar: _segmentName
@property (readonly) unsigned int segmentStreamGroups; // ivar: _segmentStreamGroups
@property NSUInteger totalBytesReceived; // ivar: _totalBytesReceived
@property NSUInteger totalBytesSent; // ivar: _totalBytesSent
@property unsigned int totalPacketsLost; // ivar: _totalPacketsLost
@property unsigned int totalPacketsReceived; // ivar: _totalPacketsReceived
@property unsigned int totalPacketsSent; // ivar: _totalPacketsSent


-(CGFloat)averageRoundTripTime;
-(CGFloat)packetLossRate;
-(id)delegate;
-(id)initWithSegmentName:(id)arg0 previousSegmentName:(id)arg1 segmentStreamGroups:(unsigned int)arg2 previousSegmentStreamGroups:(unsigned int)arg3 nwActivity:(id)arg4 localSwitches:(unsigned int)arg5 conversationTimeBase:(id)arg6 delegate:(id)arg7 ;
-(id)segmentReport;
-(unsigned int)RTPeriod;
-(void)complete_and_release_nw_activity:(int)arg0 ;
-(void)dealloc;
-(void)processRoundTripTime:(unsigned int)arg0 ;
-(void)processTargetBitrate:(unsigned int)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setNWActivityReportingEnabled:(BOOL)arg0 ;


@end


#endif