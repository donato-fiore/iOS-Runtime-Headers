// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSKERNELCLOCK_H
#define TSKERNELCLOCK_H

@class IOKService, IOKConnection, IOKNotificationPort, IOKInterestNotification;


#import "TSClock.h"

@interface TSKernelClock : TSClock {
    IOKService *_service;
    IOKConnection *_connection;
    IOKNotificationPort *_notificationPort;
    IOKInterestNotification *_interestNotification;
    os_unfair_lock_s _serviceLock;
}


@property (readonly, nonatomic) IOKConnection *connection;
@property (readonly, nonatomic) IOKService *service;


+(id)availableKernelClockIdentifiers;
+(id)clockNameForClockIdentifier:(NSUInteger)arg0 ;
+(id)diagnosticDescriptionForService:(id)arg0 withIndent:(id)arg1 ;
+(id)diagnosticInfoForClockIdentifier:(NSUInteger)arg0 ;
+(id)diagnosticInfoForService:(id)arg0 ;
+(id)iokitMatchingDictionaryForClockIdentifier:(NSUInteger)arg0 ;
+(id)serviceForClockIdentifier:(NSUInteger)arg0 ;
-(BOOL)convertFromDomainTime:(*NSUInteger)arg0 toMachAbsoluteTime:(*NSUInteger)arg1 withCount:(unsigned int)arg2 ;
-(BOOL)convertFromDomainTime:(*NSUInteger)arg0 toTimeSyncTime:(*NSUInteger)arg1 withCount:(unsigned int)arg2 ;
-(BOOL)convertFromMachAbsoluteTime:(*NSUInteger)arg0 toDomainTime:(*NSUInteger)arg1 withCount:(unsigned int)arg2 ;
-(BOOL)convertFromTimeSyncTime:(*NSUInteger)arg0 toDomainTime:(*NSUInteger)arg1 withCount:(unsigned int)arg2 ;
-(BOOL)deregisterAsyncCallback;
-(BOOL)getMachAbsoluteRateRatioNumerator:(*NSUInteger)arg0 denominator:(*NSUInteger)arg1 machAnchor:(*NSUInteger)arg2 andDomainAnchor:(*NSUInteger)arg3 withError:(*id)arg4 ;
-(BOOL)getTimeSyncTimeRateRatioNumerator:(*NSUInteger)arg0 denominator:(*NSUInteger)arg1 timeSyncAnchor:(*NSUInteger)arg2 andDomainAnchor:(*NSUInteger)arg3 withError:(*id)arg4 ;
-(BOOL)registerAsyncCallback;
-(CGFloat)hostRateRatio;
-(NSUInteger)convertFromDomainIntervalToMachAbsoluteInterval:(NSUInteger)arg0 ;
-(NSUInteger)convertFromDomainIntervalToTimeSyncTimeInterval:(NSUInteger)arg0 ;
-(NSUInteger)convertFromDomainToMachAbsoluteTime:(NSUInteger)arg0 ;
-(NSUInteger)convertFromDomainToTimeSyncTime:(NSUInteger)arg0 ;
-(NSUInteger)convertFromMachAbsoluteIntervalToDomainInterval:(NSUInteger)arg0 ;
-(NSUInteger)convertFromMachAbsoluteToDomainTime:(NSUInteger)arg0 ;
-(NSUInteger)convertFromTimeSyncTimeIntervalToDomainInterval:(NSUInteger)arg0 ;
-(NSUInteger)convertFromTimeSyncToDomainTime:(NSUInteger)arg0 ;
-(id)clockName;
-(id)diagnosticDescriptionWithIndent:(id)arg0 ;
-(id)initWithClockIdentifier:(NSUInteger)arg0 ;
-(int)_lockState;
-(void)_handleInterestNotification:(unsigned int)arg0 withArgument:(*void)arg1 ;
-(void)_handleNotification:(unsigned int)arg0 withArg1:(NSUInteger)arg1 andArg2:(NSUInteger)arg2 ;
-(void)_handleNotification:(unsigned int)arg0 withArgs:(*NSUInteger)arg1 ofCount:(unsigned int)arg2 ;
-(void)dealloc;


@end


#endif