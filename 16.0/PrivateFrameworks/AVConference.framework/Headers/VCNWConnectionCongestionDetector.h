// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCNWCONNECTIONCONGESTIONDETECTOR_H
#define VCNWCONNECTIONCONGESTIONDETECTOR_H


#import <Foundation/Foundation.h>

#import "AVCStatisticsCollector.h"

@interface VCNWConnectionCongestionDetector : NSObject {
    ? _previousStatistics;
    unsigned int _lastTimestampWithPacketDrop;
    unsigned int _packetDropCountPerFrame;
    BOOL _didSendCongestionEvent;
    *void _logNWDump;
}


@property (readonly) unsigned int averagePacketDelayMs; // ivar: _averagePacketDelayMs
@property (readonly) unsigned int averageThroughputBps; // ivar: _averageThroughputBps
@property unsigned int maxAveragePacketDelayMs; // ivar: _maxAveragePacketDelayMs
@property (readonly) unsigned int packetDropCount; // ivar: _packetDropCount
@property (retain, nonatomic) AVCStatisticsCollector *statisticsCollector; // ivar: _statisticsCollector


-(BOOL)processNWConnectionNotification:(struct ifnet_interface_advisory *)arg0 ;
-(BOOL)processNWConnectionPacketEvent:(struct packet_id *)arg0 eventType:(int)arg1 ;
-(void)dealloc;
-(void)enableNWLogDump:(*void)arg0 ;
-(void)sendCongestionEventWithTimestamp:(unsigned int)arg0 ;


@end


#endif