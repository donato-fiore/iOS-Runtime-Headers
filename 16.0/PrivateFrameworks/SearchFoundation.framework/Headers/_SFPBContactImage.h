// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFPBCONTACTIMAGE_H
#define _SFPBCONTACTIMAGE_H

@class PBCodable, NSString, NSArray, NSData;
@protocol _SFPBContactImage, NSSecureCoding;



@interface _SFPBContactImage : PBCodable <_SFPBContactImage, NSSecureCoding>



@property (copy, nonatomic) NSString *appIconBadgeBundleIdentifier; // ivar: _appIconBadgeBundleIdentifier
@property (copy, nonatomic) NSArray *contactIdentifiers; // ivar: _contactIdentifiers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic) BOOL threeDTouchEnabled; // ivar: _threeDTouchEnabled


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)contactIdentifiersAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)addContactIdentifiers:(id)arg0 ;
-(void)clearContactIdentifiers;
-(void)writeTo:(id)arg0 ;


@end


#endif