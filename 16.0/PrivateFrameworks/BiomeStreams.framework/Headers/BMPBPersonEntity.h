// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMPBPERSONENTITY_H
#define BMPBPERSONENTITY_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;



@interface BMPBPersonEntity : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *addresses; // ivar: _addresses
@property (retain, nonatomic) NSMutableArray *attributes; // ivar: _attributes
@property (retain, nonatomic) NSString *contactId; // ivar: _contactId
@property (retain, nonatomic) NSString *customId; // ivar: _customId
@property (retain, nonatomic) NSMutableArray *emailAddresses; // ivar: _emailAddresses
@property (readonly, nonatomic) BOOL hasContactId;
@property (readonly, nonatomic) BOOL hasCustomId;
@property (retain, nonatomic) NSMutableArray *names; // ivar: _names
@property (retain, nonatomic) NSMutableArray *phoneNumbers; // ivar: _phoneNumbers
@property (retain, nonatomic) NSMutableArray *socialMediaHandles; // ivar: _socialMediaHandles


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)addressesAtIndex:(NSUInteger)arg0 ;
-(id)attributesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)emailAddressesAtIndex:(NSUInteger)arg0 ;
-(id)namesAtIndex:(NSUInteger)arg0 ;
-(id)phoneNumbersAtIndex:(NSUInteger)arg0 ;
-(id)socialMediaHandlesAtIndex:(NSUInteger)arg0 ;
-(void)addAddresses:(id)arg0 ;
-(void)addAttributes:(id)arg0 ;
-(void)addEmailAddresses:(id)arg0 ;
-(void)addNames:(id)arg0 ;
-(void)addPhoneNumbers:(id)arg0 ;
-(void)addSocialMediaHandles:(id)arg0 ;
-(void)clearAddresses;
-(void)clearAttributes;
-(void)clearEmailAddresses;
-(void)clearNames;
-(void)clearPhoneNumbers;
-(void)clearSocialMediaHandles;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif