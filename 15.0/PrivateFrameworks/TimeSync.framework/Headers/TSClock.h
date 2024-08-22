// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCLOCK_H
#define TSCLOCK_H

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TSClock : NSObject {
    NSMutableArray *_clients;
    NSObject<OS_dispatch_queue> *_notificationsQueue;
}


@property (readonly, retain, nonatomic) NSMutableArray *clients;
@property (nonatomic) NSUInteger clockIdentifier; // ivar: _clockIdentifier
@property (readonly, copy, nonatomic) NSString *clockName;
@property (readonly, nonatomic) CGFloat hostRateRatio;
@property (nonatomic) int lockState; // ivar: _lockState
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *propertyUpdateQueue; // ivar: _propertyUpdateQueue


+(NSUInteger)_mach_absolute_time;
+(id)clockNameForClockIdentifier:(NSUInteger)arg0 ;
+(id)diagnosticInfoForClockIdentifier:(NSUInteger)arg0 ;
-(BOOL)convertFromDomainTime:(*NSUInteger)arg0 toMachAbsoluteTime:(*NSUInteger)arg1 withCount:(unsigned int)arg2 ;
-(BOOL)convertFromDomainTime:(*NSUInteger)arg0 toTimeSyncTime:(*NSUInteger)arg1 withCount:(unsigned int)arg2 ;
-(BOOL)convertFromMachAbsoluteTime:(*NSUInteger)arg0 toDomainTime:(*NSUInteger)arg1 withCount:(unsigned int)arg2 ;
-(BOOL)convertFromTimeSyncTime:(*NSUInteger)arg0 toDomainTime:(*NSUInteger)arg1 withCount:(unsigned int)arg2 ;
-(BOOL)getMachAbsoluteRateRatioNumerator:(*NSUInteger)arg0 denominator:(*NSUInteger)arg1 machAnchor:(*NSUInteger)arg2 andDomainAnchor:(*NSUInteger)arg3 withError:(*id)arg4 ;
-(BOOL)getRateRatioNumerator:(*NSUInteger)arg0 denominator:(*NSUInteger)arg1 machAnchor:(*NSUInteger)arg2 andDomainAnchor:(*NSUInteger)arg3 withError:(*id)arg4 ;
-(BOOL)getTimeSyncTimeRateRatioNumerator:(*NSUInteger)arg0 denominator:(*NSUInteger)arg1 timeSyncAnchor:(*NSUInteger)arg2 andDomainAnchor:(*NSUInteger)arg3 withError:(*id)arg4 ;
-(NSUInteger)convertFromDomainIntervalToMachAbsoluteInterval:(NSUInteger)arg0 ;
-(NSUInteger)convertFromDomainIntervalToTimeSyncTimeInterval:(NSUInteger)arg0 ;
-(NSUInteger)convertFromDomainToMachAbsoluteTime:(NSUInteger)arg0 ;
-(NSUInteger)convertFromDomainToMachAbsoluteTime:(NSUInteger)arg0 withFlags:(*unsigned int)arg1 ;
-(NSUInteger)convertFromDomainToTimeSyncTime:(NSUInteger)arg0 ;
-(NSUInteger)convertFromMachAbsoluteIntervalToDomainInterval:(NSUInteger)arg0 ;
-(NSUInteger)convertFromMachAbsoluteToDomainTime:(NSUInteger)arg0 ;
-(NSUInteger)convertFromMachAbsoluteToDomainTime:(NSUInteger)arg0 withFlags:(*unsigned int)arg1 ;
-(NSUInteger)convertFromTimeSyncTimeIntervalToDomainInterval:(NSUInteger)arg0 ;
-(NSUInteger)convertFromTimeSyncToDomainTime:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithClockIdentifier:(NSUInteger)arg0 ;
-(void)addClient:(id)arg0 ;
-(void)removeClient:(id)arg0 ;


@end


#endif