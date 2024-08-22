// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLBATTERYUISERVICE_H
#define PLBATTERYUISERVICE_H

@class PLXPCResponderOperatorComposition;


#import "PLBatteryBreakdownService.h"

@interface PLBatteryUIService : PLBatteryBreakdownService

@property (retain) PLXPCResponderOperatorComposition *batteryBreakdownResponder; // ivar: _batteryBreakdownResponder
@property (retain) PLXPCResponderOperatorComposition *modelsResponder; // ivar: _modelsResponder


+(void)load;
-(BOOL)dateIntervals:(id)arg0 containDate:(id)arg1 ;
-(BOOL)demoMode;
-(BOOL)isAppEntryValidForAdjustment:(id)arg0 withQueryType:(int)arg1 ;
-(BOOL)writeOutputDemo;
-(CGFloat)adjustScreenOffTimeSecsWithGraphValue:(CGFloat)arg0 withGraphScreenOnSecs:(CGFloat)arg1 queryType:(int)arg2 andBreakdownEntries:(id)arg3 ;
-(CGFloat)adjustScreenOnTimeSecsWithGraphValue:(CGFloat)arg0 queryType:(int)arg1 andBreakdownEntries:(id)arg2 ;
-(CGFloat)floorSeconds:(CGFloat)arg0 ;
-(id)batteryBreakdownAndGraphWithPayload:(id)arg0 ;
-(id)batteryBreakdownWithPayload:(id)arg0 withDayRange:(struct _PLTimeIntervalRange )arg1 withXDayRange:(struct _PLTimeIntervalRange )arg2 withDataRange:(struct _PLTimeIntervalRange )arg3 ;
-(id)batteryLevelsAndChargingIntervalsInRange:(struct _PLTimeIntervalRange )arg0 withDataRange:(struct _PLTimeIntervalRange )arg1 ;
-(id)dateAndBatteryLevelPointsInRange:(struct _PLTimeIntervalRange )arg0 ;
-(id)demoModePath;
-(id)entriesInRange:(struct _PLTimeIntervalRange )arg0 fromEntries:(id)arg1 ;
-(id)generateTapBucketsForBucketSize:(int)arg0 withNumberOfBuckets:(int)arg1 withNowTime:(id)arg2 withDrainThreshold:(CGFloat)arg3 withQueryType:(int)arg4 withDataRange:(struct _PLTimeIntervalRange )arg5 ;
-(id)getLPMIntervalsSpanningRange:(struct _PLTimeIntervalRange )arg0 ;
-(id)getLastChargeData;
-(id)init;
-(id)lastXDaysWithRange:(struct _PLTimeIntervalRange )arg0 withDataRange:(struct _PLTimeIntervalRange )arg1 withQueryType:(int)arg2 andBatteryBreakdown:(id)arg3 ;
-(id)modelsForGraphWithDayRange:(struct _PLTimeIntervalRange )arg0 withXDayRange:(struct _PLTimeIntervalRange )arg1 withDataRange:(struct _PLTimeIntervalRange )arg2 withQueryType:(int)arg3 andBatteryBreakdown:(id)arg4 ;
-(id)modelsWithPayload:(id)arg0 ;
-(id)screenTimeInRange:(struct _PLTimeIntervalRange )arg0 withBucketSize:(CGFloat)arg1 withNumBuckets:(int)arg2 withDataRange:(struct _PLTimeIntervalRange )arg3 withQueryType:(int)arg4 andBatteryBreakdown:(id)arg5 ;
-(struct _PLTimeIntervalRange )getDataRangeWithNow:(id)arg0 ;
-(struct _PLTimeIntervalRange )getlastDayRangeWithNow:(id)arg0 withNowSystem:(id)arg1 ;
-(struct _PLTimeIntervalRange )getlastXDayRangeWithNow:(id)arg0 withNowSystem:(id)arg1 ;
-(void)incrementAggdKey;
-(void)initOperatorDependancies;
-(void)removeExcessUpgradePlistFiles;
-(void)testUIQuery;


@end


#endif