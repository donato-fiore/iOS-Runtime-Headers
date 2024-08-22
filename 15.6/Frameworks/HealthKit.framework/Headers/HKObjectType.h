// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKOBJECTTYPE_H
#define HKOBJECTTYPE_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "HKObjectType.h"

@interface HKObjectType : NSObject <NSSecureCoding, NSCopying>

 {
    short _code;
}


@property (readonly, nonatomic) NSInteger code;
@property (readonly, nonatomic) Class dataObjectClass;
@property (readonly, nonatomic, getter=_definition) *? definition;
@property (readonly) NSString *identifier;
@property (readonly, nonatomic) BOOL isClinicalType;
@property (retain, nonatomic) HKObjectType *parentType; // ivar: _parentType
@property (readonly, nonatomic) BOOL readingAuthorizationAllowed;
@property (readonly, nonatomic) BOOL sharingAuthorizationAllowed;
@property (readonly, nonatomic) BOOL supportsExport;


+(BOOL)_allowAuthorizationForReadingWithTypes:(id)arg0 entitlements:(id)arg1 disallowedTypes:(id)arg2 ;
+(BOOL)_allowAuthorizationForSharing:(BOOL)arg0 types:(id)arg1 entitlements:(id)arg2 disallowedTypes:(id)arg3 ;
+(BOOL)_allowAuthorizationForSharingWithTypes:(id)arg0 entitlements:(id)arg1 disallowedTypes:(id)arg2 ;
+(BOOL)supportsSecureCoding;
+(NSInteger)_typeCodeForIdentifier:(id)arg0 ;
+(id)_allBinarySampleTypes;
+(id)_allDataTypeIdentifiers;
+(id)_allTypesOfClass:(Class)arg0 ;
+(id)_clinicalTypesFromTypes:(id)arg0 ;
+(id)_dataTypeWithCode:(NSInteger)arg0 expectedClass:(Class)arg1 ;
+(id)_nonClinicalTypesFromTypes:(id)arg0 ;
+(id)_objectTypesFromIdentifierArray:(id)arg0 error:(*id)arg1 ;
+(id)_typeWithIdentifier:(id)arg0 ;
+(id)_typeWithIdentifier:(id)arg0 expectedClass:(Class)arg1 ;
+(id)_typesIncludingParentTypes:(id)arg0 ;
+(id)accountOwnerTypeForIdentifier:(id)arg0 ;
+(id)activityCacheType;
+(id)activityMoveModeChangeType;
+(id)activitySummaryType;
+(id)allergyRecordTypeForIdentifier:(id)arg0 ;
+(id)atrialFibrillationEventType;
+(id)audiogramSampleType;
+(id)bradycardiaType;
+(id)briskMinuteDataType;
+(id)calorieGoal;
+(id)categoryTypeForIdentifier:(id)arg0 ;
+(id)characteristicTypeForIdentifier:(id)arg0 ;
+(id)clinicalTypeForIdentifier:(id)arg0 ;
+(id)coachingEventType;
+(id)conditionRecordTypeForIdentifier:(id)arg0 ;
+(id)contraceptiveType;
+(id)correlationTypeForIdentifier:(id)arg0 ;
+(id)coverageRecordTypeForIdentifier:(id)arg0 ;
+(id)dataTypeWithCode:(NSInteger)arg0 ;
+(id)dataTypeWithNumber:(id)arg0 ;
+(id)deepBreathingSessionType;
+(id)diagnosticTestReportTypeForIdentifier:(id)arg0 ;
+(id)diagnosticTestResultTypeForIdentifier:(id)arg0 ;
+(id)documentTypeForIdentifier:(id)arg0 ;
+(id)electrocardiogramType;
+(id)environmentalAudioExposureEventType;
+(id)exerciseGoal;
+(id)fitnessFriendAchievementType;
+(id)fitnessFriendActivitySnapshotType;
+(id)fitnessFriendWorkoutType;
+(id)handwashingEventType;
+(id)headphoneAudioExposureEventType;
+(id)heartRateType;
+(id)heartStudyEventType;
+(id)irregularlyIrregularPulseType;
+(id)lactationType;
+(id)lowCardioFitnessEventType;
+(id)medicalTypeForIdentifier:(id)arg0 ;
+(id)medicationDispenseRecordTypeForIdentifier:(id)arg0 ;
+(id)medicationOrderTypeForIdentifier:(id)arg0 ;
+(id)medicationRecordTypeForIdentifier:(id)arg0 ;
+(id)menstrualFlowType;
+(id)moveMinuteGoal;
+(id)objectTypeForWorkoutMetric:(NSUInteger)arg0 ;
+(id)pregnancyType;
+(id)procedureRecordTypeForIdentifier:(id)arg0 ;
+(id)quantityTypeForIdentifier:(id)arg0 ;
+(id)seriesTypeForIdentifier:(id)arg0 ;
+(id)signedClinicalDataRecordTypeForIdentifier:(id)arg0 ;
+(id)sleepDurationGoalType;
+(id)sleepScheduleType;
+(id)standGoal;
+(id)tachycardiaType;
+(id)unknownRecordTypeForIdentifier:(id)arg0 ;
+(id)vaccinationRecordTypeForIdentifier:(id)arg0 ;
+(id)verifiableClinicalRecordTypeForIdentifier:(id)arg0 ;
+(id)watchActivationType;
+(id)workoutType;
+(void)_enumerateDataTypeCodesWithHandler:(id)arg0 ;
+(void)_enumerateObjectTypesWithHandler:(id)arg0 ;
-(BOOL)_requiresAuthorization;
-(BOOL)_requiresPerObjectAuthorization;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isHealthRecordsType;
-(NSUInteger)hash;
-(id)_hk_localizedNameKey;
-(id)_initWithCode:(NSInteger)arg0 ;
-(id)_predicateForSDKVersion:(unsigned int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)hk_localizedName;
-(id)hk_localizedNameForAuthSheet;
-(id)hk_localizedNameForLocale:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif