// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKSIGNEDCLINICALDATARECORD_H
#define HKSIGNEDCLINICALDATARECORD_H

@class NSArray, NSString, NSDate, NSData, NSUUID, NSLocale;
@protocol HKConceptIndexable, NSSecureCoding, NSCopying;


#import "HKMedicalRecord.h"
#import "HKSignedClinicalDataSubject.h"
#import "HKSignedClinicalDataRecordType.h"

@interface HKSignedClinicalDataRecord : HKMedicalRecord <HKConceptIndexable, NSSecureCoding, NSCopying>

 {
    NSArray *_credentialTypes;
    NSString *_issuerIdentifier;
    NSDate *_issuedDate;
    NSDate *_relevantDate;
    NSDate *_expirationDate;
    NSInteger _signatureStatus;
    HKSignedClinicalDataSubject *_subject;
    NSArray *_items;
    NSData *_dataValue;
}


@property (readonly) NSUUID *UUID;
@property (readonly, copy, nonatomic) NSString *country;
@property (readonly, copy) NSArray *credentialTypes;
@property (readonly, copy) NSData *dataValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSDate *expirationDate;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSDate *issuedDate;
@property (readonly, copy) NSString *issuerIdentifier;
@property (readonly, copy) NSArray *items;
@property (readonly, copy, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSInteger recordCategoryType;
@property (readonly, copy, nonatomic) NSString *recordIssuerDisplayName;
@property (readonly, copy, nonatomic) NSString *recordItemsDisplayName;
@property (readonly, copy, nonatomic) NSString *recordTypeDisplayName;
@property (readonly, copy) NSDate *relevantDate;
@property (readonly) NSInteger signatureStatus;
@property (readonly, copy) HKSignedClinicalDataRecordType *signedClinicalDataRecordType;
@property (readonly, copy) HKSignedClinicalDataSubject *subject;
@property (readonly) Class superclass;


+(BOOL)_isConcreteObjectClass;
+(BOOL)supportsEquivalence;
+(BOOL)supportsSecureCoding;
+(id)_newSignedClinicalDataRecordWithType:(id)arg0 note:(id)arg1 enteredInError:(BOOL)arg2 modifiedDate:(id)arg3 originIdentifier:(id)arg4 locale:(id)arg5 extractionVersion:(NSInteger)arg6 device:(id)arg7 metadata:(id)arg8 sortDate:(id)arg9 country:(id)arg10 state:(NSUInteger)arg11 credentialTypes:(id)arg12 issuerIdentifier:(id)arg13 issuedDate:(id)arg14 relevantDate:(id)arg15 expirationDate:(id)arg16 signatureStatus:(NSInteger)arg17 subject:(id)arg18 items:(id)arg19 dataValue:(id)arg20 config:(id)arg21 ;
+(id)cachedConceptRelationshipKeyPaths;
+(id)indexableConceptKeyPaths;
+(id)signedClinicalDataRecordWithType:(id)arg0 note:(id)arg1 enteredInError:(BOOL)arg2 modifiedDate:(id)arg3 originIdentifier:(id)arg4 locale:(id)arg5 extractionVersion:(NSInteger)arg6 device:(id)arg7 metadata:(id)arg8 country:(id)arg9 state:(NSUInteger)arg10 credentialTypes:(id)arg11 issuerIdentifier:(id)arg12 issuedDate:(id)arg13 relevantDate:(id)arg14 expirationDate:(id)arg15 signatureStatus:(NSInteger)arg16 subject:(id)arg17 items:(id)arg18 dataValue:(id)arg19 ;
+(id)signedClinicalDataRecordWithType:(id)arg0 note:(id)arg1 enteredInError:(BOOL)arg2 modifiedDate:(id)arg3 originIdentifier:(id)arg4 locale:(id)arg5 extractionVersion:(NSInteger)arg6 device:(id)arg7 metadata:(id)arg8 sortDate:(id)arg9 country:(id)arg10 state:(NSUInteger)arg11 credentialTypes:(id)arg12 issuerIdentifier:(id)arg13 issuedDate:(id)arg14 relevantDate:(id)arg15 expirationDate:(id)arg16 signatureStatus:(NSInteger)arg17 subject:(id)arg18 items:(id)arg19 dataValue:(id)arg20 ;
-(BOOL)applyConcepts:(id)arg0 forKeyPath:(id)arg1 error:(*id)arg2 ;
-(BOOL)isEquivalent:(id)arg0 ;
-(id)_validateWithConfiguration:(struct HKObjectValidationConfiguration )arg0 ;
-(id)codingsForKeyPath:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif