// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMCMUTABLEDAYSUMMARY_H
#define HKMCMUTABLEDAYSUMMARY_H

@class HKQuantity, NSNumber;


#import "HKMCDaySummary.h"

@interface HKMCMutableDaySummary : HKMCDaySummary

@property (copy, nonatomic) HKQuantity *basalBodyTemperature;
@property (nonatomic) NSInteger cervicalMucusQuality;
@property (nonatomic) BOOL intermenstrualBleeding;
@property (nonatomic) NSInteger menstrualFlow;
@property (nonatomic) NSInteger ovulationTestResult;
@property (nonatomic) NSInteger pregnancyTestResult;
@property (nonatomic) NSInteger progesteroneTestResult;
@property (nonatomic) NSInteger sexualActivity;
@property (copy, nonatomic) NSNumber *startOfCycleFromCycleTracking;
@property (nonatomic) NSUInteger symptoms;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif