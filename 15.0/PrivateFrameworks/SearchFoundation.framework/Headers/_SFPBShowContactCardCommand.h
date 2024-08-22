// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFPBSHOWCONTACTCARDCOMMAND_H
#define _SFPBSHOWCONTACTCARDCOMMAND_H

@class PBCodable, NSString, NSData;
@protocol _SFPBShowContactCardCommand, NSSecureCoding;



@interface _SFPBShowContactCardCommand : PBCodable <_SFPBShowContactCardCommand, NSSecureCoding>



@property (copy, nonatomic) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isSuggestedContact; // ivar: _isSuggestedContact
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif