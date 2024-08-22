// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SESSIONMO_H
#define SESSIONMO_H

@class NSManagedObject, NSDate, NSSet;


#import "JoinMO.h"
#import "LeaveMO.h"

@interface SessionMO : NSManagedObject

@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSDate *end;
@property (nonatomic) NSInteger inChargingDayTime;
@property (nonatomic) NSInteger inChargingNightTime;
@property (nonatomic) NSInteger inStationaryDayTime;
@property (nonatomic) NSInteger inStationaryNightTime;
@property (retain, nonatomic) JoinMO *join;
@property (retain, nonatomic) LeaveMO *leave;
@property (retain, nonatomic) NSSet *roamsSet;
@property (nonatomic) NSInteger usageDayTime;
@property (nonatomic) NSInteger usageNightTime;


+(BOOL)addMostRecentSession:(id)arg0 moc:(id)arg1 ;
+(BOOL)addSession:(id)arg0 leave:(id)arg1 roams:(id)arg2 moc:(id)arg3 ;
+(BOOL)addSessionsForFirstUse:(id)arg0 ;
+(BOOL)buildAndAddSessionWithJoin:(id)arg0 moc:(id)arg1 ;
+(BOOL)firstSessionCreated:(id)arg0 ;
+(NSUInteger)timeInCharging:(id)arg0 maxAgeInDays:(NSUInteger)arg1 dayTime:(BOOL)arg2 moc:(id)arg3 ;
+(NSUInteger)timeInStationary:(id)arg0 maxAgeInDays:(NSUInteger)arg1 dayTime:(BOOL)arg2 moc:(id)arg3 ;
+(NSUInteger)usageTime:(id)arg0 maxAgeInDays:(NSUInteger)arg1 dayTime:(BOOL)arg2 moc:(id)arg3 ;
+(id)entityName;
+(id)fetchRequest;
+(id)getMostRecentSession:(id)arg0 moc:(id)arg1 ;
+(id)getSessions:(id)arg0 sortedAscending:(BOOL)arg1 moc:(id)arg2 ;
+(id)getSessionsWithMostRecentDays:(id)arg0 days:(NSUInteger)arg1 sortedAscending:(BOOL)arg2 moc:(id)arg3 ;
+(void)prePopulateUsageTimeForNetwork:(id)arg0 moc:(id)arg1 ;
+(void)prePopulateUsageTimesForAllNetworks:(id)arg0 ;
+(void)prePopulateUsageTimesForUsageTimesForAllSessions:(id)arg0 ;


@end


#endif