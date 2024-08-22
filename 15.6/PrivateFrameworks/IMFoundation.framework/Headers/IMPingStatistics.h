// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMPINGSTATISTICS_H
#define IMPINGSTATISTICS_H


#import <Foundation/Foundation.h>


@interface IMPingStatistics : NSObject {
    CGFloat _sumRoundtripTimes;
    int _numPacketsSuccessfullySent;
}


@property (readonly, nonatomic) CGFloat averageRoundtripTime; // ivar: _averageRoundtripTime
@property (nonatomic, setter=_setMaxRoundtripTime:) CGFloat maxRoundtripTime; // ivar: _maxRoundtripTime
@property (nonatomic, setter=_setMedianRoundtripTime:) CGFloat medianRoundtripTime; // ivar: _medianRoundtripTime
@property (nonatomic, setter=_setMinRoundtripTime:) CGFloat minRoundtripTime; // ivar: _minRoundtripTime
@property (readonly, nonatomic) int numPingsReceived; // ivar: _numPingsReceived
@property (readonly, nonatomic) int numPingsTransmitted; // ivar: _numPingsTransmitted
@property (readonly, nonatomic) CGFloat packetLossRate;
@property (readonly, nonatomic) int packetsSuccessfullySent; // ivar: _packetsSuccessfullySent
@property (nonatomic, setter=_setStandardDeviationRoundtripTime:) CGFloat standardDeviationRoundtripTime; // ivar: _standardDeviationRoundtripTime


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithMaxRTT:(CGFloat)arg0 medianRTT:(CGFloat)arg1 avgRTT:(CGFloat)arg2 minRTT:(CGFloat)arg3 transmitted:(int)arg4 successful:(int)arg5 received:(int)arg6 ;
-(void)_addReceivedPacket:(CGFloat)arg0 ;
-(void)_addTransmittedPacket:(BOOL)arg0 ;


@end


#endif