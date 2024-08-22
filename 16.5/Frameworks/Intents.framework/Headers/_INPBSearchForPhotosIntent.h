// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBSEARCHFORPHOTOSINTENT_H
#define _INPBSEARCHFORPHOTOSINTENT_H

@class PBCodable, NSString;
@protocol _INPBSearchForPhotosIntent, NSSecureCoding, NSCopying;


#import "_INPBActivityList.h"
#import "_INPBString.h"
#import "_INPBDateTimeRange.h"
#import "_INPBEventList.h"
#import "_INPBGeographicalFeatureList.h"
#import "_INPBIntentMetadata.h"
#import "_INPBLocation.h"
#import "_INPBContactList.h"
#import "_INPBPlaceList.h"
#import "_INPBStringList.h"

@interface _INPBSearchForPhotosIntent : PBCodable <_INPBSearchForPhotosIntent, NSSecureCoding, NSCopying>

 {
    ? _excludedAttributes;
    ? _includedAttributes;
    ? _has;
}


@property (retain, nonatomic) _INPBActivityList *activities; // ivar: _activities
@property (retain, nonatomic) _INPBString *albumName; // ivar: _albumName
@property (retain, nonatomic) _INPBDateTimeRange *dateCreated; // ivar: _dateCreated
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _INPBEventList *events; // ivar: _events
@property (readonly, nonatomic) *int excludedAttributes;
@property (readonly, nonatomic) NSUInteger excludedAttributesCount;
@property (retain, nonatomic) _INPBGeographicalFeatureList *geographicalFeatures; // ivar: _geographicalFeatures
@property (readonly, nonatomic) BOOL hasActivities;
@property (readonly, nonatomic) BOOL hasAlbumName;
@property (readonly, nonatomic) BOOL hasDateCreated;
@property (readonly, nonatomic) BOOL hasEvents;
@property (readonly, nonatomic) BOOL hasGeographicalFeatures;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly, nonatomic) BOOL hasLocationCreated;
@property (readonly, nonatomic) BOOL hasMemoryName;
@property (readonly, nonatomic) BOOL hasPeopleInPhoto;
@property (readonly, nonatomic) BOOL hasPlaces;
@property (readonly, nonatomic) BOOL hasSearchTerm;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *int includedAttributes;
@property (readonly, nonatomic) NSUInteger includedAttributesCount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (retain, nonatomic) _INPBLocation *locationCreated; // ivar: _locationCreated
@property (retain, nonatomic) _INPBString *memoryName; // ivar: _memoryName
@property (retain, nonatomic) _INPBContactList *peopleInPhoto; // ivar: _peopleInPhoto
@property (retain, nonatomic) _INPBPlaceList *places; // ivar: _places
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