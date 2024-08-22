// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDHEALTHRECORDCLINICALITEM_H
#define HDHEALTHRECORDCLINICALITEM_H

@class NSMutableDictionary, HDFHIRResourceObject, NSString, HKMedicalRecord, NSDictionary, HDOriginalFHIRResourceObject, NSNumber;

#import <Foundation/Foundation.h>

#import "HDHealthRecordClinicalType.h"

@interface HDHealthRecordClinicalItem : NSObject {
    NSMutableDictionary *_medicalRecordProperties;
}


@property (retain, nonatomic) HDFHIRResourceObject *APIResource; // ivar: _APIResource
@property (copy, nonatomic) HDHealthRecordClinicalType *clinicalType; // ivar: _clinicalType
@property (readonly, copy, nonatomic) NSString *country; // ivar: _country
@property (retain, nonatomic) HKMedicalRecord *extractedMedicalRecord; // ivar: _extractedMedicalRecord
@property (readonly, nonatomic) Class medicalRecordClass;
@property (copy, nonatomic) NSDictionary *medicalRecordMetadata; // ivar: _medicalRecordMetadata
@property (readonly, copy, nonatomic) NSDictionary *originalAttributes; // ivar: _originalAttributes
@property (readonly, nonatomic) HDOriginalFHIRResourceObject *representedResource; // ivar: _representedResource
@property (readonly, copy, nonatomic) NSNumber *rulesVersion; // ivar: _rulesVersion
@property (readonly, nonatomic) NSInteger type;


-(id)_medicalRecordPropertyArrayFromKey:(id)arg0 expectedClass:(Class)arg1 error:(*id)arg2 ;
-(id)_medicalRecordPropertyFromKey:(id)arg0 expectedClass:(Class)arg1 error:(*id)arg2 ;
-(id)candidateValueForKeyPath:(id)arg0 error:(*id)arg1 ;
-(id)correspondingClinicalTypeWithError:(*id)arg0 ;
-(id)initWithRepresentedResource:(id)arg0 clinicalType:(id)arg1 rulesVersion:(id)arg2 ;
-(id)medicalRecordPropertyValueForKey:(id)arg0 expectedClass:(Class)arg1 isArray:(BOOL)arg2 error:(*id)arg3 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)assignExtractedMedicalRecord:(id)arg0 ;
-(void)assignMedicalRecordMetadata:(id)arg0 ;
-(void)setMedicalRecordPropertyValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif