// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBCONTACTVALUE_H
#define _INPBCONTACTVALUE_H

@class PBCodable, NSArray, NSString;
@protocol _INPBContactValue, NSSecureCoding, NSCopying;


#import "_INPBContactHandle.h"
#import "_INPBImageValue.h"
#import "_INPBValueMetadata.h"

@interface _INPBContactValue : PBCodable <_INPBContactValue, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSArray *aliases; // ivar: _aliases
@property (readonly, nonatomic) NSUInteger aliasesCount;
@property (retain, nonatomic) _INPBContactHandle *contactHandle; // ivar: _contactHandle
@property (copy, nonatomic) NSString *customIdentifier; // ivar: _customIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *firstName; // ivar: _firstName
@property (copy, nonatomic) NSString *fullName; // ivar: _fullName
@property (copy, nonatomic) NSString *handle; // ivar: _handle
@property (readonly, nonatomic) BOOL hasContactHandle;
@property (readonly, nonatomic) BOOL hasCustomIdentifier;
@property (readonly, nonatomic) BOOL hasFirstName;
@property (readonly, nonatomic) BOOL hasFullName;
@property (readonly, nonatomic) BOOL hasHandle;
@property (readonly, nonatomic) BOOL hasImage;
@property (nonatomic) BOOL hasIsContactSuggestion;
@property (nonatomic) BOOL hasIsMe;
@property (readonly, nonatomic) BOOL hasLastName;
@property (readonly, nonatomic) BOOL hasMiddleName;
@property (readonly, nonatomic) BOOL hasNamePrefix;
@property (readonly, nonatomic) BOOL hasNameSuffix;
@property (readonly, nonatomic) BOOL hasNickName;
@property (readonly, nonatomic) BOOL hasPhonemeData;
@property (readonly, nonatomic) BOOL hasPhoneticFirstName;
@property (readonly, nonatomic) BOOL hasPhoneticLastName;
@property (readonly, nonatomic) BOOL hasPhoneticMiddleName;
@property (readonly, nonatomic) BOOL hasPhoneticNamePrefix;
@property (readonly, nonatomic) BOOL hasPhoneticNameSuffix;
@property (readonly, nonatomic) BOOL hasRelationship;
@property (nonatomic) BOOL hasSearchProvider;
@property (nonatomic) BOOL hasSuggestionType;
@property (readonly, nonatomic) BOOL hasValueMetadata;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBImageValue *image; // ivar: _image
@property (nonatomic) BOOL isContactSuggestion; // ivar: _isContactSuggestion
@property (nonatomic) BOOL isMe; // ivar: _isMe
@property (copy, nonatomic) NSString *lastName; // ivar: _lastName
@property (copy, nonatomic) NSString *middleName; // ivar: _middleName
@property (copy, nonatomic) NSString *namePrefix; // ivar: _namePrefix
@property (copy, nonatomic) NSString *nameSuffix; // ivar: _nameSuffix
@property (copy, nonatomic) NSString *nickName; // ivar: _nickName
@property (copy, nonatomic) NSString *phonemeData; // ivar: _phonemeData
@property (copy, nonatomic) NSString *phoneticFirstName; // ivar: _phoneticFirstName
@property (copy, nonatomic) NSString *phoneticLastName; // ivar: _phoneticLastName
@property (copy, nonatomic) NSString *phoneticMiddleName; // ivar: _phoneticMiddleName
@property (copy, nonatomic) NSString *phoneticNamePrefix; // ivar: _phoneticNamePrefix
@property (copy, nonatomic) NSString *phoneticNameSuffix; // ivar: _phoneticNameSuffix
@property (copy, nonatomic) NSString *relationship; // ivar: _relationship
@property (nonatomic) int searchProvider; // ivar: _searchProvider
@property (nonatomic) int suggestionType; // ivar: _suggestionType
@property (readonly) Class superclass;
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata; // ivar: _valueMetadata


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)aliasesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)searchProviderAsString:(int)arg0 ;
-(id)suggestionTypeAsString:(int)arg0 ;
-(int)StringAsSearchProvider:(id)arg0 ;
-(int)StringAsSuggestionType:(id)arg0 ;
-(void)addAliases:(id)arg0 ;
-(void)clearAliases;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif