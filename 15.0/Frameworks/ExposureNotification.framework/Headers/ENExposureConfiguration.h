// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ENEXPOSURECONFIGURATION_H
#define ENEXPOSURECONFIGURATION_H

@class NSArray, NSDictionary;
@protocol CUXPCCodable, NSCopying;

#import <Foundation/Foundation.h>


@interface ENExposureConfiguration : NSObject <CUXPCCodable, NSCopying>

 {
    unsigned char _attenuationLevelValuesMap;
    unsigned char _daysSinceLastExposureLevelValuesMap;
    unsigned char _durationLevelValuesMap;
    unsigned char _transmissionRiskLevelValuesMap;
}


@property (copy, nonatomic) NSArray *attenuationDurationThresholds; // ivar: _attenuationDurationThresholds
@property (copy, nonatomic) NSArray *attenuationLevelValues; // ivar: _attenuationLevelValues
@property (nonatomic) CGFloat attenuationWeight; // ivar: _attenuationWeight
@property (copy, nonatomic) NSArray *daysSinceLastExposureLevelValues; // ivar: _daysSinceLastExposureLevelValues
@property (nonatomic) NSInteger daysSinceLastExposureThreshold; // ivar: _daysSinceLastExposureThreshold
@property (nonatomic) CGFloat daysSinceLastExposureWeight; // ivar: _daysSinceLastExposureWeight
@property (copy, nonatomic) NSArray *durationLevelValues; // ivar: _durationLevelValues
@property (nonatomic) CGFloat durationWeight; // ivar: _durationWeight
@property (nonatomic) unsigned int flags; // ivar: _flags
@property (nonatomic) CGFloat immediateDurationWeight; // ivar: _immediateDurationWeight
@property (copy, nonatomic) NSDictionary *infectiousnessForDaysSinceOnsetOfSymptoms; // ivar: _infectiousnessForDaysSinceOnsetOfSymptoms
@property (nonatomic) CGFloat infectiousnessHighWeight; // ivar: _infectiousnessHighWeight
@property (nonatomic) CGFloat infectiousnessStandardWeight; // ivar: _infectiousnessStandardWeight
@property (nonatomic) CGFloat mediumDurationWeight; // ivar: _mediumDurationWeight
@property (copy, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (nonatomic) unsigned char minimumRiskScore; // ivar: _minimumRiskScore
@property (nonatomic) CGFloat minimumRiskScoreFullRange; // ivar: _minimumRiskScoreFullRange
@property (nonatomic) CGFloat nearDurationWeight; // ivar: _nearDurationWeight
@property (nonatomic) CGFloat otherDurationWeight; // ivar: _otherDurationWeight
@property (nonatomic) CGFloat reportTypeConfirmedClinicalDiagnosisWeight; // ivar: _reportTypeConfirmedClinicalDiagnosisWeight
@property (nonatomic) CGFloat reportTypeConfirmedTestWeight; // ivar: _reportTypeConfirmedTestWeight
@property (nonatomic) unsigned int reportTypeNoneMap; // ivar: _reportTypeNoneMap
@property (nonatomic) CGFloat reportTypeRecursiveWeight; // ivar: _reportTypeRecursiveWeight
@property (nonatomic) CGFloat reportTypeSelfReportedWeight; // ivar: _reportTypeSelfReportedWeight
@property (copy, nonatomic) NSArray *transmissionRiskLevelValues; // ivar: _transmissionRiskLevelValues
@property (nonatomic) CGFloat transmissionRiskWeight; // ivar: _transmissionRiskWeight


-(CGFloat)attenuationLevelValueWithAttenuation:(unsigned char)arg0 ;
-(CGFloat)daysSinceLastExposureLevelValueWithDays:(NSInteger)arg0 ;
-(CGFloat)durationLevelValueWithDuration:(CGFloat)arg0 ;
-(CGFloat)infectiousnessWeightWithDaysSinceOnsetOfSymptoms:(NSInteger)arg0 skip:(*BOOL)arg1 ;
-(CGFloat)reportTypeWeightWithReportType:(unsigned int)arg0 skip:(*BOOL)arg1 ;
-(CGFloat)transmissionLevelValueWithTransmissionRiskLevel:(unsigned char)arg0 ;
-(CGFloat)weightedDurationWithExposureInfo:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithXPCObject:(id)arg0 error:(*id)arg1 ;
-(unsigned int)infectiousnessWithDaysSinceOnsetOfSymptoms:(NSInteger)arg0 ;
-(unsigned int)mappedDiagnosisReportType:(unsigned int)arg0 ;
-(void)encodeWithXPCObject:(id)arg0 ;


@end


#endif