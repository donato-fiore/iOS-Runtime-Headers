// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCODABLESIGNEDCLINICALDATASUBJECT_H
#define HDCODABLESIGNEDCLINICALDATASUBJECT_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "HDCodableMedicalDate.h"

@interface HDCodableSignedClinicalDataSubject : PBCodable <NSCopying>



@property (retain, nonatomic) HDCodableMedicalDate *birthDate; // ivar: _birthDate
@property (retain, nonatomic) NSMutableArray *emailAddresses; // ivar: _emailAddresses
@property (retain, nonatomic) NSString *fullName; // ivar: _fullName
@property (retain, nonatomic) NSString *gender; // ivar: _gender
@property (readonly, nonatomic) BOOL hasBirthDate;
@property (readonly, nonatomic) BOOL hasFullName;
@property (readonly, nonatomic) BOOL hasGender;
@property (retain, nonatomic) NSMutableArray *phoneNumbers; // ivar: _phoneNumbers


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)emailAddressesAtIndex:(NSUInteger)arg0 ;
-(id)phoneNumbersAtIndex:(NSUInteger)arg0 ;
-(void)addEmailAddresses:(id)arg0 ;
-(void)addPhoneNumbers:(id)arg0 ;
-(void)clearEmailAddresses;
-(void)clearPhoneNumbers;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif