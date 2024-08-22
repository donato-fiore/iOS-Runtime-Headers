// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKSIGNEDCLINICALDATADETAILDATAPROVIDER_H
#define HKSIGNEDCLINICALDATADETAILDATAPROVIDER_H

@class NSMutableDictionary, NSArray, HKSignedClinicalDataRecord;

#import <Foundation/Foundation.h>


@interface HKSignedClinicalDataDetailDataProvider : NSObject

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
-(id)initWithSignedRecord:(id)arg0 medicalRecords:(id)arg1 ;
-(id)issuedItem;
-(id)maritalStatusItem;
-(id)nameItem;
-(id)phoneNumbersItem;
-(id)raceItem;
-(id)recordItemWithMedicalRecord:(id)arg0 ;
-(id)sourceItem;
-(id)statusItem;
-(id)statusItemWithMedicalRecord:(id)arg0 ;
-(id)valueItemWithTestResult:(id)arg0 ;
-(void)createDisplayItems;
-(void)createPersonalInfoItems;
-(void)createRecordSections;
-(void)createVerificationItems;


@end


#endif