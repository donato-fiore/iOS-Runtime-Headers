// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDSMETRICSRECORD_H
#define DNDSMETRICSRECORD_H

@class NSString, NSDate, NSDictionary;
@protocol NSCopying, NSMutableCopying, DNDSBackingStoreRecord;

#import <Foundation/Foundation.h>


@interface DNDSMetricsRecord : NSObject <NSCopying, NSMutableCopying, DNDSBackingStoreRecord>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSDate *lastDailyHeartbeat; // ivar: _lastDailyHeartbeat
@property (readonly, copy, nonatomic) NSDate *lastMonthlyHeartbeat; // ivar: _lastMonthlyHeartbeat
@property (readonly, copy, nonatomic) NSDate *lastWeeklyHeartbeat; // ivar: _lastWeeklyHeartbeat
@property (readonly, copy, nonatomic) NSDictionary *metricsByDay; // ivar: _metricsByDay
@property (readonly, copy, nonatomic) NSDictionary *metricsByMonth; // ivar: _metricsByMonth
@property (readonly, copy, nonatomic) NSDictionary *metricsByWeek; // ivar: _metricsByWeek
@property (readonly) Class superclass;


+(id)backingStoreWithFileURL:(id)arg0 ;
+(id)migrateDictionaryRepresentation:(id)arg0 fromVersionNumber:(NSUInteger)arg1 toVersionNumber:(NSUInteger)arg2 ;
+(id)newWithDictionaryRepresentation:(id)arg0 context:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithMetricsByDay:(id)arg0 lastDailyHeartbeat:(id)arg1 metricsByWeek:(id)arg2 lastWeeklyHeartbeat:(id)arg3 metricsByMonth:(id)arg4 lastMonthlyHeartbeat:(id)arg5 ;
-(id)_initWithRecord:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentationWithContext:(id)arg0 ;
-(id)init;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif