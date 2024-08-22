// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDTRENDLOGIC_H
#define CDTRENDLOGIC_H


#import <Foundation/Foundation.h>


@interface CDTrendLogic : NSObject



-(id)initWithSlotCount:(NSUInteger)arg0 cDelta:(NSUInteger)arg1 cLowThreshold:(NSUInteger)arg2 cHighThreshold:(NSUInteger)arg3 cMin:(NSUInteger)arg4 cMax:(NSUInteger)arg5 cEpsilon:(NSUInteger)arg6 iecMinSeconds:(NSUInteger)arg7 iecMaxSeconds:(NSUInteger)arg8 iecDecayMult:(NSUInteger)arg9 iecMinMult:(NSUInteger)arg10 iecAvgMult:(NSUInteger)arg11 iecDiv:(NSUInteger)arg12 timerMinSeconds:(NSUInteger)arg13 timerLeewaySeconds:(NSUInteger)arg14 error:(*id)arg15 ;
-(id)initWithTrendLogicBand:(NSInteger)arg0 error:(*id)arg1 ;


@end


#endif