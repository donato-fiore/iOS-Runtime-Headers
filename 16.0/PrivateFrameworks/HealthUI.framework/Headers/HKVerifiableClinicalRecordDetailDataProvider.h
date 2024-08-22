// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKVERIFIABLECLINICALRECORDDETAILDATAPROVIDER_H
#define HKVERIFIABLECLINICALRECORDDETAILDATAPROVIDER_H

@class NSMutableDictionary, NSArray, HKSignedClinicalDataRecord;

#import <Foundation/Foundation.h>


@interface HKVerifiableClinicalRecordDetailDataProvider : NSObject

@property (retain, nonatomic) NSMutableDictionary *displayItems; // ivar: _displayItems
@property (retain, nonatomic) NSArray *medicalRecords; // ivar: _medicalRecords
@property (retain, nonatomic) HKSignedClinicalDataRecord *record; // ivar: _record
@property (retain, nonatomic) NSMutableDictionary *sectionFooters; // ivar: _sectionFooters
@property (retain, nonatomic) NSMutableDictionary *sectionHeaders; // ivar: _sectionHeaders
@property (nonatomic) NSInteger sectionIndex; // ivar: _sectionIndex


-(NSInteger)numberOfRowsForSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(id)addressesItem;
-(id)birthSexItem;
-(id)birthdayItem;
-(id)displayItemForSection:(NSInteger)arg0 row:(NSInteger)arg1 ;
-(id)emailAddressesItem;
-(id)ethnicityItem;
-(id)expiresItem;
-(id)footerForSection:(NSInteger)arg0 ;
-(id)genderItem;
-(id)headerForSection:(NSInteger)arg0 ;
-(id)identifiersItem;
-(id)initWithSignedRecord:(id)arg0 medicalRecords:(id)arg1 ;
-(id)issuedItem;
-(id)maritalStatusItem;
-(id)nameItem;
-(id)phoneNumbersItem;
-(id)raceItem;
-(id)sourceItem;
-(id)statusItem;
-(void)createDisplayItems;
-(void)createPersonalInfoItems;
-(void)createRecordSections;
-(void)createVerificationItems;


@end


#endif