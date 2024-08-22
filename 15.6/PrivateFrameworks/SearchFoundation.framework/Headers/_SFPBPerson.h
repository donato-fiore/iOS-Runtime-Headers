// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFPBPERSON_H
#define _SFPBPERSON_H

@class PBCodable, NSString, NSArray, NSData;
@protocol _SFPBPerson, NSSecureCoding;



@interface _SFPBPerson : PBCodable <_SFPBPerson, NSSecureCoding>



@property (copy, nonatomic) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (copy, nonatomic) NSArray *emailAddresses; // ivar: _emailAddresses
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *personIdentifier; // ivar: _personIdentifier
@property (copy, nonatomic) NSArray *phoneNumbers; // ivar: _phoneNumbers
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)emailAddressesAtIndex:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)phoneNumbersAtIndex:(NSUInteger)arg0 ;
-(void)addEmailAddresses:(id)arg0 ;
-(void)addPhoneNumbers:(id)arg0 ;
-(void)clearEmailAddresses;
-(void)clearPhoneNumbers;
-(void)writeTo:(id)arg0 ;


@end


#endif