// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCVIDEOSTREAMRATECONTROLLER_H
#define VCVIDEOSTREAMRATECONTROLLER_H

@protocol VCVideoStreamRateControlProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VCVideoStreamRateController : NSObject {
    id<VCVideoStreamRateControlProtocol> *_rateControl;
    int _algorithm;
    unsigned short _maxTierIndex;
    unsigned short _minTierIndex;
    unsigned short _operatingTierIndex;
    CGFloat _rateControlTime;
    CGFloat _rateControlInterval;
    unsigned int _previousRTPTimestamp;
    unsigned int _averageTargetBitrate;
    NSUInteger _accumulatedTargetDataSize;
    CGFloat _totalTime;
    CGFloat _videoFrozenDuration;
    BOOL _didVideoStall;
    *void _logDump;
    NSObject<OS_dispatch_queue> *_videoStreamRateControllerQueue;
}


@property (readonly, nonatomic) unsigned int maxBitrate; // ivar: _maxBitrate
@property (readonly, nonatomic) unsigned int minBitrate; // ivar: _minBitrate
@property (readonly, nonatomic) CGFloat nowrd;
@property (readonly, nonatomic) CGFloat nowrdAcc;
@property (readonly, nonatomic) CGFloat nowrdShort;
@property (readonly, nonatomic) CGFloat owrd;
@property (readonly, nonatomic) unsigned int targetBitrate; // ivar: _targetBitrate


-(id)className;
-(id)initWithDumpID:(unsigned int)arg0 ;
-(unsigned short)maxTierIndex:(unsigned int)arg0 ;
-(unsigned short)minTierIndex:(unsigned int)arg0 ;
-(void)createLogDumpFile:(unsigned int)arg0 ;
-(void)dealloc;
-(void)doRateControlWithTime:(CGFloat)arg0 roundTripTime:(CGFloat)arg1 packetLossRate:(CGFloat)arg2 operatingBitrate:(unsigned int)arg3 averageReceivedBitrate:(unsigned int)arg4 ;
-(void)releaseLogDumpFile;
-(void)setMaxTargetBitrate:(unsigned int)arg0 minTargetBitrate:(unsigned int)arg1 ;
-(void)setOperatingTierIndexWithBitrate:(unsigned int)arg0 ;
-(void)setRateControlInterval:(CGFloat)arg0 ;
-(void)updateAverageTargetBitrate:(unsigned int)arg0 interval:(CGFloat)arg1 ;
-(void)updateRTPReceiveWithTimestamp:(unsigned int)arg0 sampleRate:(unsigned int)arg1 time:(CGFloat)arg2 ;
-(void)updateVideoStall:(BOOL)arg0 withStallDuration:(unsigned int)arg1 ;


@end


#endif