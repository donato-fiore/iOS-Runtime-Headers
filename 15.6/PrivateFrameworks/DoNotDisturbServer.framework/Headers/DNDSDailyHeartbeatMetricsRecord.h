// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDSDAILYHEARTBEATMETRICSRECORD_H
#define DNDSDAILYHEARTBEATMETRICSRECORD_H

@class NSNumber;


#import "DNDSHeartbeatMetricsRecord.h"

@interface DNDSDailyHeartbeatMetricsRecord : DNDSHeartbeatMetricsRecord

@property (readonly, copy, nonatomic) NSNumber *dayOfWeek; // ivar: _dayOfWeek


+(id)migrateDictionaryRepresentation:(id)arg0 fromVersionNumber:(NSUInteger)arg1 toVersionNumber:(NSUInteger)arg2 ;
+(id)newWithDictionaryRepresentation:(id)arg0 context:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithEnabled:(BOOL)arg0 manuallyEnabled:(BOOL)arg1 numberOfSessions:(id)arg2 numberOfManualSessions:(id)arg3 enabledFromControlCenterPhone:(BOOL)arg4 enabledFromControlCenterWatch:(BOOL)arg5 enabledForOneHour:(BOOL)arg6 enabledUntilEvening:(BOOL)arg7 enabledUntilMorning:(BOOL)arg8 enabledAtLocation:(BOOL)arg9 enabledDuringEvent:(BOOL)arg10 enabledDrivingMode:(BOOL)arg11 enabledSleepMode:(BOOL)arg12 dayOfWeek:(id)arg13 ;
-(id)_initWithRecord:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentationWithContext:(id)arg0 ;
-(id)init;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif