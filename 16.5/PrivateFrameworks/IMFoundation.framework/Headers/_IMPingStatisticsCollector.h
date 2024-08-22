// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _IMPINGSTATISTICSCOLLECTOR_H
#define _IMPINGSTATISTICSCOLLECTOR_H

@class NSMutableArray, NSMutableString;

#import <Foundation/Foundation.h>

#import "IMPingStatistics.h"

@interface _IMPingStatisticsCollector : NSObject {
    _IMPingPacketData" _timestampArray;
    NSMutableArray *_roundTriptimes;
    NSMutableString *_stringToWriteToFile;
    IMPingStatistics *_stats;
}




-(BOOL)logStatsToFile:(id)arg0 error:(*id)arg1 ;
-(CGFloat)_computeMedianTime:(id)arg0 ;
-(CGFloat)_computeStandardDeviation:(id)arg0 numPings:(int)arg1 averageRTT:(CGFloat)arg2 ;
-(id)init;
-(id)pingStats;
-(id)pingStatsForLastNSeconds:(CGFloat)arg0 ;
-(struct timeval )timeSentForPacket:(int)arg0 ;
-(void)addEchoPacket:(int)arg0 packetTimestamp:(struct timeval )arg1 error:(int)arg2 ;
-(void)addEchoReplyPacket:(int)arg0 ;
-(void)dealloc;
-(void)timeoutOldSequenceNumbers:(CGFloat)arg0 ;


@end


#endif