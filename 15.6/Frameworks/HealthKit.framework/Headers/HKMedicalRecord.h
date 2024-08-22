// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKMEDICALRECORD_H
#define HKMEDICALRECORD_H

@class NSUUID, NSString, NSDate, NSLocale, NSArray;
@protocol HKMedicalRecordCodings, HKConceptIndexable, HKCodedSample, NSSecureCoding, NSCopying;


#import "HKSample.h"
#import "HKConcept.h"
#import "HKFHIRIdentifier.h"
#import "HKMedicalType.h"
#import "HKMedicalRecordOriginIdentifier.h"
#import "HKSemanticDate.h"

@interface HKMedicalRecord : HKSample <HKMedicalRecordCodings, HKConceptIndexable, HKCodedSample, NSSecureCoding, NSCopying>

 {
    HKConcept *_primaryConcept;
}


@property (readonly, copy, nonatomic) HKFHIRIdentifier *FHIRIdentifier;
@property (readonly) NSUUID *UUID;
@property (readonly, copy, nonatomic) NSString *country;
@property (retain, nonatomic) NSString *country; // ivar: _country
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSDate *endDate;
@property (readonly, nonatomic) BOOL enteredInError; // ivar: _enteredInError
@property (readonly, nonatomic) NSInteger extractionVersion; // ivar: _extractionVersion
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSLocale *locale;
@property (readonly, copy, nonatomic) NSLocale *locale; // ivar: _locale
@property (readonly, nonatomic) NSArray *medicalRecordCodings;
@property (readonly, nonatomic) NSUInteger medicalRecordOriginType;
@property (readonly, copy, nonatomic) HKMedicalType *medicalType;
@property (readonly, copy, nonatomic) NSDate *modifiedDate; // ivar: _modifiedDate
@property (readonly, copy, nonatomic) NSString *note; // ivar: _note
@property (readonly, copy, nonatomic) HKMedicalRecordOriginIdentifier *originIdentifier; // ivar: _originIdentifier
@property (readonly, nonatomic) HKConcept *primaryConcept;
@property (readonly, nonatomic) NSInteger recordCategoryType;
@property (readonly, copy, nonatomic) HKSemanticDate *sortDate; // ivar: _sortDate
@property (readonly) NSDate *startDate;
@property (readonly, nonatomic) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(BOOL)_isConcreteObjectClass;
+(BOOL)groupsByUserDomainConcept;
+(BOOL)supportsEquivalence;
+(BOOL)supportsSecureCoding;
+(id)_newMedicalRecordWithType:(id)arg0 note:(id)arg1 enteredInError:(BOOL)arg2 modifiedDate:(id)arg3 originIdentifier:(id)arg4 locale:(id)arg5 extractionVersion:(NSInteger)arg6 device:(id)arg7 metadata:(id)arg8 sortDate:(id)arg9 country:(id)arg10 state:(NSUInteger)arg11 config:(id)arg12 ;
+(id)_sortDateIntervalFromStartDateComponents:(id)arg0 endDateComponents:(id)arg1 error:(*id)arg2 ;
+(id)cachedConceptRelationshipKeyPaths;
+(id)defaultDisplayString;
+(id)indexableConceptKeyPaths;
+(id)indexableKeyPathsWithPrefix:(id)arg0 ;
-(BOOL)applyConcepts:(id)arg0 forKeyPath:(id)arg1 error:(*id)arg2 ;
-(BOOL)isEquivalent:(id)arg0 ;
-(id)_init;
-(id)_validateWithConfiguration:(struct HKObjectValidationConfiguration )arg0 ;
-(id)codingsForKeyPath:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)fallbackDisplayString;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif