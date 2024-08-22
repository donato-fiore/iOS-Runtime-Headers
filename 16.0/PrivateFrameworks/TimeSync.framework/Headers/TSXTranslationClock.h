// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSXTRANSLATIONCLOCK_H
#define TSXTRANSLATIONCLOCK_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TSXTranslationClock : NSObject {
    ? _timeInfo;
    unsigned int _validIndex;
    os_unfair_lock_s _updateLock;
    mach_timebase_info _timebaseInfo;
}


@property (readonly, nonatomic) NSUInteger clockIdentifier; // ivar: _clockIdentifier
@property (readonly, copy, nonatomic) NSString *clockName; // ivar: _clockName
@property (nonatomic) CGFloat hostRateRatio; // ivar: _hostRateRatio
@property (nonatomic) int lockState; // ivar: _lockState
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *propertyUpdateQueue; // ivar: _propertyUpdateQueue


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
-(NSUInteger)machAbsoluteNanosecondsToTicks:(NSUInteger)arg0 ;
-(NSUInteger)machAbsoluteTicksToNanoseconds:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithClockIdentifier:(NSUInteger)arg0 clockManager:(id)arg1 ;
-(void)_changedClockMaster;
-(void)_updateLockState:(int)arg0 ;
-(void)_updateTimeSyncTime:(NSUInteger)arg0 timeSyncInterval:(NSUInteger)arg1 domainTime:(NSUInteger)arg2 domainInterval:(NSUInteger)arg3 ;


@end


#endif