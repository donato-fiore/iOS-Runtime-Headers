// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBSTARTPHOTOPLAYBACKINTENT_H
#define _INPBSTARTPHOTOPLAYBACKINTENT_H

@class PBCodable, NSString;
@protocol _INPBStartPhotoPlaybackIntent, NSSecureCoding, NSCopying;


#import "_INPBString.h"
#import "_INPBDateTimeRange.h"
#import "_INPBIntentMetadata.h"
#import "_INPBLocation.h"
#import "_INPBContactList.h"
#import "_INPBStringList.h"

@interface _INPBStartPhotoPlaybackIntent : PBCodable <_INPBStartPhotoPlaybackIntent, NSSecureCoding, NSCopying>

 {
    ? _excludedAttributes;
    ? _includedAttributes;
    ? _has;
}


@property (retain, nonatomic) _INPBString *albumName; // ivar: _albumName
@property (retain, nonatomic) _INPBDateTimeRange *dateCreated; // ivar: _dateCreated
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) *int excludedAttributes;
@property (readonly, nonatomic) NSUInteger excludedAttributesCount;
@property (readonly, nonatomic) BOOL hasAlbumName;
@property (readonly, nonatomic) BOOL hasDateCreated;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly, nonatomic) BOOL hasLocationCreated;
@property (readonly, nonatomic) BOOL hasPeopleInPhoto;
@property (readonly, nonatomic) BOOL hasSearchTerm;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *int includedAttributes;
@property (readonly, nonatomic) NSUInteger includedAttributesCount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (retain, nonatomic) _INPBLocation *locationCreated; // ivar: _locationCreated
@property (retain, nonatomic) _INPBContactList *peopleInPhoto; // ivar: _peopleInPhoto
@property (retain, nonatomic) _INPBStringList *searchTerm; // ivar: _searchTerm
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)excludedAttributesAsString:(int)arg0 ;
-(id)includedAttributesAsString:(int)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(int)StringAsExcludedAttributes:(id)arg0 ;
-(int)StringAsIncludedAttributes:(id)arg0 ;
-(int)excludedAttributeAtIndex:(NSUInteger)arg0 ;
-(int)includedAttributeAtIndex:(NSUInteger)arg0 ;
-(void)addExcludedAttribute:(int)arg0 ;
-(void)addIncludedAttribute:(int)arg0 ;
-(void)clearExcludedAttributes;
-(void)clearIncludedAttributes;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif