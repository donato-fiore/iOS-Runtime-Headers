// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVCBASEBANDCONGESTIONDETECTOR_H
#define AVCBASEBANDCONGESTIONDETECTOR_H


#import <Foundation/Foundation.h>

#import "VCBasebandMetrics.h"
#import "VCRateControlMediaController.h"
#import "AVCStatisticsCollector.h"

@interface AVCBasebandCongestionDetector : NSObject {
    VCBasebandMetrics *_basebandMetrics;
    CGFloat _notificationArrivalTime;
    *void _logBasebandDump;
}


@property (readonly, nonatomic) unsigned int basebandAverageBitrate; // ivar: _basebandAverageBitrate
@property (readonly, nonatomic) CGFloat basebandExpectedQueuingDelay; // ivar: _basebandExpectedQueuingDelay
@property (readonly, nonatomic) unsigned int basebandQueueDepth; // ivar: _basebandQueueDepth
@property (readonly, nonatomic) unsigned int basebandTxBitrate; // ivar: _basebandTxBitrate
@property (nonatomic) BOOL isTargetBitrateStabilized; // ivar: _isTargetBitrateStabilized
@property (retain, nonatomic) VCRateControlMediaController *mediaController; // ivar: _mediaController
@property (nonatomic) unsigned int mode; // ivar: _mode
@property (nonatomic) unsigned int radioAccessTechnology; // ivar: _radioAccessTechnology
@property (retain, nonatomic) AVCStatisticsCollector *statisticsCollector; // ivar: _statisticsCollector
@property (nonatomic) unsigned int targetBitrate; // ivar: _targetBitrate


-(BOOL)isRadioAccessTechnologyOnCellular:(unsigned int)arg0 ;
-(BOOL)processBasebandNotification:(id)arg0 metaData:(id)arg1 error:(*id)arg2 ;
-(BOOL)processBasebandNotification:(struct ? *)arg0 arrivalTime:(CGFloat)arg1 error:(*id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)enableBasebandLogDump:(*void)arg0 ;
-(void)printFlushAckToBasebandDump:(unsigned char)arg0 transactionID:(unsigned short)arg1 packetDropped:(unsigned short)arg2 sequenceNumberArray:(*unsigned short)arg3 ;
-(void)processBasebandAck:(struct ? *)arg0 ;


@end


#endif