// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBMEDIASEARCH_H
#define _INPBMEDIASEARCH_H

@class PBCodable, NSString, NSArray;
@protocol _INPBMediaSearch, NSSecureCoding, NSCopying;


#import "_INPBString.h"
#import "_INPBDateTimeRange.h"

@interface _INPBMediaSearch : PBCodable <_INPBMediaSearch, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBString *albumName; // ivar: _albumName
@property (retain, nonatomic) _INPBString *artistName; // ivar: _artistName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *genreNames; // ivar: _genreNames
@property (readonly, nonatomic) NSUInteger genreNamesCount;
@property (readonly, nonatomic) BOOL hasAlbumName;
@property (readonly, nonatomic) BOOL hasArtistName;
@property (readonly, nonatomic) BOOL hasMediaIdentifier;
@property (readonly, nonatomic) BOOL hasMediaName;
@property (nonatomic) BOOL hasMediaType;
@property (nonatomic) BOOL hasReference;
@property (readonly, nonatomic) BOOL hasReleaseDate;
@property (nonatomic) BOOL hasSortOrder;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBString *mediaIdentifier; // ivar: _mediaIdentifier
@property (retain, nonatomic) _INPBString *mediaName; // ivar: _mediaName
@property (nonatomic) int mediaType; // ivar: _mediaType
@property (copy, nonatomic) NSArray *moodNames; // ivar: _moodNames
@property (readonly, nonatomic) NSUInteger moodNamesCount;
@property (nonatomic) int reference; // ivar: _reference
@property (retain, nonatomic) _INPBDateTimeRange *releaseDate; // ivar: _releaseDate
@property (nonatomic) int sortOrder; // ivar: _sortOrder
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)genreNamesAtIndex:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)mediaTypeAsString:(int)arg0 ;
-(id)moodNamesAtIndex:(NSUInteger)arg0 ;
-(id)referenceAsString:(int)arg0 ;
-(id)sortOrderAsString:(int)arg0 ;
-(int)StringAsMediaType:(id)arg0 ;
-(int)StringAsReference:(id)arg0 ;
-(int)StringAsSortOrder:(id)arg0 ;
-(void)addGenreNames:(id)arg0 ;
-(void)addMoodNames:(id)arg0 ;
-(void)clearGenreNames;
-(void)clearMoodNames;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif