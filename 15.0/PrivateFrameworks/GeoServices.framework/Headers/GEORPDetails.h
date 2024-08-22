// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEORPDETAILS_H
#define GEORPDETAILS_H

@class PBCodable, PBDataReader, NSString, NSMutableArray;
@protocol NSCopying;


#import "GEOMapRegion.h"
#import "GEORPUpdatedLabel.h"

@interface GEORPDetails : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    GEOMapRegion *_displayRegion;
    GEORPUpdatedLabel *_label;
    NSString *_localizedDescription;
    NSString *_localizedTitle;
    NSMutableArray *_places;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _directionsType;
    int _displayStyle;
    int _mapType;
    ? _flags;
}


@property (nonatomic) int directionsType;
@property (retain, nonatomic) GEOMapRegion *displayRegion;
@property (nonatomic) int displayStyle;
@property (nonatomic) BOOL hasDirectionsType;
@property (readonly, nonatomic) BOOL hasDisplayRegion;
@property (nonatomic) BOOL hasDisplayStyle;
@property (readonly, nonatomic) BOOL hasLabel;
@property (readonly, nonatomic) BOOL hasLocalizedDescription;
@property (readonly, nonatomic) BOOL hasLocalizedTitle;
@property (nonatomic) BOOL hasMapType;
@property (retain, nonatomic) GEORPUpdatedLabel *label;
@property (retain, nonatomic) NSString *localizedDescription;
@property (retain, nonatomic) NSString *localizedTitle;
@property (nonatomic) int mapType;
@property (retain, nonatomic) NSMutableArray *places;


+(BOOL)isValid:(id)arg0 ;
+(Class)placeType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)directionsTypeAsString:(int)arg0 ;
-(id)displayStyleAsString:(int)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)mapTypeAsString:(int)arg0 ;
-(id)placeAtIndex:(NSUInteger)arg0 ;
-(int)StringAsDirectionsType:(id)arg0 ;
-(int)StringAsDisplayStyle:(id)arg0 ;
-(int)StringAsMapType:(id)arg0 ;
-(void)addPlace:(id)arg0 ;
-(void)clearPlaces;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif