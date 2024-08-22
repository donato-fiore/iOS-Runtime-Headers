// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSKERNELCLOCK_H
#define TSKERNELCLOCK_H

@class NSPointerArray, NSString;
@protocol TSXKernelClockClient;


#import "TSClock.h"
#import "TSXKernelClock.h"

@interface TSKernelClock : TSClock <TSXKernelClockClient>

 {
    TSXKernelClock *_implXPC;
    NSPointerArray *_clients;
    os_unfair_lock_s _clientLock;
    BOOL _clientsAddedToDaemon;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (readonly) Class superclass;


+(id)availableKernelClockIdentifiers;
+(id)clockNameForClockIdentifier:(NSUInteger)arg0 ;
+(id)diagnosticDescriptionForInfo:(id)arg0 withIndent:(id)arg1 ;
+(id)iokitMatchingDictionaryForClockIdentifier:(NSUInteger)arg0 ;
+(id)keyPathsForValuesAffectingClockName;
+(id)keyPathsForValuesAffectingHostRateRatio;
+(id)keyPathsforvaluesaffectingLockState;
-(BOOL)convertFromDomainTime:(*NSUInteger)arg0 toMachAbsoluteTime:(*NSUInteger)arg1 withCount:(unsigned int)arg2 ;
-(BOOL)convertFromDomainTime:(*NSUInteger)arg0 toTimeSyncTime:(*NSUInteger)arg1 withCount:(unsigned int)arg2 ;
-(BOOL)convertFromMachAbsoluteTime:(*NSUInteger)arg0 toDomainTime:(*NSUInteger)arg1 withCount:(unsigned int)arg2 ;
-(BOOL)convertFromTimeSyncTime:(*NSUInteger)arg0 toDomainTime:(*NSUInteger)arg1 withCount:(unsigned int)arg2 ;
-(BOOL)getMachAbsoluteRateRatioNumerator:(*NSUInteger)arg0 denominator:(*NSUInteger)arg1 machAnchor:(*NSUInteger)arg2 andDomainAnchor:(*NSUInteger)arg3 withError:(*id)arg4 ;
-(BOOL)getTimeSyncTimeRateRatioNumerator:(*NSUInteger)arg0 denominator:(*NSUInteger)arg1 timeSyncAnchor:(*NSUInteger)arg2 andDomainAnchor:(*NSUInteger)arg3 withError:(*id)arg4 ;
-(CGFloat)hostRateRatio;
-(NSUInteger)convertFromDomainIntervalToMachAbsoluteInterval:(NSUInteger)arg0 ;
-(NSUInteger)convertFromDomainIntervalToTimeSyncTimeInterval:(NSUInteger)arg0 ;
-(NSUInteger)convertFromDomainToMachAbsoluteTime:(NSUInteger)arg0 ;
-(NSUInteger)convertFromDomainToTimeSyncTime:(NSUInteger)arg0 ;
-(NSUInteger)convertFromMachAbsoluteIntervalToDomainInterval:(NSUInteger)arg0 ;
-(NSUInteger)convertFromMachAbsoluteToDomainTime:(NSUInteger)arg0 ;
-(NSUInteger)convertFromTimeSyncTimeIntervalToDomainInterval:(NSUInteger)arg0 ;
-(NSUInteger)convertFromTimeSyncToDomainTime:(NSUInteger)arg0 ;
-(id)_impl;
-(id)clockName;
-(id)initWithClockIdentifier:(NSUInteger)arg0 ;
-(id)initWithImplXPC:(id)arg0 ;
-(int)lockState;
-(void)_cleanupClients;
-(void)addClient:(id)arg0 ;
-(void)didBeginClockGrandmasterChangeForClock:(id)arg0 ;
-(void)didBeginClockGrandmasterChangeWithGrandmasterID:(NSUInteger)arg0 localPort:(unsigned short)arg1 forClock:(id)arg2 ;
-(void)didChangeClockMasterForClock:(id)arg0 ;
-(void)didChangeLocalPortWithGrandmasterID:(NSUInteger)arg0 localPort:(unsigned short)arg1 forClock:(id)arg2 ;
-(void)didChangeLockStateTo:(int)arg0 forClock:(id)arg1 ;
-(void)didEndClockGrandmasterChangeForClock:(id)arg0 ;
-(void)didEndClockGrandmasterChangeWithGrandmasterID:(NSUInteger)arg0 localPort:(unsigned short)arg1 forClock:(id)arg2 ;
-(void)didProcessSync:(id)arg0 ;
-(void)didResetClock:(id)arg0 ;
-(void)interruptedConnectionForClock:(id)arg0 ;
-(void)removeClient:(id)arg0 ;
-(void)setPropertyUpdateQueue:(id)arg0 ;


@end


#endif