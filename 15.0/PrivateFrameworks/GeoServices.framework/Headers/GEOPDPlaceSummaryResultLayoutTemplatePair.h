// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOPDPLACESUMMARYRESULTLAYOUTTEMPLATEPAIR_H
#define GEOPDPLACESUMMARYRESULTLAYOUTTEMPLATEPAIR_H

@class PBCodable, PBDataReader, NSMutableArray, NSArray;
@protocol NSCopying;


#import "GEOPDPlaceSummaryLayoutTemplate.h"

@interface GEOPDPlaceSummaryResultLayoutTemplatePair : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    ? _placeTypes;
    GEOPDPlaceSummaryLayoutTemplate *_layoutTemplate;
    NSMutableArray *_mapsIds;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (readonly, nonatomic) NSArray *geoMapItemPlaceTypes;
@property (readonly, nonatomic) BOOL hasLayoutTemplate;
@property (retain, nonatomic) GEOPDPlaceSummaryLayoutTemplate *layoutTemplate;
@property (readonly, nonatomic) NSArray *mapItemIdentifiers;
@property (retain, nonatomic) NSMutableArray *mapsIds;
@property (readonly, nonatomic) *int placeTypes;
@property (readonly, nonatomic) NSUInteger placeTypesCount;


+(BOOL)isValid:(id)arg0 ;
+(Class)mapsIdType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)mapsIdAtIndex:(NSUInteger)arg0 ;
-(id)placeTypesAsString:(int)arg0 ;
-(int)StringAsPlaceTypes:(id)arg0 ;
-(int)placeTypeAtIndex:(NSUInteger)arg0 ;
-(void)addMapsId:(id)arg0 ;
-(void)addPlaceType:(int)arg0 ;
-(void)clearMapsIds;
-(void)clearPlaceTypes;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif