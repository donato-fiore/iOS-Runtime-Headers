// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEORPDISPLAYDETAILS_H
#define GEORPDISPLAYDETAILS_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray;
@protocol NSCopying;


#import "GEOLocalizedString.h"
#import "GEOMapRegion.h"
#import "GEOTextLink.h"

@interface GEORPDisplayDetails : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOLocalizedString *_body;
    GEOMapRegion *_displayRegion;
    GEOTextLink *_outreachLink;
    NSMutableArray *_places;
    GEOLocalizedString *_title;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _displayStyle;
    int _mapType;
    ? _flags;
}


@property (retain, nonatomic) GEOLocalizedString *body;
@property (retain, nonatomic) GEOMapRegion *displayRegion;
@property (nonatomic) int displayStyle;
@property (readonly, nonatomic) BOOL hasBody;
@property (readonly, nonatomic) BOOL hasDisplayRegion;
@property (nonatomic) BOOL hasDisplayStyle;
@property (nonatomic) BOOL hasMapType;
@property (readonly, nonatomic) BOOL hasOutreachLink;
@property (readonly, nonatomic) BOOL hasTitle;
@property (nonatomic) int mapType;
@property (retain, nonatomic) GEOTextLink *outreachLink;
@property (retain, nonatomic) NSMutableArray *places;
@property (retain, nonatomic) GEOLocalizedString *title;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(Class)placeType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)displayStyleAsString:(int)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)mapTypeAsString:(int)arg0 ;
-(id)placeAtIndex:(NSUInteger)arg0 ;
-(int)StringAsDisplayStyle:(id)arg0 ;
-(int)StringAsMapType:(id)arg0 ;
-(void)addPlace:(id)arg0 ;
-(void)clearPlaces;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif