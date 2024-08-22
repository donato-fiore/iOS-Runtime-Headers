// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCBASEBANDMETRICS_H
#define VCBASEBANDMETRICS_H


#import <Foundation/Foundation.h>

#import "VCRateControlMediaController.h"

@interface VCBasebandMetrics : NSObject {
    ? _lastBasebandNotification;
    CGFloat _bdcd;
    CGFloat _normalizedBDCD;
    CGFloat _normalizedDelay;
    BOOL _isBDCDListReady;
    BOOL _useAverageQueueDepthForDelay;
    ? _bdcdList;
    ? _infoList;
    unsigned int _txBitrate;
    unsigned int _averageBitrate;
    unsigned int _previousAverageBitrate;
    unsigned int _averageBitrateShort;
    unsigned int _averageBitrateLong;
    CGFloat _averageQueueDepth;
    CGFloat _expectedQueuingDelay;
    CGFloat _expectedQueuingDelayLong;
    CGFloat _averageBitrateMovingAverageFactor;
    BOOL _resetAverageBitrateLong;
    *void _logBasebandDump;
}


@property (nonatomic) BOOL isTargetBitrateStabilized; // ivar: _isTargetBitrateStabilized
@property (retain, nonatomic) VCRateControlMediaController *mediaController; // ivar: _mediaController
@property (nonatomic) unsigned int targetBitrate; // ivar: _targetBitrate


-(CGFloat)updateTotalQueueDepth:(unsigned int)arg0 ;
-(id)init;
-(struct tagVCStatisticsMessage )getBasebandMetricsWithNotification:(struct ? *)arg0 ;
-(void)addBDCDListWithNotificationArrivalTime:(CGFloat)arg0 bdcd:(CGFloat)arg1 queuingDelay:(CGFloat)arg2 ;
-(void)addInfoListWithNotification:(struct ? *)arg0 ;
-(void)calculateBitratesAndDelaysWithTotalQueueDepth:(unsigned int)arg0 ;
-(void)dealloc;
-(void)enableBasebandLogDump:(*void)arg0 ;
-(void)normalizeBDCD:(CGFloat)arg0 ;
-(void)resetBBNoteHistoryList;
-(void)resetBDCDList;


@end


#endif