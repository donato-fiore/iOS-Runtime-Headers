// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKMEDICALIDDATA_H
#define _HKMEDICALIDDATA_H

@class NSString, NSDate, NSArray, NSDateComponents, NSNumber, NSData;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "HKQuantity.h"

@interface _HKMedicalIDData : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *allergyInfo; // ivar: _allergyInfo
@property (retain, nonatomic) NSDate *allergyInfoModifiedDate; // ivar: _allergyInfoModifiedDate
@property (retain, nonatomic) NSDate *birthdate; // ivar: _birthdate
@property (nonatomic) NSInteger bloodType; // ivar: _bloodType
@property (retain, nonatomic) NSDate *bloodTypeModifiedDate; // ivar: _bloodTypeModifiedDate
@property (copy, nonatomic) NSArray *clinicalContacts; // ivar: _clinicalContacts
@property (retain, nonatomic) NSDate *clinicalContactsModifiedDate; // ivar: _clinicalContactsModifiedDate
@property (retain, nonatomic) NSDate *dateSaved;
@property (copy, nonatomic) NSArray *emergencyContacts; // ivar: _emergencyContacts
@property (retain, nonatomic) NSDate *emergencyContactsModifiedDate; // ivar: _emergencyContactsModifiedDate
@property (retain, nonatomic) NSDate *gmtBirthdate; // ivar: _gmtBirthdate
@property (copy, nonatomic) NSDateComponents *gregorianBirthday;
@property (retain, nonatomic) NSDate *gregorianBirthdayModifiedDate; // ivar: _gregorianBirthdayModifiedDate
@property (retain, nonatomic) HKQuantity *height; // ivar: _height
@property (retain, nonatomic) NSDate *heightModifiedDate; // ivar: _heightModifiedDate
@property (nonatomic) BOOL isDisabled; // ivar: _isDisabled
@property (retain, nonatomic) NSDate *isDisabledModifiedDate; // ivar: _isDisabledModifiedDate
@property (retain, nonatomic) NSNumber *isOrganDonor; // ivar: _isOrganDonor
@property (retain, nonatomic) NSDate *isOrganDonorModifiedDate; // ivar: _isOrganDonorModifiedDate
@property (retain, nonatomic) NSDate *legacyDateSaved; // ivar: _legacyDateSaved
@property (copy, nonatomic) NSString *medicalConditions; // ivar: _medicalConditions
@property (retain, nonatomic) NSDate *medicalConditionsModifiedDate; // ivar: _medicalConditionsModifiedDate
@property (copy, nonatomic) NSString *medicalNotes; // ivar: _medicalNotes
@property (retain, nonatomic) NSDate *medicalNotesModifiedDate; // ivar: _medicalNotesModifiedDate
@property (copy, nonatomic) NSString *medicationInfo; // ivar: _medicationInfo
@property (retain, nonatomic) NSDate *medicationInfoModifiedDate; // ivar: _medicationInfoModifiedDate
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSDate *nameModifiedDate; // ivar: _nameModifiedDate
@property (copy, nonatomic) NSData *pictureData; // ivar: _pictureData
@property (retain, nonatomic) NSDate *pictureDataModifiedDate; // ivar: _pictureDataModifiedDate
@property (copy, nonatomic) NSString *primaryLanguageCode; // ivar: _primaryLanguageCode
@property (retain, nonatomic) NSDate *primaryLanguageCodeModifiedDate; // ivar: _primaryLanguageCodeModifiedDate
@property (nonatomic) NSInteger schemaVersion; // ivar: _schemaVersion
@property (nonatomic) BOOL shareDuringEmergency; // ivar: _shareDuringEmergency
@property (retain, nonatomic) NSDate *shareDuringEmergencyModifiedDate; // ivar: _shareDuringEmergencyModifiedDate
@property (retain, nonatomic) HKQuantity *weight; // ivar: _weight
@property (retain, nonatomic) NSDate *weightModifiedDate; // ivar: _weightModifiedDate


+(BOOL)supportsSecureCoding;
-(BOOL)hasAnyData;
-(BOOL)hasAnyModificationDate;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSyncedData:(id)arg0 ;
-(id)_gregorianUtcCalendar;
-(id)consolidatedSOSContactsWithSOSContactsManager:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)merge:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setModificationDatesForUpdatedFieldsWithMedicalIDData:(id)arg0 ;
-(void)setModificationDatesToCurrentDate;


@end


#endif