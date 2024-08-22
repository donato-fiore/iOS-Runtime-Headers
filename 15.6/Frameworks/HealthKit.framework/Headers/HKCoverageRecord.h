// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKCOVERAGERECORD_H
#define HKCOVERAGERECORD_H

@class NSString, NSArray, NSUUID, NSLocale;
@protocol HKConceptIndexable, NSSecureCoding, NSCopying;


#import "HKMedicalRecord.h"
#import "HKMedicalCoding.h"
#import "HKMedicalCodingCollection.h"
#import "HKMedicalDate.h"
#import "HKFHIRIdentifierElement.h"
#import "HKConcept.h"
#import "HKCoverageRecordType.h"

@interface HKCoverageRecord : HKMedicalRecord <HKConceptIndexable, NSSecureCoding, NSCopying>

 {
    HKMedicalCoding *_statusCoding;
    HKMedicalCodingCollection *_coverageTypeCodingCollection;
    NSString *_subscriber;
    NSString *_subscriberId;
    NSString *_beneficiary;
    NSString *_policyHolder;
    NSArray *_payor;
    HKMedicalCodingCollection *_relationshipCodingCollection;
    NSArray *_classification;
    NSString *_network;
    HKMedicalDate *_periodStartDate;
    HKMedicalDate *_periodEndDate;
    HKFHIRIdentifierElement *_subscriberIdentifier;
    HKFHIRIdentifierElement *_beneficiaryIdentifier;
    HKConcept *_status;
    HKConcept *_coverageType;
    HKConcept *_relationship;
}


@property (readonly) NSUUID *UUID;
@property (readonly, copy) NSString *beneficiary;
@property (readonly, copy) HKFHIRIdentifierElement *beneficiaryIdentifier;
@property (readonly, copy) NSArray *classification;
@property (readonly, copy, nonatomic) NSString *country;
@property (readonly, copy) HKCoverageRecordType *coverageRecordType;
@property (readonly, copy) HKConcept *coverageType;
@property (readonly, copy) HKMedicalCodingCollection *coverageTypeCodingCollection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSLocale *locale;
@property (readonly, copy) NSString *network;
@property (readonly, copy) NSArray *payor;
@property (readonly, copy) HKMedicalDate *periodEndDate;
@property (readonly, copy) HKMedicalDate *periodStartDate;
@property (readonly, copy) NSString *policyHolder;
@property (readonly, nonatomic) NSInteger recordCategoryType;
@property (readonly, copy) HKConcept *relationship;
@property (readonly, copy) HKMedicalCodingCollection *relationshipCodingCollection;
@property (readonly, copy) HKConcept *status;
@property (readonly, copy) HKMedicalCoding *statusCoding;
@property (readonly, copy) NSString *subscriber;
@property (readonly, copy) NSString *subscriberId;
@property (readonly, copy) HKFHIRIdentifierElement *subscriberIdentifier;
@property (readonly) Class superclass;


+(BOOL)_isConcreteObjectClass;
+(BOOL)supportsEquivalence;
+(BOOL)supportsSecureCoding;
+(id)_newCoverageRecordWithType:(id)arg0 note:(id)arg1 enteredInError:(BOOL)arg2 modifiedDate:(id)arg3 originIdentifier:(id)arg4 locale:(id)arg5 extractionVersion:(NSInteger)arg6 device:(id)arg7 metadata:(id)arg8 sortDate:(id)arg9 country:(id)arg10 state:(NSUInteger)arg11 statusCoding:(id)arg12 coverageTypeCodingCollection:(id)arg13 subscriber:(id)arg14 subscriberId:(id)arg15 beneficiary:(id)arg16 policyHolder:(id)arg17 payor:(id)arg18 relationshipCodingCollection:(id)arg19 classification:(id)arg20 network:(id)arg21 periodStartDate:(id)arg22 periodEndDate:(id)arg23 subscriberIdentifier:(id)arg24 beneficiaryIdentifier:(id)arg25 config:(id)arg26 ;
+(id)cachedConceptRelationshipKeyPaths;
+(id)coverageRecordWithType:(id)arg0 note:(id)arg1 enteredInError:(BOOL)arg2 modifiedDate:(id)arg3 originIdentifier:(id)arg4 locale:(id)arg5 extractionVersion:(NSInteger)arg6 device:(id)arg7 metadata:(id)arg8 country:(id)arg9 state:(NSUInteger)arg10 statusCoding:(id)arg11 coverageTypeCodingCollection:(id)arg12 subscriber:(id)arg13 subscriberId:(id)arg14 beneficiary:(id)arg15 policyHolder:(id)arg16 payor:(id)arg17 relationshipCodingCollection:(id)arg18 classification:(id)arg19 network:(id)arg20 periodStartDate:(id)arg21 periodEndDate:(id)arg22 subscriberIdentifier:(id)arg23 beneficiaryIdentifier:(id)arg24 ;
+(id)coverageRecordWithType:(id)arg0 note:(id)arg1 enteredInError:(BOOL)arg2 modifiedDate:(id)arg3 originIdentifier:(id)arg4 locale:(id)arg5 extractionVersion:(NSInteger)arg6 device:(id)arg7 metadata:(id)arg8 sortDate:(id)arg9 country:(id)arg10 state:(NSUInteger)arg11 statusCoding:(id)arg12 coverageTypeCodingCollection:(id)arg13 subscriber:(id)arg14 subscriberId:(id)arg15 beneficiary:(id)arg16 policyHolder:(id)arg17 payor:(id)arg18 relationshipCodingCollection:(id)arg19 classification:(id)arg20 network:(id)arg21 periodStartDate:(id)arg22 periodEndDate:(id)arg23 subscriberIdentifier:(id)arg24 beneficiaryIdentifier:(id)arg25 ;
+(id)defaultDisplayString;
+(id)indexableConceptKeyPaths;
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