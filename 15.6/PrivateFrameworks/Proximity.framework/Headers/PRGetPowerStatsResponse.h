// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PRGETPOWERSTATSRESPONSE_H
#define PRGETPOWERSTATSRESPONSE_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PRGetPowerStatsResponse : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) unsigned int dspProcessingDuration; // ivar: _dspProcessingDuration
@property (readonly, nonatomic) unsigned int dualAntennaSearchDuration; // ivar: _dualAntennaSearchDuration
@property (readonly, nonatomic) unsigned int dualChainRxPacketDuration; // ivar: _dualChainRxPacketDuration
@property (readonly, nonatomic) unsigned short numPacketsReceived; // ivar: _numPacketsReceived
@property (readonly, nonatomic) unsigned short numPacketsTransmitted; // ivar: _numPacketsTransmitted
@property (readonly, nonatomic) unsigned int singleAntennaSearchDuration; // ivar: _singleAntennaSearchDuration
@property (readonly, nonatomic) unsigned int singleChainRxPacketDuration; // ivar: _singleChainRxPacketDuration
@property (readonly, nonatomic) unsigned int sleepCount; // ivar: _sleepCount
@property (readonly, nonatomic) unsigned int sleepDuration; // ivar: _sleepDuration
@property (readonly, nonatomic) unsigned int tripleChainRxPacketDuration; // ivar: _tripleChainRxPacketDuration
@property (readonly, nonatomic) unsigned int txDuration; // ivar: _txDuration
@property (readonly, nonatomic) unsigned int wakeCount; // ivar: _wakeCount
@property (readonly, nonatomic) unsigned int wakeDuration; // ivar: _wakeDuration


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGetPowerStatsResponse:(struct GetPowerStatsResponse *)arg0 ;
-(id)initWithSleepDuration:(unsigned int)arg0 wakeDuration:(unsigned int)arg1 singleAntennaSearchDuration:(unsigned int)arg2 dualAntennaSearchDuration:(unsigned int)arg3 singleChainRxPacketDuration:(unsigned int)arg4 dualChainRxPacketDuration:(unsigned int)arg5 tripleChainRxPacketDuration:(unsigned int)arg6 dspProcessingDuration:(unsigned int)arg7 txDuration:(unsigned int)arg8 numPacketsReceived:(unsigned short)arg9 numPacketsTransmitted:(unsigned short)arg10 sleepCount:(unsigned int)arg11 wakeCount:(unsigned int)arg12 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif