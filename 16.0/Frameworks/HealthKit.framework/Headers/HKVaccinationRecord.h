// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKVACCINATIONRECORD_H
#define HKVACCINATIONRECORD_H

@class NSArray, NSString, NSUUID, NSLocale;
@protocol HKConceptIndexable, NSSecureCoding, NSCopying;


#import "HKMedicalRecord.h"
#import "HKMedicalDate.h"
#import "HKMedicalCoding.h"
#import "HKConcept.h"
#import "HKVaccinationRecordType.h"

@interface HKVaccinationRecord : HKMedicalRecord <HKConceptIndexable, NSSecureCoding, NSCopying>

 {
    NSArray *_vaccinationCodings;
    HKMedicalDate *_expirationDate;
    NSString *_doseNumber;
    NSString *_doseQuantity;
    NSString *_lotNumber;
    NSString *_performer;
    NSArray *_bodySiteCodings;
    NSString *_reaction;
    BOOL _notGiven;
    HKMedicalDate *_administrationDate;
    HKMedicalCoding *_statusCoding;
    BOOL _patientReported;
    NSArray *_routeCodings;
    NSArray *_reasonsCodings;
    NSArray *_reasonsNotGivenCodings;
    HKConcept *_vaccination;
    HKConcept *_bodySite;
    HKConcept *_status;
    HKConcept *_route;
    NSArray *_reasons;
    NSArray *_reasonsNotGiven;
}


@property (readonly) NSUUID *UUID;
@property (readonly, copy) HKMedicalDate *administrationDate;
@property (readonly, copy) HKConcept *bodySite;
@property (readonly, copy) NSArray *bodySiteCodings;
@property (readonly, copy, nonatomic) NSString *country;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *doseNumber;
@property (readonly, copy) NSString *doseQuantity;
@property (readonly, copy) HKMedicalDate *expirationDate;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSLocale *locale;
@property (readonly, copy) NSString *lotNumber;
@property (readonly) BOOL notGiven;
@property (readonly) BOOL patientReported;
@property (readonly, copy) NSString *performer;
@property (readonly, copy) NSString *reaction;
@property (readonly, copy) NSArray *reasons;
@property (readonly, copy) NSArray *reasonsCodings;
@property (readonly, copy) NSArray *reasonsNotGiven;
@property (readonly, copy) NSArray *reasonsNotGivenCodings;
@property (readonly, nonatomic) NSInteger recordCategoryType;
@property (readonly, copy) HKConcept *route;
@property (readonly, copy) NSArray *routeCodings;
@property (readonly, copy) HKConcept *status;
@property (readonly, copy) HKMedicalCoding *statusCoding;
@property (readonly) Class superclass;
@property (readonly, copy) HKConcept *vaccination;
@property (readonly, copy) NSArray *vaccinationCodings;
@property (readonly, copy) HKVaccinationRecordType *vaccinationRecordType;


+(BOOL)_isConcreteObjectClass;
+(BOOL)groupsByUserDomainConcept;
+(BOOL)supportsEquivalence;
+(BOOL)supportsSecureCoding;
+(id)_newVaccinationRecordWithType:(id)arg0 note:(id)arg1 enteredInError:(BOOL)arg2 modifiedDate:(id)arg3 originIdentifier:(id)arg4 locale:(id)arg5 extractionVersion:(NSInteger)arg6 device:(id)arg7 metadata:(id)arg8 sortDate:(id)arg9 country:(id)arg10 state:(NSUInteger)arg11 vaccinationCodings:(id)arg12 expirationDate:(id)arg13 doseNumber:(id)arg14 doseQuantity:(id)arg15 lotNumber:(id)arg16 performer:(id)arg17 bodySiteCodings:(id)arg18 reaction:(id)arg19 notGiven:(BOOL)arg20 administrationDate:(id)arg21 statusCoding:(id)arg22 patientReported:(BOOL)arg23 routeCodings:(id)arg24 reasonsCodings:(id)arg25 reasonsNotGivenCodings:(id)arg26 config:(id)arg27 ;
+(id)cachedConceptRelationshipKeyPaths;
+(id)defaultDisplayString;
+(id)indexableConceptKeyPaths;
+(id)vaccinationRecordWithType:(id)arg0 note:(id)arg1 enteredInError:(BOOL)arg2 modifiedDate:(id)arg3 originIdentifier:(id)arg4 locale:(id)arg5 extractionVersion:(NSInteger)arg6 device:(id)arg7 metadata:(id)arg8 country:(id)arg9 state:(NSUInteger)arg10 vaccinationCodings:(id)arg11 expirationDate:(id)arg12 doseNumber:(id)arg13 doseQuantity:(id)arg14 lotNumber:(id)arg15 performer:(id)arg16 bodySiteCodings:(id)arg17 reaction:(id)arg18 notGiven:(BOOL)arg19 administrationDate:(id)arg20 statusCoding:(id)arg21 patientReported:(BOOL)arg22 routeCodings:(id)arg23 reasonsCodings:(id)arg24 reasonsNotGivenCodings:(id)arg25 ;
+(id)vaccinationRecordWithType:(id)arg0 note:(id)arg1 enteredInError:(BOOL)arg2 modifiedDate:(id)arg3 originIdentifier:(id)arg4 locale:(id)arg5 extractionVersion:(NSInteger)arg6 device:(id)arg7 metadata:(id)arg8 sortDate:(id)arg9 country:(id)arg10 state:(NSUInteger)arg11 vaccinationCodings:(id)arg12 expirationDate:(id)arg13 doseNumber:(id)arg14 doseQuantity:(id)arg15 lotNumber:(id)arg16 performer:(id)arg17 bodySiteCodings:(id)arg18 reaction:(id)arg19 notGiven:(BOOL)arg20 administrationDate:(id)arg21 statusCoding:(id)arg22 patientReported:(BOOL)arg23 routeCodings:(id)arg24 reasonsCodings:(id)arg25 reasonsNotGivenCodings:(id)arg26 ;
-(BOOL)applyConcepts:(id)arg0 forKeyPath:(id)arg1 error:(*id)arg2 ;
-(BOOL)isEquivalent:(id)arg0 ;
-(id)_validateWithConfiguration:(struct HKObjectValidationConfiguration )arg0 ;
-(id)codingsForKeyPath:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)medicalRecordCodings;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif