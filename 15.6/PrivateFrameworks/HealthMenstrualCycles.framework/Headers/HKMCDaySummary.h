// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKMCDAYSUMMARY_H
#define HKMCDAYSUMMARY_H

@class HKQuantity, NSArray, NSString, NSSet, NSDictionary, NSNumber;
@protocol HKMCAdjacentFlowDay, HKRedactedDescription, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface HKMCDaySummary : NSObject <HKMCAdjacentFlowDay, HKRedactedDescription, NSSecureCoding, NSCopying>



@property (copy, nonatomic) HKQuantity *basalBodyTemperature; // ivar: _basalBodyTemperature
@property (nonatomic) NSInteger cervicalMucusQuality; // ivar: _cervicalMucusQuality
@property (readonly, nonatomic) NSInteger cervicalMucusQualitySampleCount;
@property (readonly, nonatomic) NSInteger dayIndex; // ivar: _dayIndex
@property (retain, nonatomic) NSArray *endedCycleFactors; // ivar: _endedCycleFactors
@property (readonly, copy) NSString *hk_redactedDescription;
@property (nonatomic) BOOL intermenstrualBleeding; // ivar: _intermenstrualBleeding
@property (readonly, nonatomic) BOOL isDataLogged;
@property (readonly, nonatomic) BOOL isSupplementaryDataLogged;
@property (readonly, copy, nonatomic) NSSet *loggedSupplementaryDisplayTypes;
@property (nonatomic) NSInteger menstrualFlow; // ivar: _menstrualFlow
@property (nonatomic) NSInteger menstrualFlowModificationDayIndex; // ivar: _menstrualFlowModificationDayIndex
@property (readonly, nonatomic) NSInteger menstrualFlowSampleCount;
@property (nonatomic) NSInteger ovulationTestResult; // ivar: _ovulationTestResult
@property (readonly, nonatomic) NSInteger ovulationTestResultSampleCount;
@property (nonatomic) NSInteger pregnancyTestResult; // ivar: _pregnancyTestResult
@property (readonly, nonatomic) NSInteger pregnancyTestResultSampleCount;
@property (nonatomic) NSInteger progesteroneTestResult; // ivar: _progesteroneTestResult
@property (readonly, nonatomic) NSInteger progesteroneTestResultSampleCount;
@property (retain, nonatomic) NSDictionary *sampleCountByType; // ivar: _sampleCountByType
@property (nonatomic) NSInteger sexualActivity; // ivar: _sexualActivity
@property (readonly, nonatomic) NSInteger sexualActivitySampleCount;
@property (copy, nonatomic) NSNumber *startOfCycleFromCycleTracking; // ivar: _startOfCycleFromCycleTracking
@property (retain, nonatomic) NSArray *startedCycleFactors; // ivar: _startedCycleFactors
@property (nonatomic) NSUInteger symptoms; // ivar: _symptoms


+(BOOL)supportsSecureCoding;
+(id)daySummaryWithDayIndex:(NSInteger)arg0 menstrualFlow:(NSInteger)arg1 intermenstrualBleeding:(BOOL)arg2 symptoms:(NSUInteger)arg3 sexualActivity:(NSInteger)arg4 ovulationTestResult:(NSInteger)arg5 pregnancyTestResult:(NSInteger)arg6 progesteroneTestResult:(NSInteger)arg7 cervicalMucusQuality:(NSInteger)arg8 basalBodyTemperature:(id)arg9 ;
+(id)daySummaryWithDayIndex:(NSInteger)arg0 menstrualFlow:(NSInteger)arg1 intermenstrualBleeding:(BOOL)arg2 symptoms:(NSUInteger)arg3 sexualActivity:(NSInteger)arg4 ovulationTestResult:(NSInteger)arg5 pregnancyTestResult:(NSInteger)arg6 progesteroneTestResult:(NSInteger)arg7 cervicalMucusQuality:(NSInteger)arg8 basalBodyTemperature:(id)arg9 sampleCountByType:(id)arg10 ;
+(id)daySummaryWithDayIndex:(NSInteger)arg0 menstrualFlow:(NSInteger)arg1 intermenstrualBleeding:(BOOL)arg2 symptoms:(NSUInteger)arg3 sexualActivity:(NSInteger)arg4 ovulationTestResult:(NSInteger)arg5 pregnancyTestResult:(NSInteger)arg6 progesteroneTestResult:(NSInteger)arg7 cervicalMucusQuality:(NSInteger)arg8 basalBodyTemperature:(id)arg9 startedCycleFactors:(id)arg10 endedCycleFactors:(id)arg11 sampleCountByType:(id)arg12 ;
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
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif