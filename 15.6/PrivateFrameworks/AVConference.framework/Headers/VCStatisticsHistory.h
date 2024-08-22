// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
    ? _sendHistory;
}




-(?)getSendHistoryElementWithPacketId;
-(BOOL)getStatsHistoryElementIndex:(*int)arg0 time:(CGFloat)arg1 inMostRecentDuration:(CGFloat)arg2 ;
-(BOOL)handleWrappedAroundByteCountForStats:(struct VCStatisticsStatsHistoryElement *)arg0 ;
-(BOOL)isStatsElementOutOfOrder:(struct VCStatisticsStatsHistoryElement )arg0 ;
-(CGFloat)getPacketLossRateAtTime:(CGFloat)arg0 inMostRecentDuration:(CGFloat)arg1 ;
-(CGFloat)getReceivingBitrateAtTime:(CGFloat)arg0 inMostRecentDuration:(CGFloat)arg1 ;
-(CGFloat)getRoundTripTimeWithPacketId:(unsigned int)arg0 time:(CGFloat)arg1 ;
-(CGFloat)getSendingBitrateAtTime:(CGFloat)arg0 inMostRecentDuration:(CGFloat)arg1 ;
-(CGFloat)getServerStatsBitrateAtTime:(CGFloat)arg0 inMostRecentDuration:(CGFloat)arg1 ;
-(int)getBurstyLossAtTime:(CGFloat)arg0 inMostRecentDuration:(CGFloat)arg1 withPercentile:(CGFloat)arg2 ;
-(void)addAndPruneSendHistory:(struct VCStatisticsSendHistoryElement *)arg0 upToTime:(CGFloat)arg1 ;
-(void)addStatsHistory:(struct VCStatisticsStatsHistoryElement )arg0 ;
-(void)clearSendHistory;
-(void)dealloc;
-(void)resetHistory;


@end


#endif