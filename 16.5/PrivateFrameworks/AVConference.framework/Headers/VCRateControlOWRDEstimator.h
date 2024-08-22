// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCRATECONTROLOWRDESTIMATOR_H
#define VCRATECONTROLOWRDESTIMATOR_H


#import <Foundation/Foundation.h>


@interface VCRateControlOWRDEstimator : NSObject {
    BOOL _useUINT16;
    unsigned int _firstSendTimestamp;
    unsigned int _previousSendTimestamp;
    unsigned int _previousSendTimestampDiff;
    NSUInteger _sendTimestampWrappedAround;
    CGFloat _firstSendTime;
    unsigned int _firstReceiveTimestamp;
    unsigned int _previousReceiveTimestamp;
    unsigned int _previousReceiveTimestampDiff;
    NSUInteger _receiveTimestampWrappedAround;
    CGFloat _firstReceiveTime;
    CGFloat _shortAverageLag;
    CGFloat _longAverageLag;
    unsigned int _abnormalOWRDSampleCount;
    BOOL _sendTimestampSpikeDetected;
    BOOL _receiveTimestampSpikeDetected;
    CGFloat _averageSendInterval;
    CGFloat _averageReceiveInterval;
}


@property (nonatomic) unsigned int mode; // ivar: _mode
@property (readonly, nonatomic) CGFloat owrd; // ivar: _owrd


-(BOOL)detectAbnormalOWRDWithRoundTripTime:(CGFloat)arg0 ;
-(BOOL)detectOutOfOrderAndSpikeWithReceiveTimestamp:(unsigned int)arg0 ;
-(BOOL)detectOutOfOrderAndSpikeWithSendTimestamp:(unsigned int)arg0 ;
-(CGFloat)relativeReceiveTimeWithTimestamp:(unsigned int)arg0 timestampRate:(unsigned int)arg1 ;
-(CGFloat)relativeSendTimeWithTimestamp:(unsigned int)arg0 timestampRate:(unsigned int)arg1 ;
-(void)calculateOWRDWithSendTime:(CGFloat)arg0 receiveTime:(CGFloat)arg1 roundTripTime:(CGFloat)arg2 ;
-(void)resetOWRDEstimation;


@end


#endif