// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTIMESYNCCLOCK_H
#define TSTIMESYNCCLOCK_H



#import "TSClock.h"

@interface TSTimeSyncClock : TSClock {
    TSClock *_translationClock;
}




-(BOOL)convertFromDomainTime:(*NSUInteger)arg0 toMachAbsoluteTime:(*NSUInteger)arg1 withCount:(unsigned int)arg2 ;
-(BOOL)convertFromDomainTime:(*NSUInteger)arg0 toTimeSyncTime:(*NSUInteger)arg1 withCount:(unsigned int)arg2 ;
-(BOOL)convertFromMachAbsoluteTime:(*NSUInteger)arg0 toDomainTime:(*NSUInteger)arg1 withCount:(unsigned int)arg2 ;
-(BOOL)convertFromTimeSyncTime:(*NSUInteger)arg0 toDomainTime:(*NSUInteger)arg1 withCount:(unsigned int)arg2 ;
-(BOOL)getMachAbsoluteRateRatioNumerator:(*NSUInteger)arg0 denominator:(*NSUInteger)arg1 machAnchor:(*NSUInteger)arg2 andDomainAnchor:(*NSUInteger)arg3 withError:(*id)arg4 ;
-(BOOL)getTimeSyncTimeRateRatioNumerator:(*NSUInteger)arg0 denominator:(*NSUInteger)arg1 timeSyncAnchor:(*NSUInteger)arg2 andDomainAnchor:(*NSUInteger)arg3 withError:(*id)arg4 ;
-(NSUInteger)convertFromDomainIntervalToMachAbsoluteInterval:(NSUInteger)arg0 ;
-(NSUInteger)convertFromDomainIntervalToTimeSyncTimeInterval:(NSUInteger)arg0 ;
-(NSUInteger)convertFromDomainToMachAbsoluteTime:(NSUInteger)arg0 ;
-(NSUInteger)convertFromDomainToTimeSyncTime:(NSUInteger)arg0 ;
-(NSUInteger)convertFromMachAbsoluteIntervalToDomainInterval:(NSUInteger)arg0 ;
-(NSUInteger)convertFromMachAbsoluteToDomainTime:(NSUInteger)arg0 ;
-(NSUInteger)convertFromTimeSyncTimeIntervalToDomainInterval:(NSUInteger)arg0 ;
-(NSUInteger)convertFromTimeSyncToDomainTime:(NSUInteger)arg0 ;
-(id)initWithClockIdentifier:(NSUInteger)arg0 translationClock:(id)arg1 ;
-(int)lockState;


@end


#endif