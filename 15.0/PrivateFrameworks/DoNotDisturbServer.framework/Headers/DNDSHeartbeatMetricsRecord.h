// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDSHEARTBEATMETRICSRECORD_H
#define DNDSHEARTBEATMETRICSRECORD_H

@class NSString, NSNumber;
@protocol DNDSHeartbeatMetricsProtocol;

#import <Foundation/Foundation.h>


@interface DNDSHeartbeatMetricsRecord : NSObject <DNDSHeartbeatMetricsProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) BOOL enabledAtLocation; // ivar: _enabledAtLocation
@property (readonly, nonatomic) BOOL enabledDrivingMode; // ivar: _enabledDrivingMode
@property (readonly, nonatomic) BOOL enabledDuringEvent; // ivar: _enabledDuringEvent
@property (readonly, nonatomic) BOOL enabledForOneHour; // ivar: _enabledForOneHour
@property (readonly, nonatomic) BOOL enabledFromControlCenterPhone; // ivar: _enabledFromControlCenterPhone
@property (readonly, nonatomic) BOOL enabledFromControlCenterWatch; // ivar: _enabledFromControlCenterWatch
@property (readonly, nonatomic) BOOL enabledSleepMode; // ivar: _enabledSleepMode
@property (readonly, nonatomic) BOOL enabledUntilEvening; // ivar: _enabledUntilEvening
@property (readonly, nonatomic) BOOL enabledUntilMorning; // ivar: _enabledUntilMorning
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL manuallyEnabled; // ivar: _manuallyEnabled
@property (readonly, copy, nonatomic) NSNumber *numberOfManualSessions; // ivar: _numberOfManualSessions
@property (readonly, copy, nonatomic) NSNumber *numberOfSessions; // ivar: _numberOfSessions
@property (readonly) Class superclass;


+(id)migrateDictionaryRepresentation:(id)arg0 fromVersionNumber:(NSUInteger)arg1 toVersionNumber:(NSUInteger)arg2 ;
+(id)newWithDictionaryRepresentation:(id)arg0 context:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithEnabled:(BOOL)arg0 manuallyEnabled:(BOOL)arg1 numberOfSessions:(id)arg2 numberOfManualSessions:(id)arg3 enabledFromControlCenterPhone:(BOOL)arg4 enabledFromControlCenterWatch:(BOOL)arg5 enabledForOneHour:(BOOL)arg6 enabledUntilEvening:(BOOL)arg7 enabledUntilMorning:(BOOL)arg8 enabledAtLocation:(BOOL)arg9 enabledDuringEvent:(BOOL)arg10 enabledDrivingMode:(BOOL)arg11 enabledSleepMode:(BOOL)arg12 ;
-(id)_initWithRecord:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentationWithContext:(id)arg0 ;
-(id)init;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif