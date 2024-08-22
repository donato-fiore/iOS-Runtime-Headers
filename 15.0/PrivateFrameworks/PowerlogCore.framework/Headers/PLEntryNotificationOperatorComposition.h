// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLENTRYNOTIFICATIONOPERATORCOMPOSITION_H
#define PLENTRYNOTIFICATIONOPERATORCOMPOSITION_H



#import "PLNSNotificationOperatorComposition.h"

@interface PLEntryNotificationOperatorComposition : PLNSNotificationOperatorComposition



+(id)canSleepEntryNotificationWithOperator:(id)arg0 withBlock:(id)arg1 ;
+(id)canSleepEntryNotificationWithWorkQueue:(id)arg0 withBlock:(id)arg1 ;
+(id)displayOffNotificationWithOperator:(id)arg0 withBlock:(id)arg1 ;
+(id)displayOnNotificationWithOperator:(id)arg0 withBlock:(id)arg1 ;
+(id)getSBCMaxTimeInterval;
+(id)getSBCMinTimeInterval;
+(id)requestEntryForEntryKey:(id)arg0 forOperator:(id)arg1 withTimeout:(CGFloat)arg2 error:(*id)arg3 ;
+(id)significantBatteryChangeNotificationWithOperator:(id)arg0 withBlock:(id)arg1 ;
+(id)significantBatteryChangeNotificationWithOperator:(id)arg0 withMaxIntervalInSecs:(CGFloat)arg1 withBlock:(id)arg2 ;
+(id)sleepEntryNotificationWithOperator:(id)arg0 withBlock:(id)arg1 ;
+(id)wakeEntryNotificationWithOperator:(id)arg0 withBlock:(id)arg1 ;
+(id)wakeEntryNotificationWithWorkQueue:(id)arg0 withBlock:(id)arg1 ;
-(id)initNotificationTimerWithWorkQueue:(id)arg0 withBlock:(id)arg1 ;
-(id)initNotificationTimerWithWorkQueue:(id)arg0 withMaxInterval:(CGFloat)arg1 withBlock:(id)arg2 ;
-(id)initWithOperator:(id)arg0 forEntryKey:(id)arg1 forUpdateOrInsert:(short)arg2 withBlock:(id)arg3 ;
-(id)initWithOperator:(id)arg0 forEntryKey:(id)arg1 forUpdateOrInsert:(short)arg2 withFilter:(id)arg3 withBlock:(id)arg4 ;
-(id)initWithOperator:(id)arg0 forEntryKey:(id)arg1 withBlock:(id)arg2 ;
-(id)initWithOperator:(id)arg0 forEntryKey:(id)arg1 withFilter:(id)arg2 withBlock:(id)arg3 ;
-(id)initWithWorkQueue:(id)arg0 forEntryKey:(id)arg1 forUpdateOrInsert:(short)arg2 withBlock:(id)arg3 ;
-(id)initWithWorkQueue:(id)arg0 forEntryKey:(id)arg1 forUpdateOrInsert:(short)arg2 withFilter:(id)arg3 withBlock:(id)arg4 ;
-(id)initWithWorkQueue:(id)arg0 forEntryKey:(id)arg1 withBlock:(id)arg2 ;
-(id)initWithWorkQueue:(id)arg0 forEntryKey:(id)arg1 withFilter:(id)arg2 withBlock:(id)arg3 ;
-(void)requestEntry;


@end


#endif