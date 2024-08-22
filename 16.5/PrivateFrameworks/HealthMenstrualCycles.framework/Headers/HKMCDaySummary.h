// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMCDAYSUMMARY_H
#define HKMCDAYSUMMARY_H

@class HKQuantity, NSArray, NSString, NSSet, NSDictionary, NSNumber;
@protocol HKMCAdjacentFlowDay, HKRedactedDescription, NSMutableCopying, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "HKMCWristTemperature.h"

@interface HKMCDaySummary : NSObject <HKMCAdjacentFlowDay, HKRedactedDescription, NSMutableCopying, NSSecureCoding, NSCopying>



@property (copy, nonatomic) HKQuantity *basalBodyTemperature; // ivar: _basalBodyTemperature
@property (nonatomic) NSInteger cervicalMucusQuality; // ivar: _cervicalMucusQuality
@property (readonly, nonatomic) NSInteger cervicalMucusQualitySampleCount;
@property (readonly, nonatomic) NSInteger dayIndex; // ivar: _dayIndex
@property (readonly, copy, nonatomic) NSArray *endedCycleFactors; // ivar: _endedCycleFactors
@property (readonly, copy) NSString *hk_redactedDescription;
@property (nonatomic) BOOL intermenstrualBleeding; // ivar: _intermenstrualBleeding
@property (readonly, nonatomic) BOOL isDataLogged;
@property (readonly, nonatomic) BOOL isSupplementaryDataLogged;
@property (readonly, copy, nonatomic) NSSet *loggedSupplementaryDisplayTypes;
@property (nonatomic) NSInteger menstrualFlow; // ivar: _menstrualFlow
@property (readonly, nonatomic) NSInteger menstrualFlowModificationDayIndex; // ivar: _menstrualFlowModificationDayIndex
@property (readonly, nonatomic) NSInteger menstrualFlowSampleCount;
@property (nonatomic) NSInteger ovulationTestResult; // ivar: _ovulationTestResult
@property (readonly, nonatomic) NSInteger ovulationTestResultSampleCount;
@property (nonatomic) NSInteger pregnancyTestResult; // ivar: _pregnancyTestResult
@property (readonly, nonatomic) NSInteger pregnancyTestResultSampleCount;
@property (nonatomic) NSInteger progesteroneTestResult; // ivar: _progesteroneTestResult
@property (readonly, nonatomic) NSInteger progesteroneTestResultSampleCount;
@property (readonly, copy, nonatomic) NSDictionary *sampleCountByType; // ivar: _sampleCountByType
@property (nonatomic) NSInteger sexualActivity; // ivar: _sexualActivity
@property (readonly, nonatomic) NSInteger sexualActivitySampleCount;
@property (copy, nonatomic) NSNumber *startOfCycleFromCycleTracking; // ivar: _startOfCycleFromCycleTracking
@property (readonly, copy, nonatomic) NSArray *startedCycleFactors; // ivar: _startedCycleFactors
@property (nonatomic) NSUInteger symptoms; // ivar: _symptoms
@property (readonly, copy, nonatomic) HKMCWristTemperature *wristTemperature; // ivar: _wristTemperature


+(BOOL)supportsSecureCoding;
+(id)daySummaryWithDayIndex:(NSInteger)arg0 menstrualFlow:(NSInteger)arg1 intermenstrualBleeding:(BOOL)arg2 symptoms:(NSUInteger)arg3 sexualActivity:(NSInteger)arg4 ovulationTestResult:(NSInteger)arg5 pregnancyTestResult:(NSInteger)arg6 progesteroneTestResult:(NSInteger)arg7 cervicalMucusQuality:(NSInteger)arg8 basalBodyTemperature:(id)arg9 ;
+(id)daySummaryWithDayIndex:(NSInteger)arg0 menstrualFlow:(NSInteger)arg1 intermenstrualBleeding:(BOOL)arg2 symptoms:(NSUInteger)arg3 sexualActivity:(NSInteger)arg4 ovulationTestResult:(NSInteger)arg5 pregnancyTestResult:(NSInteger)arg6 progesteroneTestResult:(NSInteger)arg7 cervicalMucusQuality:(NSInteger)arg8 basalBodyTemperature:(id)arg9 wristTemperature:(id)arg10 menstrualFlowModificationDayIndex:(NSInteger)arg11 startOfCycleFromCycleTracking:(id)arg12 startedCycleFactors:(id)arg13 endedCycleFactors:(id)arg14 sampleCountByType:(id)arg15 ;
+(id)emptyDaySummaryWithDayIndex:(NSInteger)arg0 ;
-(BOOL)_isBasalBodyTemperatureLogged;
-(BOOL)_isCervicalMucusQualityLogged;
-(BOOL)_isIntermenstrualBleedingLogged;
-(BOOL)_isMenstrualFlowLogged;
-(BOOL)_isOvulationTestResultLogged;
-(BOOL)_isPregnancyTestResultLogged;
-(BOOL)_isProgesteroneTestResultLogged;
-(BOOL)_isSexualActivityLogged;
-(BOOL)_isSymptomsLogged;
-(BOOL)hasConfirmedNoFlow;
-(BOOL)hasFlow;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFetched;
-(BOOL)isUserEnteredDataEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_daySummaryWithOverrideSourceIDBySourceID:(id)arg0 ignoreCycleFactors:(BOOL)arg1 ignoreOvulationTestResults:(BOOL)arg2 ;
-(id)_initFromDaySummary:(id)arg0 ;
-(id)_initWithDayIndex:(NSInteger)arg0 menstrualFlow:(NSInteger)arg1 intermenstrualBleeding:(BOOL)arg2 symptoms:(NSUInteger)arg3 sexualActivity:(NSInteger)arg4 ovulationTestResult:(NSInteger)arg5 pregnancyTestResult:(NSInteger)arg6 progesteroneTestResult:(NSInteger)arg7 cervicalMucusQuality:(NSInteger)arg8 basalBodyTemperature:(id)arg9 wristTemperature:(id)arg10 menstrualFlowModificationDayIndex:(NSInteger)arg11 startOfCycleFromCycleTracking:(id)arg12 startedCycleFactors:(id)arg13 endedCycleFactors:(id)arg14 sampleCountByType:(id)arg15 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif