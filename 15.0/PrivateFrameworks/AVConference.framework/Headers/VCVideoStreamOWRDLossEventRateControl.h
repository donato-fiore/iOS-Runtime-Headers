// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCVIDEOSTREAMOWRDLOSSEVENTRATECONTROL_H
#define VCVIDEOSTREAMOWRDLOSSEVENTRATECONTROL_H

@class NSString;
@protocol VCVideoStreamRateControlProtocol;

#import <Foundation/Foundation.h>


@interface VCVideoStreamOWRDLossEventRateControl : NSObject <VCVideoStreamRateControlProtocol>

 {
    CGFloat _rampUpFrozenDuration;
    unsigned short _currentTierIndex;
    NSInteger _rampUpStatus;
    CGFloat _rampDownLossEventBitrateThreshold;
    CGFloat _packetLossRate;
    CGFloat _packetLossRateVideo;
    CGFloat _roundTripTime;
    CGFloat _firstReceiveTime;
    CGFloat _shortAverageLag;
    CGFloat _longAverageLag;
    unsigned int _firstSendTimestamp;
    unsigned int _previousSendTimestamp;
    unsigned int _previousTimestampDiff;
    int _sendTimestampWrappedAround;
    BOOL _lossEventBuffer;
    int _lossEventBufferIndex;
    CGFloat _lastLossEventTime;
    CGFloat _rampUpFrozenTime;
    CGFloat _rampDownOWRDThreshold;
    CGFloat _rampDownLossRateThreshold;
    CGFloat _rampDownLossEventCountThreshold;
    CGFloat _rampUpNoLossEventDurationRatio;
    CGFloat _rampUpStatusRateLimitedThreshold;
    CGFloat _rateControlTime;
    unsigned int _averageReceivedBitrate;
    unsigned short _minTierIndex;
    unsigned short _maxTierIndex;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat nowrd;
@property (readonly, nonatomic) CGFloat nowrdAcc;
@property (readonly, nonatomic) CGFloat nowrdShort;
@property (readonly, nonatomic) CGFloat owrd; // ivar: _owrd
@property (nonatomic) CGFloat rateControlInterval; // ivar: _rateControlInterval
@property (readonly, nonatomic) int state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned int targetBitrate; // ivar: _targetBitrate


-(BOOL)shouldRampDown;
-(BOOL)shouldRampUp;
-(id)className;
-(id)init;
-(int)lossEventCount;
-(int)lossEventCountThresholdForBitrate:(unsigned int)arg0 ;
-(unsigned short)rampDownTier;
-(unsigned short)rampUpTier;
-(void)calculateOWRDWithTimestamp:(unsigned int)arg0 sampleRate:(unsigned int)arg1 time:(CGFloat)arg2 ;
-(void)doRateControlWithTime:(CGFloat)arg0 roundTripTime:(CGFloat)arg1 packetLossRate:(CGFloat)arg2 operatingTierIndex:(unsigned short)arg3 averageReceivedBitrate:(unsigned int)arg4 ;
-(void)printRateControlFullInfoWithLogDump:(*void)arg0 time:(CGFloat)arg1 videoStall:(BOOL)arg2 videoFrozenDuration:(CGFloat)arg3 averageTargetBitrate:(unsigned int)arg4 ;
-(void)resetLossEventBuffer;
-(void)setMaxTierIndex:(unsigned short)arg0 minTierIndex:(unsigned short)arg1 ;
-(void)stateChange:(int)arg0 ;
-(void)updatePacketLossRate:(CGFloat)arg0 time:(CGFloat)arg1 ;
-(void)updateRTPReceiveWithTimestamp:(unsigned int)arg0 sampleRate:(unsigned int)arg1 time:(CGFloat)arg2 ;


@end


#endif