// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCODABLEMEDICALIDDATA_H
#define HDCODABLEMEDICALIDDATA_H

@class PBCodable, NSString, NSMutableArray, NSData;
@protocol NSCopying;


#import "HDCodableDateComponents.h"
#import "HDCodableQuantity.h"

@interface HDCodableMedicalIDData : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *allergyInfo; // ivar: _allergyInfo
@property (nonatomic) CGFloat allergyInfoModifiedDate; // ivar: _allergyInfoModifiedDate
@property (nonatomic) int bloodType; // ivar: _bloodType
@property (nonatomic) CGFloat bloodTypeModifiedDate; // ivar: _bloodTypeModifiedDate
@property (retain, nonatomic) NSMutableArray *clinicalContacts; // ivar: _clinicalContacts
@property (nonatomic) CGFloat clinicalContactsModifiedDate; // ivar: _clinicalContactsModifiedDate
@property (nonatomic) CGFloat dateSaved; // ivar: _dateSaved
@property (retain, nonatomic) NSMutableArray *emergencyContacts; // ivar: _emergencyContacts
@property (nonatomic) CGFloat emergencyContactsModifiedDate; // ivar: _emergencyContactsModifiedDate
@property (retain, nonatomic) HDCodableDateComponents *gregorianBirthday; // ivar: _gregorianBirthday
@property (nonatomic) CGFloat gregorianBirthdayModifiedDate; // ivar: _gregorianBirthdayModifiedDate
@property (readonly, nonatomic) BOOL hasAllergyInfo;
@property (nonatomic) BOOL hasAllergyInfoModifiedDate;
@property (nonatomic) BOOL hasBloodType;
@property (nonatomic) BOOL hasBloodTypeModifiedDate;
@property (nonatomic) BOOL hasClinicalContactsModifiedDate;
@property (nonatomic) BOOL hasDateSaved;
@property (nonatomic) BOOL hasEmergencyContactsModifiedDate;
@property (readonly, nonatomic) BOOL hasGregorianBirthday;
@property (nonatomic) BOOL hasGregorianBirthdayModifiedDate;
@property (readonly, nonatomic) BOOL hasHeight;
@property (nonatomic) BOOL hasHeightModifiedDate;
@property (nonatomic) BOOL hasIsDisabled;
@property (nonatomic) BOOL hasIsDisabledModifiedDate;
@property (nonatomic) BOOL hasIsOrganDonor;
@property (nonatomic) BOOL hasIsOrganDonorModifiedDate;
@property (readonly, nonatomic) BOOL hasMedicalConditions;
@property (nonatomic) BOOL hasMedicalConditionsModifiedDate;
@property (readonly, nonatomic) BOOL hasMedicalIDBytes;
@property (readonly, nonatomic) BOOL hasMedicalNotes;
@property (nonatomic) BOOL hasMedicalNotesModifiedDate;
@property (readonly, nonatomic) BOOL hasMedicationInfo;
@property (nonatomic) BOOL hasMedicationInfoModifiedDate;
@property (readonly, nonatomic) BOOL hasName;
@property (nonatomic) BOOL hasNameModifiedDate;
@property (readonly, nonatomic) BOOL hasPictureData;
@property (nonatomic) BOOL hasPictureDataModifiedDate;
@property (readonly, nonatomic) BOOL hasPrimaryLanguageCode;
@property (nonatomic) BOOL hasPrimaryLanguageCodeModifiedDate;
@property (nonatomic) BOOL hasSchemaVersion;
@property (nonatomic) BOOL hasShareDuringEmergency;
@property (nonatomic) BOOL hasShareDuringEmergencyModifiedDate;
@property (readonly, nonatomic) BOOL hasWeight;
@property (nonatomic) BOOL hasWeightModifiedDate;
@property (retain, nonatomic) HDCodableQuantity *height; // ivar: _height
@property (nonatomic) CGFloat heightModifiedDate; // ivar: _heightModifiedDate
@property (nonatomic) BOOL isDisabled; // ivar: _isDisabled
@property (nonatomic) CGFloat isDisabledModifiedDate; // ivar: _isDisabledModifiedDate
@property (nonatomic) NSInteger isOrganDonor; // ivar: _isOrganDonor
@property (nonatomic) CGFloat isOrganDonorModifiedDate; // ivar: _isOrganDonorModifiedDate
@property (retain, nonatomic) NSString *medicalConditions; // ivar: _medicalConditions
@property (nonatomic) CGFloat medicalConditionsModifiedDate; // ivar: _medicalConditionsModifiedDate
@property (retain, nonatomic) NSData *medicalIDBytes; // ivar: _medicalIDBytes
@property (retain, nonatomic) NSString *medicalNotes; // ivar: _medicalNotes
@property (nonatomic) CGFloat medicalNotesModifiedDate; // ivar: _medicalNotesModifiedDate
@property (retain, nonatomic) NSString *medicationInfo; // ivar: _medicationInfo
@property (nonatomic) CGFloat medicationInfoModifiedDate; // ivar: _medicationInfoModifiedDate
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) CGFloat nameModifiedDate; // ivar: _nameModifiedDate
@property (retain, nonatomic) NSData *pictureData; // ivar: _pictureData
@property (nonatomic) CGFloat pictureDataModifiedDate; // ivar: _pictureDataModifiedDate
@property (retain, nonatomic) NSString *primaryLanguageCode; // ivar: _primaryLanguageCode
@property (nonatomic) CGFloat primaryLanguageCodeModifiedDate; // ivar: _primaryLanguageCodeModifiedDate
@property (nonatomic) unsigned int schemaVersion; // ivar: _schemaVersion
@property (nonatomic) BOOL shareDuringEmergency; // ivar: _shareDuringEmergency
@property (nonatomic) CGFloat shareDuringEmergencyModifiedDate; // ivar: _shareDuringEmergencyModifiedDate
@property (retain, nonatomic) HDCodableQuantity *weight; // ivar: _weight
@property (nonatomic) CGFloat weightModifiedDate; // ivar: _weightModifiedDate


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)bloodTypeAsString:(int)arg0 ;
-(id)clinicalContactsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)emergencyContactsAtIndex:(NSUInteger)arg0 ;
-(int)StringAsBloodType:(id)arg0 ;
-(void)addClinicalContacts:(id)arg0 ;
-(void)addEmergencyContacts:(id)arg0 ;
-(void)clearClinicalContacts;
-(void)clearEmergencyContacts;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif