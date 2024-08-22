// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CELLOUTRANKMETRICS_H
#define CELLOUTRANKMETRICS_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CellularStateRelay.h"
#import "NetworkAnalyticsStateRelay.h"
#import "CellOutrankController.h"
#import "WiFiThroughputAdviser.h"

@interface CellOutrankMetrics : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    CellularStateRelay *_cellRelay;
    NetworkAnalyticsStateRelay *_wifiRelay;
    CellOutrankController *_cellOutrankController;
    WiFiThroughputAdviser *_wifiThroughputAdviser;
    NSMutableArray *_stateHistory;
    NSInteger _outrankPollingMode;
    CGFloat _outrankEntryTimestamp;
    CGFloat _sampledTallyTimestamp;
    NSUInteger _sampledCellGrandTally;
    NSUInteger _sampledWifiGrandTally;
    int _stateHistorySeqno;
    CGFloat _delayedMeasurementInterval;
    unsigned int _maxStateHistory;
    CGFloat _prevCellOutrankPossibleDuration;
    CGFloat _prevCellOutrankIconSetDuration;
    CGFloat _prevCellOutrankFGExploitDuration;
    CGFloat _prevCellOutrankFGNonExploitDuration;
    unsigned int _prevCellOutrankIconSetEvents;
}




-(id)_outrankMetricForNew:(id)arg0 old:(id)arg1 withDelayedItems:(BOOL)arg2 ;
-(id)getState:(BOOL)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(id)secondsToMetricsAccuracy:(CGFloat)arg0 ;
-(void)_captureOutrankEntryAdditionalState:(id)arg0 flags:(NSUInteger)arg1 ;
-(void)_logMetricDictionaryForNew:(id)arg0 old:(id)arg1 withDelayedItems:(BOOL)arg2 why:(id)arg3 ;
-(void)_sendOutrankMetricNew:(id)arg0 old:(id)arg1 withDelayedItems:(BOOL)arg2 ;
-(void)_updateStateDeltas:(id)arg0 duration:(CGFloat)arg1 ;
-(void)didSampleFlows;
-(void)noteSTMState:(unsigned int)arg0 flags:(NSUInteger)arg1 wrmStatus:(NSUInteger)arg2 ;
-(void)reportABCCase:(id)arg0 ;
-(void)restoreDefaults;
-(void)setConfiguration:(id)arg0 ;
-(void)updateOutrankExitMetrics:(id)arg0 ;


@end


#endif