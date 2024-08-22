// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKORGANDONATIONREGISTRANT_H
#define HKORGANDONATIONREGISTRANT_H

@class NSMutableDictionary, NSString, NSNumber;
@protocol HKSimpleDataEntryItemDelegate, NSCopying, NSSecureCoding, HKOrganDonationRegistrantDelegate;

#import <Foundation/Foundation.h>


@interface HKOrganDonationRegistrant : NSObject <HKSimpleDataEntryItemDelegate, NSCopying, NSSecureCoding>

 {
    NSMutableDictionary *_dataEntryItems;
}


@property (retain, nonatomic) NSString *address1; // ivar: _address1
@property (retain, nonatomic) NSString *address2; // ivar: _address2
@property (readonly, nonatomic) NSNumber *age;
@property (retain, nonatomic) NSString *city; // ivar: _city
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HKOrganDonationRegistrantDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *dob; // ivar: _dob
@property (retain, nonatomic) NSString *email; // ivar: _email
@property (retain, nonatomic) NSString *firstname; // ivar: _firstname
@property (readonly, nonatomic) BOOL hasEdits; // ivar: _hasEdits
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *last4SSN; // ivar: _last4SSN
@property (retain, nonatomic) NSString *lastname; // ivar: _lastname
@property (retain, nonatomic) NSString *middlename; // ivar: _middlename
@property (retain, nonatomic) NSString *sex; // ivar: _sex
@property (retain, nonatomic) NSString *state; // ivar: _state
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *zip; // ivar: _zip


+(BOOL)_isNumericStringValid:(id)arg0 withLength:(NSInteger)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)_importNumberFormatter;
+(id)convertLocalizedNumericStringToLatin:(id)arg0 withNumberFormatter:(id)arg1 ;
+(id)exportDateFormatter;
+(id)organDonationRegistrantWithDemographicsInformation:(id)arg0 ;
+(id)organDonationRegistrantWithJSONDictionary:(id)arg0 ;
+(id)ssnNumberFormatter;
+(void)_loadStateInformationIfNeeded;
-(BOOL)isFieldValid:(NSInteger)arg0 ;
-(BOOL)isRegistrantValid;
-(NSUInteger)_placeHolderTypeForField:(NSInteger)arg0 ;
-(id)_createDateOfBirthEntryItem;
-(id)_todayBirthdayDateComponents;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataEntryItemForRegistrantField:(NSInteger)arg0 ;
-(id)dataEntryItemsValidOnly:(BOOL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)jsonDictionaryRepresentation;
-(void)_addDataEntryItemIntoArray:(id)arg0 validOnly:(BOOL)arg1 forField:(NSInteger)arg2 ;
-(void)dataEntryItemDidUpdateValue:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif