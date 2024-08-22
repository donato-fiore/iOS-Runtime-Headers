// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOPBTRANSITLINE_H
#define GEOPBTRANSITLINE_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString;
@protocol GEOTransitNamedItem, NSCopying;


#import "GEOPBTransitArtwork.h"
#import "GEOPBTransitLineDisplayHints.h"
#import "GEOStyleAttributes.h"

@interface GEOPBTransitLine : PBCodable <GEOTransitNamedItem, NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    *GEOPBTransitTimeRange _operatingHours;
    NSUInteger _operatingHoursCount;
    NSUInteger _operatingHoursSpace;
    GEOPBTransitArtwork *_alternateArtwork;
    GEOPBTransitArtwork *_artwork;
    GEOPBTransitLineDisplayHints *_displayHints;
    GEOPBTransitArtwork *_headerArtwork;
    NSString *_lineColor;
    GEOPBTransitArtwork *_modeArtwork;
    NSUInteger _muid;
    NSString *_nameDisplayString;
    GEOStyleAttributes *_styleAttributes;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _guidanceSnappingType;
    unsigned int _lineIndex;
    int _placeDisplayStyle;
    int _preferredDepartureTimeStyle;
    unsigned int _systemIndex;
    int _transitType;
    ? _flags;
}


@property (retain, nonatomic) GEOPBTransitArtwork *alternateArtwork;
@property (retain, nonatomic) GEOPBTransitArtwork *artwork;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) GEOPBTransitLineDisplayHints *displayHints;
@property (nonatomic) int guidanceSnappingType;
@property (readonly, nonatomic) BOOL hasAlternateArtwork;
@property (readonly, nonatomic) BOOL hasArtwork;
@property (readonly, nonatomic) BOOL hasDisplayHints;
@property (nonatomic) BOOL hasGuidanceSnappingType;
@property (readonly, nonatomic) BOOL hasHeaderArtwork;
@property (readonly, nonatomic) BOOL hasLineColor;
@property (nonatomic) BOOL hasLineIndex;
@property (readonly, nonatomic) BOOL hasModeArtwork;
@property (nonatomic) BOOL hasMuid;
@property (nonatomic) BOOL hasMuid;
@property (readonly, nonatomic) BOOL hasNameDisplayString;
@property (nonatomic) BOOL hasPlaceDisplayStyle;
@property (nonatomic) BOOL hasPreferredDepartureTimeStyle;
@property (readonly, nonatomic) BOOL hasStyleAttributes;
@property (nonatomic) BOOL hasSystemIndex;
@property (nonatomic) BOOL hasTransitType;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) GEOPBTransitArtwork *headerArtwork;
@property (retain, nonatomic) NSString *lineColor;
@property (nonatomic) unsigned int lineIndex;
@property (retain, nonatomic) GEOPBTransitArtwork *modeArtwork;
@property (nonatomic) NSUInteger muid;
@property (nonatomic) NSUInteger muid;
@property (retain, nonatomic) NSString *nameDisplayString;
@property (readonly, nonatomic) *GEOPBTransitTimeRange operatingHours;
@property (readonly, nonatomic) NSUInteger operatingHoursCount;
@property (nonatomic) int placeDisplayStyle;
@property (nonatomic) int preferredDepartureTimeStyle;
@property (retain, nonatomic) GEOStyleAttributes *styleAttributes;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int systemIndex;
@property (nonatomic) int transitType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)bestName;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)geoTransitLineWithSystem:(id)arg0 locationHint:(struct ? )arg1 ;
-(id)guidanceSnappingTypeAsString:(int)arg0 ;
-(id)identifierWithLocationHint:(struct ? )arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)placeDisplayStyleAsString:(int)arg0 ;
-(id)preferredDepartureTimeStyleAsString:(int)arg0 ;
-(int)StringAsGuidanceSnappingType:(id)arg0 ;
-(int)StringAsPlaceDisplayStyle:(id)arg0 ;
-(int)StringAsPreferredDepartureTimeStyle:(id)arg0 ;
-(struct GEOPBTransitTimeRange )operatingHoursAtIndex:(NSUInteger)arg0 ;
-(void)addOperatingHours:(struct GEOPBTransitTimeRange )arg0 ;
-(void)clearOperatingHours;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif