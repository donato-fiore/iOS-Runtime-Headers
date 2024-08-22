// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCSTATISTICSHISTORY_H
#define VCSTATISTICSHISTORY_H


#import <Foundation/Foundation.h>


@interface VCStatisticsHistory : NSObject {
    VCStatisticsStatsHistoryElement _statsHistory;
    int _statsHistorySize;
    int _currentStatsHistoryIndex;
    VCStatisticsStatsHistoryElement _lastStats;
    unsigned char _currentLinkID;
    CGFloat _lastHistoryNotEnoughLogTime;
    *VCStatisticsSendHistoryElement _sendHistory;
}




-(BOOL)getStatsHistoryElementIndex:(*int)arg0 time:(CGFloat)arg1 inMostRecentDuration:(CGFloat)arg2 ;
-(CGFloat)getPacketLossRateAtTime:(CGFloat)arg0 inMostRecentDuration:(CGFloat)arg1 ;
-(CGFloat)getReceivingBitrateAtTime:(CGFloat)arg0 inMostRecentDuration:(CGFloat)arg1 ;
-(CGFloat)getRoundTripTimeWithPacketId:(unsigned int)arg0 time:(CGFloat)arg1 ;
-(CGFloat)getSendingBitrateAtTime:(CGFloat)arg0 inMostRecentDuration:(CGFloat)arg1 ;
-(CGFloat)getServerStatsBitrateAtTime:(CGFloat)arg0 inMostRecentDuration:(CGFloat)arg1 ;
-(int)getBurstyLossAtTime:(CGFloat)arg0 inMostRecentDuration:(CGFloat)arg1 withPercentile:(CGFloat)arg2 ;
-(void)clearSendHistory;
-(void)dealloc;


@end


#endif